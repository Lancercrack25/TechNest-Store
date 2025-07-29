
<center>

<h1 style="color: #2ecc71; font-size: 38px;"> Proyecto TechNest-Store </h1>

<img width="790" height="434" alt="proyecto_technest" src="https://github.com/user-attachments/assets/d9f307a7-5f58-4054-a328-a211e69b8e90" /> 
<p>Tech Nest Store  es un proyecto escolar que representa una tienda online inspirada en plataformas como DDTech, enfocada en la venta de productos de hardware tales como piezas de pc. 
Este sistema permite al administrador gestionar el catálogo de productos, inventario, precios y pedidos.</p>

---

## 📦 1. Clase `Producto`

Representa los artículos disponibles en el sistema.

- **Atributos:** `idProducto`, `nombre`, `precio`, `existencias`, `garantía`
- **Métodos:** gestión de garantía, obtención de información del producto

---

## 🗃️ 2. Clase `Inventario`

Administra una colección de productos.

### Métodos principales:
- `agregarProducto()`
- `eliminarProducto()`
- `inventariar()`
- `mostrarInventario()`

---

## 📄 3. Clase `Pedido` (y derivadas)

Clase base para gestionar pedidos.

- **Atributos:** `idPedido`, `cliente`, `total`
- **Método virtual:** `mostrarDetalles()` (soporte para polimorfismo)

### Clases derivadas:
- `PedidoEspecial`: añade `motivo` y `producto`
- `PedidoExclusivo`: añade `beneficios`

---

## 🚚 4. Clase `Proveedor`

Gestiona la información de los proveedores.

- **Atributos:** `nombre`, `dirección`, `teléfono`, `correo`
- **Funciones especiales:**
  - Sobrecarga de operadores (para ordenar o buscar)
  - Método estático para formatear fechas

---

## 🔐 5. Clase `Administrador`

Representa a un usuario con privilegios administrativos.

### Métodos principales:
- Verificación de contraseñas
- Obtener nombre del administrador

---

## 🧮 6. Clase `Funciones`

Clase utilitaria que agrupa operaciones generales del sistema.

### Funciones destacadas:
- `submenuProveedores()`
- `agregarProveedor()`
- `eliminarProveedor()`
- `agregarProducto()`
- Otras relacionadas con el inventario y pedidos
  

<h1 style="color: #2ecc71; font-size: 18px;">▶️ Cómo compilar y ejecutar</h1>

Para poder ejecutar este proyecto deberas tener instalado algun editor de codigo tal como visualStudio code o codeblocks

-Abre el archivo del proyecto (.cbp) en Code::Blocks.

-Compila el proyecto (Build > Build).

-Ejecuta desde Code::Blocks o desde el ejecutable generado (Run > Run)

Nota: este proyecto escolar aplica los principios de la Programación Orientada a Objetos como herencia, encapsulamiento, polimorfismo y abstraccion


