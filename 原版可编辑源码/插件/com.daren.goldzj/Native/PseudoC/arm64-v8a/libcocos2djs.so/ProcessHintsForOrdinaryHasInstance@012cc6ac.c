
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessHintsForOrdinaryHasInstance(v8::internal::compiler::Hints
   const&, v8::internal::compiler::Hints const&) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessHintsForOrdinaryHasInstance
          (SerializerForBackgroundCompilation *this,Hints *param_1,Hints *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ObjectRef aOStack_40 [16];
  bool local_14 [4];
  
  local_14[0] = false;
  if ((*(undefined8 **)param_1 != (undefined8 *)0x0) &&
     (puVar2 = (undefined8 *)**(undefined8 **)param_1, puVar2 != (undefined8 *)0x0)) {
    do {
      if ((*(byte *)*puVar2 & 1) != 0) {
        ObjectRef::ObjectRef(aOStack_40,*(undefined8 *)this,(byte *)*puVar2,0);
        uVar1 = ObjectRef::IsHeapObject(aOStack_40);
        if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsHeapObject()");
        }
        ProcessConstantForOrdinaryHasInstance(this,(HeapObjectRef *)aOStack_40,local_14);
      }
      puVar2 = (undefined8 *)puVar2[1];
    } while (puVar2 != (undefined8 *)0x0);
    if (local_14[0] != false) {
      ProcessHintsForHasInPrototypeChain(this,param_2);
    }
  }
  return;
}

