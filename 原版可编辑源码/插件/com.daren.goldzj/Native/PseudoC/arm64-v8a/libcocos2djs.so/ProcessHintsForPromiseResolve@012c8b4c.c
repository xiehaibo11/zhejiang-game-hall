
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessHintsForPromiseResolve(v8::internal::compiler::Hints
   const&) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessHintsForPromiseResolve
          (SerializerForBackgroundCompilation *this,Hints *param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  SerializerForBackgroundCompilation *local_38;
  
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar3;
    local_38 = this;
    if (puVar5 != (undefined8 *)0x0) {
      do {
        uVar4 = *(ulong *)*puVar5;
        if ((uVar4 & 1) != 0) {
          uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1);
          pIVar1 = (Isolate *)**(undefined8 **)this;
          if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar2 = *(ulong **)(pIVar1 + 0x95a0);
            if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
              puVar2 = (ulong *)HandleScope::Extend(pIVar1);
            }
            *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
            *puVar2 = uVar4;
          }
          else {
            puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
          }
          FUN_012ccb64(&local_38,puVar2);
        }
        puVar5 = (undefined8 *)puVar5[1];
      } while (puVar5 != (undefined8 *)0x0);
      puVar3 = *(undefined8 **)param_1;
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
    }
    for (puVar3 = (undefined8 *)puVar3[1]; puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)puVar3[1]) {
      FUN_012ccb64(&local_38,*puVar3);
    }
  }
  return;
}

