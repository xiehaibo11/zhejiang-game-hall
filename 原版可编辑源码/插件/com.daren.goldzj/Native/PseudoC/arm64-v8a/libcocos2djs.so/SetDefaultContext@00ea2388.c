
/* v8::SnapshotCreator::SetDefaultContext(v8::Local<v8::Context>,
   v8::SerializeInternalFieldsCallback) */

void v8::SnapshotCreator::SetDefaultContext
               (long *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  Isolate *pIVar2;
  long lVar3;
  
  lVar3 = *param_1;
  pIVar2 = *(Isolate **)(lVar3 + 8);
  if (pIVar2 == (Isolate *)((ulong)*(uint *)((long)param_2 + 4) << 0x20)) {
    if (*(ulong **)(lVar3 + 0x10) != (ulong *)0x0) {
      internal::GlobalHandles::Destroy(*(ulong **)(lVar3 + 0x10));
      *(undefined8 *)(lVar3 + 0x10) = 0;
    }
    if (param_2 != (ulong *)0x0) {
      uVar1 = V8::GlobalizeReference(pIVar2,param_2);
      *(undefined8 *)(lVar3 + 0x10) = uVar1;
    }
    *(undefined8 *)(lVar3 + 0x18) = param_3;
    *(undefined8 *)(lVar3 + 0x20) = param_4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","isolate == context->GetIsolate()");
}

