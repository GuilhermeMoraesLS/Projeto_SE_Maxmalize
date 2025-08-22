# Police Argos: Intelligent License Plate Recognition Platform

## Descrição do Projeto
O **Police Argos** é uma plataforma inteligente de reconhecimento de placas de veículos (LPR/ANPR) voltada para **policiais**, que permite identificar veículos irregulares em tempo real usando IoT.  
O sistema consiste em uma câmera instalada no carro que captura placas, processa a imagem e compara com um banco de dados. Caso seja identificado um veículo irregular, o policial é alertado imediatamente.

---

## Requisitos do Projeto

### Funcionais
- Captura de imagens de placas em tempo real, mesmo com movimento do carro.  
- Reconhecimento automático de placas (OCR/ANPR) para diferentes formatos e estilos regionais.  
- Alertas em tempo real ao policial (visual, sonoro ou via app).  
- Consulta a banco de dados de veículos irregulares.  
- Operação em diferentes condições ambientais (baixa luminosidade, ângulos variados, velocidade do veículo).  
- Comunicação via IoT para envio de alertas ou dados.  
- Facilidade de prototipagem e integração no veículo ou mockup.

### Não Funcionais
- Baixo consumo de energia (especialmente ESP32-CAM).  
- Confiabilidade mínima de 80% de acerto na detecção.  
- Robustez do protótipo físico (case 3D ou similar).  
- Custo razoável para protótipo acadêmico.  
- Documentação acadêmica adequada (código, revisão de literatura, referências IEEE).

---

## Especificações Técnicas

| Requisito | Especificação Técnica |
|-----------|---------------------|
| Captura de imagens | Câmera HD (Raspberry Pi Camera ou ESP32-CAM), com suporte para diferentes ângulos. |
| Processamento de imagens / OCR | OpenCV + Tesseract ou YOLO/CNN; pipeline: detecção → segmentação → OCR → verificação. |
| Robustez ambiental | Algoritmos treinados com dataset variado (luminosidade, ângulo, obstruções). |
| Base de dados de veículos irregulares | Local ou cloud, com API REST ou consulta offline rápida. |
| Alertas ao policial | Visual (LED ou tela), sonoro (buzzer) ou notificação em app. |
| Conectividade IoT | Wi-Fi nativo (ESP32 ou Raspberry Pi), protocolo MQTT ou HTTP. |
| Confiabilidade | Threshold mínimo de 80% de confiança antes de disparar alerta. |
| Prototipagem física | Case 3D para câmera e eletrônicos, com abertura para ventilação; suporte ajustável da câmera. |
| Controle térmico (Raspberry Pi) | Dissipador + ventilador para evitar thermal throttling. |
| Facilidade de implementação acadêmica | Código em Python, compatível com laboratório Ibmec. |
| Impressão 3D | Suporte de câmera, case de eletrônicos, mockup de protótipo (opcional). |

---

## Tecnologias e Ferramentas
- **Hardware:** Raspberry Pi / ESP32-CAM, câmera HD, buzzer/LED para alertas.  
- **Software:** Python, OpenCV, Tesseract OCR, OpenALPR (opcional), bibliotecas IoT (MQTT, requests).  
- **Prototipagem:** Cases 3D para câmera e eletrônicos, suportes ajustáveis.  
- **Documentação acadêmica:** Overleaf (IEEE), revisão de literatura.
