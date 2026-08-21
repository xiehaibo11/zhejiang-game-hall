
/* cocostudio::timeline::ActionTimeline::setCurrentFrame(int) */

void __thiscall
cocostudio::timeline::ActionTimeline::setCurrentFrame(ActionTimeline *this,int param_1)

{
  if ((*(int *)(this + 0xa8) <= param_1) && (param_1 <= *(int *)(this + 0xac))) {
    *(int *)(this + 0xa4) = param_1;
    *(double *)(this + 0x90) = (double)(*(float *)(this + 0x9c) * (float)param_1);
  }
  return;
}

