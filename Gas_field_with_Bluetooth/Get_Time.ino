void GetDateTime() {

  DateTime now = rtc.now();
  _day = now.day();
  _month = now.month();
  _year = now.year();
  _hour24 = now.hour();
  _hour12 = now.hour();
  _minute = now.minute();
  _second = now.second();
  _dtw = now.dayOfTheWeek();
  
  if (hr24 < 12) {
    st = "AM";
  }
  else {
    st = "PM";
  }
//  _hour24 = EEPROM.read(2);
}
