
/* dragonBones::AnimationState::setCurrentTime(float) */

void __thiscall dragonBones::AnimationState::setCurrentTime(AnimationState *this,float param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ActionTimelineState *this_00;
  float fVar10;
  float __y;
  
  this_00 = *(ActionTimelineState **)(this + 0x88);
  __y = *(float *)(this + 0x70);
  iVar5 = *(int *)(this_00 + 0x14) - (uint)(0 < *(int *)(this_00 + 0x10));
  if ((param_1 < 0.0) || (__y < param_1)) {
    fVar10 = fmodf(param_1,__y);
    param_1 = fVar10 + __y * (float)iVar5;
    if (param_1 < 0.0) {
      param_1 = __y + param_1;
    }
  }
                    /* try { // try from 00d7734c to 00e7735b has its CatchHandler @ 00d780fc */
  fVar10 = __y + -1e-06;
  if ((*(int *)(this + 0x14) == 0 || iVar5 != *(int *)(this + 0x14) + -1) || param_1 != __y) {
    fVar10 = param_1;
  }
  if (*(float *)(this + 0x98) == fVar10) {
    return;
  }
  *(float *)(this + 0x98) = fVar10;
  ActionTimelineState::setCurrentTime(this_00,fVar10);
  if (*(long *)(this + 0x138) != 0) {
    *(undefined4 *)(*(long *)(this + 0x138) + 0x10) = 0xffffffff;
  }
  plVar6 = *(long **)(this + 0xb8);
  plVar3 = *(long **)(this + 0xc0);
                    /* try { // try from 00d77398 to 00e773db has its CatchHandler @ 00d78168 */
  if (plVar6 != plVar3) {
    uVar2 = ((ulong)((long)plVar3 + (-8 - (long)plVar6)) >> 3) + 1;
    if (1 < uVar2) {
      uVar7 = uVar2 & 0x3ffffffffffffffe;
      plVar8 = plVar6 + 1;
      plVar6 = plVar6 + uVar7;
      uVar9 = uVar7;
      do {
        plVar1 = plVar8 + -1;
        lVar4 = *plVar8;
        uVar9 = uVar9 - 2;
        plVar8 = plVar8 + 2;
        *(undefined4 *)(*plVar1 + 0x10) = 0xffffffff;
        *(undefined4 *)(lVar4 + 0x10) = 0xffffffff;
      } while (uVar9 != 0);
                    /* try { // try from 00d773e8 to 00e773ef has its CatchHandler @ 00d780fc */
      if (uVar2 == uVar7) goto LAB_00d77404;
    }
    do {
      plVar8 = plVar6 + 1;
      *(undefined4 *)(*plVar6 + 0x10) = 0xffffffff;
      plVar6 = plVar8;
    } while (plVar3 != plVar8);
  }
LAB_00d77404:
  plVar6 = *(long **)(this + 0xd0);
  plVar3 = *(long **)(this + 0xd8);
  if (plVar6 != plVar3) {
                    /* try { // try from 00d7741c to 00e77427 has its CatchHandler @ 00d78100 */
    uVar2 = ((ulong)((long)plVar3 + (-8 - (long)plVar6)) >> 3) + 1;
    if (1 < uVar2) {
      uVar7 = uVar2 & 0x3ffffffffffffffe;
      plVar8 = plVar6 + 1;
      plVar6 = plVar6 + uVar7;
      uVar9 = uVar7;
      do {
        plVar1 = plVar8 + -1;
        lVar4 = *plVar8;
        uVar9 = uVar9 - 2;
        plVar8 = plVar8 + 2;
        *(undefined4 *)(*plVar1 + 0x10) = 0xffffffff;
        *(undefined4 *)(lVar4 + 0x10) = 0xffffffff;
                    /* try { // try from 00d77454 to 00e774cb has its CatchHandler @ 00d78168 */
      } while (uVar9 != 0);
      if (uVar2 == uVar7) {
        return;
      }
    }
    do {
      plVar8 = plVar6 + 1;
      *(undefined4 *)(*plVar6 + 0x10) = 0xffffffff;
      plVar6 = plVar8;
    } while (plVar3 != plVar8);
  }
  return;
}

