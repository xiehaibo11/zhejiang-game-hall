
/* v8::internal::Heap::VerifyReadOnlyHeap() */

void __thiscall v8::internal::Heap::VerifyReadOnlyHeap(Heap *this)

{
  long *plVar1;
  undefined **local_28;
  undefined **ppuStack_20;
  Heap *local_18;
  
  plVar1 = *(long **)(this + 0x120);
  if ((char)plVar1[0x1d] != '\0') {
    local_28 = &PTR__VerifyPointersVisitor_01ca78a0;
    ppuStack_20 = &PTR__VerifyReadOnlyPointersVisitor_01ca7948;
    local_18 = this;
    (**(code **)(*plVar1 + 0x98))(plVar1,this + -0x8850,&local_28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!read_only_space_->writable()");
}

