
/* v8::internal::compiler::ZoneStats::GetCurrentAllocatedBytes() const */

long v8::internal::compiler::ZoneStats::GetCurrentAllocatedBytes(void)

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
  long lVar9;
  long in_x2;
  long lVar10;
  long in_x3;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  puVar3 = (undefined8 *)*in_x0;
  puVar5 = (undefined8 *)in_x0[1];
  if (puVar3 == puVar5) {
    return 0;
  }
  uVar1 = ((ulong)((long)puVar5 + (-8 - (long)puVar3)) >> 3) + 1;
  if (uVar1 < 2) {
    lVar7 = 0;
    puVar11 = puVar3;
  }
  else {
    uVar13 = uVar1 & 0x3ffffffffffffffe;
    lVar14 = 0;
    lVar7 = 0;
    puVar11 = puVar3 + uVar13;
    plVar12 = puVar3 + 1;
    uVar15 = uVar13;
    do {
      plVar4 = (long *)plVar12[-1];
      plVar6 = (long *)*plVar12;
      lVar9 = plVar4[5];
      lVar8 = plVar6[5];
      if (lVar9 != 0) {
        in_x2 = plVar4[2];
      }
      if (lVar8 != 0) {
        in_x3 = plVar6[2];
      }
      lVar10 = in_x2 - lVar9;
      in_x3 = in_x3 - lVar8;
      in_x2 = in_x3 + -0x18;
      lVar2 = 0;
      if (lVar9 != 0) {
        lVar2 = lVar10 + -0x18;
      }
      lVar9 = 0;
      if (lVar8 != 0) {
        lVar9 = in_x2;
      }
      uVar15 = uVar15 - 2;
      lVar14 = lVar2 + lVar14 + *plVar4;
      lVar7 = lVar9 + lVar7 + *plVar6;
      plVar12 = plVar12 + 2;
    } while (uVar15 != 0);
    lVar7 = lVar7 + lVar14;
    if (uVar1 == uVar13) {
      return lVar7;
    }
  }
  do {
    plVar12 = (long *)*puVar11;
    lVar14 = 0;
    if (plVar12[5] != 0) {
      lVar14 = (plVar12[2] - plVar12[5]) + -0x18;
    }
    puVar11 = puVar11 + 1;
    lVar7 = lVar14 + lVar7 + *plVar12;
  } while (puVar5 != puVar11);
  return lVar7;
}

