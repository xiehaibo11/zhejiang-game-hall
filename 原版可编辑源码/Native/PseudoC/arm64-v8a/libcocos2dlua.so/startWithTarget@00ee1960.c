
/* cocos2d::BezierTo::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::BezierTo::startWithTarget(BezierTo *this,Node *param_1)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  puVar1 = (undefined8 *)(**(code **)(*(long *)param_1 + 0xb0))(param_1);
  uVar3 = *puVar1;
  fVar2 = (float)uVar3;
  fVar4 = (float)((ulong)uVar3 >> 0x20);
                    /* catch() { ... } // from try @ 00ee1948 with catch @ 00ee19b4 */
  *(float *)(this + 0x68) = *(float *)(this + 0x90) - fVar2;
  *(float *)(this + 0x6c) = *(float *)(this + 0x94) - fVar4;
  *(undefined8 *)(this + 0x70) = uVar3;
  *(undefined8 *)(this + 0x78) = uVar3;
  *(ulong *)(this + 0x60) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x88) >> 0x20) - fVar4,
                (float)*(undefined8 *)(this + 0x88) - fVar2);
  *(ulong *)(this + 0x58) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x80) >> 0x20) - fVar4,
                (float)*(undefined8 *)(this + 0x80) - fVar2);
  return;
}

