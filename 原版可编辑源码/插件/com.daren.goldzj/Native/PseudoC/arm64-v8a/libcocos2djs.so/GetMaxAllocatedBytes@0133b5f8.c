
/* v8::internal::compiler::ZoneStats::GetMaxAllocatedBytes() const */

ulong v8::internal::compiler::ZoneStats::GetMaxAllocatedBytes(void)

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
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  
  puVar3 = (undefined8 *)*in_x0;
  puVar5 = (undefined8 *)in_x0[1];
  if (puVar3 == puVar5) {
    uVar11 = 0;
  }
  else {
    uVar1 = ((ulong)((long)puVar5 + (-8 - (long)puVar3)) >> 3) + 1;
    if (uVar1 < 2) {
      uVar11 = 0;
      puVar10 = puVar3;
    }
    else {
      uVar12 = uVar1 & 0x3ffffffffffffffe;
      lVar15 = 0;
      lVar14 = 0;
      puVar10 = puVar3 + uVar12;
      plVar13 = puVar3 + 1;
      uVar11 = uVar12;
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
        uVar11 = uVar11 - 2;
        lVar15 = lVar2 + lVar15 + *plVar4;
        lVar14 = lVar8 + lVar14 + *plVar6;
        plVar13 = plVar13 + 2;
      } while (uVar11 != 0);
      uVar11 = lVar14 + lVar15;
      if (uVar1 == uVar12) goto LAB_0133b6f4;
    }
    do {
      plVar13 = (long *)*puVar10;
      lVar15 = 0;
      if (plVar13[5] != 0) {
        lVar15 = (plVar13[2] - plVar13[5]) + -0x18;
      }
      puVar10 = puVar10 + 1;
      uVar11 = lVar15 + uVar11 + *plVar13;
    } while (puVar5 != puVar10);
  }
LAB_0133b6f4:
  if (uVar11 <= (ulong)in_x0[6]) {
    uVar11 = in_x0[6];
  }
  return uVar11;
}

