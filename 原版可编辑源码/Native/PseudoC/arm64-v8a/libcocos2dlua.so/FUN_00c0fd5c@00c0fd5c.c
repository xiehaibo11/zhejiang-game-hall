
undefined8 * FUN_00c0fd5c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *__s;
  uint *puVar6;
  undefined8 uVar7;
  size_t sVar8;
  long lVar9;
  int iVar10;
  uint *puVar11;
  char *__s_00;
  
  __s = (undefined8 *)FUN_00c1a2b4(param_1,0,0,0x1d8);
  iVar10 = 0;
  puVar6 = (uint *)FUN_00c1a2b4(param_1,0,0,0xc00);
  puVar11 = &DAT_01410ad0;
  memset(__s,0,0x1d8);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  *__s = puVar6;
  *(undefined4 *)((long)__s + 0xc) = 0x80;
  __s[3] = uVar7;
  *(undefined4 *)(__s + 1) = 0x60;
  __s_00 = "va_list";
  do {
    while( true ) {
      uVar1 = *puVar11;
      *(undefined2 *)(puVar6 + 2) = 0;
      uVar3 = uVar1 >> 0x1c;
      uVar5 = (uint)((long)((ulong)uVar1 << 0x30) >> 0x3a);
      puVar6[1] = uVar5;
      uVar2 = (uVar5 ^ uVar1 & 0xffff03ff) - (uVar5 >> 0x12 | uVar5 << 0xe);
      *puVar6 = uVar1 & 0xffff03ff;
      if ((uVar3 != 7) &&
         (uVar4 = (ulong)((uVar2 ^ uVar5 >> 0xd) - (uVar2 >> 0x13)) & 0x7f, uVar3 != 0xd)) break;
      puVar11 = puVar11 + 1;
      sVar8 = strlen(__s_00);
      lVar9 = FUN_00bfba1c(param_1,__s_00,sVar8);
      uVar1 = (uint)lVar9 + 0xfb3ee249;
      *(byte *)(lVar9 + 8) = *(byte *)(lVar9 + 8) | 0x20;
      uVar2 = (uVar1 ^ (uint)lVar9) - (uVar1 >> 0x12 | uVar1 * 0x4000);
      *(long *)(puVar6 + 4) = lVar9;
      uVar4 = (ulong)((uVar2 ^ uVar1 >> 0xd) - (uVar2 >> 0x13)) & 0x7f;
      *(undefined2 *)((long)puVar6 + 10) = *(undefined2 *)((long)__s + uVar4 * 2 + 0xd8);
      *(short *)((long)__s + uVar4 * 2 + 0xd8) = (short)iVar10;
      iVar10 = iVar10 + 1;
      puVar6 = puVar6 + 6;
      __s_00 = __s_00 + sVar8 + 1;
      if (iVar10 == 0x60) goto LAB_00c0fedc;
    }
    *(undefined2 *)((long)puVar6 + 10) = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    if (uVar3 != 5) {
      *(undefined2 *)((long)puVar6 + 10) = *(undefined2 *)((long)__s + uVar4 * 2 + 0xd8);
      *(short *)((long)__s + uVar4 * 2 + 0xd8) = (short)iVar10;
    }
    iVar10 = iVar10 + 1;
    puVar6 = puVar6 + 6;
    puVar11 = puVar11 + 1;
  } while (iVar10 != 0x60);
LAB_00c0fedc:
  *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x168) = __s;
  return __s;
}

