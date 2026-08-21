
/* cocostudio::WidgetReader::getInstance() */

WidgetReader * cocostudio::WidgetReader::getInstance(void)

{
  WidgetReader *this;
  
  this = DAT_01786e40;
  if ((DAT_01786e40 == (WidgetReader *)0x0) &&
     (this = operator_new(0x110,(nothrow_t *)&std::nothrow), this != (WidgetReader *)0x0)) {
    WidgetReader(this);
  }
  DAT_01786e40 = this;
  return DAT_01786e40;
}

