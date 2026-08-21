
/* v8::internal::DependentCode::New(v8::internal::Isolate*,
   v8::internal::DependentCode::DependencyGroup, v8::internal::MaybeObjectHandle const&,
   v8::internal::Handle<v8::internal::DependentCode>) */

ulong * v8::internal::DependentCode::New(undefined8 param_1,int param_2,int *param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar1 = (ulong *)Factory::NewWeakFixedArray(param_1,3,1);
  uVar2 = *param_4;
  uVar5 = *puVar1;
  *(int *)(uVar5 + 7) = (int)uVar2;
  if (((int)uVar2 != 3) && ((uVar2 & 1) != 0)) {
    uVar4 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 7,uVar2 & 0xfffffffffffffffd);
      uVar4 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 7,uVar2 & 0xfffffffffffffffd);
    }
  }
  *(uint *)(*puVar1 + 0xb) = param_2 << 1 | 0x10;
  uVar2 = *puVar1;
  puVar3 = *(ulong **)(param_3 + 2);
  if (*param_3 == 0) {
    if (puVar3 == (ulong *)0x0) goto LAB_01074fa8;
    uVar5 = *puVar3 | 2;
  }
  else {
    if (puVar3 == (ulong *)0x0) {
LAB_01074fa8:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar5 = *puVar3;
  }
  *(int *)(uVar2 + 0xf) = (int)uVar5;
  if (((int)uVar5 != 3) && ((uVar5 & 1) != 0)) {
    uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar2,uVar2 + 0xf,uVar5 & 0xfffffffffffffffd);
      uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar2,uVar2 + 0xf,uVar5 & 0xfffffffffffffffd);
    }
  }
  return puVar1;
}

