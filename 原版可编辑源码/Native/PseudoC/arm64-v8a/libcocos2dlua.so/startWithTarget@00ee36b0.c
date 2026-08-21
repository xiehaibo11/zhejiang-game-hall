
/* cocos2d::TintBy::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::TintBy::startWithTarget(TintBy *this,Node *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  if (param_1 != (Node *)0x0) {
    pbVar3 = (byte *)(**(code **)(*(long *)param_1 + 0x4b0))(param_1);
    bVar1 = pbVar3[1];
    bVar2 = pbVar3[2];
    *(ushort *)(this + 0x5c) = (ushort)*pbVar3;
    *(ushort *)(this + 0x5e) = (ushort)bVar1;
    *(ushort *)(this + 0x60) = (ushort)bVar2;
  }
  return;
}

