
/* v8::internal::SaveAndSwitchContext::SaveAndSwitchContext(v8::internal::Isolate*,
   v8::internal::Context) */

void __thiscall
v8::internal::SaveAndSwitchContext::SaveAndSwitchContext
          (SaveAndSwitchContext *this,Isolate *param_1,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  *(Isolate **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  uVar2 = *(ulong *)(param_1 + 0x2bc8);
  if ((int)uVar2 != 0) {
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(param_1 + 0x95a0);
      if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar2;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
    }
    *(ulong **)(this + 8) = puVar1;
  }
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x2c28);
  *(undefined8 *)(param_1 + 0x2bc8) = param_3;
  return;
}

