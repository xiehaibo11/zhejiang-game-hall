
/* cocostudio::PageViewReader::createInstance() */

LayoutReader * cocostudio::PageViewReader::createInstance(void)

{
  LayoutReader *this;
  
  this = DAT_017865f0;
  if ((DAT_017865f0 == (LayoutReader *)0x0) &&
     (this = operator_new(0x110,(nothrow_t *)&std::nothrow), this != (LayoutReader *)0x0)) {
    LayoutReader::LayoutReader(this);
    *(undefined ***)this = &PTR__PageViewReader_016cb0b0;
    *(undefined ***)(this + 0x30) = &PTR__PageViewReader_016cb130;
    *(undefined ***)(this + 0x28) = &PTR__PageViewReader_016cb100;
  }
  DAT_017865f0 = this;
  return DAT_017865f0;
}

