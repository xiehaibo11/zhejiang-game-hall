
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessHintsForObjectCreate(v8::internal::compiler::Hints
   const&) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessHintsForObjectCreate
          (SerializerForBackgroundCompilation *this,Hints *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 local_40 [16];
  ObjectRef aOStack_30 [16];
  
  if (*(long **)param_1 != (long *)0x0) {
    for (puVar2 = (undefined8 *)**(long **)param_1; puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)puVar2[1]) {
      ObjectRef::ObjectRef(aOStack_30,*(undefined8 *)this,*puVar2,1);
      uVar1 = ObjectRef::IsJSObject(aOStack_30);
      if ((uVar1 & 1) != 0) {
        auVar3 = ObjectRef::AsJSObject(aOStack_30);
        local_40 = auVar3;
        JSObjectRef::SerializeObjectCreateMap((JSObjectRef *)local_40);
      }
    }
  }
  return;
}

