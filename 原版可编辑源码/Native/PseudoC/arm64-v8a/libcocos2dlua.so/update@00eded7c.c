
/* cocos2d::RotateTo::update(float) */

void __thiscall cocos2d::RotateTo::update(RotateTo *this,float param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  Vec3 aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(this + 0x38);
  if (plVar3 != (long *)0x0) {
                    /* try { // try from 00ededa8 to 00fdedbf has its CatchHandler @ 00edef54 */
    if (this[0x56] == (RotateTo)0x0) {
      fVar4 = *(float *)(this + 100);
      fVar5 = *(float *)(this + 0x70);
      if ((fVar4 == *(float *)(this + 0x68)) && (fVar5 == *(float *)(this + 0x74))) {
        fVar4 = fVar4 + fVar5 * param_1;
        pcVar2 = *(code **)(*plVar3 + 0x180);
      }
      else {
        (**(code **)(*plVar3 + 0x1b0))(fVar4 + fVar5 * param_1,plVar3);
        plVar3 = *(long **)(this + 0x38);
                    /* try { // try from 00edee5c to 00fdee63 has its CatchHandler @ 00edef68 */
        fVar4 = *(float *)(this + 0x68) + *(float *)(this + 0x74) * param_1;
        pcVar2 = *(code **)(*plVar3 + 0x1d0);
      }
      (*pcVar2)(fVar4,plVar3);
    }
    else {
                    /* try { // try from 00ededd8 to 00fdedeb has its CatchHandler @ 00edef34 */
      Vec3::Vec3(aVStack_48,*(float *)(this + 100) + *(float *)(this + 0x70) * param_1,
                 *(float *)(this + 0x68) + *(float *)(this + 0x74) * param_1,
                 *(float *)(this + 0x6c) + *(float *)(this + 0x78) * param_1);
      (**(code **)(*plVar3 + 400))(plVar3,aVStack_48);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00edee80 to 00fdeea3 has its CatchHandler @ 00edef78 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

