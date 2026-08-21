
/* v8::internal::compiler::CodeGenerator::GetProtectedInstructions() */

void v8::internal::compiler::CodeGenerator::GetProtectedInstructions(void)

{
  long lVar1;
  undefined8 *puVar2;
  long in_x0;
  undefined8 *puVar3;
  undefined8 *in_x8;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar9 = *(undefined8 **)(in_x0 + 0x438);
  puVar8 = *(undefined8 **)(in_x0 + 0x440);
  lVar1 = (long)puVar8 - (long)puVar9;
  if (lVar1 == 0) {
    puVar3 = (undefined8 *)0x0;
    *in_x8 = 0;
    in_x8[1] = 0;
  }
  else {
    uVar10 = lVar1 >> 3;
    uVar4 = uVar10 << 3;
    if (uVar10 >> 0x3d != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    puVar3 = operator_new__(uVar4);
    *in_x8 = puVar3;
    in_x8[1] = uVar10;
  }
  if (puVar9 != puVar8) {
    uVar4 = (lVar1 - 8U >> 3) + 1;
    if ((3 < uVar4) &&
       ((lVar1 = (lVar1 - 8U & 0xfffffffffffffff8) + 8,
        (undefined8 *)((long)puVar9 + lVar1) <= puVar3 ||
        ((undefined8 *)((long)puVar3 + lVar1) <= puVar9)))) {
      uVar5 = uVar4 & 0x3ffffffffffffffc;
      puVar6 = puVar9 + 2;
      puVar9 = puVar9 + uVar5;
      puVar7 = puVar3 + 2;
      uVar10 = uVar5;
      do {
        puVar2 = puVar6 + -1;
        uVar11 = puVar6[-2];
        uVar13 = puVar6[1];
        uVar12 = *puVar6;
        puVar6 = puVar6 + 4;
        uVar10 = uVar10 - 4;
        puVar7[-1] = *puVar2;
        puVar7[-2] = uVar11;
        puVar7[1] = uVar13;
        *puVar7 = uVar12;
        puVar7 = puVar7 + 4;
      } while (uVar10 != 0);
      puVar3 = puVar3 + uVar5;
      if (uVar4 == uVar5) {
        return;
      }
    }
    do {
      puVar6 = puVar9 + 1;
      *puVar3 = *puVar9;
      puVar3 = puVar3 + 1;
      puVar9 = puVar6;
    } while (puVar8 != puVar6);
  }
  return;
}

