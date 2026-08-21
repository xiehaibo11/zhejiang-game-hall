
/* cocostudio::timeline::ActionTimeline::gotoFrameAndPlay(int, int, int, bool) */

void __thiscall
cocostudio::timeline::ActionTimeline::gotoFrameAndPlay
          (ActionTimeline *this,int param_1,int param_2,int param_3,bool param_4)

{
  this[0xb0] = (ActionTimeline)param_4;
  *(int *)(this + 0xa4) = param_3;
  *(int *)(this + 0xa8) = param_1;
  *(int *)(this + 0xac) = param_2;
  *(double *)(this + 0x90) = (double)(*(float *)(this + 0x9c) * (float)param_3);
  (**(code **)(*(long *)this + 0x90))();
                    /* WARNING: Could not recover jumptable at 0x00caa440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x148))(this,*(undefined4 *)(this + 0xa4));
  return;
}

