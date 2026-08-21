
/* v8::internal::wasm::InstanceBuilder::FindImportedMemory() */

undefined8 __thiscall v8::internal::wasm::InstanceBuilder::FindImportedMemory(InstanceBuilder *this)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  ulong uVar5;
  long lVar6;
  
  lVar1 = *(long *)(*(long *)(this + 0x10) + 0xd0);
  lVar2 = *(long *)(*(long *)(this + 0x10) + 0xd8) - lVar1;
  if (lVar2 != 0) {
    uVar5 = 0;
    lVar6 = 0x10;
    do {
      if (*(char *)(lVar1 + lVar6) == '\x02') {
        puVar3 = *(ulong **)(*(long *)(this + 0x70) + lVar6);
        uVar5 = *puVar3;
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x435) {
          return 0;
        }
        *(ulong **)(this + 0x38) = puVar3;
        pIVar4 = *(Isolate **)this;
        uVar5 = *puVar3 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar3 + 0xb);
        if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar3 = *(ulong **)(pIVar4 + 0x95a0);
          if (puVar3 == *(ulong **)(pIVar4 + 0x95a8)) {
            puVar3 = (ulong *)HandleScope::Extend(pIVar4);
          }
          *(ulong **)(pIVar4 + 0x95a0) = puVar3 + 1;
          *puVar3 = uVar5;
        }
        else {
          puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar5);
        }
        *(ulong **)(this + 0x30) = puVar3;
        return 1;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar5 < (ulong)((lVar2 >> 3) * -0x5555555555555555));
  }
  return 0;
}

