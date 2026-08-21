
/* cocostudio::timeline::ScaleFrame::onApply(float) */

void __thiscall cocostudio::timeline::ScaleFrame::onApply(ScaleFrame *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(long **)(this + 0x50) != (long *)0x0) {
    fVar1 = *(float *)(this + 100);
    if ((*(float *)(this + 0x60) != 0.0) || (fVar1 != 0.0)) {
      fVar2 = *(float *)(this + 0x5c);
      (**(code **)(**(long **)(this + 0x50) + 0x50))
                (*(float *)(this + 0x60) * param_1 + *(float *)(this + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00ca71d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x50) + 0x60))(fVar2 + fVar1 * param_1);
      return;
    }
  }
  return;
}

