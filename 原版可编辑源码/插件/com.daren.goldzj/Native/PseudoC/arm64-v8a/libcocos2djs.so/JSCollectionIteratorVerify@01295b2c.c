
/* v8::internal::TorqueGeneratedClassVerifiers::JSCollectionIteratorVerify(v8::internal::JSCollectionIterator,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSCollectionIteratorVerify
               (ulong param_1,Isolate *param_2)

{
  ulong local_8;
  
  local_8 = param_1;
  JSObject::JSObjectVerify((JSObject *)&local_8,param_2);
  if (*(ushort *)((local_8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_8 - 1)) - 0x412 < 5) {
    Object::VerifyPointer(param_2,local_8 & 0xffffffff00000000 | (ulong)*(uint *)(local_8 + 0xb));
    Object::VerifyPointer(param_2,local_8 & 0xffffffff00000000 | (ulong)*(uint *)(local_8 + 0xf));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsJSCollectionIterator()");
}

