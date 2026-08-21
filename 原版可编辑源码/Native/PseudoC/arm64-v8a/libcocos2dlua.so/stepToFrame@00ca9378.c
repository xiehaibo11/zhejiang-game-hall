
/* cocostudio::timeline::Timeline::stepToFrame(int) */

void __thiscall cocostudio::timeline::Timeline::stepToFrame(Timeline *this,int param_1)

{
  if (*(long *)(this + 0x30) == *(long *)(this + 0x28)) {
    return;
  }
  (**(code **)(*(long *)this + 0x88))();
                    /* WARNING: Could not recover jumptable at 0x00ca93c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x78))(this,param_1);
  return;
}

