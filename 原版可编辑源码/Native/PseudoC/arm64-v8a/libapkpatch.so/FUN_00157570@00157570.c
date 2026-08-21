
undefined8 * FUN_00157570(long *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  
  pbVar3 = (byte *)*param_1;
  lVar6 = param_1[1] - (long)pbVar3;
  if ((lVar6 != 0) && (*pbVar3 - 0x30 < 10)) {
    uVar9 = 0;
    uVar4 = 0;
    do {
      uVar10 = uVar4;
      uVar7 = uVar9;
      pbVar2 = pbVar3 + uVar10;
      pcVar1 = (char *)(pbVar2 + 1);
      *param_1 = (long)pcVar1;
      lVar8 = (ulong)*pbVar2 + uVar7 * 10;
      uVar9 = lVar8 - 0x30;
      if ((byte *)pcVar1 == (byte *)param_1[1]) break;
      uVar4 = uVar10 + 1;
    } while ((byte)*pcVar1 - 0x30 < 10);
    if (lVar8 - 0x31U < ~uVar10 + lVar6) {
      pbVar11 = pbVar3 + uVar10 + (ulong)*pbVar2 + uVar7 * 10 + -0x2f;
      *param_1 = (long)pbVar11;
      if ((((((uVar9 < 10) || (pbVar2[1] != 0x5f)) || (pbVar3[uVar10 + 2] != 0x47)) ||
           ((pbVar3[uVar10 + 3] != 0x4c || (pbVar3[uVar10 + 4] != 0x4f)))) ||
          ((pbVar3[uVar10 + 5] != 0x42 ||
           ((pbVar3[uVar10 + 6] != 0x41 || (pbVar3[uVar10 + 7] != 0x4c)))))) ||
         ((pbVar3[uVar10 + 8] != 0x5f ||
          ((pbVar3[uVar10 + 9] != 0x5f || (pbVar3[uVar10 + 10] != 0x4e)))))) {
        puVar12 = (undefined8 *)param_1[0x266];
        lVar6 = puVar12[1];
      }
      else {
        puVar12 = (undefined8 *)param_1[0x266];
        pcVar1 = "(anonymous namespace)";
        pbVar11 = (byte *)0x117534;
        lVar6 = puVar12[1];
      }
      if (0xfef < lVar6 + 0x20U) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = 0;
        *puVar5 = puVar12;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
        puVar12 = puVar5;
      }
      puVar5 = (undefined8 *)((long)puVar12 + lVar6 + 0x10);
      *puVar5 = &PTR_FUN_001671f0;
      puVar12[1] = lVar6 + 0x20;
      *(undefined4 *)((long)puVar12 + lVar6 + 0x18) = 0x1010107;
      *(char **)((long)puVar12 + lVar6 + 0x20) = pcVar1;
      *(byte **)((long)puVar12 + lVar6 + 0x28) = pbVar11;
      return puVar5;
    }
  }
  return (undefined8 *)0x0;
}

