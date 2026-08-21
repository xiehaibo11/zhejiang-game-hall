
/* v8::internal::Genesis::InitializeGlobal_harmony_sharedarraybuffer() */

void __thiscall v8::internal::Genesis::InitializeGlobal_harmony_sharedarraybuffer(Genesis *this)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  Isolate *pIVar5;
  char *local_50;
  undefined8 uStack_48;
  
  if (FLAG_harmony_sharedarraybuffer != '\0') {
    local_50 = (char *)**(undefined8 **)(this + 0x10);
    uVar1 = Context::global_object((Context *)&local_50);
    pIVar5 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar1;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar1);
    }
    pIVar5 = *(Isolate **)this;
    uVar1 = *(ulong *)(pIVar5 + 0x2bc8) & 0xffffffff00000000;
    uVar1 = uVar1 | *(uint *)((uVar1 | *(uint *)((uVar1 | *(uint *)(*(ulong *)(pIVar5 + 0x2bc8) - 1)
                                                 ) + 0x13)) + 0x28b);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar1;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar1);
    }
    JSObject::AddProperty(pIVar5,puVar2,"SharedArrayBuffer",puVar3,2);
    pIVar5 = *(Isolate **)this;
    uVar1 = *(ulong *)(pIVar5 + 0x2bc8) & 0xffffffff00000000;
    uVar1 = uVar1 | *(uint *)((uVar1 | *(uint *)((uVar1 | *(uint *)(*(ulong *)(pIVar5 + 0x2bc8) - 1)
                                                 ) + 0x13)) + 0x6b);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar1;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar1);
    }
    JSObject::AddProperty(pIVar5,puVar2,"Atomics",puVar3,2);
    pIVar5 = *(Isolate **)this;
    uVar1 = *(ulong *)(pIVar5 + 0x2bc8) & 0xffffffff00000000;
    uVar1 = uVar1 | *(uint *)((uVar1 | *(uint *)((uVar1 | *(uint *)(*(ulong *)(pIVar5 + 0x2bc8) - 1)
                                                 ) + 0x13)) + 0x6b);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar1;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar1);
    }
    uStack_48 = __strlen_chk("Atomics",8);
    local_50 = "Atomics";
    uVar4 = Factory::InternalizeUtf8String((Factory *)pIVar5,(Vector *)&local_50);
    FUN_01036ca4(pIVar5,puVar2,uVar4);
  }
  return;
}

