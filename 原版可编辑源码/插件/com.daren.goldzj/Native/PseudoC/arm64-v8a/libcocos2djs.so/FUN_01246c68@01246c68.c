
void FUN_01246c68(long *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  Isolate *pIVar4;
  Isolate *local_78;
  char *pcStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  HandleScope aHStack_48 [24];
  
  pIVar4 = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_48,pIVar4);
  local_68 = 0;
  local_58 = 0;
  uStack_50 = 0;
  pcStack_70 = "WebAssembly.Instance.exports()";
  local_60 = 0;
  uVar2 = *(ulong *)(param_1[1] + 8);
  local_78 = pIVar4;
  if (((uVar2 & 1) == 0) ||
     (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x434)) {
    v8::internal::wasm::ErrorThrower::TypeError
              ((char *)&local_78,"Receiver is not a %s","WebAssembly.Instance");
    goto LAB_01246d1c;
  }
  uVar2 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0x73);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar1 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar2;
    lVar3 = *param_1;
    if (puVar1 == (ulong *)0x0) goto LAB_01246d68;
LAB_01246cf8:
    uVar2 = *puVar1;
  }
  else {
    puVar1 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar2);
    lVar3 = *param_1;
    if (puVar1 != (ulong *)0x0) goto LAB_01246cf8;
LAB_01246d68:
    uVar2 = *(ulong *)(lVar3 + 0x10);
  }
  *(ulong *)(lVar3 + 0x18) = uVar2;
LAB_01246d1c:
  FUN_01249590(&local_78);
  v8::HandleScope::~HandleScope(aHStack_48);
  return;
}

