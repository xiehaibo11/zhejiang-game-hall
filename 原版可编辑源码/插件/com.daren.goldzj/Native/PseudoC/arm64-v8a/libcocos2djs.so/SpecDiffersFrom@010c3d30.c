
/* v8::internal::FeedbackMetadata::SpecDiffersFrom(v8::internal::FeedbackVectorSpec const*) const */

undefined8 __thiscall
v8::internal::FeedbackMetadata::SpecDiffersFrom(FeedbackMetadata *this,FeedbackVectorSpec *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  
  uVar3 = *(long *)(param_1 + 8) - *(long *)param_1;
  iVar2 = (int)uVar3;
  if (*(int *)(*(long *)this + 3) == iVar2) {
    uVar4 = 0;
    do {
      if (iVar2 <= (int)uVar4) {
        return 0;
      }
      uVar1 = *(uint *)((ulong)(uVar4 / 6 << 2) + *(long *)this + 0xb) >>
              (ulong)((uVar4 % 6) * 5 & 0x1f) & 0x1f;
      if (uVar1 - 1 < 0xe) {
switchD_010c3ddc_caseD_11:
        iVar5 = 2;
      }
      else {
        iVar5 = 1;
        switch(uVar1) {
        case 0:
        case 0x17:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        case 0x11:
        case 0x16:
          goto switchD_010c3ddc_caseD_11;
        }
      }
      uVar6 = (ulong)uVar4;
      if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar4 = iVar5 + uVar4;
    } while (uVar1 == *(byte *)(*(long *)param_1 + uVar6));
  }
  return 1;
}

