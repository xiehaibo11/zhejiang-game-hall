
/* non-virtual thunk to cocos2d::__CCCallFuncO::~__CCCallFuncO() */

void __thiscall cocos2d::__CCCallFuncO::~__CCCallFuncO(__CCCallFuncO *this)

{
                    /* try { // try from 00edb344 to 00fdb34f has its CatchHandler @ 00edb52c */
  *(undefined ***)(this + -0x28) = &PTR____CCCallFuncO_016f7e10;
                    /* try { // try from 00edb368 to 00fdb377 has its CatchHandler @ 00edb524 */
  *(undefined ***)this = &PTR_clone_016f7e78;
  if (*(Ref **)(this + 0x78) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x78));
  }
                    /* try { // try from 00edb378 to 00fdb393 has its CatchHandler @ 00edb57c */
  CallFunc::~CallFunc((CallFunc *)(this + -0x28));
  return;
}

