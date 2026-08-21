
/* cocos2d::PUVortexAffector::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall
cocos2d::PUVortexAffector::copyAttributesTo(PUVortexAffector *this,PUAffector *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00e30d00 to 00f30d03 has its CatchHandler @ 00e30e44 */
                    /* try { // try from 00e30d04 to 00f30df3 has its CatchHandler @ 00e30c8c */
  PUAffector::copyAttributesTo((PUAffector *)this,param_1);
  uVar2 = *(undefined8 *)(this + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(this + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  uVar2 = *(undefined8 *)(this + 0xac);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(this + 0xb4);
  *(undefined8 *)(param_1 + 0xac) = uVar2;
  uVar2 = (**(code **)(**(long **)(this + 200) + 0x20))();
  plVar1 = *(long **)(param_1 + 200);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    *(undefined8 *)(param_1 + 200) = 0;
  }
  *(undefined8 *)(param_1 + 200) = uVar2;
  return;
}

