
/* cocostudio::TextFieldReader::createInstance() */

WidgetReader * cocostudio::TextFieldReader::createInstance(void)

{
  WidgetReader *this;
  
  this = DAT_01786870;
  if ((DAT_01786870 == (WidgetReader *)0x0) &&
     (this = operator_new(0x110,(nothrow_t *)&std::nothrow), this != (WidgetReader *)0x0)) {
    WidgetReader::WidgetReader(this);
    *(undefined ***)this = &PTR__TextFieldReader_016cb4c0;
    *(undefined ***)(this + 0x30) = &PTR__TextFieldReader_016cb540;
    *(undefined ***)(this + 0x28) = &PTR__TextFieldReader_016cb510;
  }
  DAT_01786870 = this;
  return DAT_01786870;
}

