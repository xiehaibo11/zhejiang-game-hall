
/* cocos2d::GLProgramCache::sharedShaderCache() */

Ref * cocos2d::GLProgramCache::sharedShaderCache(void)

{
  Ref *this;
  
  if (DAT_01792658 == (Ref *)0x0) {
    this = operator_new(0x50,(nothrow_t *)&std::nothrow);
    if (this != (Ref *)0x0) {
      Ref::Ref(this);
                    /* try { // try from 00fd25b8 to 010d25bb has its CatchHandler @ 00fd25d4 */
      *(undefined8 *)(this + 0x30) = 0;
      *(undefined8 *)(this + 0x28) = 0;
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined ***)this = &PTR__GLProgramCache_01723e20;
      *(undefined4 *)(this + 0x48) = 0x3f800000;
    }
    DAT_01792658 = this;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd25b8 with catch @ 00fd25d4
                        */
    init((GLProgramCache *)this);
  }
  return DAT_01792658;
}

