
/* cocos2d::GLProgramCache::getInstance() */

Ref * cocos2d::GLProgramCache::getInstance(void)

{
  Ref *this;
  
  if (DAT_01792658 == (Ref *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd2378 with catch @ 00fd2394
                        */
    this = operator_new(0x50,(nothrow_t *)&std::nothrow);
    if (this != (Ref *)0x0) {
      Ref::Ref(this);
      *(undefined8 *)(this + 0x30) = 0;
      *(undefined8 *)(this + 0x28) = 0;
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined ***)this = &PTR__GLProgramCache_01723e20;
      *(undefined4 *)(this + 0x48) = 0x3f800000;
    }
    DAT_01792658 = this;
                    /* try { // try from 00fd23dc to 010d23df has its CatchHandler @ 00fd23f0 */
    init((GLProgramCache *)this);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd23dc with catch @ 00fd23f0
                        */
  return DAT_01792658;
}

