
ulong * FUN_0147f444(Isolate *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                    undefined4 param_5)

{
  char cVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  LookupIterator aLStack_a8 [88];
  
  uVar3 = *param_4;
  if ((uVar3 & 1) != 0) {
    uVar4 = uVar3 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 0x4e) {
      uVar3 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
      uVar3 = uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)(param_1 + 0x95a0);
        if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
          puVar2 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar3;
      }
      else {
        puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
      }
      param_4 = (ulong *)FUN_0147cb10(param_1,puVar2,param_4,param_3);
    }
    else if (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 0x4f) {
      param_4 = (ulong *)FUN_0147d7f4(param_1,param_4,0,0);
    }
  }
  if (param_4 == (ulong *)0x0) {
    puVar2 = (ulong *)0x0;
  }
  else {
    v8::internal::LookupIterator::PropertyOrElement(aLStack_a8,param_1,param_2,param_3,0);
    cVar1 = v8::internal::Object::AddDataProperty(aLStack_a8,param_4,param_5,1,1);
    puVar2 = (ulong *)0x0;
    if (cVar1 != '\0') {
      puVar2 = param_4;
    }
  }
  return puVar2;
}

