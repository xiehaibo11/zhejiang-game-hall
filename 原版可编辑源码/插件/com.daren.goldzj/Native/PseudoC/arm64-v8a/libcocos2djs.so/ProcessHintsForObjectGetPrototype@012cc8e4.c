
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessHintsForObjectGetPrototype(v8::internal::compiler::Hints
   const&) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessHintsForObjectGetPrototype
          (SerializerForBackgroundCompilation *this,Hints *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 local_50 [16];
  ObjectRef aOStack_40 [16];
  
  puVar2 = *(undefined8 **)param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar2;
    if (puVar3 != (undefined8 *)0x0) {
      do {
        if ((*(byte *)*puVar3 & 1) != 0) {
          ObjectRef::ObjectRef(aOStack_40,*(undefined8 *)this,(byte *)*puVar3,0);
          uVar1 = ObjectRef::IsHeapObject(aOStack_40);
          if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","IsHeapObject()");
          }
          auVar4 = HeapObjectRef::map((HeapObjectRef *)aOStack_40);
          local_50 = auVar4;
          MapRef::SerializePrototype((MapRef *)local_50);
        }
        puVar3 = (undefined8 *)puVar3[1];
      } while (puVar3 != (undefined8 *)0x0);
      puVar2 = *(undefined8 **)param_1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    for (puVar2 = (undefined8 *)puVar2[1]; puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)puVar2[1]) {
      ObjectRef::ObjectRef(aOStack_40,*(undefined8 *)this,*puVar2,0);
      uVar1 = ObjectRef::IsMap(aOStack_40);
      if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsMap()");
      }
      MapRef::SerializePrototype((MapRef *)aOStack_40);
    }
  }
  return;
}

