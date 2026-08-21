
/* v8::internal::FrameSummary::is_subject_to_debugging() const */

bool __thiscall v8::internal::FrameSummary::is_subject_to_debugging(FrameSummary *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_18;
  
  if (1 < *(int *)(this + 8) - 1U) {
    if (*(int *)(this + 8) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar3 = **(ulong **)(this + 0x18) & 0xffffffff00000000;
    uVar4 = uVar3 | *(uint *)(**(ulong **)(this + 0x18) + 0xb);
    local_18 = uVar3 | *(uint *)(uVar4 + 0xf);
    if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x5b) {
      local_18 = uVar3 | *(uint *)(local_18 + 0xb);
    }
    if ((((local_18 & 1) != 0) &&
        ((int)local_18 == *(int *)((local_18 & 0xffffffff00000000) + 0xa0))) ||
       (uVar2 = Script::IsUserJavaScript((Script *)&local_18), (uVar2 & 1) == 0)) {
      return false;
    }
    uVar1 = *(uint *)(uVar4 + 3);
    if ((uVar1 & 1) != 0) {
      return *(short *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) != 0x57;
    }
  }
  return true;
}

