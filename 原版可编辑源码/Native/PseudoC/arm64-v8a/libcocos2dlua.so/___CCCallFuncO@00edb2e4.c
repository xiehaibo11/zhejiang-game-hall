
/* cocos2d::__CCCallFuncO::~__CCCallFuncO() */

void __thiscall cocos2d::__CCCallFuncO::~__CCCallFuncO(__CCCallFuncO *this)

{
                    /* catch() { ... } // from try @ 00edb3f0 with catch @ 00edb2fc
                       catch() { ... } // from try @ 00edb524 with catch @ 00edb2fc */
  *(undefined ***)this = &PTR____CCCallFuncO_016f7e10;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f7e78;
  if (*(Ref **)(this + 0xa0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xa0));
  }
  CallFunc::~CallFunc((CallFunc *)this);
  return;
}

