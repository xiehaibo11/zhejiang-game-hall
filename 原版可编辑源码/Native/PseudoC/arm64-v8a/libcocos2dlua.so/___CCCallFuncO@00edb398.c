
/* cocos2d::__CCCallFuncO::~__CCCallFuncO() */

void __thiscall cocos2d::__CCCallFuncO::~__CCCallFuncO(__CCCallFuncO *this)

{
                    /* try { // try from 00edb3a0 to 00fdb3c3 has its CatchHandler @ 00edb55c */
  *(undefined ***)this = &PTR____CCCallFuncO_016f7e10;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f7e78;
  if (*(Ref **)(this + 0xa0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xa0));
  }
  CallFunc::~CallFunc((CallFunc *)this);
  operator_delete(this);
  return;
}

