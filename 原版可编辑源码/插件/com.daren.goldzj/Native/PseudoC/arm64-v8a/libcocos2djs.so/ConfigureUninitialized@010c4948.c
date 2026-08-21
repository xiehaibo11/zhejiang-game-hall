
/* v8::internal::FeedbackNexus::ConfigureUninitialized() */

void __thiscall v8::internal::FeedbackNexus::ConfigureUninitialized(FeedbackNexus *this)

{
  long lVar1;
  FeedbackNexus *pFVar2;
  FeedbackNexus *pFVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  pFVar2 = this + 8;
  pFVar3 = pFVar2;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar3 = *(FeedbackNexus **)this;
  }
  if (*(int *)(this + 0x14) - 1U < 0x16) {
    uVar6 = *(ulong *)pFVar3;
    uVar7 = uVar6 & 0xffffffff00000000;
    switch(*(int *)(this + 0x14)) {
    case 1:
    case 6:
    case 7:
    case 10:
      *(undefined4 *)(uVar6 + (long)(*(int *)(this + 0x10) << 2) + 0x1f) = 3;
      break;
    default:
      uVar5 = *(ulong *)(uVar7 + 0xc08);
      lVar1 = uVar6 + (long)(*(int *)(this + 0x10) << 2);
      *(int *)(lVar1 + 0x1f) = (int)uVar5;
      if (((int)uVar5 != 3) && ((uVar5 & 1) != 0)) {
        uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
        lVar1 = lVar1 + 0x1f;
        if (((uint)uVar4 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar6,lVar1,uVar5 & 0xfffffffffffffffd);
          uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar6,lVar1,uVar5 & 0xfffffffffffffffd);
        }
      }
      break;
    case 4:
    case 0x16:
      uVar7 = *(ulong *)(uVar7 + 0xc08);
      lVar1 = uVar6 + (long)(*(int *)(this + 0x10) << 2);
      *(int *)(lVar1 + 0x1f) = (int)uVar7;
      if (((int)uVar7 != 3) && ((uVar7 & 1) != 0)) {
        uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        lVar1 = lVar1 + 0x1f;
        if (((uint)uVar5 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar6,lVar1,uVar7 & 0xfffffffffffffffd);
          uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar6,lVar1,uVar7 & 0xfffffffffffffffd);
        }
      }
      if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
        pFVar2 = *(FeedbackNexus **)this;
      }
      *(undefined4 *)(*(long *)pFVar2 + (long)(*(int *)(this + 0x10) * 4 + 4) + 0x1f) = 0;
      return;
    case 0xf:
    case 0x10:
    case 0x12:
    case 0x13:
    case 0x14:
      goto switchD_010c49a0_caseD_f;
    case 0x15:
      uVar7 = *(ulong *)(uVar7 + 0xc08);
      lVar1 = uVar6 + (long)(*(int *)(this + 0x10) << 2);
      *(int *)(lVar1 + 0x1f) = (int)uVar7;
      if ((int)uVar7 == 3) {
        return;
      }
      if ((uVar7 & 1) == 0) {
        return;
      }
      uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      lVar1 = lVar1 + 0x1f;
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,lVar1,uVar7 & 0xfffffffffffffffd);
        uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if ((uVar5 & 0x18) == 0) {
        return;
      }
      if ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
        return;
      }
      Heap_GenerationalBarrierSlow(uVar6,lVar1,uVar7 & 0xfffffffffffffffd);
      return;
    }
    if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
      pFVar2 = *(FeedbackNexus **)this;
    }
    *(undefined4 *)(*(long *)pFVar2 + (long)(*(int *)(this + 0x10) * 4 + 4) + 0x1f) =
         *(undefined4 *)(uVar7 + 0xc08);
    return;
  }
switchD_010c49a0_caseD_f:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

