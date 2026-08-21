
/* v8::internal::ReadOnlySerializer::SerializeReadOnlyRoots() */

void __thiscall v8::internal::ReadOnlySerializer::SerializeReadOnlyRoots(ReadOnlySerializer *this)

{
  long lVar1;
  long local_8;
  
  lVar1 = ThreadManager::FirstThreadStateInUse(*(ThreadManager **)(*(long *)(this + 0x68) + 0x95f0))
  ;
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(isolate()->thread_manager()->FirstThreadStateInUse()) == nullptr"
            );
  }
  if (*(long *)(*(long *)(*(long *)(this + 0x68) + 0x95c0) + 0x18) == 0) {
    local_8 = *(long *)(this + 0x68) + 0x80;
    ReadOnlyRoots::Iterate((ReadOnlyRoots *)&local_8,(RootVisitor *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","isolate()->handle_scope_implementer()->blocks()->empty()");
}

