
/* v8::internal::TorqueGeneratedClassVerifiers::JSWeakCollectionVerify(v8::internal::JSWeakCollection,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSWeakCollectionVerify
               (ulong param_1,Isolate *param_2)

{
  ulong local_8;
  
  local_8 = param_1;
  JSObject::JSObjectVerify((JSObject *)&local_8,param_2);
  if ((*(ushort *)((local_8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_8 - 1)) & 0xfffe) ==
      0x41e) {
    Object::VerifyPointer(param_2,local_8 & 0xffffffff00000000 | (ulong)*(uint *)(local_8 + 0xb));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsJSWeakCollection()");
}

