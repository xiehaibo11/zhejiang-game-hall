
long FUN_00c10438(long *param_1,uint *param_2,ulong param_3)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  ulong *puVar5;
  undefined4 *__addr;
  short *__s;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  
  uVar8 = *param_2;
  if ((uVar8 >> 0x1c != 2) || (param_2[1] != 8)) {
    return 0;
  }
  lVar6 = *param_1;
  do {
    lVar12 = (ulong)(ushort)uVar8 * 0x18;
    lVar1 = lVar6 + lVar12;
    uVar8 = *(uint *)(lVar6 + lVar12);
  } while (uVar8 >> 0x1c == 8);
  uVar9 = uVar8;
  if (uVar8 >> 0x1c != 6) {
    return 0;
  }
  do {
    lVar12 = (ulong)(ushort)uVar9 * 0x18;
    uVar9 = *(uint *)(lVar6 + lVar12);
    uVar4 = uVar9 >> 0x1c;
  } while (uVar4 == 8);
  uVar3 = *(ushort *)(lVar1 + 8);
  if ((1 < uVar4 - 4) && (uVar4 != 2)) {
    if (uVar4 != 0) {
      return 0;
    }
    if (8 < *(uint *)(lVar6 + lVar12 + 4)) {
      return 0;
    }
  }
  if ((uVar8 >> 0x17 & 1) != 0) {
    return 0;
  }
  if (uVar3 != 0) {
    iVar11 = 0;
    do {
      uVar8 = *(uint *)(lVar6 + (ulong)uVar3 * 0x18);
      if (uVar8 >> 0x1c != 8) {
        do {
          lVar12 = (ulong)(ushort)uVar8 * 0x18;
          uVar8 = *(uint *)(lVar6 + lVar12);
          uVar9 = uVar8 >> 0x1c;
        } while (uVar9 == 8);
        if ((uVar9 != 2) && (uVar9 != 5)) {
          if (uVar9 != 0) {
            return 0;
          }
          if (8 < *(uint *)(lVar6 + lVar12 + 4)) {
            return 0;
          }
        }
        iVar11 = iVar11 + 1;
        if (0x10 < iVar11) {
          return 0;
        }
      }
      uVar3 = *(ushort *)(lVar6 + (ulong)uVar3 * 0x18 + 8);
    } while (uVar3 != 0);
  }
  uVar8 = *(uint *)((long)param_1 + 0xcc);
  lVar12 = param_1[0x18];
  if (uVar8 < *(uint *)(param_1 + 0x19)) {
    __s = (short *)(lVar12 + (ulong)uVar8 * 2);
    if (*(short *)(lVar12 + (ulong)uVar8 * 2) == 0) goto LAB_00c10598;
    uVar8 = uVar8 + 1;
    __s = (short *)(lVar12 + (ulong)uVar8 * 2);
    for (; uVar8 < *(uint *)(param_1 + 0x19); uVar8 = uVar8 + 1) {
      if (*__s == 0) goto LAB_00c10598;
      __s = __s + 1;
    }
  }
  if (0x1fb < uVar8) {
LAB_00c1079c:
                    /* WARNING: Subroutine does not return */
    FUN_00bfb3a0(param_1[2],0xe1c);
  }
  if (param_1[0x17] == 0) {
    __addr = mmap((void *)0x0,0x1000,3,0x22,-1,0);
    if (__addr == (undefined4 *)0xffffffffffffffff) goto LAB_00c1079c;
    param_1[0x17] = (long)__addr;
    lVar10 = param_1[3];
    __addr[3] = 0xd503201f;
    *__addr = 0x5800008b;
    __addr[1] = 0x580000aa;
    iVar11 = 0;
    __addr[2] = 0xd61f0160;
    *(code **)(__addr + 4) = FUN_00c18bf0;
    *(long *)(__addr + 6) = lVar10;
    puVar7 = __addr + 9;
    do {
      uVar9 = iVar11 << 5;
      iVar11 = iVar11 + 1;
      puVar7[-1] = uVar9 | 0x52800009;
      *puVar7 = (uint)((ulong)((long)__addr - (long)puVar7) >> 2) & 0x3ffffff | 0x14000000;
      puVar7 = puVar7 + 2;
    } while (iVar11 != 0x1fc);
    __clear_cache(__addr,__addr + 0x400);
    mprotect(__addr,0x1000,5);
  }
  lVar12 = FUN_00c1a384(param_1[2],lVar12,param_1 + 0x19,0x1fc,2);
  __s = (short *)(lVar12 + (ulong)uVar8 * 2);
  param_1[0x18] = lVar12;
  memset(__s,0,(ulong)((int)param_1[0x19] - uVar8) << 1);
LAB_00c10598:
  lVar12 = param_1[5];
  *__s = (short)(lVar1 - lVar6 >> 3) * -0x5555;
  *(uint *)((long)param_1 + 0xcc) = uVar8 + 1;
  if (uVar8 < *(uint *)(lVar12 + 0x30)) {
    *(ulong *)(*(long *)(lVar12 + 0x10) + (long)(int)uVar8 * 8) = param_3 | 0xfffb800000000000;
    bVar2 = *(byte *)(lVar12 + 8);
  }
  else {
    puVar5 = (ulong *)FUN_00c1c648(param_1[2],lVar12,uVar8);
    *puVar5 = param_3 | 0xfffb800000000000;
    bVar2 = *(byte *)(lVar12 + 8);
  }
  if ((bVar2 >> 2 & 1) != 0) {
    lVar6 = *(long *)(param_1[2] + 0x10);
    *(byte *)(lVar12 + 8) = bVar2 & 0xfb;
    *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(lVar6 + 0x50);
    *(long *)(lVar6 + 0x50) = lVar12;
  }
  return param_1[0x17] + ((ulong)(uVar8 + 4) & 0x1fffffff) * 8;
}

