
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::LinearScanAllocator::AllocateBlockedReg(v8::internal::compiler::LiveRange*,
   v8::internal::compiler::RegisterAllocationData::SpillMode) */

void __thiscall
v8::internal::compiler::LinearScanAllocator::AllocateBlockedReg
          (LinearScanAllocator *this,LiveRange *param_1,int param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  LiveRange *pLVar12;
  char *pcVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  uint *puVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  uint local_170 [32];
  uint *local_f0;
  undefined8 uStack_e8;
  uint local_e0 [32];
  
  lVar22 = *(long *)(param_1 + 0x38);
  if ((lVar22 != 0) && (*(int *)(lVar22 + 0x18) <= **(int **)(param_1 + 0x10))) goto LAB_016635f4;
  for (lVar22 = *(long *)(param_1 + 0x18); lVar22 != 0; lVar22 = *(long *)(lVar22 + 0x10)) {
LAB_016635f4:
    if (**(int **)(param_1 + 0x10) <= *(int *)(lVar22 + 0x18)) {
      *(long *)(param_1 + 0x38) = lVar22;
      goto LAB_01663614;
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  goto LAB_0166362c;
joined_r0x016636c0:
  if (plVar23 != plVar21) {
    lVar20 = *plVar23;
    uVar17 = (ulong)(*(uint *)(lVar20 + 4) >> 7) & 0x3f;
    if (-1 < *(int *)(*(long *)(lVar20 + 0x20) + 0x5c)) {
      lVar11 = *(long *)(lVar20 + 0x38);
      iVar9 = **(int **)(param_1 + 0x10);
      if ((lVar11 != 0) && (*(int *)(lVar11 + 0x18) <= iVar9)) goto LAB_0166372c;
      for (lVar11 = *(long *)(lVar20 + 0x18); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10)) {
LAB_0166372c:
        if (iVar9 <= *(int *)(lVar11 + 0x18)) {
          *(long *)(lVar20 + 0x38) = lVar11;
          lVar19 = lVar11;
          goto LAB_0166378c;
        }
      }
      *(undefined8 *)(lVar20 + 0x38) = 0;
      iVar9 = **(int **)(param_1 + 0x10);
      goto LAB_0166374c;
    }
LAB_016636c8:
    uVar8 = 0;
    local_f0[uVar17] = 0;
    puVar18 = local_170;
    goto LAB_016636e0;
  }
  goto LAB_016637f8;
  while (lVar19 = *(long *)(lVar19 + 0x10), lVar19 != 0) {
LAB_0166378c:
    if ((*(uint *)(lVar19 + 0x1c) & 3) == 2) {
      if (*(int *)(lVar19 + 0x18) <= (int)(iVar9 + 2U | 1)) goto LAB_016636c8;
      break;
    }
  }
  iVar9 = **(int **)(param_1 + 0x10);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0x18) <= iVar9)) goto LAB_01663754;
LAB_0166374c:
  for (lVar11 = *(long *)(lVar20 + 0x18); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10)) {
LAB_01663754:
    if (iVar9 <= *(int *)(lVar11 + 0x18)) {
      *(long *)(lVar20 + 0x38) = lVar11;
      goto LAB_016637ac;
    }
  }
  *(undefined8 *)(lVar20 + 0x38) = 0;
LAB_0166376c:
  puVar18 = (uint *)(*(long *)(lVar20 + 8) + 4);
LAB_01663774:
  uVar8 = *puVar18;
  puVar18 = local_f0;
