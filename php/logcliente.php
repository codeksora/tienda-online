<?php
  $contador = 0;
  $conexion = mysqli_connect("localhost","root","","tienda_online");
  mysqli_set_charset($conexion, "utf8");
  $peticion = "SELECT * FROM clientes WHERE usuario = '" . $_POST['usuario'] . "' AND contrasena = '" . $_POST['contrasena'] . "'";
  $resultado = mysqli_query($conexion, $peticion);
  while ($fila = mysqli_fetch_array($resultado)) {
    $contador++;
    $_SESSION['usuario'] = $fila['id'];
  }

  if($contador > 0) {
    $peticion = "INSERT INTO pedidos VALUES(NULL, ".$_SESSION['usuario'].",'".date('U')."','0')";
    $resultado = mysqli_query($conexion, $peticion);
  } else {
    echo "El usuario no existe";
  }

  mysqli_close($conexion);

?>
