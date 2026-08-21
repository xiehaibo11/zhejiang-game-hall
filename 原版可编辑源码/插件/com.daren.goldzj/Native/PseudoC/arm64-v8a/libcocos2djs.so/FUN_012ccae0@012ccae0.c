
void FUN_012ccae0(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  
  v8::internal::compiler::ObjectRef::ObjectRef
            ((ObjectRef *)local_20,*(undefined8 *)*param_1,param_2,0);
  uVar1 = v8::internal::compiler::ObjectRef::IsMap((ObjectRef *)local_20);
  auVar2._8_8_ = local_20._8_8_;
  auVar2._0_8_ = local_20._0_8_;
  if ((uVar1 & 1) != 0) {
    while (local_20 = auVar2,
          uVar1 = v8::internal::compiler::MapRef::IsJSObjectMap((MapRef *)local_20),
          (uVar1 & 1) != 0) {
      v8::internal::compiler::MapRef::SerializePrototype((MapRef *)local_20);
      auVar2 = v8::internal::compiler::MapRef::prototype((MapRef *)local_20);
      local_30 = auVar2;
      auVar2 = v8::internal::compiler::HeapObjectRef::map((HeapObjectRef *)local_30);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

