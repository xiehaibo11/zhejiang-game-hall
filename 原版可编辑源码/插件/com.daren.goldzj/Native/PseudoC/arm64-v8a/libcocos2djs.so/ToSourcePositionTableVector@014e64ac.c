
/* v8::internal::SourcePositionTableBuilder::ToSourcePositionTableVector() */

void v8::internal::SourcePositionTableBuilder::ToSourcePositionTableVector(void)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long in_x0;
  undefined1 *puVar4;
  undefined8 *in_x8;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar7;
  
  puVar7 = *(undefined1 **)(in_x0 + 8);
  puVar1 = *(undefined1 **)(in_x0 + 0x10);
  if (puVar7 == puVar1) {
    *in_x8 = 0;
    in_x8[1] = 0;
    return;
  }
  uVar2 = (long)puVar1 - (long)puVar7;
  if (uVar2 == 0) {
    puVar4 = (undefined1 *)0x0;
    puVar5 = puVar4;
  }
  else {
    puVar4 = operator_new__(uVar2);
    puVar5 = puVar4;
    if ((0x1f < uVar2) && ((puVar1 <= puVar4 || (puVar4 + uVar2 <= puVar7)))) {
      uVar8 = uVar2 & 0xffffffffffffffe0;
      puVar9 = (undefined8 *)(puVar7 + 0x10);
      puVar10 = (undefined8 *)(puVar4 + 0x10);
      uVar11 = uVar8;
      do {
        puVar3 = puVar9 + -1;
        uVar12 = puVar9[-2];
        uVar14 = puVar9[1];
        uVar13 = *puVar9;
        puVar9 = puVar9 + 4;
        uVar11 = uVar11 - 0x20;
        puVar10[-1] = *puVar3;
        puVar10[-2] = uVar12;
        puVar10[1] = uVar14;
        *puVar10 = uVar13;
        puVar10 = puVar10 + 4;
      } while (uVar11 != 0);
      puVar5 = puVar4 + uVar8;
      puVar7 = puVar7 + uVar8;
      if (uVar2 == uVar8) goto LAB_014e6560;
    }
  }
  do {
    puVar6 = puVar7 + 1;
    *puVar5 = *puVar7;
    puVar5 = puVar5 + 1;
    puVar7 = puVar6;
  } while (puVar1 != puVar6);
LAB_014e6560:
  *in_x8 = puVar4;
  in_x8[1] = uVar2;
  return;
}

