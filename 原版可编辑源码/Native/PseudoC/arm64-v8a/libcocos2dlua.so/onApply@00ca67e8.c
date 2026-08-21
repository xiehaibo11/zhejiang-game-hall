
/* cocostudio::timeline::RotationFrame::onApply(float) */

void __thiscall cocostudio::timeline::RotationFrame::onApply(RotationFrame *this,float param_1)

{
  if ((*(long **)(this + 0x50) != (long *)0x0) && (*(float *)(this + 0x5c) != 0.0)) {
                    /* WARNING: Could not recover jumptable at 0x00ca6814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x50) + 0x180))
              (*(float *)(this + 0x5c) * param_1 + *(float *)(this + 0x58));
    return;
  }
  return;
}

