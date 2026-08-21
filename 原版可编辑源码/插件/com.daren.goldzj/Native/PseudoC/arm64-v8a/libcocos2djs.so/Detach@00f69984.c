
/* v8::internal::DeferredHandleScope::Detach() */

void __thiscall v8::internal::DeferredHandleScope::Detach(DeferredHandleScope *this)

{
  long lVar1;
  
  HandleScopeImplementer::Detach(*(ulong **)(this + 0x10));
  lVar1 = **(long **)(this + 0x10);
  *(undefined8 *)(lVar1 + 0x95a0) = *(undefined8 *)(this + 8);
  *(undefined8 *)(lVar1 + 0x95a8) = *(undefined8 *)this;
  return;
}

