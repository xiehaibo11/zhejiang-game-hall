
/* v8::Message::GetWasmFunctionIndex() const */

uint __thiscall v8::Message::GetWasmFunctionIndex(Message *this)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  Isolate *pIVar6;
  undefined8 uVar7;
  Isolate *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 *local_48;
  undefined8 local_28;
  
  uVar5 = (ulong)*(uint *)(this + 4);
  pIVar6 = (Isolate *)(uVar5 << 0x20);
  plVar1 = (long *)(uVar5 << 0x20 | 0x95a0);
  uVar2 = *(undefined4 *)(pIVar6 + 0x2c60);
  *(undefined4 *)(pIVar6 + 0x2c60) = 5;
  local_48 = (undefined8 *)*plVar1;
  uVar7 = *(undefined8 *)(pIVar6 + 0xa8);
  if (local_48 == *(undefined8 **)(uVar5 << 0x20 | 0x95a8)) {
    local_48 = (undefined8 *)internal::HandleScope::Extend(pIVar6);
  }
  *plVar1 = (long)(local_48 + 1);
  *local_48 = uVar7;
  HandleScope::Initialize((HandleScope *)&local_60,(Isolate *)pIVar6);
  internal::JSMessageObject::EnsureSourcePositionsAvailable(pIVar6,this);
  local_28 = *(undefined8 *)this;
  uVar3 = internal::JSMessageObject::GetColumnNumber((JSMessageObject *)&local_28);
  if (uVar3 != 0xffffffff) {
    uVar5 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x13);
    if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar6 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar4 = (ulong *)internal::HandleScope::Extend(pIVar6);
      }
      *(ulong **)(pIVar6 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar5;
    }
    else {
      puVar4 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar5);
      uVar5 = *puVar4;
    }
    if ((*(uint *)(uVar5 + 0x17) & 0xfffffffe) == 6) {
      uVar3 = internal::wasm::GetContainingWasmFunction
                        (*(WasmModule **)
                          (**(long **)(*(long *)((uVar5 & 0xffffffff00000000 |
                                                 (ulong)*(uint *)(uVar5 + 0x27)) + 3) + 0x18) + 200)
                         ,uVar3);
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  *(undefined8 *)(local_60 + 0x95a0) = uStack_58;
  *(int *)(local_60 + 0x95b0) = *(int *)(local_60 + 0x95b0) + -1;
  if (*(long *)(local_60 + 0x95a8) != local_50) {
    *(long *)(local_60 + 0x95a8) = local_50;
    internal::HandleScope::DeleteExtensions(local_60);
  }
  *(undefined4 *)(pIVar6 + 0x2c60) = uVar2;
  return uVar3;
}

