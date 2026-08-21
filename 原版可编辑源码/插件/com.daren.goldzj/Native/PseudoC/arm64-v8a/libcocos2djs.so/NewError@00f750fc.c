
/* v8::internal::Factory::NewError(v8::internal::Handle<v8::internal::JSFunction>,
   v8::internal::Handle<v8::internal::String>) */

void __thiscall v8::internal::Factory::NewError(Factory *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  
  lVar1 = ErrorUtils::Construct(this,param_2,param_2,param_3,2,0,0);
  if (lVar1 == 0) {
    uVar3 = *(ulong *)(this + 0x2bd8);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(this + 0x95a0);
      if (puVar2 == *(ulong **)(this + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)(this + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar3;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar3);
    }
    *(undefined8 *)(this + 0x2bd8) = *(undefined8 *)(this + 0xa8);
    if (puVar2 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  return;
}

