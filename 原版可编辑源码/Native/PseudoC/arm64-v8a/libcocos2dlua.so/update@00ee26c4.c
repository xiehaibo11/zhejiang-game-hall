
/* cocos2d::Blink::update(float) */

void __thiscall cocos2d::Blink::update(Blink *this,float param_1)

{
  ulong uVar1;
  int iVar2;
  float fVar3;
  
                    /* try { // try from 00ee26d8 to 00fe26db has its CatchHandler @ 00ee2760 */
                    /* try { // try from 00ee26dc to 00fe277b has its CatchHandler @ 00ee26b0 */
  if ((*(long *)(this + 0x38) != 0) &&
     (uVar1 = (**(code **)(*(long *)this + 0x28))(), (uVar1 & 1) == 0)) {
    iVar2 = *(int *)(this + 0x58);
    fVar3 = fmodf(param_1,1.0 / (float)iVar2);
                    /* WARNING: Could not recover jumptable at 0x00ee2748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x38) + 0x170))
              (*(long **)(this + 0x38),(1.0 / (float)iVar2) * 0.5 < fVar3);
    return;
  }
  return;
}

