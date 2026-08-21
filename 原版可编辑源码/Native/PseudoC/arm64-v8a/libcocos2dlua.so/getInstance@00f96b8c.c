
/* cocos2d::Director::getInstance() */

Director * cocos2d::Director::getInstance(void)

{
  Director *this;
  
  if (DAT_0178fc40 == (Director *)0x0) {
    this = operator_new(0x1e0,(nothrow_t *)&std::nothrow);
    if (this != (Director *)0x0) {
      Director(this);
    }
    DAT_0178fc40 = this;
    init(this);
  }
  return DAT_0178fc40;
}

