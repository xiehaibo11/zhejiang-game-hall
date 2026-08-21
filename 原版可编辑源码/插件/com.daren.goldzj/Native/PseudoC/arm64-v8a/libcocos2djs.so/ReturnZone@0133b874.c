
/* v8::internal::compiler::ZoneStats::ReturnZone(v8::internal::Zone*) */

void v8::internal::compiler::ZoneStats::ReturnZone(Zone *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  size_t __n;
  long lVar5;
  Zone *in_x1;
  long lVar6;
  long in_x2;
  long lVar7;
  long in_x3;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  puVar15 = *(undefined8 **)param_1;
  puVar8 = *(undefined8 **)(param_1 + 8);
  if (puVar15 == puVar8) {
    uVar10 = 0;
  }
  else {
    uVar1 = ((ulong)((long)puVar8 + (-8 - (long)puVar15)) >> 3) + 1;
    if (uVar1 < 2) {
      uVar10 = 0;
      puVar9 = puVar15;
    }
    else {
      uVar11 = uVar1 & 0x3ffffffffffffffe;
      lVar14 = 0;
      lVar13 = 0;
      puVar9 = puVar15 + uVar11;
      plVar12 = puVar15 + 1;
      uVar10 = uVar11;
      do {
        plVar3 = (long *)plVar12[-1];
        plVar4 = (long *)*plVar12;
        lVar6 = plVar3[5];
        lVar5 = plVar4[5];
        if (lVar6 != 0) {
          in_x2 = plVar3[2];
        }
        if (lVar5 != 0) {
          in_x3 = plVar4[2];
        }
        lVar7 = in_x2 - lVar6;
        in_x3 = in_x3 - lVar5;
        in_x2 = in_x3 + -0x18;
        lVar2 = 0;
        if (lVar6 != 0) {
          lVar2 = lVar7 + -0x18;
        }
        lVar6 = 0;
        if (lVar5 != 0) {
          lVar6 = in_x2;
        }
        uVar10 = uVar10 - 2;
        lVar14 = lVar2 + lVar14 + *plVar3;
        lVar13 = lVar6 + lVar13 + *plVar4;
        plVar12 = plVar12 + 2;
      } while (uVar10 != 0);
      uVar10 = lVar13 + lVar14;
      if (uVar1 == uVar11) goto LAB_0133b98c;
    }
    do {
      plVar12 = (long *)*puVar9;
      lVar14 = 0;
      if (plVar12[5] != 0) {
        lVar14 = (plVar12[2] - plVar12[5]) + -0x18;
      }
      puVar9 = puVar9 + 1;
      uVar10 = lVar14 + uVar10 + *plVar12;
    } while (puVar8 != puVar9);
  }
LAB_0133b98c:
  puVar9 = *(undefined8 **)(param_1 + 0x20);
  if (uVar10 <= *(ulong *)(param_1 + 0x30)) {
    uVar10 = *(ulong *)(param_1 + 0x30);
  }
  *(ulong *)(param_1 + 0x30) = uVar10;
  puVar16 = *(undefined8 **)(param_1 + 0x18);
  if (*(undefined8 **)(param_1 + 0x18) != puVar9) {
    do {
      puVar15 = puVar16 + 1;
      StatsScope::ZoneReturned((StatsScope *)*puVar16,in_x1);
      puVar16 = puVar15;
    } while (puVar9 != puVar15);
    puVar15 = *(undefined8 **)param_1;
    puVar8 = *(undefined8 **)(param_1 + 8);
  }
  if ((puVar15 != puVar8) && ((Zone *)*puVar15 != in_x1)) {
    puVar9 = puVar15;
    do {
      puVar15 = puVar8;
      if (puVar8 + -1 == puVar9) break;
      puVar16 = puVar9 + 1;
      puVar15 = puVar9 + 1;
      puVar9 = puVar15;
    } while ((Zone *)*puVar16 != in_x1);
  }
  __n = (long)puVar8 - (long)(puVar15 + 1);
  if (__n != 0) {
    memmove(puVar15,puVar15 + 1,__n);
  }
  *(undefined8 **)(param_1 + 8) = puVar15 + ((long)__n >> 3);
  lVar14 = 0;
  if (*(long *)(in_x1 + 0x28) != 0) {
    lVar14 = (*(long *)(in_x1 + 0x10) - *(long *)(in_x1 + 0x28)) + -0x18;
  }
  *(long *)(param_1 + 0x38) = *(long *)in_x1 + lVar14 + *(long *)(param_1 + 0x38);
  Zone::~Zone(in_x1);
  operator_delete(in_x1);
  return;
}

