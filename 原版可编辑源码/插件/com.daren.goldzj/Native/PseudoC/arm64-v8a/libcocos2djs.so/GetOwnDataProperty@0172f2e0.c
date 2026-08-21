
/* v8::internal::compiler::JSObjectRef::GetOwnDataProperty(v8::internal::Representation,
   v8::internal::FieldIndex, v8::internal::compiler::SerializationPolicy) const */

void v8::internal::compiler::JSObjectRef::GetOwnDataProperty
               (undefined1 *param_1,ObjectRef *param_2,undefined1 param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined8 uVar1;
  JSObjectData *pJVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(int *)(*(undefined8 **)param_2 + 1) == 2) {
    uVar4 = *(undefined8 *)(param_2 + 8);
    uVar1 = JSObject::FastPropertyAt(**(undefined8 **)param_2,param_3,param_4);
    ObjectRef::ObjectRef((ObjectRef *)&local_50,uVar4,uVar1,0);
    *param_1 = 1;
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
  }
  else {
    pJVar2 = (JSObjectData *)ObjectRef::data(param_2);
    if (*(int *)(pJVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(ushort *)(*(long *)(pJVar2 + 0x10) + 0x18) < 0xaa) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSObject()");
    }
    lVar3 = JSObjectData::GetOwnDataProperty
                      (pJVar2,*(undefined8 *)(param_2 + 8),param_3,param_4,param_5);
    if (lVar3 == 0) {
      *param_1 = 0;
      param_1[8] = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 8);
      *param_1 = 1;
      *(long *)(param_1 + 8) = lVar3;
      *(undefined8 *)(param_1 + 0x10) = uVar1;
    }
  }
  return;
}

