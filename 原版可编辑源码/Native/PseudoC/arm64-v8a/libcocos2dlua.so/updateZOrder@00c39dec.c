
/* cocostudio::Bone::updateZOrder() */

void __thiscall cocostudio::Bone::updateZOrder(Bone *this)

{
  if (*(float *)(this + 0x398) < 0.3) {
                    /* WARNING: Could not recover jumptable at 0x00c39e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x18))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c39e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))
            (this,*(int *)(*(long *)(this + 0x2f8) + 0x2c) +
                  *(int *)(*(long *)(this + 0x330) + 0x2c));
  return;
}

