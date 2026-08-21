
/* v8::internal::Accessors::FunctionPrototypeSetter(v8::Local<v8::Name>, v8::Local<v8::Value>,
   v8::PropertyCallbackInfo<v8::Boolean> const&) */

void v8::internal::Accessors::FunctionPrototypeSetter
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  Isolate *pIVar3;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  pIVar3 = *(Isolate **)(*param_3 + 0x10);
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_70 = (RuntimeCallStats *)(*(long *)(pIVar3 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x85);
  }
  uVar1 = *(undefined8 *)(pIVar3 + 0x95a0);
  lVar2 = *(long *)(pIVar3 + 0x95a8);
  *(int *)(pIVar3 + 0x95b0) = *(int *)(pIVar3 + 0x95b0) + 1;
  JSFunction::SetPrototype(*param_3 + 8,param_2);
  *(undefined8 *)(*param_3 + 0x20) = *(undefined8 *)(*(long *)(*param_3 + 0x10) + 0xb8);
  if (pIVar3 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar3 + 0x95a0) = uVar1;
    *(int *)(pIVar3 + 0x95b0) = *(int *)(pIVar3 + 0x95b0) + -1;
    if (*(long *)(pIVar3 + 0x95a8) != lVar2) {
      *(long *)(pIVar3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar3);
    }
  }
  if (local_70 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
  }
  return;
}

