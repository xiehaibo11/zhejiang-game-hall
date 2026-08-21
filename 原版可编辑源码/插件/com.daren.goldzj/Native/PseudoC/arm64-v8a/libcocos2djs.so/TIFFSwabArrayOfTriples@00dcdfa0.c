
void TIFFSwabArrayOfTriples(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (0 < (long)param_2) {
    uVar1 = 0xfffffffffffffffe;
    if (-2 < (long)~param_2) {
      uVar1 = ~param_2;
    }
    if (uVar1 + param_2 < 0xfffffffffffffffe) {
      uVar1 = uVar1 + param_2 + 2;
      uVar6 = uVar1 & 0xfffffffffffffffe;
      if (uVar6 != 0) {
        param_2 = param_2 - uVar6;
        puVar4 = (undefined1 *)(param_1 + 2);
        uVar7 = uVar6;
        do {
          uVar2 = *puVar4;
          uVar3 = puVar4[3];
          uVar7 = uVar7 - 2;
          *puVar4 = puVar4[-2];
          puVar4[3] = puVar4[1];
          puVar4[-2] = uVar2;
          puVar4[1] = uVar3;
          puVar4 = puVar4 + 6;
        } while (uVar7 != 0);
        param_1 = param_1 + uVar6 * 3;
        if (uVar1 == uVar6) {
          return;
        }
      }
    }
    puVar4 = (undefined1 *)(param_1 + 2);
    lVar5 = param_2 + 1;
    do {
      uVar2 = *puVar4;
      lVar5 = lVar5 + -1;
      *puVar4 = puVar4[-2];
      puVar4[-2] = uVar2;
      puVar4 = puVar4 + 3;
    } while (1 < lVar5);
  }
  return;
}

