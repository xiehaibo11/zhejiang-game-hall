
/* cocostudio::LoadingBarReader::createInstance() */

WidgetReader * cocostudio::LoadingBarReader::createInstance(void)

{
  WidgetReader *this;
  
  this = DAT_01786570;
  if ((DAT_01786570 == (WidgetReader *)0x0) &&
     (this = operator_new(0x110,(nothrow_t *)&std::nothrow), this != (WidgetReader *)0x0)) {
    WidgetReader::WidgetReader(this);
    *(undefined ***)this = &PTR__LoadingBarReader_016cafe0;
    *(undefined ***)(this + 0x30) = &PTR__LoadingBarReader_016cb060;
    *(undefined ***)(this + 0x28) = &PTR__LoadingBarReader_016cb030;
  }
  DAT_01786570 = this;
  return DAT_01786570;
}

