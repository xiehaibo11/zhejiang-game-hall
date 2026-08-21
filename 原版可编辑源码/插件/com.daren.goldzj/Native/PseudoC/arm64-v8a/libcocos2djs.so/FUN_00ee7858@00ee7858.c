
void FUN_00ee7858(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = **(ulong **)(param_1 + 0x50);
  if ((*(uint *)(uVar2 + 0x17) & 0xfffffffe) == 6) {
    uVar2 = *(ulong *)((uVar2 & 0xffffffff00000000) + 0x420);
  }
  else {
    uVar2 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0x2b);
  }
  if (*(int *)(uVar2 + 3) < 2) {
    puVar1 = (ulong *)v8::internal::Factory::NewWeakFixedArray
                                (param_2,*(int *)(param_1 + 0x48) + 1,0);
    uVar2 = *puVar1;
    uVar4 = **(ulong **)(param_1 + 0x50);
    *(int *)(uVar4 + 0x2b) = (int)uVar2;
    if ((uVar2 & 1) != 0) {
      uVar3 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar3 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar4,uVar4 + 0x2b,uVar2);
        uVar3 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0x2b,uVar2);
        return;
      }
    }
  }
  return;
}

