
/* v8::internal::StartupSerializer::SerializeStrongReferences() */

void __thiscall v8::internal::StartupSerializer::SerializeStrongReferences(StartupSerializer *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x68);
  lVar1 = ThreadManager::FirstThreadStateInUse(*(ThreadManager **)(lVar2 + 0x95f0));
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(isolate->thread_manager()->FirstThreadStateInUse()) == nullptr");
  }
  if (*(long *)(*(long *)(lVar2 + 0x95c0) + 0x18) == 0) {
    Heap::IterateSmiRoots((Heap *)(lVar2 + 0x8850),(RootVisitor *)this);
    Heap::IterateStrongRoots((Heap *)(lVar2 + 0x8850),this,6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","isolate->handle_scope_implementer()->blocks()->empty()");
}

