
/* v8::internal::Execution::Call(v8::internal::Isolate*, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, int, v8::internal::Handle<v8::internal::Object>*) */

void v8::internal::Execution::Call
               (Isolate *param_1,undefined8 param_2,ulong *param_3,undefined4 param_4,
               undefined8 param_5)

{
  ulong uVar1;
  undefined8 local_88;
  ulong *local_80;
  undefined4 local_78;
  undefined8 local_70;
  Isolate *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_44;
  
  local_68 = (Isolate *)0x0;
  local_80 = (ulong *)0x0;
  uVar1 = *param_3;
  local_88 = param_2;
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
  local_68 = param_1 + 0xa0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  local_44 = 0;
  local_80 = param_3;
  local_78 = param_4;
  local_70 = param_5;
  FUN_00f407e4(param_1,&local_88);
  return;
}

