
/* covariant return thunk to cocos2d::ActionTween::clone() const */

long __thiscall cocos2d::ActionTween::clone(ActionTween *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = create(*(float *)(this + 0x24),(basic_string *)(this + 0x30),*(float *)(this + 0x48),
                 *(float *)(this + 0x4c));
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

