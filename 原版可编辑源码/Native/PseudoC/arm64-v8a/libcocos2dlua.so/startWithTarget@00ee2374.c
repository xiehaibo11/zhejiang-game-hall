
/* cocos2d::ScaleBy::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::ScaleBy::startWithTarget(ScaleBy *this,Node *param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
                    /* try { // try from 00ee2380 to 00fe2387 has its CatchHandler @ 00ee241c */
                    /* try { // try from 00ee2388 to 00fe2437 has its CatchHandler @ 00ee2358 */
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  uVar1 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
  *(undefined4 *)(this + 100) = uVar1;
  uVar1 = (**(code **)(*(long *)param_1 + 0x68))(param_1);
  *(undefined4 *)(this + 0x68) = uVar1;
  fVar2 = (float)(**(code **)(*(long *)param_1 + 0x78))(param_1);
  *(float *)(this + 0x6c) = fVar2;
  fVar3 = (float)*(undefined8 *)(this + 100);
  fVar4 = (float)((ulong)*(undefined8 *)(this + 100) >> 0x20);
  *(ulong *)(this + 0x7c) =
       CONCAT44(fVar4 * (float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20) - fVar4,
                fVar3 * (float)*(undefined8 *)(this + 0x70) - fVar3);
  *(float *)(this + 0x84) = fVar2 * *(float *)(this + 0x78) - fVar2;
  return;
}

