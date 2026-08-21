
/* v8::internal::StackGuard::FreeThreadResources() */

void __thiscall v8::internal::StackGuard::FreeThreadResources(StackGuard *this)

{
  long lVar1;
  
  lVar1 = Isolate::FindOrAllocatePerThreadDataForThisThread(*(Isolate **)this);
  *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(this + 0x10);
  return;
}

