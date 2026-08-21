
/* v8::internal::Builtins::AllowDynamicFunction(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSFunction>, v8::internal::Handle<v8::internal::JSObject>) */

undefined8
v8::internal::Builtins::AllowDynamicFunction(Isolate *param_1,long *param_2,undefined8 param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if (FLAG_allow_unsafe_function_constructor == '\0') {
    puVar4 = *(undefined8 **)(param_1 + 0x95c0);
    if (puVar4[6] != 0) {
      pIVar1 = (Isolate *)*puVar4;
      uVar5 = *(ulong *)(puVar4[4] + puVar4[6] * 8 + -8);
      if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)(pIVar1 + 0x95a0);
        if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
          puVar2 = (ulong *)HandleScope::Extend(pIVar1);
        }
        *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar5;
      }
      else {
        puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar5);
      }
      if ((puVar2 != (ulong *)0x0) && (*(int *)(*param_2 + 0xf) != (int)*puVar2)) {
        uVar3 = Isolate::MayAccess(param_1,puVar2,param_3);
        return uVar3;
      }
    }
  }
  return 1;
}

