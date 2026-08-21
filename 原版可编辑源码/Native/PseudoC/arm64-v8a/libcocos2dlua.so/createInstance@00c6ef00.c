
/* cocostudio::ButtonReader::createInstance() */

WidgetReader * cocostudio::ButtonReader::createInstance(void)

{
  WidgetReader *this;
  
  this = DAT_017862f0;
  if ((DAT_017862f0 == (WidgetReader *)0x0) &&
     (this = operator_new(0x110,(nothrow_t *)&std::nothrow), this != (WidgetReader *)0x0)) {
    WidgetReader::WidgetReader(this);
    *(undefined ***)this = &PTR__ButtonReader_016cabc8;
    *(undefined ***)(this + 0x30) = &PTR__ButtonReader_016cac48;
    *(undefined ***)(this + 0x28) = &PTR__ButtonReader_016cac18;
  }
  DAT_017862f0 = this;
  return DAT_017862f0;
}

