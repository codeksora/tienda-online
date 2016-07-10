$(document).ready(inicio)

function inicio() {
  $(".botoncompra").click(anade)
}

function anade() {
  $("#carrito").load("php/poncarrito.php?p="+$(this).val());
}
