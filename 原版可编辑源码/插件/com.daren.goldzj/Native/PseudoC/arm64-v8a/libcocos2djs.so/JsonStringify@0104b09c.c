
/* v8::internal::JsonStringify(v8::internal::Isolate*, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>) */

Isolate * v8::internal::JsonStringify
                    (Isolate *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  int iVar1;
  ulong uVar2;
  Isolate *pIVar3;
  Isolate *local_a0;
  IncrementalStringBuilder aIStack_98 [40];
  Isolate *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  void *local_58;
  undefined4 local_50;
  void *local_48;
  void *local_40;
  undefined8 uStack_38;
  
  local_a0 = param_1;
  IncrementalStringBuilder::IncrementalStringBuilder(aIStack_98,param_1);
  local_40 = (void *)0x0;
  uStack_38 = 0;
  local_70 = local_a0 + 0xa60;
  local_48 = (void *)0x0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  uStack_68 = 0;
  uVar2 = JsonStringifier::InitializeReplacer((JsonStringifier *)&local_a0,param_3);
  if (((uVar2 & 1) == 0) ||
     ((((*param_4 & 1) == 0 || ((int)*param_4 != *(int *)(local_a0 + 0xa0))) &&
      (uVar2 = JsonStringifier::InitializeGap((JsonStringifier *)&local_a0,param_4),
      (uVar2 & 1) == 0)))) {
    pIVar3 = (Isolate *)0x0;
  }
  else {
    iVar1 = JsonStringifier::Serialize_<false>
                      ((JsonStringifier *)&local_a0,param_2,0,local_a0 + 200);
    if (iVar1 == 1) {
      pIVar3 = (Isolate *)IncrementalStringBuilder::Finish(aIStack_98);
    }
    else if (iVar1 == 0) {
      pIVar3 = local_a0 + 0xa0;
    }
    else {
      pIVar3 = (Isolate *)0x0;
    }
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (void *)0x0) {
    local_40 = local_48;
    operator_delete(local_48);
  }
  return pIVar3;
}

