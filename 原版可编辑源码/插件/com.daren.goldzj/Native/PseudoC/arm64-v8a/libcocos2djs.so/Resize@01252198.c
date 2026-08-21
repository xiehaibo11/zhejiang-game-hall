
/* v8::internal::WasmIndirectFunctionTable::Resize(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmIndirectFunctionTable>, unsigned int) */

void v8::internal::WasmIndirectFunctionTable::Resize(Isolate *param_1,ulong *param_2,uint param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *this;
  uint uVar6;
  ulong uVar7;
  undefined8 local_70;
  ulong *puStack_68;
  uint local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = *param_2;
  uVar6 = *(uint *)(uVar3 + 3);
  if (uVar6 < param_3) {
    uVar7 = (ulong)param_3;
    this = (vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)
           **(undefined8 **)
             (*(long *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0x17)) + 3) + 0x18);
    uVar3 = *(long *)(this + 8) - *(long *)this >> 2;
    if (uVar3 < uVar7) {
      std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
                (this,uVar7 - uVar3);
    }
    else if (uVar3 != uVar7) {
      *(ulong *)(this + 8) = *(long *)this + uVar7 * 4;
    }
    lVar4 = *(long *)(this + 0x18);
    uVar3 = *(long *)(this + 0x20) - lVar4 >> 3;
    if (uVar3 < uVar7) {
      std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::__append
                ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)(this + 0x18),
                 uVar7 - uVar3);
    }
    else if (uVar3 != uVar7) {
      *(ulong *)(this + 0x20) = lVar4 + uVar7 * 8;
    }
    *(undefined8 *)(*param_2 + 7) = *(undefined8 *)this;
    *(undefined8 *)(*param_2 + 0xf) = *(undefined8 *)(this + 0x18);
    uVar3 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x1b);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(param_1 + 0x95a0);
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar3;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
    }
    puVar2 = (ulong *)Factory::CopyFixedArrayAndGrow(param_1,puVar2,param_3 - uVar6);
    uVar7 = *param_2;
    uVar3 = *puVar2;
    *(int *)(uVar7 + 0x1b) = (int)uVar3;
    if ((uVar3 & 1) != 0) {
      uVar5 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar7,uVar7 + 0x1b,uVar3);
        uVar5 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0x1b,uVar3);
      }
    }
    *(uint *)(*param_2 + 3) = param_3;
    do {
      local_70 = 0;
      puStack_68 = param_2;
      local_60 = uVar6;
      IndirectFunctionTableEntry::clear((IndirectFunctionTableEntry *)&local_70);
      uVar6 = uVar6 + 1;
    } while (param_3 != uVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

