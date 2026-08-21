
/* cocos2d::Physics3DCollider::setRollingFriction(float) */

void __thiscall
cocos2d::Physics3DCollider::setRollingFriction(Physics3DCollider *this,float param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xe0);
  *(float *)(lVar1 + 0xfc) = param_1;
  *(int *)(lVar1 + 0x120) = *(int *)(lVar1 + 0x120) + 1;
  return;
}

