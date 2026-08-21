
/* cocos2d::PUScaleAffector::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall
cocos2d::PUScaleAffector::copyAttributesTo(PUScaleAffector *this,PUAffector *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  PUAffector::copyAttributesTo((PUAffector *)this,param_1);
  uVar1 = (**(code **)(**(long **)(this + 0xb0) + 0x20))();
  plVar2 = *(long **)(param_1 + 0xb0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  param_1[0xd0] = (PUAffector)0x1;
  uVar1 = (**(code **)(**(long **)(this + 0xb8) + 0x20))();
  plVar2 = *(long **)(param_1 + 0xb8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  param_1[0xd1] = (PUAffector)0x1;
  uVar1 = (**(code **)(**(long **)(this + 0xc0) + 0x20))();
  plVar2 = *(long **)(param_1 + 0xc0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  param_1[0xd2] = (PUAffector)0x1;
  uVar1 = (**(code **)(**(long **)(this + 200) + 0x20))();
  plVar2 = *(long **)(param_1 + 200);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    *(undefined8 *)(param_1 + 200) = 0;
  }
  *(undefined8 *)(param_1 + 200) = uVar1;
  param_1[0xd3] = (PUAffector)0x1;
  *(PUScaleAffector *)(param_1 + 0xd0) = this[0xd0];
  *(PUScaleAffector *)(param_1 + 0xd1) = this[0xd1];
  *(PUScaleAffector *)(param_1 + 0xd2) = this[0xd2];
  *(PUScaleAffector *)(param_1 + 0xd3) = this[0xd3];
  *(PUScaleAffector *)(param_1 + 0xd5) = this[0xd5];
  return;
}

