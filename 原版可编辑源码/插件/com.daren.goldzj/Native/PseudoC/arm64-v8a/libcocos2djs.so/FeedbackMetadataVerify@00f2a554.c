
/* v8::internal::FeedbackMetadata::FeedbackMetadataVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::FeedbackMetadata::FeedbackMetadataVerify(FeedbackMetadata *this,Isolate *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long local_18;
  
  lVar3 = *(long *)this;
  if ((*(int *)(lVar3 + 3) == 0) && (*(int *)(lVar3 + 7) == 0)) {
    if (*(int *)(param_1 + 0x400) != (int)lVar3) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","ReadOnlyRoots(isolate).empty_feedback_metadata() == *this");
    }
  }
  else if (0 < *(int *)(lVar3 + 3)) {
    iVar4 = 0;
    do {
      local_18 = lVar3;
      iVar1 = GetKind((FeedbackMetadata *)&local_18,iVar4);
      iVar2 = 2;
      if (0xd < iVar1 - 1U) {
        switch(iVar1) {
        case 0:
        case 0x17:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        default:
          if (0x16 < iVar1) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","FeedbackSlotKind::kKindsNumber > kind");
          }
          iVar2 = 1;
          break;
        case 0x11:
        case 0x16:
          break;
        }
      }
      iVar4 = iVar2 + iVar4;
    } while (iVar4 < *(int *)(lVar3 + 3));
  }
  return;
}

