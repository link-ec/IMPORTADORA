# IMPORTADORA

General.- Empresa ya establecida en importacion de productos, interesada en adquirir nuevos clientes via Aplicacion web.
API.- La aplicacion requerida es de tipo formulario donde el cliente escoje el servicio requerido (nombres del servicio provisionales):

S1 = broker_de_container
S2 = bulto
S3 = exportacion

En la pagina principal, se vizualizan la info de la empresa y se exponen los servicios con 3 iconos, una vez entrados a la API el potencial cliente debe rellenar formularios animados y con actualizacion automatica de las opciones, haciendo asi que todo el proceso de recoleccion de datos sea en una sola pagina.


######broker_de_container#####

  NCONTENEDORES = numero contenedores
  
   CASO1 = 1, <1
    AREA = calculada por lado1 * lado2 * altura
      { animacion para el calculo --> AREA }
    FECHA_CLIENTE = fecha establecida por el cliente
      { cotejar con FECHAS_DISPONIBLES_PROVIDERS, !limites_fecha,  --> FECHA }
    FECHA_DISPONIBLES_PROVIDERS = fechas establecidas por los providers
      { animacion mostrando las fechas, limite carga ecc }
    OFERTA = oferta propuesta por el cliente
      {  }
    ORIGEN = Origen [database]
      { verificar area de cobertura }
    DESTINO = Destino [database]
    var6 = Nececita provider, servicio en origen? = {providers} | {agentes_pais_origen | courriers_pais_origen}
    var7 = Nececita agente ingreso Ecuador? | Entrega domicilio? = {agentes_ecuador | courriers}
    VALOR = Valor mercancia = {valor}
    
  CASO2 = 2, > 2
    var9 = Variable de espacio [COMPLETAR]
      { rango_del_precio generado por contabilidad o definido manualmente }
    FECHAS_DISPONIBLES_PROVIDERS = fechas_disponibles_providers
      { vizualizar animacion con fechas cercanas a la actual, de los espacios dispuestos por los providers }
    FECHA_CLIENTE = fecha_cliente
      { cotejar con fechas_disponibles_providers, !limites_fecha,  --> FECHA}
    OFERTA = Oferta
      { verificar area de cobertura }
    ORIGEN = Origen
      { verificar area de cobertura }
    DESTINO = Destino
    var6 = Nececita provider, servicio en origen?
      {providers} | {agentes_pais_origen | courriers_pais_origen}
    var7 = Nececita agente ingreso Ecuador?, Entrega domicilio?
      {agentes_ecuador | courriers_ecuador}
    VALOR = Valor mercancia = {valor}
  
  Resultado = {AREA, FECHA, OFERTA, ORIGEN, DESTINO, var6, var7, VALOR}
  
  ----------------------------------------------------------------------------------------------------------

En este programa se establece el AREA o espacio usado, FECHA definida por las exigencias explicitas del cliente en una fecha especifica (FECHA_CLIENTE) o en una fecha ofrecida por el provider (FECHA_DISPONIBLES_PROVIDERS), OFERTA definida por el cliente que debe entrar dentro del rango_del_precio definiendo una oferta real, ORIGEN, DESTINO verificando la area de cobertura, si el cliente nececita agentes en origen o destino.

Con estos datos elaborados



