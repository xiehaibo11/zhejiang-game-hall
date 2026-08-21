
/* TabHeaderReader::getInstance() */

Ref * TabHeaderReader::getInstance(void)

{
  Ref *this;
  
  this = _tabheaderReaderInstance;
  if ((_tabheaderReaderInstance == (Ref *)0x0) &&
     (this = operator_new(0x30,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__TabHeaderReader_016ce078;
    *(undefined ***)(this + 0x28) = &PTR__TabHeaderReader_016ce0b0;
  }
  _tabheaderReaderInstance = this;
  return _tabheaderReaderInstance;
}

