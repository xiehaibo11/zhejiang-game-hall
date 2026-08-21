
/* v8::internal::SharedFunctionInfo::DiscardCompiledMetadata(v8::internal::Isolate*,
   std::__ndk1::function<void (v8::internal::HeapObject, v8::internal::CompressedObjectSlot,
   v8::internal::HeapObject)>) */

void __thiscall
v8::internal::SharedFunctionInfo::DiscardCompiledMetadata
          (SharedFunctionInfo *this,long param_1,long param_3)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_48;
  long lStack_40;
  ulong local_38;
  
  uVar1 = *(uint *)(*(ulong *)this + 3);
  if ((uVar1 != 0x84) &&
     (((uVar1 & 1) == 0 ||
      (uVar5 = *(ulong *)this & 0xffffffff00000000,
      1 < *(ushort *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar1) - 1)) - 0x95)))) {
    uVar1 = *(uint *)(*(ulong *)this + 7);
    pIVar2 = (Isolate *)(*(ulong *)this & 0xffffffff00000000);
    if (((uVar1 & 1) == 0) ||
       (local_38 = (ulong)pIVar2 | (ulong)uVar1,
       *(short *)(((ulong)pIVar2 | 7) + (ulong)*(uint *)(local_38 - 1)) != 0x83)) {
      local_38 = ScopeInfo::Empty(pIVar2);
    }
    uVar5 = ScopeInfo::HasOuterScopeInfo((ScopeInfo *)&local_38);
    if ((uVar5 & 1) == 0) {
      uVar5 = *(ulong *)(param_1 + 0xa8);
    }
    else {
      uVar1 = *(uint *)(*(ulong *)this + 7);
      pIVar2 = (Isolate *)(*(ulong *)this & 0xffffffff00000000);
      if (((uVar1 & 1) == 0) ||
         (uVar5 = (ulong)pIVar2 | (ulong)uVar1,
         *(short *)(((ulong)pIVar2 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x83)) {
        uVar5 = ScopeInfo::Empty(pIVar2);
      }
      local_38 = uVar5;
      uVar5 = ScopeInfo::OuterScopeInfo((ScopeInfo *)&local_38);
    }
    *(int *)(*(long *)this + 0xb) = (int)uVar5;
    uVar3 = *(ulong *)this;
    lStack_40 = uVar3 + 0xb;
    if ((uVar5 & 1) != 0) {
      uVar6 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar3,lStack_40,uVar5);
        uVar3 = *(ulong *)this;
        uVar6 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
        lStack_40 = uVar3 + 0xb;
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar3,lStack_40,uVar5);
        uVar3 = *(ulong *)this;
        lStack_40 = uVar3 + 0xb;
      }
    }
    plVar4 = *(long **)(param_3 + 0x20);
    local_48 = uVar5;
    local_38 = uVar3;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_38,&lStack_40,&local_48);
  }
  return;
}

