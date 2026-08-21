
/* cocos2d::PUEmitter::generateAngle(float&) */

void __thiscall cocos2d::PUEmitter::generateAngle(PUEmitter *this,float *param_1)

{
  int iVar1;
  float fVar2;
  
                    /* try { // try from 00e31d28 to 00f31d6f has its CatchHandler @ 00e31d28
                       catch() { ... } // from try @ 00e31d28 with catch @ 00e31d28
                       catch() { ... } // from try @ 00e31dac with catch @ 00e31d28 */
  fVar2 = (float)PUDynamicAttributeHelper::calculate
                           ((PUDynamicAttributeHelper *)(this + 0x194),
                            *(PUDynamicAttribute **)(this + 0xf8),
                            *(float *)(*(long *)(this + 0x28) + 0x440),0.0);
  *param_1 = fVar2 * 0.017453292;
  iVar1 = PUDynamicAttribute::getType(*(PUDynamicAttribute **)(this + 0xf8));
  if (iVar1 == 0) {
    iVar1 = rand();
                    /* try { // try from 00e31d70 to 00f31dab has its CatchHandler @ 00e31db8 */
    *param_1 = *param_1 * (float)iVar1 * 4.656613e-10;
  }
  return;
}

