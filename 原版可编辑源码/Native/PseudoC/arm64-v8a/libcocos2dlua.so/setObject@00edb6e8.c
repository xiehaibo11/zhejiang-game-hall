
/* cocos2d::__CCCallFuncO::setObject(cocos2d::Ref*) */

void __thiscall cocos2d::__CCCallFuncO::setObject(__CCCallFuncO *this,Ref *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0xa0);
                    /* catch() { ... } // from try @ 00edb8d4 with catch @ 00edb6fc
                       catch() { ... } // from try @ 00edba14 with catch @ 00edb6fc */
  if (this_00 != param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Ref **)(this + 0xa0) = param_1;
    if (param_1 != (Ref *)0x0) {
      Ref::retain(param_1);
      return;
    }
  }
  return;
}

