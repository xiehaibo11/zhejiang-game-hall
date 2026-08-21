
/* v8::internal::Execution::CallBuiltin(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSFunction>, v8::internal::Handle<v8::internal::Object>, int,
   v8::internal::Handle<v8::internal::Object>*) */

void v8::internal::Execution::CallBuiltin
               (Isolate *param_1,undefined8 param_2,ulong *param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
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
  
  lVar3 = *(long *)(param_1 + 0xb6c8);
  uVar1 = *(undefined1 *)(lVar3 + 0xc);
  *(undefined1 *)(lVar3 + 0xc) = 1;
  local_78 = (Isolate *)0x0;
  local_90 = (ulong *)0x0;
  uVar2 = *param_3;
  local_98 = param_2;
  if (((uVar2 & 1) != 0) &&
     (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0xaa)) {
    uVar2 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xf);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      param_3 = *(ulong **)(param_1 + 0x95a0);
      if (param_3 == *(ulong **)(param_1 + 0x95a8)) {
        param_3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = param_3 + 1;
      *param_3 = uVar2;
    }
    else {
      param_3 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
    }
  }
  local_78 = param_1 + 0xa0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_54 = 0;
  local_90 = param_3;
  local_88 = param_4;
  local_80 = param_5;
  FUN_00f407e4(param_1,&local_98);
  *(undefined1 *)(lVar3 + 0xc) = uVar1;
  return;
}

