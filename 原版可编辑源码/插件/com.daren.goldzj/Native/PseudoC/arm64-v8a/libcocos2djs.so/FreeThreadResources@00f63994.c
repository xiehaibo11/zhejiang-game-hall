
/* v8::internal::ThreadManager::FreeThreadResources() */

void __thiscall v8::internal::ThreadManager::FreeThreadResources(ThreadManager *this)

{
  HandleScopeImplementer::FreeThreadResources();
  ThreadLocalTop::Free((ThreadLocalTop *)(*(long *)(this + 0x48) + 0x2bb8));
  StackGuard::FreeThreadResources((StackGuard *)(*(long *)(this + 0x48) + 0x48));
  RegExpStack::ThreadLocal::ResetToStaticStack
            ((ThreadLocal *)(*(RegExpStack **)(*(long *)(this + 0x48) + 0xb618) + 0x200),
             *(RegExpStack **)(*(long *)(this + 0x48) + 0xb618));
  Bootstrapper::FreeThreadResources();
  return;
}

