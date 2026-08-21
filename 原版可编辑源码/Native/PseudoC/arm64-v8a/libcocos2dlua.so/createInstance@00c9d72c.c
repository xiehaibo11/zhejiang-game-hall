
/* cocostudio::TextReader::createInstance() */

WidgetReader * cocostudio::TextReader::createInstance(void)

{
  WidgetReader *this;
  
  this = DAT_017868f0;
  if ((DAT_017868f0 == (WidgetReader *)0x0) &&
     (this = operator_new(0x110,(nothrow_t *)&std::nothrow), this != (WidgetReader *)0x0)) {
    WidgetReader::WidgetReader(this);
    *(undefined ***)this = &PTR__TextReader_016cb590;
    *(undefined ***)(this + 0x30) = &PTR__TextReader_016cb610;
    *(undefined ***)(this + 0x28) = &PTR__TextReader_016cb5e0;
  }
  DAT_017868f0 = this;
  return DAT_017868f0;
}

