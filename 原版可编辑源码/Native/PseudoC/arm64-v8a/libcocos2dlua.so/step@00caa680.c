
/* cocostudio::timeline::ActionTimeline::step(float) */

void __thiscall cocostudio::timeline::ActionTimeline::step(ActionTimeline *this,float param_1)

{
  int iVar1;
  long *plVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  
  if (((this[0xa0] != (ActionTimeline)0x0) && (*(long *)(this + 0x68) != 0)) &&
     (*(int *)(this + 0x88) != 0)) {
    fVar4 = *(float *)(this + 0x9c);
    dVar3 = *(double *)(this + 0x90) + (double)(*(float *)(this + 0x98) * param_1);
    *(double *)(this + 0x90) = dVar3;
    if (fVar4 <= ABS((float)(dVar3 - (double)(fVar4 * (float)*(int *)(this + 0xa4))))) {
      iVar1 = *(int *)(this + 0xac);
      fVar5 = (float)(dVar3 - (double)(fVar4 * (float)iVar1));
      if (fVar4 <= fVar5) {
        this[0xa0] = this[0xb0];
        if (this[0xb0] != (ActionTimeline)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00caa78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)this + 0x70))(this,*(undefined4 *)(this + 0xa8),iVar1,1);
          return;
        }
        *(double *)(this + 0x90) = (double)(fVar4 * (float)iVar1);
        if (*(int *)(this + 0xa4) == iVar1) {
          return;
        }
        *(int *)(this + 0xa4) = iVar1;
        (**(code **)(*(long *)this + 0x150))(this,iVar1);
        (**(code **)(*(long *)this + 0x158))(this,*(undefined4 *)(this + 0xa4));
        plVar2 = *(long **)(this + 0x110);
      }
      else {
        *(int *)(this + 0xa4) = (int)(dVar3 / (double)fVar4);
        (**(code **)(*(long *)this + 0x150))(this);
        (**(code **)(*(long *)this + 0x158))(this,*(undefined4 *)(this + 0xa4));
        if (fVar5 < 0.0) {
          return;
        }
        plVar2 = *(long **)(this + 0x110);
      }
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00caa7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x30))();
        return;
      }
    }
  }
  return;
}

