
/* v8::internal::FeedbackMetadata::New(v8::internal::Isolate*, v8::internal::FeedbackVectorSpec
   const*) */

Isolate * v8::internal::FeedbackMetadata::New(Isolate *param_1,FeedbackVectorSpec *param_2)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  Isolate *pIVar5;
  int iVar6;
  ulong uVar7;
  
  if (param_2 != (FeedbackVectorSpec *)0x0) {
    uVar4 = *(int *)(param_2 + 8) - *(int *)param_2;
    if (*(int *)(param_2 + 0x20) != 0 || uVar4 != 0) {
      pIVar5 = (Isolate *)
               Factory::NewFeedbackMetadata((Factory *)param_1,uVar4,*(int *)(param_2 + 0x20),1);
      if ((int)uVar4 < 1) {
        return pIVar5;
      }
      iVar6 = 0;
      uVar7 = 0;
      do {
        if ((ulong)(*(long *)(param_2 + 8) - *(long *)param_2) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pbVar1 = (byte *)(*(long *)param_2 + uVar7);
        lVar2 = (ulong)((uint)((uVar7 & 0xffffffff) * 0xaaaaaaab >> 0x20) & 0xfffffffc) +
                *(long *)pIVar5;
        uVar3 = iVar6 + (int)((uVar7 & 0xffffffff) / 6) * -0x1e;
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 5;
        *(uint *)(lVar2 + 0xb) =
             *(uint *)(lVar2 + 0xb) & (0x1f << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU) |
             (uint)*pbVar1 << (ulong)(uVar3 & 0x1f);
      } while (uVar4 != uVar7);
      return pIVar5;
    }
  }
  return param_1 + 0x400;
}

