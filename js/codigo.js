$(document).ready(inicio)

function inicio() {
  $(".botoncompra").click(anade);
  $("#carrito").load("php/poncarrito.php");
}

function anade() {
  $("#carrito").load("php/poncarrito.php?p="+$(this).val());
}
