
/* cocos2d::Physics3DCollider::setFriction(float) */

void __thiscall cocos2d::Physics3DCollider::setFriction(Physics3DCollider *this,float param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xe0);
  *(float *)(lVar1 + 0xf4) = param_1;
  *(int *)(lVar1 + 0x120) = *(int *)(lVar1 + 0x120) + 1;
  return;
}

