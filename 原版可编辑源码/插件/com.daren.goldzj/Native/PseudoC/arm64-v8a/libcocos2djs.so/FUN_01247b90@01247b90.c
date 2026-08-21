
void FUN_01247b90(long *param_1)

{
  Isolate *pIVar1;
  uint uVar2;
  ushort uVar3;
  ulong *puVar4;
  CanonicalHandleScope *this;
  ulong uVar5;
  Isolate *pIVar6;
  Isolate *local_88;
  char *pcStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  HandleScope aHStack_58 [24];
  
  pIVar6 = *(Isolate **)(*param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_58,pIVar6);
  local_78 = 0;
  local_68 = 0;
  uStack_60 = 0;
  pcStack_80 = "WebAssembly.Memory.buffer";
  local_70 = 0;
  uVar5 = *(ulong *)(param_1[1] + 8);
  local_88 = pIVar6;
  if (((uVar5 & 1) == 0) ||
     (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x435)) {
    v8::internal::wasm::ErrorThrower::TypeError
              ((char *)&local_88,"Receiver is not a %s","WebAssembly.Memory");
    goto LAB_01247cfc;
  }
  pIVar1 = pIVar6 + 0x95a0;
  uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb);
  if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(pIVar6 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)pIVar6);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar5;
    this = *(CanonicalHandleScope **)(pIVar6 + 0x95b8);
    if (this == (CanonicalHandleScope *)0x0) goto LAB_01247c88;
LAB_01247c28:
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(this,uVar5);
    uVar2 = *(uint *)(*puVar4 + 0x1b);
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar5);
    uVar5 = *puVar4;
    this = *(CanonicalHandleScope **)(pIVar6 + 0x95b8);
    if (this != (CanonicalHandleScope *)0x0) goto LAB_01247c28;
LAB_01247c88:
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(pIVar6 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)pIVar6);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar5;
    uVar2 = *(uint *)(uVar5 + 0x1b);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    uVar3 = v8::internal::JSReceiver::SetIntegrityLevel(puVar4,5,1);
    if ((uVar3 & 0xff) == 0) {
      v8::V8::FromJustIsNothing();
    }
    if (uVar3 < 0x100) {
      v8::internal::wasm::ErrorThrower::TypeError
                ((char *)&local_88,"Status of setting SetIntegrityLevel of buffer is false.");
    }
  }
  if (puVar4 == (ulong *)0x0) {
    uVar5 = *(ulong *)(*param_1 + 0x10);
  }
  else {
    uVar5 = *puVar4;
  }
  *(ulong *)(*param_1 + 0x18) = uVar5;
LAB_01247cfc:
  FUN_01249590(&local_88);
  v8::HandleScope::~HandleScope(aHStack_58);
  return;
}

