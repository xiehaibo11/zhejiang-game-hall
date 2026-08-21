
/* v8::internal::TypeProfile::SelectMode(v8::internal::Isolate*, v8::debug::TypeProfileMode) */

void v8::internal::TypeProfile::SelectMode(Isolate *param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong local_70;
  ulong uStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  ulong local_58;
  ulong local_38;
  
  if (*(int *)(param_1 + 0xb814) != param_2) {
    Isolate::CollectSourcePositionsForAllBytecodeArrays(param_1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x95a0);
  lVar2 = *(long *)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  if (param_2 == 0) {
    uVar3 = *(ulong *)(param_1 + 0xf80);
    if (((uVar3 & 1) == 0) || ((int)uVar3 != *(int *)(param_1 + 0xa0))) {
      lVar4 = 0;
      iVar5 = 4;
      do {
        if (*(uint *)(uVar3 + 3) < 2) {
          if (-1 < lVar4) goto LAB_00f04d48;
        }
        else if (*(int *)(uVar3 + 7) >> 1 <= lVar4) goto LAB_00f04d48;
        local_70 = uVar3 & 0xffffffff00000000;
        local_58 = local_70 | *(uint *)(uVar3 + (long)iVar5 + 7);
        local_70 = local_70 | *(uint *)((local_70 | *(uint *)(local_58 + 3)) + 0xb);
        uVar3 = FeedbackMetadata::HasTypeProfileSlot((FeedbackMetadata *)&local_70);
        if ((uVar3 & 1) != 0) {
          local_60 = FeedbackVector::GetTypeProfileSlot();
          uStack_68 = local_58;
          local_70 = 0;
          local_38 = uStack_68;
          if ((int)local_58 == 0) {
            local_5c = 0;
          }
          else {
            local_5c = FeedbackVector::GetKind((FeedbackVector *)&local_38,local_60);
          }
          FeedbackNexus::ResetTypeProfile((FeedbackNexus *)&local_70);
        }
        uVar3 = *(ulong *)(param_1 + 0xf80);
        lVar4 = lVar4 + 1;
        iVar5 = iVar5 + 4;
      } while( true );
    }
  }
  else {
    Isolate::MaybeInitializeVectorListFromHeap(param_1);
  }
LAB_00f04d5c:
  *(int *)(param_1 + 0xb814) = param_2;
  *(undefined8 *)(param_1 + 0x95a0) = uVar1;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(long *)(param_1 + 0x95a8) != lVar2) {
    *(long *)(param_1 + 0x95a8) = lVar2;
    HandleScope::DeleteExtensions(param_1);
  }
  return;
LAB_00f04d48:
  if (*(int *)(param_1 + 0xb810) == 0) {
    Isolate::SetFeedbackVectorsForProfilingTools(param_1,*(undefined8 *)(param_1 + 0xa0));
  }
  goto LAB_00f04d5c;
}

