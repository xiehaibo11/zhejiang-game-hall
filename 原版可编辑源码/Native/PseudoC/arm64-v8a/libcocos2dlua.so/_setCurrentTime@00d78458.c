
/* dragonBones::TimelineState::_setCurrentTime(float) */

undefined8 __thiscall dragonBones::TimelineState::_setCurrentTime(TimelineState *this,float param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float __y;
  float fVar9;
  
  iVar1 = *(int *)(this + 0x10);
  uVar2 = *(uint *)(this + 0x14);
  lVar4 = *(long *)(this + 0x70);
  fVar9 = *(float *)(this + 0x18);
  if (lVar4 == 0) {
    fVar8 = *(float *)(this + 0x40);
LAB_00d784f4:
    lVar4 = *(long *)(this + 0x68);
                    /* catch() { ... } // from try @ 00d783f4 with catch @ 00d784fc */
    __y = *(float *)(this + 0x3c);
                    /* catch() { ... } // from try @ 00d783b0 with catch @ 00d78500 */
    fVar8 = fVar8 * param_1;
                    /* catch() { ... } // from try @ 00d78388 with catch @ 00d78504 */
    uVar5 = *(uint *)(lVar4 + 0x14);
    if (*(float *)(this + 0x44) != 0.0) {
                    /* catch() { ... } // from try @ 00d78380 with catch @ 00d78518 */
                    /* catch() { ... } // from try @ 00d7833c with catch @ 00d7851c */
      fVar8 = fVar8 + *(float *)(this + 0x44) * *(float *)(*(long *)(this + 0x50) + 0x24);
    }
                    /* catch() { ... } // from try @ 00d78314 with catch @ 00d78520 */
    iVar6 = iVar1;
                    /* catch() { ... } // from try @ 00d7830c with catch @ 00d78534 */
                    /* catch() { ... } // from try @ 00d782c8 with catch @ 00d78538 */
                    /* catch() { ... } // from try @ 00d782a0 with catch @ 00d7853c */
    if ((uVar5 == 0) || ((fVar8 < __y * (float)uVar5 && (-(__y * (float)uVar5) < fVar8)))) {
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      else {
                    /* catch() { ... } // from try @ 00d78298 with catch @ 00d78550 */
        if (*(int *)(lVar4 + 0x60) == 3) {
                    /* catch() { ... } // from try @ 00d78254 with catch @ 00d78554 */
          iVar6 = 0;
                    /* catch() { ... } // from try @ 00d7822c with catch @ 00d78558 */
          *(undefined4 *)(this + 0x10) = 0;
        }
      }
                    /* catch() { ... } // from try @ 00d783c0 with catch @ 00d7859c */
      if (0.0 <= fVar8) {
        uVar5 = (uint)(fVar8 / __y);
        *(uint *)(this + 0x14) = uVar5;
        fVar7 = fmodf(fVar8,__y);
      }
      else {
                    /* catch() { ... } // from try @ 00d78424 with catch @ 00d7856c */
        uVar5 = (uint)(-fVar8 / __y);
        *(uint *)(this + 0x14) = uVar5;
        fVar7 = fmodf(-fVar8,__y);
        fVar7 = __y - fVar7;
      }
    }
    else {
                    /* catch() { ... } // from try @ 00d78364 with catch @ 00d785bc */
      if ((iVar1 < 1) && (*(int *)(lVar4 + 0x60) == 3)) {
                    /* catch() { ... } // from try @ 00d7834c with catch @ 00d785cc */
        *(undefined4 *)(this + 0x10) = 1;
        iVar6 = 1;
      }
      fVar7 = 0.0;
      *(uint *)(this + 0x14) = uVar5;
      if (0.0 <= fVar8) {
                    /* catch() { ... } // from try @ 00d782f0 with catch @ 00d785ec */
        fVar7 = __y + 1e-06;
      }
    }
                    /* catch() { ... } // from try @ 00d782d8 with catch @ 00d785f0 */
    fVar7 = *(float *)(this + 0x38) + fVar7;
    *(float *)(this + 0x18) = fVar7;
  }
  else {
    if (*(uint *)(this + 0x28) < 2) {
      uVar5 = 1;
      iVar6 = -1;
      if (-1 < *(int *)(lVar4 + 0x10)) {
        iVar6 = 1;
      }
      *(int *)(this + 0x10) = iVar6;
    }
    else {
      fVar8 = *(float *)(this + 0x40);
                    /* catch() { ... } // from try @ 00d783fc with catch @ 00d784e8 */
      if ((fVar8 != 1.0) || (fVar8 = 1.0, *(float *)(this + 0x44) != 0.0)) goto LAB_00d784f4;
      iVar6 = *(int *)(lVar4 + 0x10);
      *(int *)(this + 0x10) = iVar6;
      uVar5 = *(uint *)(lVar4 + 0x14);
    }
    *(uint *)(this + 0x14) = uVar5;
    fVar7 = *(float *)(lVar4 + 0x18);
    *(float *)(this + 0x18) = fVar7;
  }
  if ((uVar5 == uVar2) && (fVar7 == fVar9)) {
    uVar3 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 00d7827c with catch @ 00d7861c */
                    /* catch() { ... } // from try @ 00d78264 with catch @ 00d78620 */
    if ((iVar1 < 0 && iVar6 != iVar1) || (uVar5 != uVar2 && iVar6 < 1)) {
                    /* try { // try from 00d78638 to 00e7869f has its CatchHandler @ 00d78638
                       catch() { ... } // from try @ 00d78638 with catch @ 00d78638
                       catch() { ... } // from try @ 00d78b5c with catch @ 00d78638
                       catch() { ... } // from try @ 00d78dbc with catch @ 00d78638
                       catch() { ... } // from try @ 00d78fc4 with catch @ 00d78638
                       catch() { ... } // from try @ 00d7921c with catch @ 00d78638
                       catch() { ... } // from try @ 00d79480 with catch @ 00d78638
                       catch() { ... } // from try @ 00d799f8 with catch @ 00d78638 */
      *(undefined4 *)(this + 0x30) = 0xffffffff;
    }
    uVar3 = 1;
  }
  return uVar3;
}

