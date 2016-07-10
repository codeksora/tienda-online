<?php
  session_start();
  if(!isset($_SESSION['contador'])) {
    $_SESSION['contador'] = 0;
  }
?>

<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <title>Tienda</title>
    <link rel="stylesheet" href="css/movil.css" media='screen and (min-width: 1px) and (max-width: 800px)'>
    <link rel="stylesheet" href="css/pcmac.css" media='screen and (min-width: 801px) and (max-width: 400px)'>
    <script src="https://code.jquery.com/jquery-3.1.0.min.js"></script>
    <script src="js/codigo.js"></script>
</head>
<body>
    <div id="contenedor">
        <header>
            <a href="index.php"><h1>Tienda</h1></a>

            <h2>Subtítulo de la tienda</h2>
        </header>

        <section>

          <div id="carrito" style="background: rgb(200,200,200); color: black;">
            Carrito
          </div>
          <a href="php/destruir.php"><button type="button" name="button">Vaciar carrito</button></a>
          <a href="confirmar.php"><button type="button" name="button">Confirmar compra</button></a><br>
