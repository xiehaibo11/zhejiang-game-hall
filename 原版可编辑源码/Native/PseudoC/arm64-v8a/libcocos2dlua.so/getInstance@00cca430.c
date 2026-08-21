
/* TabItemReader::getInstance() */

Ref * TabItemReader::getInstance(void)

{
  Ref *this;
  
  this = _tabItemReaderInstance;
  if ((_tabItemReaderInstance == (Ref *)0x0) &&
     (this = operator_new(0x30,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__TabItemReader_016ce0e8;
    *(undefined ***)(this + 0x28) = &PTR__TabItemReader_016ce120;
  }
  _tabItemReaderInstance = this;
  return _tabItemReaderInstance;
}