LAB_016636e0:
  plVar23 = (long *)((long)plVar23 + 8);
  puVar18[uVar17] = uVar8;
  goto joined_r0x016636c0;
  while (lVar11 = *(long *)(lVar11 + 0x10), lVar11 != 0) {
LAB_016637ac:
    if ((*(byte *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      puVar18 = (uint *)(lVar11 + 0x18);
      goto LAB_01663774;
    }
  }
  goto LAB_0166376c;
LAB_016637f8:
  iVar9 = *(int *)(this + 0xc);
  if (0 < iVar9) {
    lVar20 = 0;
    do {
      puVar15 = (undefined8 *)(*(long *)(this + 0x68) + lVar20 * 0x20);
      plVar21 = puVar15 + 1;
      plVar23 = (long *)*puVar15;
      if (plVar23 != plVar21) {
        do {
          pLVar12 = (LiveRange *)plVar23[4];
          if ((int)local_170[lVar20] <= *(int *)(pLVar12 + 0x58)) break;
          iVar9 = *(int *)(*(long *)(pLVar12 + 0x20) + 0x5c);
          if (((iVar9 < 0) || (*(int *)(pLVar12 + 0x58) < (int)local_f0[lVar20])) &&
             (uVar8 = LiveRange::FirstIntersection(pLVar12,param_1), uVar8 != 0xffffffff)) {
            if (-1 < iVar9) {
              uVar7 = local_f0[lVar20];
              if ((int)uVar8 <= (int)local_f0[lVar20]) {
                uVar7 = uVar8;
              }
              local_f0[lVar20] = uVar7;
              goto LAB_016638a0;
            }
            uVar7 = local_170[lVar20];
            if ((int)uVar8 <= (int)local_170[lVar20]) {
              uVar7 = uVar8;
            }
            local_170[lVar20] = uVar7;
            uVar8 = local_170[lVar20];
            if ((int)local_f0[lVar20] <= (int)local_170[lVar20]) {
              uVar8 = local_f0[lVar20];
            }
            local_f0[lVar20] = uVar8;
            plVar14 = (long *)plVar23[1];
            if ((long *)plVar23[1] == (long *)0x0) goto LAB_016638f4;
LAB_016638a8:
            do {
              plVar16 = plVar14;
              plVar14 = (long *)*plVar16;
            } while ((long *)*plVar16 != (long *)0x0);
          }
          else {
LAB_016638a0:
            plVar14 = (long *)plVar23[1];
            if ((long *)plVar23[1] != (long *)0x0) goto LAB_016638a8;
LAB_016638f4:
            plVar14 = plVar23 + 2;
            plVar16 = (long *)*plVar14;
            if ((long *)*plVar16 != plVar23) {
              do {
                lVar11 = *plVar14;
                plVar14 = (long *)(lVar11 + 0x10);
                plVar16 = (long *)*plVar14;
              } while (*plVar16 != lVar11);
            }
          }
          plVar23 = plVar16;
        } while (plVar16 != plVar21);
        iVar9 = *(int *)(this + 0xc);
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < iVar9);
  }
  uVar8 = *(uint *)(param_1 + 4) >> 0x16 & 0x3f;
  if (uVar8 == 0x20) {
    puVar15 = *(undefined8 **)(lVar22 + 8);
    if (puVar15 != (undefined8 *)0x0) {
      switch(*(uint *)(lVar22 + 0x1c) >> 2 & 7) {
      case 0:
      case 4:
        goto switchD_01663964_caseD_0;
      case 1:
        uVar8 = (uint)((long)*puVar15 >> 0x23);
        goto LAB_016639a8;
      case 2:
        uVar8 = *(uint *)((long)puVar15 + 0x1c) >> 6 & 0x3f;
        break;
      case 3:
        uVar8 = *(uint *)(puVar15 + 6);
        break;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      if (uVar8 != 0x20) goto LAB_016639a8;
    }
switchD_01663964_caseD_0:
    if (*(long *)(param_1 + 0x50) == 0) {
      uVar8 = 0x20;
    }
    else {
      uVar8 = *(uint *)(*(long *)(param_1 + 0x50) + 0x44);
    }
  }
LAB_016639a8:
  iVar9 = PickRegisterThatIsAvailableLongest(this,param_1,uVar8,(Vector *)&local_f0);
  uVar8 = *(uint *)(lVar22 + 0x18);
  if ((int)local_f0[iVar9] < (int)uVar8) {
    uVar4 = **(uint **)(param_1 + 0x10);
    uVar7 = uVar8;
    if ((int)uVar4 <= (int)uVar8) {
      uVar7 = uVar4;
    }
    uVar3 = uVar4;
    if ((int)uVar4 <= (int)uVar8) {
      uVar3 = uVar8;
    }
    uVar2 = uVar7 + 5 & 0xfffffffc;
    if ((uVar7 + 1 & 2) == 0) {
      uVar2 = uVar7 + 1;
    }
    if ((int)uVar2 < (int)uVar3) goto LAB_01663ae0;
  }
  uVar8 = *(uint *)(*(long *)(param_1 + 8) + 4);
  if (param_3 == 1) {
    iVar5 = **(int **)(param_1 + 0x10);
    iVar6 = iVar5 + 3;
    if (-1 < iVar5) {
      iVar6 = iVar5;
    }
    lVar11 = InstructionSequence::GetInstructionBlock
                       (*(InstructionSequence **)(*(long *)this + 0x10),iVar6 >> 2);
    plVar23 = *(long **)(*(long *)(*(long *)this + 0x10) + 0x10);
    lVar20 = *plVar23;
    uVar17 = plVar23[1] - lVar20;
    do {
      lVar19 = lVar11;
      iVar6 = *(int *)(lVar19 + 100);
      if ((int)(uVar17 >> 3) + -1 <= iVar6) break;
      uVar1 = (long)iVar6 + 1;
      if ((ulong)((long)uVar17 >> 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar11 = *(long *)(lVar20 + uVar1 * 8);
    } while (*(char *)(lVar11 + 0x78) != '\0');
    uVar7 = *(int *)(lVar19 + 0x74) * 4 - 4;
    if ((int)uVar7 <= (int)uVar8) {
      uVar8 = uVar7;
    }
  }
  uVar7 = **(uint **)(param_1 + 0x10);
  uVar4 = local_170[iVar9] & 0xfffffffe;
  if ((int)uVar8 <= (int)local_170[iVar9]) {
    uVar4 = uVar8;
  }
  if (uVar4 == uVar7) {
    uVar8 = *(uint *)(lVar22 + 0x18);
LAB_01663ae0:
    SpillBetweenUntil(this,param_1,uVar4,uVar4,uVar8,param_3);
    return;
  }
  if (uVar4 != *(uint *)(*(long *)(param_1 + 8) + 4)) {
    if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
      PrintF("Splitting live range %d:%d in position between [%d, %d]\n",
             (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x5c),(ulong)*(uint *)param_1,(ulong)uVar7
            );
    }
    uVar10 = RegisterAllocator::FindOptimalSplitPos((RegisterAllocator *)this,uVar7,uVar4);
    pLVar12 = (LiveRange *)RegisterAllocator::SplitRangeAt((RegisterAllocator *)this,param_1,uVar10)
    ;
    AddToUnhandled(this,pLVar12);
  }
  if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) == 0) goto LAB_01663bc8;
  if (iVar9 == 0x20) {
    pcVar13 = "unassigned";
  }
  else {
    if (*(int *)(this + 8) == 0) {
      if (iVar9 == -1) goto LAB_01663ba8;
      puVar15 = &RegisterName(v8::internal::Register)::Names;
    }
    else {
      if (iVar9 == -1) {
LAB_01663ba8:
        pcVar13 = "invalid";
        goto LAB_01663bb0;
      }
      puVar15 = &RegisterName(v8::internal::VRegister)::Names;
    }
    pcVar13 = (char *)puVar15[iVar9];
  }
LAB_01663bb0:
  PrintF("Assigning blocked reg %s to live range %d:%d\n",pcVar13,
         (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x5c),(ulong)*(uint *)param_1);
LAB_01663bc8:
  SetLiveRangeAssignedRegister(this,param_1,iVar9);
  SplitAndSpillIntersecting(this,param_1,param_3);
  return;
  while (lVar22 = *(long *)(lVar22 + 0x10), lVar22 != 0) {
LAB_01663614:
    if ((*(uint *)(lVar22 + 0x1c) & 3) == 2) {
      local_f0 = local_e0;
      uStack_e8 = 0x20;
      local_e0[0] = 0x7fffffff;
      local_e0[1] = 0x7fffffff;
      local_e0[2] = 0x7fffffff;
      local_e0[3] = 0x7fffffff;
      local_e0[4] = 0x7fffffff;
      local_e0[5] = 0x7fffffff;
      local_e0[6] = 0x7fffffff;
      local_e0[7] = 0x7fffffff;
      local_e0[8] = 0x7fffffff;
      local_e0[9] = 0x7fffffff;
      local_e0[10] = 0x7fffffff;
      local_e0[0xb] = 0x7fffffff;
      local_e0[0xc] = 0x7fffffff;
      local_e0[0xd] = 0x7fffffff;
      local_e0[0xe] = 0x7fffffff;
      local_e0[0xf] = 0x7fffffff;
      local_e0[0x10] = 0x7fffffff;
      local_e0[0x11] = 0x7fffffff;
      local_e0[0x12] = 0x7fffffff;
      local_e0[0x13] = 0x7fffffff;
      local_e0[0x14] = 0x7fffffff;
      local_e0[0x15] = 0x7fffffff;
      local_e0[0x16] = 0x7fffffff;
      local_e0[0x17] = 0x7fffffff;
      local_e0[0x18] = 0x7fffffff;
      local_e0[0x19] = 0x7fffffff;
      local_e0[0x1a] = 0x7fffffff;
      local_e0[0x1b] = 0x7fffffff;
      local_e0[0x1c] = 0x7fffffff;
      local_e0[0x1d] = 0x7fffffff;
      local_e0[0x1e] = 0x7fffffff;
      local_e0[0x1f] = 0x7fffffff;
      local_170[0] = 0x7fffffff;
      local_170[1] = 0x7fffffff;
      local_170[2] = 0x7fffffff;
      local_170[3] = 0x7fffffff;
      local_170[4] = 0x7fffffff;
      local_170[5] = 0x7fffffff;
      local_170[6] = 0x7fffffff;
      local_170[7] = 0x7fffffff;
      local_170[8] = 0x7fffffff;
      local_170[9] = 0x7fffffff;
      local_170[10] = 0x7fffffff;
      local_170[0xb] = 0x7fffffff;
      local_170[0xc] = 0x7fffffff;
      local_170[0xd] = 0x7fffffff;
      local_170[0xe] = 0x7fffffff;
      local_170[0xf] = 0x7fffffff;
      local_170[0x10] = 0x7fffffff;
      local_170[0x11] = 0x7fffffff;
      local_170[0x12] = 0x7fffffff;
      local_170[0x13] = 0x7fffffff;
      local_170[0x14] = 0x7fffffff;
      local_170[0x15] = 0x7fffffff;
      local_170[0x16] = 0x7fffffff;
      local_170[0x17] = 0x7fffffff;
      local_170[0x18] = 0x7fffffff;
      local_170[0x19] = 0x7fffffff;
      local_170[0x1a] = 0x7fffffff;
      local_170[0x1b] = 0x7fffffff;
      local_170[0x1c] = 0x7fffffff;
      local_170[0x1d] = 0x7fffffff;
      local_170[0x1e] = 0x7fffffff;
      local_170[0x1f] = 0x7fffffff;
      plVar23 = *(long **)(this + 0x48);
      plVar21 = *(long **)(this + 0x50);
      goto joined_r0x016636c0;
    }
  }
LAB_0166362c:
  RegisterAllocator::Spill((RegisterAllocator *)this,param_1,param_3);
  return;
}

