
/* v8::internal::compiler::ZoneStats::StatsScope::GetTotalAllocatedBytes() */

long __thiscall
v8::internal::compiler::ZoneStats::StatsScope::GetTotalAllocatedBytes(StatsScope *this)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long in_x4;
  long lVar9;
  long in_x5;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  
  plVar10 = *(long **)this;
  puVar3 = (undefined8 *)*plVar10;
  puVar5 = (undefined8 *)plVar10[1];
  if (puVar3 == puVar5) {
    lVar12 = 0;
  }
  else {
    uVar1 = ((ulong)((long)puVar5 + (-8 - (long)puVar3)) >> 3) + 1;
    if (uVar1 < 2) {
      lVar12 = 0;
      puVar11 = puVar3;
    }
    else {
      uVar13 = uVar1 & 0x3ffffffffffffffe;
      lVar15 = 0;
      lVar12 = 0;
      puVar11 = puVar3 + uVar13;
      plVar14 = puVar3 + 1;
      uVar16 = uVar13;
      do {
        plVar4 = (long *)plVar14[-1];
        plVar6 = (long *)*plVar14;
        lVar8 = plVar4[5];
        lVar7 = plVar6[5];
        if (lVar8 != 0) {
          in_x4 = plVar4[2];
        }
        if (lVar7 != 0) {
          in_x5 = plVar6[2];
        }
        lVar9 = in_x4 - lVar8;
        in_x5 = in_x5 - lVar7;
        in_x4 = in_x5 + -0x18;
        lVar2 = 0;
        if (lVar8 != 0) {
          lVar2 = lVar9 + -0x18;
        }
        lVar8 = 0;
        if (lVar7 != 0) {
          lVar8 = in_x4;
        }
        uVar16 = uVar16 - 2;
        lVar15 = lVar2 + lVar15 + *plVar4;
        lVar12 = lVar8 + lVar12 + *plVar6;
        plVar14 = plVar14 + 2;
      } while (uVar16 != 0);
      lVar12 = lVar12 + lVar15;
      if (uVar1 == uVar13) goto LAB_0133b418;
    }
    do {
      plVar14 = (long *)*puVar11;
      lVar15 = 0;
      if (plVar14[5] != 0) {
        lVar15 = (plVar14[2] - plVar14[5]) + -0x18;
      }
      puVar11 = puVar11 + 1;
      lVar12 = lVar15 + lVar12 + *plVar14;
    } while (puVar5 != puVar11);
  }
LAB_0133b418:
  return (lVar12 + plVar10[7]) - *(long *)(this + 0x20);
}

