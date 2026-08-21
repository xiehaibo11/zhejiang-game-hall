
undefined8 FUN_01205bac(Isolate *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  Isolate *local_48;
  ulong *local_28;
  
  uVar1 = *(uint *)(*param_2 + 7);
  uVar5 = *param_2 & 0xffffffff00000000 | (ulong)uVar1;
  local_48 = param_1;
  local_28 = param_2;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x95a0);
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar5;
    if ((uVar1 & 1) == 0) goto LAB_01205cc8;
  }
  else {
    puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    uVar5 = *puVar2;
    if ((uVar5 & 1) == 0) goto LAB_01205cc8;
  }
  if ((int)uVar5 == *(int *)(param_1 + 0xa0)) {
    puVar2 = (ulong *)FUN_01205894(param_1,(long)v8::internal::FLAG_stack_size << 0xb,&local_48,
                                   &local_28);
    uVar4 = *param_2;
    uVar5 = *puVar2;
    *(int *)(uVar4 + 7) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar3 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar4,uVar4 + 7,uVar5);
        uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar4,uVar4 + 7,uVar5);
      }
    }
  }
LAB_01205cc8:
  return **(undefined8 **)(*(long *)(*puVar2 + 3) + 0x18);
}

