
/* v8::internal::MaterializedObjectStore::StackIdToIndex(unsigned long) */

undefined4 __thiscall
v8::internal::MaterializedObjectStore::StackIdToIndex(MaterializedObjectStore *this,ulong param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined4 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  puVar1 = *(ulong **)(this + 8);
  puVar2 = *(ulong **)(this + 0x10);
  puVar5 = puVar1;
  if (puVar1 != puVar2) {
    uVar6 = *puVar1;
    puVar4 = puVar1;
    while ((puVar5 = puVar4, uVar6 != param_1 &&
           (puVar4 = puVar4 + 1, puVar5 = puVar2, puVar2 != puVar4))) {
      uVar6 = *puVar4;
    }
  }
  uVar3 = (undefined4)((ulong)((long)puVar5 - (long)puVar1) >> 3);
  if (puVar5 == puVar2) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

