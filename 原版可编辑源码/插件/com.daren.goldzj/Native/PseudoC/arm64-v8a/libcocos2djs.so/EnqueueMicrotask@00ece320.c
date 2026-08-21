
/* v8::Isolate::EnqueueMicrotask(v8::Local<v8::Function>) */

void __thiscall v8::Isolate::EnqueueMicrotask(Isolate *this,undefined8 param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  
  puVar1 = (ulong *)internal::JSReceiver::GetContextForMicrotask(param_2);
  if (puVar1 == (ulong *)0x0) {
    uVar3 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
    uVar3 = uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(this + 0x95a0);
      if (puVar1 == *(ulong **)(this + 0x95a8)) {
        puVar1 = (ulong *)internal::HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)(this + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar3;
    }
    else {
      puVar1 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar3);
    }
  }
  plVar2 = *(long **)(*puVar1 + 0x423);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ece3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2,this,param_2);
    return;
  }
  return;
}

