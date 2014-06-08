arduino_keyboard_tric
=====================
## 概要
Arduinoで定型文自動入力キーボードを作成していたずらをするプロジェクト

## 動作環境
制作物は標準のキーボードとして扱われるのでOSを問わず使用可能。
ArduinoではUSBコントローラーのFW書き換えが可能な機種に限り動作します。
- Arduino UNO R3
- dfu-programmer 0.6.2

の環境での動作を確認。

Arduino内の[標準USBシリアルコントローラー(リンク先はUNO用のArduino-usbserial-uno.hex)](https://github.com/arduino/Arduino/blob/master/hardware/arduino/firmwares/atmegaxxu2/arduino-usbserial/Arduino-usbserial-uno.hex)を
[Arduino-keyboard-0.3.hex](http://hunt.net.nz/users/darran/weblog/b3029/Arduino_UNO_Keyboard_HID_version_03.html)
で書き換える必要があります。

## 備考
標準ではtweet4Mac関数が書き込まれている。内容は
1. 英数キーを発行し、日本語IMEを切る
2. Ctrl+SpaceキーでSpotlightを開く
3. Spotlightで"yor"と入力しYoruFukurouを選択、Enterで起動
4. Cmd(Windows)+nで投稿フォームにフォーカス
5. かなキーで日本語IMEを起動
6. "unnko", Enter, Enterで「うんこ」と投稿する。
