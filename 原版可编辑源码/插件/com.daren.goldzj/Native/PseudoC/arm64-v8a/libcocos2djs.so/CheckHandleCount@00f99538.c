
/* v8::internal::Heap::CheckHandleCount() */

void __thiscall v8::internal::Heap::CheckHandleCount(Heap *this)

{
  undefined **local_30;
  long local_28;
  
  local_28 = 0;
  local_30 = &PTR__CheckHandleCountVisitor_01ca7c28;
  HandleScopeImplementer::Iterate
            (*(HandleScopeImplementer **)(*(long *)(this + 0x30) + 0x95c0),(RootVisitor *)&local_30)
  ;
  if (local_28 < 0x7800) {
    return;
  }
  local_30 = &PTR__CheckHandleCountVisitor_01ca7c28;
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","HandleScope::kCheckHandleThreshold > handle_count_");
}

