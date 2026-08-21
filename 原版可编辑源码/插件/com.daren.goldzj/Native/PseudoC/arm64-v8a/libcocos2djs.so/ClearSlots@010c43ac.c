
/* v8::internal::FeedbackVector::ClearSlots(v8::internal::Isolate*) */

uint __thiscall v8::internal::FeedbackVector::ClearSlots(FeedbackVector *this,Isolate *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 local_80;
  ulong uStack_78;
  uint local_70;
  uint local_6c;
  ulong local_68;
  
  uVar6 = *(ulong *)this & 0xffffffff00000000;
  uVar8 = uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)this + 3)) + 0xb);
  if ((*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x9e) &&
     (uVar9 = *(undefined8 *)(param_1 + 0xc08), 0 < *(int *)(uVar8 + 3))) {
    uVar7 = 0;
    uVar10 = 0;
    local_68 = uVar8;
    do {
      lVar1 = (ulong)(uVar10 / 6 << 2) + 0xb;
      uVar3 = (uVar10 % 6) * 5;
      uVar5 = *(uint *)(uVar8 + lVar1) >> (ulong)(uVar3 & 0x1f) & 0x1f;
      if (uVar5 - 1 < 0xe) {
switchD_010c4534_caseD_11:
        iVar11 = 2;
      }
      else {
        iVar11 = 1;
        switch(uVar5) {
        case 0:
        case 0x17:
          goto switchD_010c4534_caseD_0;
        case 0x11:
        case 0x16:
          goto switchD_010c4534_caseD_11;
        }
      }
      uVar6 = *(ulong *)this;
      lVar2 = (long)(int)(uVar10 << 2) + 0x1f;
      if (*(int *)(lVar2 + uVar6) != (int)uVar9) {
        local_80 = 0;
        uStack_78 = uVar6;
        local_70 = uVar10;
        if ((int)uVar6 == 0) {
          local_6c = 0;
switchD_010c4534_caseD_0:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        local_6c = *(uint *)((uVar6 & 0xffffffff00000000 |
                             (ulong)*(uint *)((uVar6 & 0xffffffff00000000 |
                                              (ulong)*(uint *)(uVar6 + 3)) + 0xb)) + lVar1) >>
                   (ulong)(uVar3 & 0x1f) & 0x1f;
        if (local_6c - 1 < 0xe) {
LAB_010c44f4:
          iVar4 = FeedbackNexus::ic_state((FeedbackNexus *)&local_80);
          uVar5 = 0;
          if ((iVar4 != 1) && (FLAG_use_ic != '\0')) {
            FeedbackNexus::ConfigureUninitialized((FeedbackNexus *)&local_80);
LAB_010c4450:
            uVar5 = 1;
          }
        }
        else {
          uVar5 = 0;
          if (local_6c < 0x18) {
            if ((1 << (ulong)local_6c & 0x620000U) != 0) goto LAB_010c44f4;
            if (local_6c != 0x13) {
              if ((1 << (ulong)local_6c & 0x800001U) != 0) goto switchD_010c4534_caseD_0;
              goto LAB_010c4454;
            }
            *(undefined4 *)(uVar6 + lVar2) = 0;
            uVar8 = local_68;
            goto LAB_010c4450;
          }
        }
LAB_010c4454:
        uVar7 = uVar7 | uVar5;
      }
      uVar10 = iVar11 + uVar10;
    } while ((int)uVar10 < *(int *)(uVar8 + 3));
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

