
/* cocostudio::timeline::AlphaFrame::onApply(float) */

void __thiscall cocostudio::timeline::AlphaFrame::onApply(AlphaFrame *this,float param_1)

{
  long *plVar1;
  float fVar2;
  
  plVar1 = *(long **)(this + 0x50);
  if (plVar1 != (long *)0x0) {
    fVar2 = (float)NEON_ucvtf((uint)(byte)this[0x58]);
                    /* WARNING: Could not recover jumptable at 0x00ca7ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x490))(plVar1,(int)((float)*(int *)(this + 0x5c) * param_1 + fVar2));
    return;
  }
  return;
}

