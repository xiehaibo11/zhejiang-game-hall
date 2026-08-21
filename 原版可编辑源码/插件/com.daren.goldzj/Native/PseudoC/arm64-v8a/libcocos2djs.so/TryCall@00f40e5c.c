
/* v8::internal::Execution::TryCall(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>, int,
   v8::internal::Handle<v8::internal::Object>*, v8::internal::Execution::MessageHandling,
   v8::internal::MaybeHandle<v8::internal::Object>*) */

void v8::internal::Execution::TryCall
               (Isolate *param_1,undefined8 param_2,ulong *param_3,undefined4 param_4,
               undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 local_98;
  ulong *local_90;
  undefined4 local_88;
  undefined8 local_80;
  Isolate *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_54;
  
  local_78 = (Isolate *)0x0;
  local_90 = (ulong *)0x0;
  uVar1 = *param_3;
  local_98 = param_2;
  if (((uVar1 & 1) != 0) &&
     (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0xaa)) {
    uVar1 = uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0xf);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      param_3 = *(ulong **)(param_1 + 0x95a0);
      if (param_3 == *(ulong **)(param_1 + 0x95a8)) {
        param_3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = param_3 + 1;
      *param_3 = uVar1;
    }
    else {
      param_3 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar1);
    }
  }
  local_78 = param_1 + 0xa0;
  local_58 = 0;
  local_70 = 0;
  local_54 = 0;
  local_90 = param_3;
  local_88 = param_4;
  local_80 = param_5;
  local_68 = param_6;
  local_60 = param_7;
  FUN_00f40f4c(param_1,&local_98);
  return;
}

