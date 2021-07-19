# IMPORTADORA

General.- Empresa ya establecida en importacion de productos, interesada en adquirir nuevos clientes via Aplicacion web.
API.- La aplicacion requerida es de tipo formulario donde el cliente escoje el servicio requerido (nombres del servicio provisionales):

S1 = broker_de_container
S2 = bulto
S3 = exportacion

En la pagina principal, se vizualizan la info de la empresa y se exponen los servicios con 3 iconos, una vez entrados a la API el potencial cliente debe rellenar formularios animados y con actualizacion automatica de las opciones, haciendo asi que todo el proceso de recoleccion de datos sea en una sola pagina.

La primera pagina de servicio es la de broker_de_container, esta, como funcion primaria permite al cliente saber quales son la fechas que los providers estan transportando carga y quanto espacio disponible existe en los contenedores.
Automaticamente se le da el plazo de entrega en origen (o se ofrece el servicio de agentes_pais_origen), y los gastos de entrada en las aduanas del Ecuador (agentes_ecuador) o si quiere servicio a domicilio (courriers_ecuador). 
Si el cliente quiere transportar en fechas especificas, en todo caso el sistema coteja con las fechas de los providers de la empresa y si no encuentra match, COMPLETAR.
Como resultado el programa nos da {AREA, FECHA, OFERTA, ORIGEN, DESTINO, var6, var7, VALOR}.



