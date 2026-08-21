
undefined8 tls_construct_next_proto(long param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  ulong __n;
  undefined2 *puVar4;
  
  bVar2 = *(byte *)(param_1 + 0x2e0);
  __n = (ulong)bVar2;
  puVar4 = *(undefined2 **)(*(long *)(param_1 + 0x78) + 8);
  *(byte *)(puVar4 + 2) = bVar2;
  uVar3 = 0x20 - (bVar2 + 2 & 0x1f);
  memcpy((void *)((long)puVar4 + 5),*(void **)(param_1 + 0x2d8),__n);
  *(char *)((long)puVar4 + __n + 5) = (char)uVar3;
  memset((void *)((long)puVar4 + __n + 6),0,(ulong)uVar3);
  *puVar4 = 0x43;
  iVar1 = bVar2 + uVar3 + 2;
  *(char *)((long)puVar4 + 3) = (char)iVar1;
  *(char *)(puVar4 + 1) = (char)((uint)iVar1 >> 8);
  *(uint *)(param_1 + 0x88) = bVar2 + uVar3 + 6;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return 1;
}

