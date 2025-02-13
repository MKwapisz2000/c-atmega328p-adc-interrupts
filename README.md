# c-atmega328p-adc-interrupts

**Project Description - English**

This project demonstrates how to handle the Analog-to-Digital Converter (ADC) in an ATmega328P microcontroller using external interrupts. The implementation in C directly accesses registers, without using Arduino libraries. The ADC conversion is triggered by an external interrupt (e.g., pressing a button).

Features:

- Configuration of external interrupts

- Manual ADC initialization

- Reading voltage values from A0 channel upon interrupt trigger

- Using ATmega328P microcontroller in pure C

Hardware Requirements:

- ATmega328P (e.g., Arduino Nano or standalone AVR)

- Button (switch) for generating interrupts

- Analog sensor or potentiometer
  
- LED (connected to a selected microcontroller pin)

- Connecting wires

Usage Instructions:

- Compile the code using an AVR C-compatible environment (e.g., Atmel Studio, PlatformIO, AVR-GCC).

- Upload the program to the microcontroller using an ISP programmer.

- Press the button connected to INT0 to trigger the interrupt and read the ADC value.
  
-  The LED will turn on or off depending on the measured voltage.


----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


**Opis projektu - Polski**

Ten projekt demonstruje sposób obsługi przetwornika analogowo-cyfrowego (ADC) w mikrokontrolerze ATmega328P, przy wykorzystaniu przerwań zewnętrznych. Implementacja w języku C korzysta z bezpośredniego dostępu do rejestrów, bez użycia bibliotek Arduino. ADC jest uruchamiane w momencie wystąpienia przerwania zewnętrznego (np. naciśnięcia przycisku).

Funkcjonalność:

- Konfiguracja przerwań zewnętrznych

- Inicjalizacja ADC w trybie manualnym

- Odczyt wartości napięcia na kanale A0 po wystąpieniu przerwania

- Obsługa mikrokontrolera ATmega328P w czystym C

Wymagania sprzętowe:

- ATmega328P (np. Arduino Nano lub standalone AVR)

- Przycisk (switch) do generowania przerwań

- Czujnik analogowy lub potencjometr
  
- Dioda LED (podłączona do wybranego pinu mikrokontrolera)

- Przewody połączeniowe

Instrukcja użytkowania:

- Skompiluj kod w środowisku obsługującym AVR C (np. Atmel Studio, PlatformIO, AVR-GCC).

- Wgraj program do mikrokontrolera przy użyciu programatora ISP.

- Naciśnij przycisk podłączony do pinu INT0, aby wyzwolić przerwanie i odczytać wartość ADC.
  
- Dioda LED zapali się lub zgaśnie w zależności od odczytanego napięcia.
