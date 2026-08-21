
/* ClipperLib::CleanPolygon(std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > const&, std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >&, double) */

void ClipperLib::CleanPolygon(vector *param_1,vector *param_2,double param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  int *piVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  if (*(long *)(param_1 + 8) - *(long *)param_1 == 0) {
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)param_2;
    return;
  }
  uVar13 = *(long *)(param_1 + 8) - *(long *)param_1 >> 4;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar13;
  uVar7 = uVar13 * 0x28;
  if (SUB168(auVar5 * ZEXT816(0x28),8) != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  piVar6 = operator_new__(uVar7);
  lVar8 = 0;
  do {
    lVar10 = lVar8 + 0x28;
    *(undefined8 *)((long)piVar6 + lVar8 + 8) = 0;
    *(undefined8 *)((long)piVar6 + lVar8 + 0x10) = 0;
    lVar8 = lVar10;
  } while (uVar13 * 0x28 - lVar10 != 0);
  uVar7 = 0;
  puVar9 = *(undefined8 **)param_1;
  piVar12 = piVar6;
  do {
    uVar14 = *puVar9;
    uVar7 = uVar7 + 1;
    uVar4 = 0;
    if (uVar13 != 0) {
      uVar4 = uVar7 / uVar13;
    }
                    /* try { // try from 0103bc18 to 0113bc2f has its CatchHandler @ 0103bd54 */
    *(undefined8 *)(piVar12 + 4) = puVar9[1];
    *(undefined8 *)(piVar12 + 2) = uVar14;
    *(int **)(piVar12 + 6) = piVar6 + (uVar7 - uVar4 * uVar13) * 10;
    *(int **)(piVar6 + (uVar7 - uVar4 * uVar13) * 10 + 8) = piVar12;
    *piVar12 = 0;
    puVar9 = puVar9 + 2;
    piVar12 = piVar12 + 10;
  } while (uVar7 < uVar13);
                    /* try { // try from 0103bc30 to 0113bcbb has its CatchHandler @ 0103bb28 */
  piVar12 = piVar6;
  if (*piVar6 == 0) {
    dVar15 = param_3 * param_3;
    do {
      piVar1 = *(int **)(piVar12 + 6);
      piVar2 = *(int **)(piVar12 + 8);
      if (piVar1 == piVar2) break;
      dVar16 = (double)*(long *)(piVar2 + 2);
      dVar17 = (double)*(long *)(piVar2 + 4);
      dVar18 = (double)*(long *)(piVar12 + 2) - dVar16;
                    /* try { // try from 0103bcbc to 0113bcc7 has its CatchHandler @ 0103bd68 */
      dVar19 = (double)*(long *)(piVar12 + 4) - dVar17;
                    /* try { // try from 0103bcc8 to 0113bd8b has its CatchHandler @ 0103bb28 */
      if (dVar18 * dVar18 + dVar19 * dVar19 <= dVar15) {
LAB_0103bc70:
        *(int **)(piVar2 + 6) = piVar1;
        lVar8 = *(long *)(piVar12 + 6);
        uVar13 = uVar13 - 1;
        piVar12 = piVar2;
LAB_0103bc80:
        iVar11 = 0;
        *(int **)(lVar8 + 0x20) = piVar12;
        *piVar12 = 0;
      }
      else {
        dVar18 = dVar16 - (double)*(long *)(piVar1 + 2);
        dVar19 = dVar17 - (double)*(long *)(piVar1 + 4);
        if (dVar18 * dVar18 + dVar19 * dVar19 <= dVar15) {
                    /* catch() { ... } // from try @ 0103bc18 with catch @ 0103bd54 */
          puVar3 = *(undefined4 **)(piVar1 + 8);
          uVar13 = uVar13 - 2;
          *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(piVar1 + 6);
                    /* catch() { ... } // from try @ 0103bcbc with catch @ 0103bd68 */
          *(undefined4 **)(*(long *)(piVar1 + 6) + 0x20) = puVar3;
          *puVar3 = 0;
          piVar1 = *(int **)(piVar12 + 8);
          *(undefined8 *)(piVar1 + 6) = *(undefined8 *)(piVar12 + 6);
          lVar8 = *(long *)(piVar12 + 6);
          piVar12 = piVar1;
          goto LAB_0103bc80;
        }
        dVar18 = (double)(*(long *)(piVar2 + 4) - *(long *)(piVar1 + 4));
        dVar19 = (double)(*(long *)(piVar1 + 2) - *(long *)(piVar2 + 2));
        dVar16 = (dVar18 * (double)*(long *)(piVar12 + 2) + dVar19 * (double)*(long *)(piVar12 + 4))
                 - (dVar18 * dVar16 + dVar17 * dVar19);
        if ((dVar16 * dVar16) / (dVar18 * dVar18 + dVar19 * dVar19) < dVar15) goto LAB_0103bc70;
        *piVar12 = 1;
        iVar11 = *piVar1;
        piVar12 = piVar1;
      }
    } while (iVar11 == 0);
  }
  uVar7 = 0;
  if (2 < uVar13) {
    uVar7 = uVar13;
  }
  uVar13 = *(long *)(param_2 + 8) - *(long *)param_2 >> 4;
  if (uVar7 < uVar13 || uVar7 - uVar13 == 0) {
    if (uVar7 < uVar13) {
      *(ulong *)(param_2 + 8) = *(long *)param_2 + uVar7 * 0x10;
    }
    if (uVar7 == 0) goto LAB_0103bddc;
  }
  else {
    std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::__append
              ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)param_2,
               uVar7 - uVar13);
  }
  lVar8 = 0;
  do {
    lVar10 = *(long *)param_2;
    uVar14 = *(undefined8 *)(piVar12 + 2);
    uVar7 = uVar7 - 1;
    ((undefined8 *)(lVar10 + lVar8))[1] = *(undefined8 *)(piVar12 + 4);
    *(undefined8 *)(lVar10 + lVar8) = uVar14;
    piVar12 = *(int **)(piVar12 + 6);
    lVar8 = lVar8 + 0x10;
  } while (uVar7 != 0);
LAB_0103bddc:
  operator_delete__(piVar6);
  return;
}

