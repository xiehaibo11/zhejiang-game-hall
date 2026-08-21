
/* v8::internal::Heap::RecordStats(v8::internal::HeapStats*, bool) */

void __thiscall v8::internal::Heap::RecordStats(Heap *this,HeapStats *param_1,bool param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  void *__dest;
  size_t __n;
  undefined ***local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long *local_70;
  long *local_68;
  undefined **local_60;
  long lStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  **(undefined8 **)param_1 = 0xffffffffdecade00;
  **(undefined8 **)(param_1 + 0xd8) = 0xffffffffdecade01;
  uVar5 = (**(code **)(**(long **)(this + 0x120) + 0x48))();
  **(undefined8 **)(param_1 + 8) = uVar5;
  **(undefined8 **)(param_1 + 0x10) = *(undefined8 *)(*(long *)(this + 0x120) + 0xa8);
  uVar5 = (**(code **)(**(long **)(this + 0xe8) + 0x48))();
  **(undefined8 **)(param_1 + 0x18) = uVar5;
  uVar8 = *(ulong *)(*(long *)(this + 0xe8) + 0x138);
  lVar6 = MemoryChunkLayout::AllocatableMemoryInDataPage();
  **(long **)(param_1 + 0x20) = (uVar8 >> 0x12) * lVar6;
  uVar5 = (**(code **)(**(long **)(this + 0xf0) + 0x50))();
  **(undefined8 **)(param_1 + 0x28) = uVar5;
  **(undefined8 **)(param_1 + 0x30) = *(undefined8 *)(*(long *)(this + 0xf0) + 0xa8);
  uVar5 = (**(code **)(**(long **)(this + 0xf8) + 0x50))();
  **(undefined8 **)(param_1 + 0x38) = uVar5;
  **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)(*(long *)(this + 0xf8) + 0xa8);
  uVar5 = (**(code **)(**(long **)(this + 0x100) + 0x50))();
  **(undefined8 **)(param_1 + 0x48) = uVar5;
  **(undefined8 **)(param_1 + 0x50) = *(undefined8 *)(*(long *)(this + 0x100) + 0xa8);
  uVar5 = (**(code **)(**(long **)(this + 0x108) + 0x48))();
  **(undefined8 **)(param_1 + 0x58) = uVar5;
  uVar5 = (**(code **)(**(long **)(this + 0x110) + 0x48))();
  **(undefined8 **)(param_1 + 0x60) = uVar5;
  GlobalHandles::RecordStats(*(GlobalHandles **)(*(long *)(this + 0x30) + 0x95e0),param_1);
  **(undefined8 **)(param_1 + 0x90) = *(undefined8 *)(*(long *)(this + 0x820) + 0x50);
  uVar9 = *(ulong *)(*(long *)(this + 0x820) + 0x50);
  uVar8 = *(ulong *)(*(long *)(this + 0x820) + 0x48);
  lVar6 = 0;
  if (uVar9 <= uVar8) {
    lVar6 = uVar8 - uVar9;
  }
  **(long **)(param_1 + 0x98) = lVar6 + *(long *)(*(long *)(this + 0x820) + 0x50);
  uVar3 = base::OS::GetLastError();
  **(undefined4 **)(param_1 + 0xc0) = uVar3;
  **(undefined8 **)(param_1 + 0xa0) =
       *(undefined8 *)(*(long *)(*(long *)(this + 0x30) + 0x95d0) + 8);
  **(undefined8 **)(param_1 + 0xa8) =
       *(undefined8 *)(*(long *)(*(long *)(this + 0x30) + 0x95d0) + 0x10);
  if (param_2) {
    HeapObjectIterator::HeapObjectIterator((HeapObjectIterator *)&local_88,this,0);
    lVar6 = CONCAT44(uStack_74,local_78);
    ppuVar7 = (undefined **)HeapObjectIterator::NextObject((HeapObjectIterator *)&local_88);
    if ((lVar6 == 0) || ((int)ppuVar7 == 0)) {
LAB_00f96b2c:
      while (local_60 = ppuVar7, (int)ppuVar7 != 0) {
        lVar6 = (ulong)*(ushort *)
                        (((ulong)ppuVar7 & 0xffffffff00000000 | (ulong)*(uint *)((long)ppuVar7 + -1)
                         ) + 7) * 8;
        *(long *)(*(long *)(param_1 + 0xb0) + lVar6) =
             *(long *)(*(long *)(param_1 + 0xb0) + lVar6) + 1;
        iVar4 = HeapObject::SizeFromMap
                          ((HeapObject *)&local_60,
                           (ulong)ppuVar7 & 0xffffffff00000000 |
                           (ulong)*(uint *)((long)ppuVar7 + -1));
        *(long *)(*(long *)(param_1 + 0xb8) + lVar6) =
             *(long *)(*(long *)(param_1 + 0xb8) + lVar6) + (long)iVar4;
        lVar6 = CONCAT44(uStack_74,local_78);
        ppuVar7 = (undefined **)HeapObjectIterator::NextObject((HeapObjectIterator *)&local_88);
        if (lVar6 != 0) {
          iVar4 = (int)ppuVar7;
          while ((iVar4 != 0 &&
                 (uVar8 = (**(code **)(*(long *)CONCAT44(uStack_74,local_78) + 0x10))
                                    ((long *)CONCAT44(uStack_74,local_78),ppuVar7), (uVar8 & 1) != 0
                 ))) {
            ppuVar7 = (undefined **)HeapObjectIterator::NextObject((HeapObjectIterator *)&local_88);
            iVar4 = (int)ppuVar7;
          }
        }
      }
    }
    else {
      do {
        uVar8 = (**(code **)(*(long *)CONCAT44(uStack_74,local_78) + 0x10))
                          ((long *)CONCAT44(uStack_74,local_78),ppuVar7);
        if ((uVar8 & 1) == 0) goto LAB_00f96b2c;
        ppuVar7 = (undefined **)HeapObjectIterator::NextObject((HeapObjectIterator *)&local_88);
        local_60 = ppuVar7;
      } while ((int)ppuVar7 != 0);
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 8))();
    }
    if ((long *)CONCAT44(uStack_74,local_78) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT44(uStack_74,local_78) + 8))();
    }
    plVar2 = local_68;
    local_68 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  __dest = *(void **)(param_1 + 200);
  if (__dest != (void *)0x0) {
    if (this[0xac1] == (Heap)0x0) {
      __n = 0;
    }
    else {
      __n = 0x200 - *(long *)(this + 0xac8);
      memcpy(__dest,this + *(long *)(this + 0xac8) + 0x8c0,__n);
    }
    memcpy((void *)((long)__dest + __n),this + 0x8c0,*(size_t *)(this + 0xac8));
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    local_60 = &PTR__StringAllocator_01cbbca8;
    local_88 = &local_60;
    local_50 = 0x1ff;
    local_80 = 0x1000000000;
    local_78 = 0;
    lStack_58 = *(long *)(param_1 + 0xd0);
    local_70 = (long *)FixedStringAllocator::allocate((FixedStringAllocator *)&local_60,0x10);
    *(undefined1 *)local_70 = 0;
    if (*(int *)(this + 0x178) == 0) {
      Isolate::PrintStack((Isolate *)(this + -0x8850),&local_88,1);
    }
    else {
      uVar5 = __strlen_chk("Cannot get stack trace in GC.",0x1e);
      StringStream::Add(&local_88,"Cannot get stack trace in GC.",uVar5,0,0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

