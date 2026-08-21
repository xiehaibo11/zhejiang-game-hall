
/* v8::internal::ApiNatives::InstantiateFunction(v8::internal::Handle<v8::internal::FunctionTemplateInfo>,
   v8::internal::MaybeHandle<v8::internal::Name>) */

undefined8 v8::internal::ApiNatives::InstantiateFunction(long param_1,undefined8 param_2)

{
  uint uVar1;
  CanonicalHandleScope *this;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  Isolate *this_00;
  SaveContext aSStack_58 [24];
  
  uVar1 = *(uint *)(param_1 + 4);
  this_00 = (Isolate *)((ulong)uVar1 << 0x20);
  SaveContext::SaveContext(aSStack_58,this_00);
  uVar4 = *(ulong *)(this_00 + 0x2bc8) & 0xffffffff00000000;
  this = *(CanonicalHandleScope **)((ulong)uVar1 << 0x20 | 0x95b8);
  uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)(this_00 + 0x2bc8) - 1)) + 0x13);
  if (this == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(this_00 + 0x95a0);
    if (puVar2 == *(ulong **)(this_00 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(this_00);
    }
    *(ulong **)(this_00 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar4;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup(this,uVar4);
  }
  uVar3 = FUN_0147cb10(this_00,puVar2,param_1,param_2);
  if (((*(ulong *)(this_00 + 0x2bd8) & 1) == 0) ||
     ((int)*(ulong *)(this_00 + 0x2bd8) != (int)*(undefined8 *)(this_00 + 0xa8))) {
    Isolate::ReportPendingMessages(this_00);
  }
  else {
    *(undefined8 *)(this_00 + 0x2c10) = *(undefined8 *)(this_00 + 0xa8);
  }
  SaveContext::~SaveContext(aSStack_58);
  return uVar3;
}

