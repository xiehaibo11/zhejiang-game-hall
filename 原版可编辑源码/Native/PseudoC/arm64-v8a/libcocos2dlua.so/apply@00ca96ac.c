
/* cocostudio::timeline::Timeline::apply(unsigned int) */

void __thiscall cocostudio::timeline::Timeline::apply(Timeline *this,uint param_1)

{
  float fVar1;
  
  if (*(long **)(this + 0x40) != (long *)0x0) {
    if (*(uint *)(this + 0x54) == 0) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = (float)(param_1 - *(int *)(this + 0x48)) / (float)*(uint *)(this + 0x54);
    }
                    /* WARNING: Could not recover jumptable at 0x00ca96e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x40) + 0x80))(fVar1);
    return;
  }
  return;
}

