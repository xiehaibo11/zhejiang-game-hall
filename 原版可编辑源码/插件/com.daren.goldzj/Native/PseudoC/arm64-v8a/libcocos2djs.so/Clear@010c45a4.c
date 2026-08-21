
/* v8::internal::FeedbackNexus::Clear() */

undefined8 __thiscall v8::internal::FeedbackNexus::Clear(FeedbackNexus *this)

{
  FeedbackNexus *pFVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(this + 0x14);
  if (0xd < uVar2 - 1) {
    if (0x17 < uVar2) {
      return 0;
    }
    if ((1 << (ulong)(uVar2 & 0x1f) & 0x620000U) == 0) {
      if (uVar2 == 0x13) {
        pFVar1 = this + 8;
        if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
          pFVar1 = *(FeedbackNexus **)this;
        }
        *(undefined4 *)(*(long *)pFVar1 + (long)(*(int *)(this + 0x10) << 2) + 0x1f) = 0;
        return 1;
      }
      if ((1 << (ulong)(uVar2 & 0x1f) & 0x800001U) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      return 0;
    }
  }
  iVar3 = ic_state(this);
  if (iVar3 == 1) {
    return 0;
  }
  if (FLAG_use_ic != '\0') {
    ConfigureUninitialized(this);
    return 1;
  }
  return 0;
}

