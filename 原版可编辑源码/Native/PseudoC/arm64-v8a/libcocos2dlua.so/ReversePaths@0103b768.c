
/* ClipperLib::ReversePaths(std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > >&) */

void ClipperLib::ReversePaths(vector *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = *(long *)param_1;
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 != lVar3) {
    uVar2 = 0;
    do {
      puVar7 = (ulong *)(lVar3 + uVar2 * 0x18);
      puVar6 = (undefined8 *)*puVar7;
      puVar4 = (undefined8 *)puVar7[1];
      if ((puVar4 != puVar6) && (puVar6 < puVar4 + -2)) {
        puVar4 = puVar4 + -4;
        do {
          uVar10 = puVar6[1];
          uVar8 = *puVar6;
          uVar9 = puVar4[2];
          puVar6[1] = puVar4[3];
          *puVar6 = uVar9;
                    /* try { // try from 0103b7dc to 0113b7e3 has its CatchHandler @ 0103b93c */
          puVar4[3] = uVar10;
          puVar4[2] = uVar8;
          bVar1 = puVar6 + 2 < puVar4;
          puVar4 = puVar4 + -2;
          puVar6 = puVar6 + 2;
        } while (bVar1);
        lVar3 = *(long *)param_1;
        lVar5 = *(long *)(param_1 + 8);
      }
      uVar2 = uVar2 + 1;
                    /* try { // try from 0103b79c to 0113b7a3 has its CatchHandler @ 0103b928 */
    } while (uVar2 < (ulong)((lVar5 - lVar3 >> 3) * -0x5555555555555555));
  }
  return;
}

