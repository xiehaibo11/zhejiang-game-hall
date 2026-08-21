
/* cocostudio::timeline::ActionTimeline::gotoFrameAndPause(int) */

void __thiscall
cocostudio::timeline::ActionTimeline::gotoFrameAndPause(ActionTimeline *this,int param_1)

{
  *(int *)(this + 0xa4) = param_1;
  *(int *)(this + 0xa8) = param_1;
  *(double *)(this + 0x90) = (double)(*(float *)(this + 0x9c) * (float)param_1);
  (**(code **)(*(long *)this + 0x88))();
                    /* WARNING: Could not recover jumptable at 0x00caa490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x148))(this,*(undefined4 *)(this + 0xa4));
  return;
}

