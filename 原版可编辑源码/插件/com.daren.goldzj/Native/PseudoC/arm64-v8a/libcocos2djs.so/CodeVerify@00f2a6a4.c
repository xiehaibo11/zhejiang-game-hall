
/* v8::internal::Code::CodeVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::Code::CodeVerify(Code *this,Isolate *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong local_70 [2];
  long local_60;
  char local_58;
  char local_38;
  
  uVar3 = has_safepoint_table(this);
  lVar5 = *(long *)this;
  if (((uVar3 & 1) != 0) && ((*(byte *)(lVar5 + 0x1b) & 3) != 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "has_safepoint_table() implies IsAligned(safepoint_table_offset(), static_cast<unsigned>(kIntSize))"
            );
  }
  if (*(int *)(lVar5 + 0x1f) < *(int *)(lVar5 + 0x1b)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","safepoint_table_offset() <= handler_table_offset()");
  }
  iVar4 = *(int *)(lVar5 + 0x23);
  if (*(int *)(lVar5 + 0x1f) <= iVar4) {
    if (*(int *)(lVar5 + 0x17) < 0) {
      iVar2 = OffHeapInstructionSize(this);
    }
    else {
      iVar2 = *(int *)(lVar5 + 0x13);
    }
    if (iVar4 <= iVar2) {
      uVar3 = ReadOnlyHeap::Contains(*(undefined8 *)this);
      uVar6 = *(ulong *)this;
      if (((uVar3 & 1) == 0) && (((int)uVar6 - 1U & 0x1f) != 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "!ReadOnlyHeap::Contains(*this) implies IsAligned(raw_instruction_start(), kCodeAlignment)"
                );
      }
      local_70[0] = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 3);
      Object::ObjectVerify((Object *)local_70,param_1);
      lVar5 = *(long *)this;
      iVar4 = *(int *)(lVar5 + 0x13);
      if ((*(byte *)(lVar5 + 0x17) & 1) != 0) {
        uVar3 = (long)(iVar4 + 0x47) & 0xfffffffffffffff8;
        iVar4 = (int)uVar3 + *(int *)(lVar5 + uVar3 + -1) + -0x38;
      }
      if (0x20000 < (int)((iVar4 + 3U & 0xfffffffc) + 0x5f & 0xffffffe0)) {
        uVar3 = Heap::InSpace((Heap *)(param_1 + 0x8850),lVar5,6);
        if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.",
                   "Code::SizeFor(body_size()) <= kMaxRegularHeapObjectSize || isolate->heap()->InSpace(*this, CODE_LO_SPACE)"
                  );
        }
        lVar5 = *(long *)this;
      }
      RelocIterator::RelocIterator((RelocIterator *)local_70,lVar5,0xffffffff);
      if (local_38 == '\0') {
        lVar5 = 0;
        do {
          RelocInfo::Verify((RelocInfo *)&local_60,param_1);
          if ((local_58 < '\x04') && (bVar1 = local_60 == lVar5, lVar5 = local_60, bVar1)) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","it.rinfo()->pc() != last_gc_pc");
          }
          RelocIterator::next((RelocIterator *)local_70);
        } while (local_38 == '\0');
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","code_comments_offset() <= InstructionSize()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","handler_table_offset() <= constant_pool_offset()");
}

