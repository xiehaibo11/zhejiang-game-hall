
/* cocostudio::ScrollViewReader::createInstance() */

LayoutReader * cocostudio::ScrollViewReader::createInstance(void)

{
  LayoutReader *this;
  
  this = DAT_01786670;
  if ((DAT_01786670 == (LayoutReader *)0x0) &&
     (this = operator_new(0x110,(nothrow_t *)&std::nothrow), this != (LayoutReader *)0x0)) {
    LayoutReader::LayoutReader(this);
    *(undefined ***)this = &PTR__ScrollViewReader_016cb180;
    *(undefined ***)(this + 0x30) = &PTR__ScrollViewReader_016cb200;
    *(undefined ***)(this + 0x28) = &PTR__ScrollViewReader_016cb1d0;
  }
  DAT_01786670 = this;
  return DAT_01786670;
}

