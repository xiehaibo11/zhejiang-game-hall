
/* cocos2d::PUScaleVelocityAffector::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall
cocos2d::PUScaleVelocityAffector::copyAttributesTo
          (PUScaleVelocityAffector *this,PUAffector *param_1)

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
  *(PUScaleVelocityAffector *)(param_1 + 0xb9) = this[0xb9];
  *(PUScaleVelocityAffector *)(param_1 + 0xba) = this[0xba];
                    /* catch() { ... } // from try @ 00e2d3e0 with catch @ 00e2d460 */
  return;
}

