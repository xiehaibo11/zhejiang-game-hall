
/* cocostudio::ImageViewReader::createInstance() */

WidgetReader * cocostudio::ImageViewReader::createInstance(void)

{
  WidgetReader *this;
  
  this = DAT_017863f0;
  if ((DAT_017863f0 == (WidgetReader *)0x0) &&
     (this = operator_new(0x110,(nothrow_t *)&std::nothrow), this != (WidgetReader *)0x0)) {
    WidgetReader::WidgetReader(this);
    *(undefined ***)this = &PTR__ImageViewReader_016cad70;
    *(undefined ***)(this + 0x30) = &PTR__ImageViewReader_016cadf0;
    *(undefined ***)(this + 0x28) = &PTR__ImageViewReader_016cadc0;
  }
  DAT_017863f0 = this;
  return DAT_017863f0;
}

