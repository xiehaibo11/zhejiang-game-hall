
/* v8::Function::GetScriptLineNumber() const */

undefined8 __thiscall v8::Function::GetScriptLineNumber(Function *this)

{
  undefined4 uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_38;
  
  uVar6 = *(ulong *)this;
  pIVar2 = (Isolate *)(uVar6 & 0xffffffff00000000);
  uVar5 = (ulong)pIVar2 | 7;
  if (*(short *)(uVar5 + *(uint *)(uVar6 - 1)) == 0x439) {
    uVar7 = (ulong)pIVar2 | (ulong)*(uint *)(((ulong)pIVar2 | (ulong)*(uint *)(uVar6 + 0xb)) + 0xf);
    if (*(short *)(uVar5 + *(uint *)(uVar7 - 1)) == 0x5b) {
      uVar7 = (ulong)pIVar2 | (ulong)*(uint *)(uVar7 + 0xb);
    }
    if (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x65) {
      uVar6 = (ulong)pIVar2 |
              (ulong)*(uint *)(((ulong)pIVar2 | (ulong)*(uint *)(uVar6 + 0xb)) + 0xf);
      if (*(short *)(uVar5 + *(uint *)(uVar6 - 1)) == 0x5b) {
        uVar6 = (ulong)pIVar2 | (ulong)*(uint *)(uVar6 + 0xb);
      }
      if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(pIVar2 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
          puVar3 = (ulong *)internal::HandleScope::Extend(pIVar2);
        }
        *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar6;
      }
      else {
        puVar3 = (ulong *)internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar6);
      }
      local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
      uVar1 = internal::SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_38);
      uVar4 = internal::Script::GetLineNumber(puVar3,uVar1);
      return uVar4;
    }
  }
  return 0xffffffff;
}

