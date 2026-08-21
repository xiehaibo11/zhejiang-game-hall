
/* v8::internal::TranslatedState::ReadUpdateFeedback(v8::internal::TranslationIterator*,
   v8::internal::FixedArray, __sFILE*) */

void __thiscall
v8::internal::TranslatedState::ReadUpdateFeedback
          (TranslatedState *this,long *param_1,ulong param_3,__sFILE *param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar4 = (ulong)(int)param_1[1];
  uVar6 = 0;
  uVar5 = 0;
  pbVar3 = (byte *)(*param_1 + uVar4 + 7);
  do {
    iVar7 = (int)uVar4;
    uVar2 = iVar7 + 1;
    uVar4 = (ulong)uVar2;
    *(uint *)(param_1 + 1) = uVar2;
    bVar1 = *pbVar3;
    uVar5 = (uint)(bVar1 >> 1) << (ulong)(uVar6 & 0x1f) | uVar5;
    uVar6 = uVar6 + 7;
    pbVar3 = pbVar3 + 1;
  } while ((bVar1 & 1) != 0);
  uVar6 = -(uVar5 >> 1);
  if ((uVar5 & 1) == 0) {
    uVar6 = uVar5 >> 1;
  }
  if (uVar6 != 0x1a) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","Translation::UPDATE_FEEDBACK == iterator->Next()");
  }
  uVar6 = 0;
  uVar5 = 0;
  iVar7 = iVar7 + 2;
  pbVar3 = (byte *)(*param_1 + (long)(int)uVar2 + 7);
  do {
    *(int *)(param_1 + 1) = iVar7;
    bVar1 = *pbVar3;
    iVar7 = iVar7 + 1;
    uVar2 = uVar6 & 0x1f;
    uVar6 = uVar6 + 7;
    uVar5 = (uint)(bVar1 >> 1) << (ulong)uVar2 | uVar5;
    pbVar3 = pbVar3 + 1;
  } while ((bVar1 & 1) != 0);
  uVar6 = -(uVar5 >> 1);
  if ((uVar5 & 1) == 0) {
    uVar6 = uVar5 >> 1;
  }
  uVar5 = 0;
  uVar2 = 0;
  *(ulong *)(this + 0x68) =
       param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + (long)(int)(uVar6 << 2) + 7);
  iVar7 = (int)param_1[1];
  pbVar3 = (byte *)(*param_1 + (long)iVar7 + 7);
  do {
    iVar7 = iVar7 + 1;
    *(int *)(param_1 + 1) = iVar7;
    bVar1 = *pbVar3;
    uVar6 = uVar5 & 0x1f;
    uVar5 = uVar5 + 7;
    uVar2 = (uint)(bVar1 >> 1) << (ulong)uVar6 | uVar2;
    pbVar3 = pbVar3 + 1;
  } while ((bVar1 & 1) != 0);
  uVar6 = -(uVar2 >> 1);
  if ((uVar2 & 1) == 0) {
    uVar6 = uVar2 >> 1;
  }
  *(uint *)(this + 0x70) = uVar6;
  if (param_4 != (__sFILE *)0x0) {
    PrintF(param_4,"  reading FeedbackVector (slot %d)\n");
    return;
  }
  return;
}

