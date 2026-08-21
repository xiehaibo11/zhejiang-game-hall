
/* cocos2d::PULineAffector::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall cocos2d::PULineAffector::copyAttributesTo(PULineAffector *this,PUAffector *param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  PUAffector::copyAttributesTo((PUAffector *)this,param_1);
  fVar2 = *(float *)(this + 0xac);
  *(float *)(param_1 + 0xac) = fVar2;
  *(float *)(param_1 + 0xb0) =
       fVar2 * SQRT(*(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40) +
                    *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x44) +
                    *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(this + 0xb4);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(this + 0xbc);
  *(undefined8 *)(param_1 + 0xb4) = uVar1;
                    /* try { // try from 00e2972c to 00f29873 has its CatchHandler @ 00e29444 */
  *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(this + 0xc4);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(this + 0xcc);
  return;
}

