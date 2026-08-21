
int FUN_0012e5fc(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  void *__s;
  ulong uVar5;
  long lVar6;
  
  iVar4 = FUN_0012e954();
  if (iVar4 == 0) {
    lVar6 = *(long *)(param_1 + 0x38);
    __s = *(void **)(lVar6 + 0x78);
    uVar5 = (ulong)(*(int *)(lVar6 + 0x84) - 1);
    *(ulong *)(lVar6 + 0x68) = (ulong)*(uint *)(lVar6 + 0x50) << 1;
    *(undefined2 *)((long)__s + uVar5 * 2) = 0;
    memset(__s,0,uVar5 << 1);
    lVar1 = (long)*(int *)(lVar6 + 0xc4) * 0x10;
    *(undefined4 *)(lVar6 + 0xa0) = 2;
    uVar2 = *(ushort *)(&DAT_00166f68 + lVar1);
    uVar3 = *(ushort *)(&DAT_00166f6c + lVar1);
    *(undefined8 *)(lVar6 + 0x98) = 0;
    *(undefined4 *)(lVar6 + 0x172c) = 0;
    *(undefined8 *)(lVar6 + 0xa8) = 0;
    *(uint *)(lVar6 + 0xcc) = (uint)uVar2;
    *(uint *)(lVar6 + 0xd0) = (uint)uVar3;
    uVar2 = *(ushort *)(&DAT_00166f6a + lVar1);
    uVar3 = *(ushort *)(&DAT_00166f6e + lVar1);
    *(undefined8 *)(lVar6 + 0xb4) = 0x200000000;
    *(undefined4 *)(lVar6 + 0x80) = 0;
    *(uint *)(lVar6 + 0xbc) = (uint)uVar3;
    *(uint *)(lVar6 + 0xc0) = (uint)uVar2;
  }
  return iVar4;
}

