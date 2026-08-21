
/* cocostudio::ListViewReader::createInstance() */

ScrollViewReader * cocostudio::ListViewReader::createInstance(void)

{
  ScrollViewReader *this;
  
  this = DAT_017864f0;
  if ((DAT_017864f0 == (ScrollViewReader *)0x0) &&
     (this = operator_new(0x110,(nothrow_t *)&std::nothrow), this != (ScrollViewReader *)0x0)) {
    ScrollViewReader::ScrollViewReader(this);
    *(undefined ***)this = &PTR__ListViewReader_016caf10;
    *(undefined ***)(this + 0x30) = &PTR__ListViewReader_016caf90;
    *(undefined ***)(this + 0x28) = &PTR__ListViewReader_016caf60;
  }
  DAT_017864f0 = this;
  return DAT_017864f0;
}

