
/* v8::SnapshotCreator::AddContext(v8::Local<v8::Context>, v8::SerializeInternalFieldsCallback) */

long v8::SnapshotCreator::AddContext
               (long *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  ulong local_18;
  
  lVar4 = *param_1;
  local_40 = param_3;
  uStack_38 = param_4;
  if (*(long *)(lVar4 + 8) == (ulong)*(uint *)((long)param_2 + 4) << 0x20) {
    lVar2 = *(long *)(lVar4 + 0x30);
    lVar3 = *(long *)(lVar4 + 0x38);
    if (param_2 == (ulong *)0x0) {
      local_18 = 0;
    }
    else {
      local_18 = V8::GlobalizeReference(*(Isolate **)(lVar4 + 0x28),param_2);
    }
    if (*(ulong **)(lVar4 + 0x38) == *(ulong **)(lVar4 + 0x40)) {
      std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
      __push_back_slow_path<unsigned_long_const&>
                ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)(lVar4 + 0x30),
                 &local_18);
    }
    else {
      **(ulong **)(lVar4 + 0x38) = local_18;
      *(long *)(lVar4 + 0x38) = *(long *)(lVar4 + 0x38) + 8;
    }
    puVar1 = *(undefined8 **)(lVar4 + 0x50);
    if (puVar1 == *(undefined8 **)(lVar4 + 0x58)) {
      std::__ndk1::
      vector<v8::SerializeInternalFieldsCallback,std::__ndk1::allocator<v8::SerializeInternalFieldsCallback>>
      ::__push_back_slow_path<v8::SerializeInternalFieldsCallback_const&>
                ((vector<v8::SerializeInternalFieldsCallback,std::__ndk1::allocator<v8::SerializeInternalFieldsCallback>>
                  *)(lVar4 + 0x48),(SerializeInternalFieldsCallback *)&local_40);
    }
    else {
      puVar1[1] = uStack_38;
      *puVar1 = local_40;
      *(long *)(lVar4 + 0x50) = *(long *)(lVar4 + 0x50) + 0x10;
    }
    return lVar3 - lVar2 >> 3;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","isolate == context->GetIsolate()");
}

