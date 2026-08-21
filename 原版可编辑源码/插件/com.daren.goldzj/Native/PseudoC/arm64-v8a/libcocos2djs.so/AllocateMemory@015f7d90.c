
/* v8::internal::wasm::InstanceBuilder::AllocateMemory() */

undefined8 __thiscall v8::internal::wasm::InstanceBuilder::AllocateMemory(InstanceBuilder *this)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  ulong *puVar5;
  char *pcVar6;
  byte bVar7;
  long lVar8;
  Isolate *pIVar9;
  ulong uVar10;
  
  lVar8 = *(long *)(this + 0x10);
  uVar1 = *(uint *)(lVar8 + 8);
  if (*(char *)(lVar8 + 0x11) == '\0') {
    uVar2 = max_mem_pages();
  }
  else {
    uVar2 = *(undefined4 *)(lVar8 + 0xc);
  }
  uVar3 = max_mem_pages();
  if (uVar3 < uVar1) {
    pcVar4 = *(char **)(this + 0x18);
    pcVar6 = "Out of memory: wasm memory too large";
  }
  else {
    if (*(char *)(*(long *)(this + 0x10) + 0x10) == '\0') {
      bVar7 = 0;
    }
    else {
      bVar7 = (byte)this[8] >> 1 & 1;
    }
    puVar5 = (ulong *)WasmMemoryObject::New(*(undefined8 *)this,uVar1,uVar2,bVar7);
    if (puVar5 != (ulong *)0x0) {
      *(ulong **)(this + 0x38) = puVar5;
      pIVar9 = *(Isolate **)this;
      uVar10 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 0xb);
      if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)(pIVar9 + 0x95a0);
        if (puVar5 == *(ulong **)(pIVar9 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(pIVar9);
        }
        *(ulong **)(pIVar9 + 0x95a0) = puVar5 + 1;
        *puVar5 = uVar10;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar10);
      }
      *(ulong **)(this + 0x30) = puVar5;
      return 1;
    }
    pcVar4 = *(char **)(this + 0x18);
    *(undefined8 *)(this + 0x38) = 0;
    pcVar6 = "Out of memory: wasm memory";
  }
  ErrorThrower::RangeError(pcVar4,pcVar6);
  return 0;
}

