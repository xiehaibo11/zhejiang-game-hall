
/* std::__ndk1::__itoa::__u64toa(unsigned long, char*) */

undefined2 * std::__ndk1::__itoa::__u64toa(ulong param_1,char *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined2 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  if (param_1 < 100000000) {
    if (((uint)(param_1 >> 4) & 0xfffffff) < 0x271) {
      puVar9 = (undefined2 *)FUN_0121317c(param_2,param_1 & 0xffffffff);
      return puVar9;
    }
    puVar9 = (undefined2 *)FUN_0121317c(param_2,(param_1 & 0xffffffff) / 10000);
    uVar7 = (int)param_1 + (int)((param_1 & 0xffffffff) / 10000) * -10000;
    uVar11 = (uVar7 & 0xffff) / 100;
    uVar1 = *(undefined2 *)(&DAT_014a4a84 + ((ulong)((uVar7 + uVar11 * -100) * 2) & 0xfffe));
    *puVar9 = *(undefined2 *)(&DAT_014a4a84 + (uVar11 << 1));
    puVar9[1] = uVar1;
    puVar9 = puVar9 + 2;
  }
  else if (param_1 < 10000000000000000) {
    uVar8 = param_1 / 100000000;
    uVar7 = (int)param_1 + (int)uVar8 * -100000000;
    if (((uint)(uVar8 >> 4) & 0xfffffff) < 0x271) {
      puVar9 = (undefined2 *)FUN_0121317c(param_2,uVar8 & 0xffffffff);
    }
    else {
      puVar9 = (undefined2 *)FUN_0121317c(param_2,(uVar8 & 0xffffffff) / 10000);
      uVar11 = (int)uVar8 + (int)((uVar8 & 0xffffffff) / 10000) * -10000;
      uVar12 = (uVar11 & 0xffff) / 100;
      uVar1 = *(undefined2 *)(&DAT_014a4a84 + ((ulong)((uVar11 + uVar12 * -100) * 2) & 0xfffe));
      *puVar9 = *(undefined2 *)(&DAT_014a4a84 + (uVar12 << 1));
      puVar9[1] = uVar1;
      puVar9 = puVar9 + 2;
    }
    iVar10 = (int)(((ulong)uVar7 / 10000 & 0xffff) / 100);
    uVar1 = *(undefined2 *)(&DAT_014a4a84 + ((ulong)((uVar7 / 10000 + iVar10 * -100) * 2) & 0xfffe))
    ;
    uVar5 = *(undefined2 *)(&DAT_014a4a84 + ((uVar7 % 10000) / 100 << 1));
    uVar6 = *(undefined2 *)(&DAT_014a4a84 + ((uVar7 % 10000) % 100) * 2);
    *puVar9 = *(undefined2 *)(&DAT_014a4a84 + (uint)(iVar10 << 1));
    puVar9[1] = uVar1;
    puVar9[2] = uVar5;
    puVar9[3] = uVar6;
    puVar9 = puVar9 + 4;
  }
  else {
    puVar9 = (undefined2 *)FUN_0121317c(param_2,param_1 / 10000000000000000);
    uVar8 = (param_1 % 10000000000000000) / 100000000;
    uVar14 = (param_1 % 10000000000000000) % 100000000;
    iVar17 = (int)(uVar8 / 10000);
    uVar7 = (int)uVar8 + iVar17 * -10000;
    iVar16 = (int)(uVar14 / 10000);
    uVar11 = (int)uVar14 + iVar16 * -10000;
    iVar15 = (int)(uVar8 / 1000000);
    iVar10 = (int)(uVar14 / 1000000);
    uVar13 = (uVar7 & 0xffff) / 100;
    uVar12 = (uVar11 & 0xffff) / 100;
    uVar1 = *(undefined2 *)(&DAT_014a4a84 + (uint)(iVar10 << 1));
    uVar5 = *(undefined2 *)(&DAT_014a4a84 + ((ulong)(uint)((iVar17 + iVar15 * -100) * 2) & 0xfffe));
    uVar6 = *(undefined2 *)(&DAT_014a4a84 + (uVar13 << 1));
    uVar2 = *(undefined2 *)(&DAT_014a4a84 + ((ulong)(uint)((iVar16 + iVar10 * -100) * 2) & 0xfffe));
    uVar3 = *(undefined2 *)(&DAT_014a4a84 + (uVar12 << 1));
    *puVar9 = *(undefined2 *)(&DAT_014a4a84 + (uint)(iVar15 << 1));
    uVar4 = *(undefined2 *)(&DAT_014a4a84 + ((ulong)((uVar7 + uVar13 * -100) * 2) & 0xfffe));
    puVar9[4] = uVar1;
    uVar1 = *(undefined2 *)(&DAT_014a4a84 + ((ulong)((uVar11 + uVar12 * -100) * 2) & 0xfffe));
    puVar9[1] = uVar5;
    puVar9[2] = uVar6;
    puVar9[5] = uVar2;
    puVar9[6] = uVar3;
    puVar9[3] = uVar4;
    puVar9[7] = uVar1;
    puVar9 = puVar9 + 8;
  }
  return puVar9;
}

