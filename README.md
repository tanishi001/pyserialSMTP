# 入退室管理
入退室管理システムをPython3とArduinoを使って実装する。 \
Ardinoから距離センサーの値をPythonで書いたプログラム側にシリアル通信で伝える。 \
指定の時間内なら記録のメールを、時間外なら[WORNIG!!!]のメールを予め指定したメールアドレスに送信する。
## Arduino
analogsensor.ino
## Python 3
pyserialGmail.py


＃コード内の”は外し’は残す \
＃from_gmailaddressとto_gmailaddressは送り元と送り先のアドレスに置き換える

|Code  | replace   |
|---|---|
| "from_gmailaddress"  | example@gmail.com  |

| 'from_gmailaddress'  | 'example@gmail.com'  |
|---|---|