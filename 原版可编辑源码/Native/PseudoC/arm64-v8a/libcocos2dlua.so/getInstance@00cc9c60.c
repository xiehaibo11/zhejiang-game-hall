
/* TabControlReader::getInstance() */

Ref * TabControlReader::getInstance(void)

{
  Ref *this;
  
  this = _tabReaderInstance;
  if ((_tabReaderInstance == (Ref *)0x0) &&
     (this = operator_new(0x30,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__TabControlReader_016ce008;
    *(undefined ***)(this + 0x28) = &PTR__TabControlReader_016ce040;
  }
  _tabReaderInstance = this;
  return _tabReaderInstance;
}

