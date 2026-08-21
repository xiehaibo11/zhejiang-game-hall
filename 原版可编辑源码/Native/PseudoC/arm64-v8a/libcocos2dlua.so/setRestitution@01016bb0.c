
/* cocos2d::Physics3DCollider::setRestitution(float) */

void __thiscall cocos2d::Physics3DCollider::setRestitution(Physics3DCollider *this,float param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xe0);
  *(float *)(lVar1 + 0xf8) = param_1;
  *(int *)(lVar1 + 0x120) = *(int *)(lVar1 + 0x120) + 1;
  return;
}

