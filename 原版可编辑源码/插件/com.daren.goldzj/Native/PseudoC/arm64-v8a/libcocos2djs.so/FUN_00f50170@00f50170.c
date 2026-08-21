
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00f50170(long *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  FrameSummary *pFVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  FrameSummary *this;
  long lVar11;
  HandlerTable aHStack_60 [16];
  FrameSummary *local_50;
  FrameSummary *local_48;
  undefined8 uStack_40;
  uint local_34;
  
  iVar5 = (**(code **)(*param_1 + 8))();
  if (iVar5 == 4) {
    iVar5 = (**(code **)(*param_1 + 0xa8))(param_1,0,0);
    if (0 < iVar5) {
      local_48 = (FrameSummary *)0x0;
      uStack_40 = 0;
      local_50 = (FrameSummary *)0x0;
      (**(code **)(*param_1 + 0x88))(param_1,&local_50);
      lVar11 = (long)local_48 - (long)local_50;
      if (lVar11 != 0) {
        lVar8 = (lVar11 >> 3) * 0x6db6db6db6db6db7;
        lVar11 = lVar11 + -0x18;
        do {
          lVar8 = lVar8 + -1;
          puVar10 = *(ulong **)(local_50 + lVar11);
          uVar6 = *puVar10;
          uVar7 = uVar6 & 0xffffffff00000000;
          uVar9 = uVar7 | 7;
          if (((*(short *)(uVar9 + *(uint *)(uVar6 - 1)) == 0x9a) &&
              (*(short *)(uVar9 + *(uint *)(uVar6 - 1)) == 0x9a)) &&
             ((*(uint *)(uVar6 + 0x17) & 0x3e) == 6)) {
            if ((*(uint *)((uVar7 | *(uint *)(uVar6 + 0xf)) + 7) >> 4 & 1) == 0) {
              uVar2 = *(uint *)((uVar7 | *(uint *)(uVar6 + 0xf)) + 7);
              local_34 = uVar2 >> 5 & 1;
              if ((uVar2 >> 5 & 1) == 0) goto LAB_00f502e0;
              param_1 = (long *)0x1;
            }
            else {
              param_1 = (long *)0x2;
              local_34 = 2;
            }
joined_r0x00f503a8:
            bVar3 = false;
            pFVar4 = local_50;
            this = local_48;
            goto joined_r0x00f503a8;
          }
          if ((*(short *)(uVar9 + *(uint *)(uVar6 - 1)) == 0x9a) &&
             ((*(uint *)(uVar6 + 0x17) & 0x3e) != 0x18)) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","AbstractCode::INTERPRETED_FUNCTION == code->kind()");
          }
          iVar5 = v8::internal::FrameSummary::code_offset(local_50 + lVar11 + -0x20);
          v8::internal::HandlerTable::HandlerTable(aHStack_60,*puVar10);
          iVar5 = v8::internal::HandlerTable::LookupRange
                            (aHStack_60,iVar5,(int *)0x0,(CatchPrediction *)&local_34);
          uVar2 = (uint)param_1;
          if (local_34 != 0) {
            uVar2 = local_34;
          }
          uVar1 = (uint)param_1;
          if (0 < iVar5) {
            uVar1 = uVar2;
          }
          param_1 = (long *)(ulong)uVar1;
          if ((0 < iVar5) && (local_34 != 0)) {
            param_1 = (long *)(ulong)uVar2;
            goto joined_r0x00f503a8;
          }
LAB_00f502e0:
          if (lVar8 == 0) break;
          lVar11 = lVar11 + -0x38;
        } while( true );
      }
      bVar3 = true;
      pFVar4 = local_50;
      this = local_48;
joined_r0x00f503a8:
      local_50 = pFVar4;
      local_48 = this;
      if (pFVar4 != (FrameSummary *)0x0) {
        while (this != pFVar4) {
          this = this + -0x38;
          v8::internal::FrameSummary::~FrameSummary(this);
        }
        local_48 = pFVar4;
        operator_delete(local_50);
      }
      if (!bVar3) goto LAB_00f50380;
    }
  }
  else {
    iVar5 = (**(code **)(*param_1 + 0xa8))(param_1,0,&local_34);
    if (0 < iVar5) {
      param_1 = (long *)(ulong)local_34;
      goto LAB_00f50380;
    }
  }
  param_1 = (long *)0x0;
LAB_00f50380:
  return (ulong)param_1 & 0xffffffff;
}

