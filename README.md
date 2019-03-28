# Composteur-arduino

## Logiciels
| Arduino | Fritzing |
| :-----: | :------: |
| ![](/icone/Arduino.png) | ![](/icone/Fritzing.png) |

## Composants
| Arduino | SeeedStudio |
| :-----: | :------: |
| ![](/icone/Arduino.png) | ![](/icone/Seeed_Studio.png) |

### Arduino
| Arduino Uno |
| :-------------: |
| ![](/composants/Arduino%20Uno.jpg) |

### Shield
| Shield Grove base |
| :-------------: |
| ![](/composants/SeeedStudio/Shield_Grove_Base.png) |

### SeeedStudio
| SeeedStudio | SeeedStudio | SeeedStudio| SeeedStudio|
| :-------------: | :-------------: | :-------------: | :-------------: |
| Bouton | DHT11 | LCD RGB | Moisture |
| ![](/composants/SeeedStudio/Grove_Button.jpg) | ![](/composants/SeeedStudio/Grove_DHT11.jpg) | ![](/composants/SeeedStudio/Grove_LCD_RGB_Backlight.jpg) | ![](/composants/SeeedStudio/Grove_Moisture_sensor.jpg) |
| Relai | Multi Gaz | Cable x6| Module 4|
| ![](/composants/SeeedStudio/Grove_Grove_Relay.jpg) | ![](/composants/SeeedStudio/Grove_Multi_sensor1.png) | ![](/composants/SeeedStudio/Grove_Grove_Cable.jpg) | ![](/composants/SeeedStudio/Grove_) |

## Branchement
| Fritzing |
| :-------------: |
| ![](/icone/Fritzing.png) |

![](/fritzing/Untitled_Sketch.png)

### Shield
* NC

### Analogique
* A0: Humidite Sol
* A1: NC
* A2: NC
* A3: NC
* A4: NC
* A5: NC

### Digital
* D0 : RX rs232 non utilise
* D1 : TX rs232 non utilise
* D2 : DHT11
* D3 : Relais Moteur
* D4 : Bouton
* D5 : NC
* D6 : NC
* D7 : NC
* D8 : NC
* D9 : NC
* D10 : NC
* D11 : NC
* D12 : NC
* D13 : NC 

### I2C
* SDA : LCD RGB ; Multigaz (optionelle)
* SCL : LCD RGB ; Multigaz (optionelle)

### Alimentation
* Vin : NC
* GND : NC
* 5V : NC
* 3.3V : NC
* Vref : NC

### Divers 
* Ioref : NC
* Reset : NC