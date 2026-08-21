
/* cocostudio::TextAtlasReader::createInstance() */

WidgetReader * cocostudio::TextAtlasReader::createInstance(void)

{
  WidgetReader *this;
  
  this = DAT_01786770;
  if ((DAT_01786770 == (WidgetReader *)0x0) &&
     (this = operator_new(0x110,(nothrow_t *)&std::nothrow), this != (WidgetReader *)0x0)) {
    WidgetReader::WidgetReader(this);
    *(undefined ***)this = &PTR__TextAtlasReader_016cb320;
    *(undefined ***)(this + 0x30) = &PTR__TextAtlasReader_016cb3a0;
    *(undefined ***)(this + 0x28) = &PTR__TextAtlasReader_016cb370;
  }
  DAT_01786770 = this;
  return DAT_01786770;
}

