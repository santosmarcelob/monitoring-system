=> Também disponível em [português](#sistema de monitoramento de plantações).

# Plant Monitoring System

### Table of contents:

- [Overview](###technologies)
- [Technologies](###technologies)
- [Results](###results)
- [Conclusion](###Conclusion)

### Overview

This is a plant monitoring system, which measures luminosity, humidity, temperature, and UV index.

It is based on the Zigbee specification, using <a href="https://en.wikipedia.org/wiki/XBee" target="_blank">Xbee</a> modules for wireless communication.

You can see a <a href="https://www.youtube.com/watch?v=JFwLpmhN5HI" target="_blank">video</a> of it working or go directly to the full <a href="https://github.com/santosmarcelob/monitoring-system/blob/master/Sistema%20de%20Monitoramento%20de%20Planta%C3%A7%C3%B5es-ZigBee-Arduino-LabVIEW%20-%20Marcelo%20Santos.pdf" target="_blank">scientific article</a> (in Portuguese).

#### Technologies

:white_check_mark: <a href="https://en.wikipedia.org/wiki/Arduino" target="_blank">Arduino</a>
	Arduino was used to handle the communication between the sensors and Xbee modules

:white_check_mark: <a href="https://en.wikipedia.org/wiki/C%2B%2B" target="_blank">C++</a>
	C++ was used to program the Arduino board.

:white_check_mark: <a href="https://en.wikipedia.org/wiki/LabVIEW" target="_blank">LabVIEW</a>
	LabVIEW was used to collect data from the Xbee receptor, prepare it and present it in the User Interface.

:white_check_mark: <a href="https://en.wikipedia.org/wiki/Zigbee" target="_blank">Zigbee</a>
	Zigbee is the wireless transmission technology, it makes data transmission over wireless simple and has many applications. It was used in this project to transmit the data collected from the sensors in the Arduino board (with Xbee transmitter module) to LabVIEW (with Xbee receiver).

### Results

As a result of this project, it was expected a good quality communication via Zigbee in different environments and situations, as well as correct readings, transmission and analysis of the data collected from the sensors, and its presentation in LabVIEW.

After the implementation, the data was collected during 3 days with two-hour interval from each measurement, starting at 6 AM and ending at 10 PM.

It was possible to analyze the variation of luminosity, temperature and UV index.
Below are the results collected:

| Graph: Average of measurements                         | Table: Measurements                                    |
| ------------------------------------------------------ | ------------------------------------------------------ |
| ![Average of measurements](.\img\gra_med_sensores.JPG) | ![Average of measurements](.\img\tab_med_sensores.JPG) |

Following are the results of the humidity tests:

| Graph: Humidity levels                         | Table: Humidity levels                         |
| ---------------------------------------------- | ---------------------------------------------- |
| ![Average of measurements](.\img\gra_umid.JPG) | ![Average of measurements](.\img\tab_umid.JPG) |

### Conclusion

A fully working prototype was developed with the described tools, assuring efficiency and security using Zigbee technology in the agricultural sector.

It was proven the countless benefits of using these technologies in this sector, that is extremely important to the economy.

![Average of measurements](.\img\ui_1.JPG)

![Average of measurements](.\img\ui_2.JPG)

----------

# Sistema de Monitoramento de Plantações

### Índice:

- [Visão geral](###visão geral)
- [Tecnologias](###tecnologias)
- [Resultados](###resultados)
- [Conclusão](###conclusão)

### Visão geral

Este é um sistema de monitoramento de plantações, que faz a medição de luminosidade, umidade, temperatura e índice UV.

É baseado na especificação Zigbee, utilizando módulos <a href="https://pt.wikipedia.org/wiki/XBee" target="_blank">Xbee</a> para a comunicação wireless.

Você pode ver um <a href="https://www.youtube.com/watch?v=JFwLpmhN5HI" target="_blank">video</a> do funcionamento, ou ir diretamente ao <a href="https://github.com/santosmarcelob/monitoring-system/blob/master/Sistema%20de%20Monitoramento%20de%20Planta%C3%A7%C3%B5es-ZigBee-Arduino-LabVIEW%20-%20Marcelo%20Santos.pdf" target="_blank">artigo científico</a> completo.

#### Tecnologias

:white_check_mark: <a href="https://pt.wikipedia.org/wiki/Arduino" target="_blank">Arduino</a>
	O Arduino foi utilizado para lidar com a comunicação entre os sensores e os módulos Xbee.

:white_check_mark: <a href="https://pt.wikipedia.org/wiki/C%2B%2B" target="_blank">C++</a>
	O C++ foi utilizado para programar a placa Arduino.

:white_check_mark: <a href="https://pt.wikipedia.org/wiki/LabVIEW" target="_blank">LabVIEW</a>
	O LabVIEW foi usado para coletar dados do receptor Xbee, prepará-lo e apresentá-lo na interface de usuário.

:white_check_mark: <a href="https://pt.wikipedia.org/wiki/Zigbee" target="_blank">Zigbee</a>
	O Zigbee é a tecnologia de transmissão wireless, ele torna simples a transmissão de dados via wireless e tem muitas aplicações. Foi utilizado neste projeto para transmitir os dados coletados dos sensores na placa arduino (com o Xbee transmissor) para o LabVIEW (com o Xbee receptor).

### Resultados

Como resultado deste projeto, era esperado uma comunicação de boa qualidade via Zigbee em diferentes ambientes e situações, assim como leituras corretas, transmissão e análise dos dados coletados pelos sensores, e sua apresentação no LabVIEW.

Após a implementação, os dados foram coletados durante 3 dias com um intervalo de duas horas em cada medição, iniciando as 6 AM e finalizando as 10 PM.

Foi possível analizar a variação de luminosidade, temperatura e índice UV.
Abaixo os resultados coletados:

| Gráfico: Média das leituras                            | Tabela: Medições                                       |
| ------------------------------------------------------ | ------------------------------------------------------ |
| ![Average of measurements](.\img\gra_med_sensores.JPG) | ![Average of measurements](.\img\tab_med_sensores.JPG) |

A seguir os resultados dos testes de umidade:

| Gráfico: Níveis de umidade                     | Tabela: Níveis de umidade                      |
| ---------------------------------------------- | ---------------------------------------------- |
| ![Average of measurements](.\img\gra_umid.JPG) | ![Average of measurements](.\img\tab_umid.JPG) |

### Conclusão

Um protótipo foi desenvolvido com as ferramentas descritas, garantindo eficiência e segurança na utilização da tecnologias Zigbee no setor agrícola.

Assim, foram demonstrados os inúmeros benefícios da utlização destas tecnologias no setor, que é extremamente importante para a economia.

![Average of measurements](.\img\ui_1.JPG)

![Average of measurements](.\img\ui_2.JPG)