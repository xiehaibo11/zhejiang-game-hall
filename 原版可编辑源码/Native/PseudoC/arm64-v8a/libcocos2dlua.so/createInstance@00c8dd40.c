
/* cocostudio::SliderReader::createInstance() */

WidgetReader * cocostudio::SliderReader::createInstance(void)

{
  WidgetReader *this;
  
  this = DAT_017866f0;
  if ((DAT_017866f0 == (WidgetReader *)0x0) &&
     (this = operator_new(0x110,(nothrow_t *)&std::nothrow), this != (WidgetReader *)0x0)) {
    WidgetReader::WidgetReader(this);
    *(undefined ***)this = &PTR__SliderReader_016cb250;
    *(undefined ***)(this + 0x30) = &PTR__SliderReader_016cb2d0;
    *(undefined ***)(this + 0x28) = &PTR__SliderReader_016cb2a0;
  }
  DAT_017866f0 = this;
  return DAT_017866f0;
}

