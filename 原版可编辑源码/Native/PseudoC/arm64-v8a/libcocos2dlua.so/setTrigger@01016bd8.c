
/* cocos2d::Physics3DCollider::setTrigger(bool) */

void __thiscall cocos2d::Physics3DCollider::setTrigger(Physics3DCollider *this,bool param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(*(long *)(this + 0xe0) + 0xe0);
  uVar1 = uVar2 | 4;
  if (!param_1) {
    uVar1 = uVar2 & 0xfffffffb;
  }
  *(uint *)(*(long *)(this + 0xe0) + 0xe0) = uVar1;
  return;
}

