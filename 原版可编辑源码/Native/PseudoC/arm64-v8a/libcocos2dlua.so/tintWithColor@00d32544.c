
/* cocos2d::MotionStreak3D::tintWithColor(cocos2d::Color3B const&) */

void __thiscall cocos2d::MotionStreak3D::tintWithColor(MotionStreak3D *this,Color3B *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  (**(code **)(*(long *)this + 0x4c0))();
  if ((*(uint *)(this + 0x348) & 0x7fffffff) != 0) {
    uVar3 = 0;
    uVar4 = 0;
    do {
      uVar2 = *(undefined2 *)param_1;
      puVar1 = (undefined2 *)(*(long *)(this + 0x368) + (uVar3 & 0xfffffffc));
      *(Color3B *)(puVar1 + 1) = param_1[2];
      *puVar1 = uVar2;
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 4;
    } while (uVar4 < (uint)(*(int *)(this + 0x348) << 1));
  }
  return;
}

