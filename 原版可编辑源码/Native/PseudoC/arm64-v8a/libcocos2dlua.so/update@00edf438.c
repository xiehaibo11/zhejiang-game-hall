
/* cocos2d::RotateBy::update(float) */

void __thiscall cocos2d::RotateBy::update(RotateBy *this,float param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x38);
  if (plVar2 != (long *)0x0) {
    if (this[0x56] == (RotateBy)0x0) {
      fVar4 = *(float *)(this + 100);
      fVar5 = *(float *)(this + 0x58);
      if ((fVar4 == *(float *)(this + 0x68)) && (fVar5 == *(float *)(this + 0x5c))) {
        fVar4 = fVar4 + fVar5 * param_1;
        pcVar3 = *(code **)(*plVar2 + 0x180);
      }
      else {
                    /* try { // try from 00edf500 to 00fdf50b has its CatchHandler @ 00edf5a0 */
        (**(code **)(*plVar2 + 0x1b0))(fVar4 + fVar5 * param_1);
                    /* try { // try from 00edf50c to 00fdf527 has its CatchHandler @ 00edf570 */
        fVar4 = *(float *)(this + 0x68) + *(float *)(this + 0x5c) * param_1;
        pcVar3 = *(code **)(**(long **)(this + 0x38) + 0x1d0);
      }
      (*pcVar3)(fVar4);
    }
    else {
      Vec3::Vec3((Vec3 *)&local_38);
      local_38 = CONCAT44((float)((ulong)*(undefined8 *)(this + 100) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(this + 0x58) >> 0x20) * param_1,
                          (float)*(undefined8 *)(this + 100) +
                          (float)*(undefined8 *)(this + 0x58) * param_1);
                    /* try { // try from 00edf494 to 00fdf4ff has its CatchHandler @ 00edf494
                       catch() { ... } // from try @ 00edf494 with catch @ 00edf494
                       catch() { ... } // from try @ 00edf528 with catch @ 00edf494 */
      local_30 = *(float *)(this + 0x6c) + *(float *)(this + 0x60) * param_1;
      (**(code **)(**(long **)(this + 0x38) + 400))(*(long **)(this + 0x38),&local_38);
    }
  }
                    /* try { // try from 00edf528 to 00fdf5bb has its CatchHandler @ 00edf494 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

