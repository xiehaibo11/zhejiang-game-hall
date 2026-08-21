
/* v8::internal::JSRegExp::New(v8::internal::Isolate*, v8::internal::Handle<v8::internal::String>,
   v8::base::Flags<v8::internal::JSRegExp::Flag, int>, unsigned int) */

void v8::internal::JSRegExp::New
               (Isolate *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar3 = uVar3 | *(uint *)((uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 0x243);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
  }
  uVar2 = Factory::NewJSObject((Factory *)param_1,puVar1,0);
  Initialize(uVar2,param_2,param_3,param_4);
  return;
}

