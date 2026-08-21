
undefined8 lua_yield(ulong param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined1 auVar12 [12];
  
  if ((*(ulong *)(param_1 + 0x50) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfaf54(param_1,0x33e);
  }
  bVar1 = *(byte *)(*(long *)(param_1 + 0x10) + 0xc1);
  if ((bVar1 >> 4 & 1) != 0) {
    uVar10 = *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc;
    puVar6 = *(ulong **)(param_1 + 0x28);
    *(byte *)(*(long *)(param_1 + 0x10) + 0xc1) = bVar1 & 0xef;
    puVar11 = puVar6 + 4;
    *puVar6 = (ulong)*(uint *)(uVar10 + 0xc0);
    puVar6[2] = param_1 | 0xfffc800000000000;
    puVar6[1] = (ulong)&LAB_00c18b3c;
    puVar6[3] = (long)puVar11 + (2 - *(long *)(param_1 + 0x20));
    *(ulong **)(param_1 + 0x20) = puVar11;
    *(ulong **)(param_1 + 0x28) = puVar11;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0xb) = 1;
    auVar12 = FUN_00c1745c(uVar10,1);
    lVar2 = auVar12._0_8_;
    if ((*(long *)(lVar2 + 0x50) == 0) && (*(byte *)(lVar2 + 0xb) < 2)) {
      if (*(byte *)(lVar2 + 0xb) == 0) {
        puVar9 = *(undefined8 **)(lVar2 + 0x28);
        puVar7 = puVar9 + -(long)auVar12._8_4_;
        puVar5 = puVar9 + 1;
        *(undefined8 **)(lVar2 + 0x28) = puVar5;
        puVar3 = puVar9;
        if (puVar7 < puVar9) {
          do {
            puVar5 = puVar3 + -1;
            *puVar3 = puVar3[-1];
            puVar3 = puVar5;
          } while (puVar7 < puVar5);
          puVar9 = puVar9 + ~((ulong)((long)puVar9 + (-1 - (long)puVar7)) >> 3);
          puVar5 = puVar9 + 1;
        }
        *puVar9 = 0xffffffffffffffff;
      }
      else {
        puVar5 = (undefined8 *)(*(long *)(lVar2 + 0x28) + (long)auVar12._8_4_ * -8);
      }
      uVar4 = FUN_00c17504(lVar2,puVar5,0,0);
      return uVar4;
    }
    puVar11 = *(ulong **)(lVar2 + 0x20);
    *(ulong **)(lVar2 + 0x28) = puVar11;
    uVar10 = FUN_00bfab64(lVar2,0x52f);
    *puVar11 = uVar10 | 0xfffd800000000000;
    uVar10 = *(long *)(lVar2 + 0x28) + 8;
    *(ulong *)(lVar2 + 0x28) = uVar10;
    if (*(ulong *)(lVar2 + 0x30) <= uVar10) {
      FUN_00bfe164(lVar2);
      return 2;
    }
    return 2;
  }
  uVar10 = *(ulong *)(param_1 + 0x20);
  uVar8 = *(long *)(param_1 + 0x28) + (long)param_2 * -8;
  if (uVar10 < uVar8) {
    if (0 < param_2) {
      lVar2 = 0;
      do {
        *(undefined8 *)(uVar10 + lVar2 * 8) = *(undefined8 *)(uVar8 + lVar2 * 8);
        lVar2 = lVar2 + 1;
      } while (lVar2 != (ulong)(param_2 - 1) + 1);
      uVar10 = uVar10 + lVar2 * 8;
    }
    *(ulong *)(param_1 + 0x28) = uVar10;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  return 0xffffffff;
}

