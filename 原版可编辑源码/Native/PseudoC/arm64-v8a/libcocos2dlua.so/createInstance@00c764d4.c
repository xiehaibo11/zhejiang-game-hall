
/* cocostudio::CheckBoxReader::createInstance() */

WidgetReader * cocostudio::CheckBoxReader::createInstance(void)

{
  WidgetReader *this;
  
  this = DAT_01786370;
  if ((DAT_01786370 == (WidgetReader *)0x0) &&
     (this = operator_new(0x110,(nothrow_t *)&std::nothrow), this != (WidgetReader *)0x0)) {
    WidgetReader::WidgetReader(this);
    *(undefined ***)this = &PTR__CheckBoxReader_016cac98;
    *(undefined ***)(this + 0x30) = &PTR__CheckBoxReader_016cad20;
    *(undefined ***)(this + 0x28) = &PTR__CheckBoxReader_016cacf0;
  }
  DAT_01786370 = this;
  return DAT_01786370;
}

