
/* cocos2d::CSLoader::getInstance() */

CSLoader * cocos2d::CSLoader::getInstance(void)

{
  CSLoader *this;
  
  if (DAT_01786980 == (CSLoader *)0x0) {
    this = operator_new(0xc0,(nothrow_t *)&std::nothrow);
    if (this != (CSLoader *)0x0) {
      CSLoader(this);
    }
    DAT_01786980 = this;
    init(this);
  }
  return DAT_01786980;
}

