
void FUN_0174dd70(undefined1 *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  JSTypedArrayRef local_40 [16];
  ObjectRef local_30 [16];
  
  if (*(short *)(*param_3 + 0x10) == 0x1e) {
    v8::internal::compiler::ObjectRef::ObjectRef
              (local_30,param_2,*(undefined8 *)(*param_3 + 0x30),0);
    uVar1 = v8::internal::compiler::ObjectRef::IsHeapObject(local_30);
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    uVar1 = v8::internal::compiler::ObjectRef::IsJSTypedArray(local_30);
    if ((uVar1 & 1) != 0) {
      local_40 = (JSTypedArrayRef  [16])v8::internal::compiler::ObjectRef::AsJSTypedArray(local_30);
      uVar1 = v8::internal::compiler::JSTypedArrayRef::is_on_heap(local_40);
      if ((uVar1 & 1) == 0) {
        *param_1 = 1;
        *(JSTypedArrayRef (*) [16])(param_1 + 8) = local_40;
        return;
      }
    }
  }
  *param_1 = 0;
  param_1[8] = 0;
  return;
}

