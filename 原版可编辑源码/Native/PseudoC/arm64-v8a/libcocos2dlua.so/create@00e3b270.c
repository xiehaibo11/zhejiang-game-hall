
/* cocos2d::PUOnPositionObserver::create() */

PUObserver * cocos2d::PUOnPositionObserver::create(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  PUObserver *this;
  
                    /* try { // try from 00e3b284 to 00f3b28f has its CatchHandler @ 00e3b34c */
  this = operator_new(0xc0,(nothrow_t *)&std::nothrow);
  if (this != (PUObserver *)0x0) {
    PUObserver::PUObserver(this);
                    /* try { // try from 00e3b2a0 to 00f3b2a3 has its CatchHandler @ 00e3b324 */
                    /* try { // try from 00e3b2ac to 00f3b2b7 has its CatchHandler @ 00e3b34c */
    *(undefined2 *)(this + 0xb0) = 0;
    this[0xb2] = (PUObserver)0x0;
    uVar2 = DAT_01788fc4;
    uVar1 = DEFAULT_POSITION_THRESHOLD;
                    /* try { // try from 00e3b2b8 to 00f3b38b has its CatchHandler @ 00e3b1a8 */
    *(undefined4 *)(this + 0xb4) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined ***)this = &PTR__PUObserver_016f1638;
    *(undefined8 *)(this + 0xa4) = uVar1;
    *(undefined4 *)(this + 0xac) = uVar2;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

