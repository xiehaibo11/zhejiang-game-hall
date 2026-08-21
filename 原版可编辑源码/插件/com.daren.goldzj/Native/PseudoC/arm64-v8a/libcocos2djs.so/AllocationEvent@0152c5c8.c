
/* v8::internal::AllocationTracker::AllocationEvent(unsigned long, int) */

void __thiscall
v8::internal::AllocationTracker::AllocationEvent(AllocationTracker *this,ulong param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  Heap *pHVar8;
  ulong uVar9;
  HeapObjectsMap *this_00;
  FunctionInfo *pFVar10;
  FunctionInfo *local_618;
  ulong uStack_610;
  StackFrameIterator aSStack_608 [1416];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pHVar8 = *(Heap **)(*(long *)this + 0x78);
  Heap::CreateFillerObjectAt(pHVar8,param_1,param_2,1,1);
  StackFrameIterator::StackFrameIterator(aSStack_608,(Isolate *)(pHVar8 + -0x8850));
  if ((local_80 != (long *)0x0) &&
     (JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_608),
     local_80 != (long *)0x0)) {
    uVar9 = 0;
    do {
      uVar5 = (**(code **)(*local_80 + 0x98))();
      local_618 = (FunctionInfo *)(uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb));
      this_00 = *(HeapObjectsMap **)this;
      pFVar10 = local_618 + -1;
      uVar3 = HeapObject::SizeFromMap
                        ((HeapObject *)&local_618,
                         uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(local_618 + -1));
      uVar4 = HeapObjectsMap::FindOrAddEntry(this_00,(ulong)pFVar10,uVar3,false);
      uVar4 = AddFunctionInfo(this,local_618,uVar4);
      *(undefined4 *)(this + uVar9 * 4 + 0x48) = uVar4;
      uVar9 = uVar9 + 1;
      JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_608);
      if (0x3f < uVar9) break;
    } while (local_80 != (long *)0x0);
    if ((int)uVar9 != 0) goto LAB_0152c774;
  }
  if (*(int *)(pHVar8 + -0x5bf0) == 5) {
    iVar7 = *(int *)(this + 400);
    if (iVar7 == 0) {
      local_618 = operator_new(0x28);
      *(undefined4 *)(local_618 + 8) = 0;
      *(undefined1 **)(local_618 + 0x10) = &DAT_0189703a;
      *(undefined8 *)(local_618 + 0x18) = 0xffffffff00000000;
      *(undefined4 *)(local_618 + 0x20) = 0xffffffff;
      *(char **)local_618 = "(V8 API)";
      puVar1 = *(undefined8 **)(this + 0x150);
      *(int *)(this + 400) = (int)((ulong)((long)puVar1 - *(long *)(this + 0x148)) >> 3);
      if (*(undefined8 **)(this + 0x158) == puVar1) {
        std::__ndk1::
        vector<v8::internal::AllocationTracker::FunctionInfo*,std::__ndk1::allocator<v8::internal::AllocationTracker::FunctionInfo*>>
        ::__push_back_slow_path<v8::internal::AllocationTracker::FunctionInfo*const&>
                  ((vector<v8::internal::AllocationTracker::FunctionInfo*,std::__ndk1::allocator<v8::internal::AllocationTracker::FunctionInfo*>>
                    *)(this + 0x148),&local_618);
        iVar7 = *(int *)(this + 400);
      }
      else {
        *puVar1 = local_618;
        *(long *)(this + 0x150) = *(long *)(this + 0x150) + 8;
        iVar7 = *(int *)(this + 400);
      }
      if (iVar7 == 0) goto LAB_0152c770;
    }
    uVar9 = 1;
    *(int *)(this + 0x48) = iVar7;
  }
  else {
LAB_0152c770:
    uVar9 = 0;
  }
LAB_0152c774:
  local_618 = (FunctionInfo *)(this + 0x48);
  uStack_610 = uVar9 & 0xffffffff;
  lVar6 = AllocationTraceTree::AddPathFromEnd
                    ((AllocationTraceTree *)(this + 0x10),(Vector *)&local_618);
  *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + param_2;
  *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
  AddressToTraceMap::AddRange
            ((AddressToTraceMap *)(this + 0x198),param_1,param_2,*(uint *)(lVar6 + 0x14));
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

