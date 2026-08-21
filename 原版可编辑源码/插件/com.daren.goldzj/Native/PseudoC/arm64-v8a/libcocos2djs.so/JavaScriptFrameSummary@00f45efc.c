
/* v8::internal::FrameSummary::JavaScriptFrameSummary::JavaScriptFrameSummary(v8::internal::Isolate*,
   v8::internal::Object, v8::internal::JSFunction, v8::internal::AbstractCode, int, bool,
   v8::internal::FixedArray) */

void __thiscall
v8::internal::FrameSummary::JavaScriptFrameSummary::JavaScriptFrameSummary
          (JavaScriptFrameSummary *this,Isolate *param_1,ulong param_3,ulong param_4,ulong param_5,
          undefined4 param_6,byte param_7,ulong param_8)

{
  Isolate *pIVar1;
  ulong *puVar2;
  
  *(Isolate **)this = param_1;
  *(undefined4 *)(this + 8) = 0;
  pIVar1 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pIVar1;
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar2 + 1;
    *puVar2 = param_3;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),param_3);
  }
  *(ulong **)(this + 0x10) = puVar2;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pIVar1;
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar2 + 1;
    *puVar2 = param_4;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),param_4);
  }
  *(ulong **)(this + 0x18) = puVar2;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pIVar1;
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar2 + 1;
    *puVar2 = param_5;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),param_5);
  }
  *(ulong **)(this + 0x20) = puVar2;
  *(undefined4 *)(this + 0x28) = param_6;
  this[0x2c] = (JavaScriptFrameSummary)(param_7 & 1);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pIVar1;
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar2 + 1;
    *puVar2 = param_8;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),param_8);
  }
  *(ulong **)(this + 0x30) = puVar2;
  return;
}

