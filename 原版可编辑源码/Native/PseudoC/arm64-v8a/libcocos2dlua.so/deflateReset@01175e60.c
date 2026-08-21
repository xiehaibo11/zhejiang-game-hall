
undefined8 deflateReset(long param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  void *__s;
  size_t __n;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  
  if ((((param_1 == 0) || (lVar7 = *(long *)(param_1 + 0x38), lVar7 == 0)) ||
      (*(long *)(param_1 + 0x40) == 0)) || (*(long *)(param_1 + 0x48) == 0)) {
    uVar4 = 0xfffffffe;
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x58) = 2;
    iVar1 = *(int *)(lVar7 + 0x2c);
    *(undefined4 *)(lVar7 + 0x28) = 0;
    *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar7 + 0x10);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
      *(int *)(lVar7 + 0x2c) = iVar1;
    }
    uVar5 = 0x2a;
    if (iVar1 == 0) {
      uVar5 = 0x71;
    }
    *(undefined4 *)(lVar7 + 8) = uVar5;
    if (iVar1 == 2) {
      uVar4 = crc32();
    }
    else {
      uVar4 = adler32(0,0,0);
    }
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    *(undefined4 *)(lVar7 + 0x40) = 0;
    FUN_0117bde0(lVar7);
    lVar6 = *(long *)(param_1 + 0x38);
    __s = *(void **)(lVar6 + 0x68);
    __n = (ulong)(*(int *)(lVar6 + 0x74) - 1) * 2;
    *(ulong *)(lVar6 + 0x58) = (ulong)*(uint *)(lVar6 + 0x44) << 1;
    *(undefined2 *)((long)__s + __n) = 0;
    memset(__s,0,__n);
    *(undefined4 *)(lVar6 + 0xa4) = 0;
    *(undefined4 *)(lVar6 + 0xa8) = 2;
    *(undefined4 *)(lVar6 + 0x90) = 2;
    lVar7 = (long)*(int *)(lVar6 + 0xb4) * 0x10;
    uVar2 = *(ushort *)(&DAT_0172d35e + lVar7);
    uVar3 = *(ushort *)(&DAT_0172d35a + lVar7);
    *(undefined8 *)(lVar6 + 0x98) = 0;
    uVar4 = 0;
    *(uint *)(lVar6 + 0xac) = (uint)uVar2;
    *(uint *)(lVar6 + 0xb0) = (uint)uVar3;
    uVar2 = *(ushort *)(&DAT_0172d358 + lVar7);
    uVar3 = *(ushort *)(&DAT_0172d35c + lVar7);
    *(undefined8 *)(lVar6 + 0x88) = 0;
    *(undefined4 *)(lVar6 + 0x171c) = 0;
    *(undefined4 *)(lVar6 + 0x70) = 0;
    *(uint *)(lVar6 + 0xbc) = (uint)uVar2;
    *(uint *)(lVar6 + 0xc0) = (uint)uVar3;
  }
  return uVar4;
}

