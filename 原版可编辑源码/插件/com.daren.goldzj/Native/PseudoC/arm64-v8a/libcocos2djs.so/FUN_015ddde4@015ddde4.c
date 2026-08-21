
undefined4 * FUN_015ddde4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  size_t __n;
  Zone *pZVar3;
  undefined4 *puVar4;
  void *__dest;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  pZVar3 = *(Zone **)(param_1 + 0x70);
  puVar4 = *(undefined4 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar4) < 0x38) {
    puVar4 = (undefined4 *)v8::internal::Zone::NewExpand(pZVar3,0x38);
  }
  else {
    *(undefined4 **)(pZVar3 + 0x10) = puVar4 + 0xe;
  }
  lVar1 = *(long *)(param_1 + 0x90);
  lVar2 = *(long *)(param_1 + 0x98);
  *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = lVar2 - lVar1;
  *puVar4 = 2;
  *(undefined8 *)(puVar4 + 4) = uVar5;
  if ((int)uVar6 == 0) {
    *(undefined8 *)(puVar4 + 0xc) = 0;
  }
  else {
    pZVar3 = *(Zone **)(param_1 + 0x70);
    __n = (uVar6 & 0xffffffff) * 8;
    __dest = *(void **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)__dest) < __n) {
      __dest = (void *)v8::internal::Zone::NewExpand(pZVar3,__n);
    }
    else {
      *(void **)(pZVar3 + 0x10) = (void *)((long)__dest + __n);
    }
    *(void **)(puVar4 + 0xc) = __dest;
    memcpy(__dest,*(void **)(param_2 + 0x30),__n);
  }
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(puVar4 + 10) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(puVar4 + 8) = uVar7;
  *(undefined8 *)(puVar4 + 6) = uVar5;
  return puVar4;
}

