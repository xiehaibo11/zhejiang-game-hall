
/* v8::internal::FeedbackNexus::GetKeyedAccessLoadMode() const */

int __thiscall v8::internal::FeedbackNexus::GetKeyedAccessLoadMode(FeedbackNexus *this)

{
  long lVar1;
  FeedbackNexus *pFVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  int *local_60;
  int *local_58;
  undefined8 local_50;
  void *local_48;
  void *local_40;
  undefined8 uStack_38;
  
  local_40 = (void *)0x0;
  uStack_38 = 0;
  local_50 = 0;
  local_48 = (void *)0x0;
  local_60 = (int *)0x0;
  local_58 = (int *)0x0;
  pFVar2 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar2 = *(FeedbackNexus **)this;
  }
  iVar4 = *(int *)(this + 0x10) * 4;
  uVar5 = *(ulong *)pFVar2 & 0xffffffff00000000;
  lVar1 = *(ulong *)pFVar2 + 0x1f;
  uVar7 = *(uint *)(lVar1 + iVar4);
  if (uVar7 == *(uint *)(uVar5 + 0xb88)) {
    if (*(int *)(lVar1 + (iVar4 + 4)) >> 1 == 1) {
      return 0;
    }
  }
  else {
    if (*(int *)(this + 0x14) == 0x11) {
      uVar7 = *(uint *)(lVar1 + (iVar4 + 4));
    }
    if (((ulong)uVar7 & 3) == 1) {
      uVar8 = uVar5 | uVar7;
      if (*(ushort *)((uVar5 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0x40) {
        return 0;
      }
      if (((*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x40) &&
          (uVar7 != *(uint *)(uVar5 + 0xc08))) && (uVar7 != *(uint *)(uVar5 + 0xb88))) {
        return 0;
      }
    }
  }
  ExtractMapsAndHandlers(this,(vector *)&local_48,(vector *)&local_60);
  piVar3 = local_58;
  piVar9 = local_60;
  if (local_60 == local_58) {
    iVar4 = 0;
  }
  else {
    do {
      puVar6 = *(ulong **)(piVar9 + 2);
      if (*piVar9 == 0) {
        if (puVar6 == (ulong *)0x0) goto LAB_010c6f0c;
        uVar5 = *puVar6 | 2;
      }
      else {
        if (puVar6 == (ulong *)0x0) {
LAB_010c6f0c:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(location_) != nullptr");
        }
        uVar5 = *puVar6;
      }
      iVar4 = LoadHandler::GetKeyedAccessLoadMode(uVar5);
    } while ((iVar4 == 0) && (piVar9 = piVar9 + 4, piVar9 != piVar3));
  }
  if (local_60 != (int *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  if (local_48 != (void *)0x0) {
    local_40 = local_48;
    operator_delete(local_48);
  }
  return iVar4;
}

