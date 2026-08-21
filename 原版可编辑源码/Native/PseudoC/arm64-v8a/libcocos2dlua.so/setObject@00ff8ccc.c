
/* cocos2d::__Array::setObject(cocos2d::Ref*, long) */

void __thiscall cocos2d::__Array::setObject(__Array *this,Ref *param_1,long param_2)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(*(long *)(*(long *)(this + 0x30) + 0x10) + param_2 * 8);
  if (this_00 != param_1) {
    Ref::release(this_00);
                    /* catch() { ... } // from try @ 00ff8b58 with catch @ 00ff8d08 */
                    /* catch() { ... } // from try @ 00ff8b50 with catch @ 00ff8d0c
                       catch() { ... } // from try @ 00ff8b74 with catch @ 00ff8d0c */
    *(Ref **)(*(long *)(*(long *)(this + 0x30) + 0x10) + param_2 * 8) = param_1;
    Ref::retain(param_1);
    return;
  }
  return;
}

