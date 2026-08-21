
/* cocostudio::timeline::Timeline::gotoFrame(int) */

void __thiscall cocostudio::timeline::Timeline::gotoFrame(Timeline *this,int param_1)

{
  if (*(long *)(this + 0x30) == *(long *)(this + 0x28)) {
    return;
  }
  (**(code **)(*(long *)this + 0x80))();
                    /* WARNING: Could not recover jumptable at 0x00ca9374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x78))(this,param_1);
  return;
}

