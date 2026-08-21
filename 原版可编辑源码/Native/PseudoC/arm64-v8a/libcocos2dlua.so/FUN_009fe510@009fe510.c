
void FUN_009fe510(undefined8 param_1,undefined8 *param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  uVar4 = FUN_009fdf6c(param_1,param_2[2],param_2[3]);
                    /* try { // try from 009fe544 to 00afe577 has its CatchHandler @ 009fe644 */
  lVar5 = FUN_009fe644(param_1,uVar4);
  if ((lVar5 != 0) || ((*(int *)(param_2 + 9) != 0xb && (*(int *)(param_2 + 9) != 0xe)))) {
    if (param_4 == 0) {
      uVar4 = FUN_009fdf6c(param_1,param_2[4],param_2[5]);
      param_4 = FUN_009fe644(param_1,uVar4);
      if (param_4 == 0) {
        return;
      }
    }
                    /* try { // try from 009fe578 to 00afe58b has its CatchHandler @ 009fe610 */
    uVar4 = FUN_009fdf6c(param_1,*param_2,param_2[1]);
                    /* try { // try from 009fe590 to 00afe5c3 has its CatchHandler @ 009fe614 */
    lVar6 = FUN_009fe7d8(param_1,param_4,uVar4,*(undefined4 *)(param_2 + 8));
    if (lVar6 != 0) {
      uVar4 = FUN_009fdf6c(param_1,param_2[6],param_2[7]);
      *(long *)(lVar6 + 8) = lVar5;
      *(undefined8 *)(lVar6 + 0x10) = uVar4;
      uVar2 = *(uint *)((long)param_2 + 0x4c);
      uVar7 = (uint)*(byte *)(lVar6 + 0x1f) << 0x18;
      *(uint *)(lVar6 + 0x1c) = uVar2 & 0xffffff | uVar7;
      uVar3 = *(uint *)(param_2 + 9);
                    /* try { // try from 009fe5c4 to 00afe65f has its CatchHandler @ 009fe3a4 */
      uVar2 = uVar2 & 0xffffff | (uVar3 & 0x1f) << 0x18;
      *(uint *)(lVar6 + 0x1c) = uVar7 & 0xe0000000 | uVar2;
      uVar2 = uVar2 | (uint)(*(int *)((long)param_2 + 0x44) == 3) << 0x1d;
      *(uint *)(lVar6 + 0x1c) = uVar7 & 0xc0000000 | uVar2;
      uVar7 = *(uint *)(param_2 + 10);
      if ((int)uVar7 < 0) {
        uVar7 = *(uint *)(param_3 + 0x528);
      }
      uVar1 = 0;
      if (3 < (uVar3 & 0x1f) - 9) {
        uVar1 = (uVar7 & 1) << 0x1e;
      }
                    /* catch() { ... } // from try @ 009fe578 with catch @ 009fe610 */
                    /* catch() { ... } // from try @ 009fe590 with catch @ 009fe614 */
      *(uint *)(lVar6 + 0x1c) = uVar2 | (uint)(lVar5 == 0) << 0x1f | uVar1;
    }
  }
  return;
}

