
undefined8 FUN_016e047c(undefined8 param_1,long *param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ObjectRef aOStack_40 [16];
  
  v8::internal::compiler::ObjectRef::ObjectRef(aOStack_40,param_1,*(undefined8 *)*param_2,0);
  uVar5 = v8::internal::compiler::ObjectRef::IsMap(aOStack_40);
  if ((uVar5 & 1) != 0) {
    uVar3 = v8::internal::compiler::MapRef::elements_kind((MapRef *)aOStack_40);
    *param_3 = uVar3;
    puVar1 = (undefined8 *)*param_2;
    puVar2 = (undefined8 *)param_2[1];
    while( true ) {
      if (puVar1 == puVar2) {
        return 1;
      }
      v8::internal::compiler::ObjectRef::ObjectRef(aOStack_40,param_1,*puVar1,0);
      uVar5 = v8::internal::compiler::ObjectRef::IsMap(aOStack_40);
      if ((uVar5 & 1) == 0) break;
      uVar5 = v8::internal::compiler::MapRef::supports_fast_array_iteration((MapRef *)aOStack_40);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      uVar4 = v8::internal::compiler::MapRef::elements_kind((MapRef *)aOStack_40);
      uVar5 = v8::internal::UnionElementsKindUptoSize(param_3,uVar4);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      puVar1 = puVar1 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

