
/* v8::internal::ExitFrame::ComputeFrameType(unsigned long) */

ulong v8::internal::ExitFrame::ComputeFrameType(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if ((*(ulong *)(param_1 - 8) & 1) == 0) {
    uVar2 = *(ulong *)(param_1 - 8) >> 1;
    uVar1 = (uint)uVar2;
    if ((uVar1 < 0x16) && ((1 << (ulong)(uVar1 & 0x1f) & 0x200408U) != 0)) {
      return uVar2;
    }
  }
  return 3;
}

