
void FUN_012ccb64(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [136];
  
  param_1 = (undefined8 *)*param_1;
  uVar2 = *param_1;
  v8::internal::compiler::ObjectRef::ObjectRef((ObjectRef *)&local_b8,uVar2,param_2,0);
  uVar1 = v8::internal::compiler::ObjectRef::IsMap((ObjectRef *)&local_b8);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsMap()");
  }
  v8::internal::compiler::ObjectRef::ObjectRef
            ((ObjectRef *)&local_c8,(long *)*param_1,*(long *)*param_1 + 0xa38,0);
  uVar1 = v8::internal::compiler::ObjectRef::IsName((ObjectRef *)&local_c8);
  if ((uVar1 & 1) != 0) {
    v8::internal::compiler::JSHeapBroker::GetPropertyAccessInfo
              (auStack_a8,uVar2,local_b8,uStack_b0,local_c8,uStack_c0,0,param_1[1],1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsName()");
}

