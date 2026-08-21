
/* dragonBones::BoneTimelineState::blend(int) */

void __thiscall dragonBones::BoneTimelineState::blend(BoneTimelineState *this,int param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(this + 0xb8);
  lVar2 = *(long *)(this + 0xc0);
  fVar3 = *(float *)(lVar1 + 0xa4);
  if (param_1 == 2) {
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
    *(ulong *)(lVar1 + 0x80) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x80) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(lVar2 + 0x48) >> 0x20) * fVar3,
                  (float)*(undefined8 *)(lVar1 + 0x80) +
                  (float)*(undefined8 *)(lVar2 + 0x48) * fVar3);
    *(ulong *)(lVar1 + 0x78) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x78) >> 0x20) +
                  (float)((ulong)uVar4 >> 0x20) * fVar3,
                  (float)*(undefined8 *)(lVar1 + 0x78) + (float)uVar4 * fVar3);
    *(float *)(lVar1 + 0x88) = *(float *)(lVar1 + 0x88) + fVar3 * (*(float *)(lVar2 + 0x50) + -1.0);
    *(float *)(lVar1 + 0x8c) = *(float *)(lVar1 + 0x8c) + fVar3 * (*(float *)(lVar2 + 0x54) + -1.0);
  }
  else if (fVar3 == 1.0) {
    *(float *)(lVar1 + 0x78) = *(float *)(lVar2 + 0x40);
    uVar4 = *(undefined8 *)(lVar2 + 0x44);
    *(undefined8 *)(lVar1 + 0x84) = *(undefined8 *)(lVar2 + 0x4c);
    *(undefined8 *)(lVar1 + 0x7c) = uVar4;
    *(undefined4 *)(lVar1 + 0x8c) = *(undefined4 *)(lVar2 + 0x54);
  }
  else {
                    /* try { // try from 00d78c14 to 00e78c27 has its CatchHandler @ 00d79a24 */
    *(float *)(lVar1 + 0x78) = fVar3 * *(float *)(lVar2 + 0x40);
    uVar5 = NEON_fmov(0xbf800000,4);
    *(float *)(lVar1 + 0x84) = fVar3 * *(float *)(lVar2 + 0x4c);
                    /* try { // try from 00d78c28 to 00e78c37 has its CatchHandler @ 00d79a20 */
    *(ulong *)(lVar1 + 0x7c) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x44) >> 0x20) * fVar3,
                  (float)*(undefined8 *)(lVar2 + 0x44) * fVar3);
    uVar4 = NEON_fmov(0x3f800000,4);
    *(ulong *)(lVar1 + 0x88) =
         CONCAT44(((float)((ulong)*(undefined8 *)(lVar2 + 0x50) >> 0x20) +
                  (float)((ulong)uVar5 >> 0x20)) * fVar3 + (float)((ulong)uVar4 >> 0x20),
                  ((float)*(undefined8 *)(lVar2 + 0x50) + (float)uVar5) * fVar3 + (float)uVar4);
                    /* try { // try from 00d78c4c to 00e78c67 has its CatchHandler @ 00d79bd4 */
  }
                    /* try { // try from 00d78c6c to 00e78c7b has its CatchHandler @ 00d79bd0 */
  if ((*(int *)(*(long *)(this + 0x68) + 100) != 0) ||
     (*(int *)(*(long *)(this + 0x68) + 0x68) != 0)) {
    *(undefined1 *)(lVar1 + 0x90) = 1;
  }
  return;
}

