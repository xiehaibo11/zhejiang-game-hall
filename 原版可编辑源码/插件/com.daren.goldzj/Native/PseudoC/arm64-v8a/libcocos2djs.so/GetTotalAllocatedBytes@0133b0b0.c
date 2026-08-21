
/* v8::internal::compiler::ZoneStats::GetTotalAllocatedBytes() const */

long v8::internal::compiler::ZoneStats::GetTotalAllocatedBytes(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *in_x0;
  long lVar7;
  long lVar8;
  long in_x3;
  long lVar9;
  long in_x4;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  
  puVar3 = (undefined8 *)*in_x0;
  puVar5 = (undefined8 *)in_x0[1];
  if (puVar3 == puVar5) {
    return in_x0[7];
  }
  uVar1 = ((ulong)((long)puVar5 + (-8 - (long)puVar3)) >> 3) + 1;
  if (uVar1 < 2) {
    lVar11 = 0;
    puVar10 = puVar3;
  }
  else {
    uVar12 = uVar1 & 0x3ffffffffffffffe;
    lVar14 = 0;
    lVar11 = 0;
    puVar10 = puVar3 + uVar12;
    plVar13 = puVar3 + 1;
    uVar15 = uVar12;
    do {
      plVar4 = (long *)plVar13[-1];
      plVar6 = (long *)*plVar13;
      lVar8 = plVar4[5];
      lVar7 = plVar6[5];
      if (lVar8 != 0) {
        in_x3 = plVar4[2];
      }
      if (lVar7 != 0) {
        in_x4 = plVar6[2];
      }
      lVar9 = in_x3 - lVar8;
      in_x4 = in_x4 - lVar7;
      in_x3 = in_x4 + -0x18;
      lVar2 = 0;
      if (lVar8 != 0) {
        lVar2 = lVar9 + -0x18;
      }
      lVar8 = 0;
      if (lVar7 != 0) {
        lVar8 = in_x3;
      }
      uVar15 = uVar15 - 2;
      lVar14 = lVar2 + lVar14 + *plVar4;
      lVar11 = lVar8 + lVar11 + *plVar6;
      plVar13 = plVar13 + 2;
    } while (uVar15 != 0);
    lVar11 = lVar11 + lVar14;
    if (uVar1 == uVar12) goto LAB_0133b178;
  }
  do {
    plVar13 = (long *)*puVar10;
    lVar14 = 0;
    if (plVar13[5] != 0) {
      lVar14 = (plVar13[2] - plVar13[5]) + -0x18;
    }
    puVar10 = puVar10 + 1;
    lVar11 = lVar14 + lVar11 + *plVar13;
  } while (puVar5 != puVar10);
LAB_0133b178:
  return lVar11 + in_x0[7];
}

