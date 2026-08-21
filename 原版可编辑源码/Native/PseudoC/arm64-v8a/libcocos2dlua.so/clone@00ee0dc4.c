
/* covariant return thunk to cocos2d::JumpBy::clone() const */

long __thiscall cocos2d::JumpBy::clone(JumpBy *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = create(*(float *)(this + 0x24),this + 0x38,*(float *)(this + 0x40),*(int *)(this + 0x44));
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

