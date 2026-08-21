
/* v8::internal::FrameSummary::JavaScriptFrameSummary::AreSourcePositionsAvailable() const */

bool __thiscall
v8::internal::FrameSummary::JavaScriptFrameSummary::AreSourcePositionsAvailable
          (JavaScriptFrameSummary *this)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (FLAG_enable_lazy_source_positions != '\0') {
    uVar1 = **(ulong **)(this + 0x18) & 0xffffffff00000000;
    uVar3 = uVar1 | *(uint *)(**(ulong **)(this + 0x18) + 0xb);
    uVar5 = uVar1 | *(uint *)(uVar3 + 0xf);
    uVar4 = uVar1 | 7;
    if ((*(short *)(uVar4 + *(uint *)(uVar5 - 1)) == 0x5b) &&
       (*(short *)(uVar4 + *(uint *)((uVar1 | *(uint *)(uVar5 + 0x13)) - 1)) == 0x86)) {
      uVar2 = *(uint *)(uVar5 + 0xf);
    }
    else {
      uVar2 = *(uint *)(uVar3 + 3);
      if (((uVar2 & 1) == 0) || (*(short *)(uVar4 + *(uint *)((uVar1 | uVar2) - 1)) != 0x86)) {
        uVar2 = *(uint *)((uVar1 | *(uint *)(uVar3 + 3)) + 3);
      }
      else {
        uVar2 = *(uint *)(uVar3 + 3);
      }
    }
    uVar2 = *(uint *)((uVar1 | uVar2) + 0xf);
    if ((uVar2 & 1) != 0) {
      if (uVar2 == *(uint *)(uVar1 + 0xa0)) {
        return false;
      }
      return uVar2 != *(uint *)(uVar1 + 0x180);
    }
  }
  return true;
}

