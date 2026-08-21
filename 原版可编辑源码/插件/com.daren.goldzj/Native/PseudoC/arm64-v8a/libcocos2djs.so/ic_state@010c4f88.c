
/* v8::internal::FeedbackNexus::ic_state() const */

undefined4 __thiscall v8::internal::FeedbackNexus::ic_state(FeedbackNexus *this)

{
  long lVar1;
  undefined4 uVar2;
  FeedbackNexus *pFVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  pFVar3 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar3 = *(FeedbackNexus **)this;
  }
  iVar5 = *(int *)(this + 0x10) * 4;
  lVar10 = (long)iVar5;
  lVar1 = *(ulong *)pFVar3 + 0x1f;
  uVar4 = *(uint *)(lVar1 + lVar10);
  uVar9 = (ulong)uVar4;
  if (0x17 < *(uint *)(this + 0x14)) {
    return 1;
  }
  uVar8 = *(ulong *)pFVar3 & 0xffffffff00000000;
  uVar11 = uVar8 | uVar9;
  switch(*(uint *)(this + 0x14)) {
  case 0:
  case 0x17:
    goto switchD_010c4fdc_caseD_0;
  case 1:
  case 6:
  case 7:
  case 10:
    if ((uVar4 & 1) == 0) {
      return 2;
    }
    if (uVar4 != 3) {
      return 2;
    }
    bVar6 = *(int *)(lVar1 + (iVar5 + 4)) == *(int *)(uVar8 + 0xc08);
    goto LAB_010c5144;
  default:
    if (uVar4 == *(uint *)(uVar8 + 0xc08)) {
      return 1;
    }
    if (uVar4 == *(uint *)(uVar8 + 0xb88)) {
      return 5;
    }
    if ((uVar9 & 3) == 3) {
      return 2;
    }
    if ((uVar9 & 3) == 1) {
      if (*(ushort *)((uVar8 | 7) + (ulong)*(uint *)(uVar11 - 1)) - 0x97 < 2) {
        return 4;
      }
      if (*(ushort *)((uVar8 | 7) + (ulong)*(uint *)(uVar11 - 1)) < 0x41) {
        uVar7 = 4;
        if (*(int *)((uVar8 | *(uint *)(lVar1 + (iVar5 + 4))) + 3) < 6) {
          uVar7 = 2;
        }
        return uVar7;
      }
    }
    goto switchD_010c4fdc_caseD_0;
  case 4:
    if (uVar4 == *(uint *)(uVar8 + 0xb88)) {
      return 6;
    }
    if ((uVar9 & 3) == 3) {
      return 2;
    }
    if (((uVar9 & 3) == 1) && (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x55)) {
      return 2;
    }
    if (uVar4 != *(uint *)(uVar8 + 0xc08)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "feedback == MaybeObject::FromObject( *FeedbackVector::UninitializedSentinel(isolate))"
              );
    }
    break;
  case 0xf:
    uVar4 = *(int *)(lVar10 + lVar1) >> 1;
    if (0x20 < uVar4) {
      return 6;
    }
    if ((1L << ((ulong)uVar4 & 0x3f) & 0x10001808aU) == 0) {
      if ((ulong)uVar4 != 0) {
        return 6;
      }
      return 1;
    }
    return 2;
  case 0x10:
    iVar5 = *(int *)(lVar10 + lVar1) >> 1;
    switch(iVar5) {
    case 0:
      return 1;
    case 1:
    case 3:
    case 7:
    case 8:
    case 0x18:
    case 0x20:
    case 0x40:
      return 2;
    case 2:
    case 4:
    case 5:
    case 6:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
      goto switchD_010c5090_caseD_2;
    default:
      if (iVar5 == 0x80) {
        return 2;
      }
      if (iVar5 == 0x180) {
        return 2;
      }
      return 6;
    }
  case 0x11:
    if (uVar4 != *(uint *)(uVar8 + 0xc08)) {
      uVar7 = 5;
LAB_010c51c4:
      uVar2 = 2;
      if ((~uVar4 & 3) != 0) {
        uVar2 = uVar7;
      }
      return uVar2;
    }
    break;
  case 0x12:
    bVar6 = uVar4 == *(uint *)(uVar8 + 0xc08);
    goto LAB_010c5144;
  case 0x13:
    bVar6 = (uVar4 & 1) == 0;
LAB_010c5144:
    uVar7 = 1;
    if (!bVar6) {
      uVar7 = 2;
    }
    return uVar7;
  case 0x14:
    uVar4 = *(int *)(lVar10 + lVar1) >> 1;
    if (uVar4 < 4) {
      return *(undefined4 *)(&DAT_019d69e0 + (long)(int)uVar4 * 4);
    }
switchD_010c5090_caseD_2:
    return 6;
  case 0x15:
    if (uVar4 != *(uint *)(uVar8 + 0xc08)) {
      uVar7 = 5;
      if (uVar4 != *(uint *)(uVar8 + 0xb88)) {
        uVar7 = 2;
      }
      return uVar7;
    }
    break;
  case 0x16:
    if (uVar4 != *(uint *)(uVar8 + 0xc08)) {
      if (uVar4 == *(uint *)(uVar8 + 0xb88)) {
        return 5;
      }
      uVar7 = 4;
      goto LAB_010c51c4;
    }
  }
  return 1;
switchD_010c4fdc_caseD_0:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

