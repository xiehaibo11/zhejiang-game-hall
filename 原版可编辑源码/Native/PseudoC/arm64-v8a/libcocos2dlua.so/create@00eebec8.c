
/* cocos2d::Animation::create() */

Ref * cocos2d::Animation::create(void)

{
  Ref *this;
  
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x5c) = 0;
                    /* try { // try from 00eebf04 to 00febf9b has its CatchHandler @ 00eebd68 */
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined ***)this = &PTR__Animation_016fa430;
    *(undefined ***)(this + 0x28) = &PTR_clone_016fa458;
    *(undefined8 *)(this + 0x30) = 0;
    this[0x58] = (Ref)0x0;
  }
  *(undefined4 *)(this + 0x5c) = 1;
  *(undefined4 *)(this + 0x34) = 0;
  Ref::autorelease(this);
  return this;
}

