
/* v8::Function::ScriptId() const */

int __thiscall v8::Function::ScriptId(Function *this)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *(ulong *)this;
  pIVar1 = (Isolate *)(uVar4 & 0xffffffff00000000);
  uVar3 = (ulong)pIVar1 | 7;
  if (*(short *)(uVar3 + *(uint *)(uVar4 - 1)) == 0x439) {
    uVar5 = (ulong)pIVar1 | (ulong)*(uint *)(((ulong)pIVar1 | (ulong)*(uint *)(uVar4 + 0xb)) + 0xf);
    if (*(short *)(uVar3 + *(uint *)(uVar5 - 1)) == 0x5b) {
      uVar5 = (ulong)pIVar1 | (ulong)*(uint *)(uVar5 + 0xb);
    }
    if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x65) {
      uVar4 = (ulong)pIVar1 |
              (ulong)*(uint *)(((ulong)pIVar1 | (ulong)*(uint *)(uVar4 + 0xb)) + 0xf);
      if (*(short *)(uVar3 + *(uint *)(uVar4 - 1)) == 0x5b) {
        uVar4 = (ulong)pIVar1 | (ulong)*(uint *)(uVar4 + 0xb);
      }
      if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)(pIVar1 + 0x95a0);
        if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
          puVar2 = (ulong *)internal::HandleScope::Extend(pIVar1);
        }
        *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar4;
      }
      else {
        puVar2 = (ulong *)internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
        uVar4 = *puVar2;
      }
      return *(int *)(uVar4 + 0x1f) >> 1;
    }
  }
  return 0;
}

