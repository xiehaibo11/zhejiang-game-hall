
/* cocostudio::TextBMFontReader::getInstance() */

WidgetReader * cocostudio::TextBMFontReader::getInstance(void)

{
  WidgetReader *this;
  
  this = DAT_017867f0;
  if ((DAT_017867f0 == (WidgetReader *)0x0) &&
     (this = operator_new(0x110,(nothrow_t *)&std::nothrow), this != (WidgetReader *)0x0)) {
    WidgetReader::WidgetReader(this);
    *(undefined ***)this = &PTR__TextBMFontReader_016cb3f0;
    *(undefined ***)(this + 0x30) = &PTR__TextBMFontReader_016cb470;
    *(undefined ***)(this + 0x28) = &PTR__TextBMFontReader_016cb440;
  }
  DAT_017867f0 = this;
  return DAT_017867f0;
}

