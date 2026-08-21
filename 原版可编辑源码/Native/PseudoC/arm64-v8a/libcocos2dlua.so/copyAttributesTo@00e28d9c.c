
/* cocos2d::PUJetAffector::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall cocos2d::PUJetAffector::copyAttributesTo(PUJetAffector *this,PUAffector *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  PUAffector::copyAttributesTo((PUAffector *)this,param_1);
                    /* try { // try from 00e28dbc to 00f28dc3 has its CatchHandler @ 00e293d4 */
  uVar1 = (**(code **)(**(long **)(this + 0xb0) + 0x20))();
  plVar2 = *(long **)(param_1 + 0xb0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  return;
}

