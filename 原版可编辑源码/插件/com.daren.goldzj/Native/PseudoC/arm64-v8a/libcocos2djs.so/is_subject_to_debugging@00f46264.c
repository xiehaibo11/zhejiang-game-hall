
/* v8::internal::FrameSummary::JavaScriptFrameSummary::is_subject_to_debugging() const */

bool __thiscall
v8::internal::FrameSummary::JavaScriptFrameSummary::is_subject_to_debugging
          (JavaScriptFrameSummary *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_18;
  
  uVar3 = **(ulong **)(this + 0x18) & 0xffffffff00000000;
  uVar4 = uVar3 | *(uint *)(**(ulong **)(this + 0x18) + 0xb);
  uVar1 = *(uint *)(uVar4 + 0xf);
  local_18 = uVar3 | uVar1;
  if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x5b) {
    uVar1 = *(uint *)(local_18 + 0xb);
    local_18 = uVar3 | uVar1;
  }
  if ((((uVar1 & 1) == 0) || ((int)local_18 != *(int *)((local_18 & 0xffffffff00000000) + 0xa0))) &&
     (uVar2 = Script::IsUserJavaScript((Script *)&local_18), (uVar2 & 1) != 0)) {
    uVar1 = *(uint *)(uVar4 + 3);
    if ((uVar1 & 1) == 0) {
      return true;
    }
    return *(short *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) != 0x57;
  }
  return false;
}

