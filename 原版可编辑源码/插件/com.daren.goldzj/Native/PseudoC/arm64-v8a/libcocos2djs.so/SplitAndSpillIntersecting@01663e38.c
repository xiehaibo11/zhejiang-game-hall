
/* v8::internal::compiler::LinearScanAllocator::SplitAndSpillIntersecting(v8::internal::compiler::LiveRange*,
   v8::internal::compiler::RegisterAllocationData::SpillMode) */

void __thiscall
v8::internal::compiler::LinearScanAllocator::SplitAndSpillIntersecting
          (LinearScanAllocator *this,LiveRange *param_1,undefined4 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  size_t __n;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  LiveRange *this_00;
  ulong uVar13;
  ulong uVar14;
  long local_68;
  
  plVar11 = *(long **)(this + 0x48);
  plVar10 = *(long **)(this + 0x50);
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = **(undefined4 **)(param_1 + 0x10);
  uVar14 = (ulong)(uVar2 >> 7) & 0x3f;
  if (plVar10 != plVar11) {
LAB_01663e90:
    lVar9 = *plVar11;
    if ((*(uint *)(lVar9 + 4) >> 7 & 0x3f) != (uint)uVar14) goto LAB_01663e84;
    lVar12 = *(long *)(lVar9 + 0x38);
    if ((lVar12 != 0) && (*(int *)(lVar12 + 0x18) <= **(int **)(param_1 + 0x10))) goto LAB_01663ec8;
    for (lVar12 = *(long *)(lVar9 + 0x18); lVar12 != 0; lVar12 = *(long *)(lVar12 + 0x10)) {
LAB_01663ec8:
      if (**(int **)(param_1 + 0x10) <= *(int *)(lVar12 + 0x18)) {
        *(long *)(lVar9 + 0x38) = lVar12;
        goto LAB_01663eec;
      }
    }
    lVar12 = 0;
    *(undefined8 *)(lVar9 + 0x38) = 0;
    goto LAB_01663f04;
  }
LAB_01664030:
  iVar5 = *(int *)(this + 0xc);
  if (iVar5 < 1) {
    return;
  }
  uVar13 = 0;
  if ((uVar2 >> 7 & 0x3f) != 0) goto LAB_01664050;
LAB_01664064:
  puVar1 = (undefined8 *)(*(long *)(this + 0x68) + uVar14 * 0x20);
  plVar11 = (long *)*puVar1;
  if (puVar1 + 1 != plVar11) {
LAB_01664094:
    this_00 = (LiveRange *)plVar11[4];
    if (-1 < *(int *)(*(long *)(this_00 + 0x20) + 0x5c)) {
      iVar5 = LiveRange::FirstIntersection(this_00,param_1);
      if (iVar5 == -1) {
        plVar10 = (long *)plVar11[1];
        if ((long *)plVar11[1] == (long *)0x0) {
          plVar10 = plVar11 + 2;
          plVar7 = (long *)*plVar10;
          if ((long *)*plVar7 != plVar11) {
            do {
              lVar9 = *plVar10;
              plVar10 = (long *)(lVar9 + 0x10);
              plVar7 = (long *)*plVar10;
            } while (*plVar7 != lVar9);
          }
        }
        else {
          do {
            plVar7 = plVar10;
            plVar10 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
        goto LAB_01664080;
      }
      lVar9 = *(long *)(this_00 + 0x38);
      if ((lVar9 != 0) && (*(int *)(lVar9 + 0x18) <= **(int **)(param_1 + 0x10))) goto LAB_016640dc;
      for (lVar9 = *(long *)(this_00 + 0x18); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x10)) {
LAB_016640dc:
        if (**(int **)(param_1 + 0x10) <= *(int *)(lVar9 + 0x18)) {
          *(long *)(this_00 + 0x38) = lVar9;
          goto LAB_0166412c;
        }
      }
      *(undefined8 *)(this_00 + 0x38) = 0;
      goto LAB_01664144;
    }
    plVar10 = (long *)plVar11[1];
    if ((long *)plVar11[1] == (long *)0x0) {
      plVar10 = plVar11 + 2;
      plVar7 = (long *)*plVar10;
      if ((long *)*plVar7 != plVar11) {
        do {
          lVar9 = *plVar10;
          plVar10 = (long *)(lVar9 + 0x10);
          plVar7 = (long *)*plVar10;
        } while (*plVar7 != lVar9);
      }
    }
    else {
      do {
        plVar7 = plVar10;
        plVar10 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
    goto LAB_01664080;
  }
  goto LAB_01664050;
LAB_01663e84:
  plVar11 = plVar11 + 1;
  if (plVar10 == plVar11) goto LAB_01664030;
  goto LAB_01663e90;
  while (lVar12 = *(long *)(lVar12 + 0x10), lVar12 != 0) {
LAB_01663eec:
    if ((*(uint *)(lVar12 + 0x1c) & 3) == 2) break;
  }
LAB_01663f04:
  local_68 = 0;
  uVar4 = RegisterAllocator::FindOptimalSpillingPos
                    ((RegisterAllocator *)this,lVar9,uVar3,param_3,&local_68);
  lVar8 = local_68;
  if (local_68 != lVar9) {
    if ((*(byte *)(local_68 + 4) & 1) == 0) {
      uVar6 = RegisterAllocator::SplitRangeAt((RegisterAllocator *)this,local_68,uVar4);
      RegisterAllocator::Spill((RegisterAllocator *)this,uVar6,0);
    }
    for (lVar8 = *(long *)(lVar8 + 0x28); lVar8 != lVar9; lVar8 = *(long *)(lVar8 + 0x28)) {
      if ((*(uint *)(lVar8 + 4) & 1) == 0) {
        *(uint *)(lVar8 + 4) = *(uint *)(lVar8 + 4) & 0xffffe07f | 0x1001;
      }
    }
  }
  if (lVar12 == 0) {
    uVar6 = RegisterAllocator::SplitRangeAt((RegisterAllocator *)this,lVar9,uVar4);
    RegisterAllocator::Spill((RegisterAllocator *)this,uVar6,param_3);
  }
  else {
    SpillBetweenUntil(this,lVar9,uVar4,**(undefined4 **)(param_1 + 0x10),
                      *(undefined4 *)(lVar12 + 0x18),param_3);
  }
  if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
    PrintF("Moving live range %d:%d from active to handled\n",
           (ulong)*(uint *)(*(long *)((uint *)*plVar11 + 8) + 0x5c),(ulong)*(uint *)*plVar11);
  }
  __n = *(long *)(this + 0x50) - (long)(plVar11 + 1);
  if (__n != 0) {
    memmove(plVar11,plVar11 + 1,__n);
  }
  plVar10 = plVar11 + ((long)__n >> 3);
  *(long **)(this + 0x50) = plVar10;
  if (plVar10 == plVar11) goto LAB_01664030;
  goto LAB_01663e90;
  while (lVar9 = *(long *)(lVar9 + 0x10), lVar9 != 0) {
LAB_0166412c:
    if ((*(uint *)(lVar9 + 0x1c) & 3) == 2) {
      if (*(int *)(lVar9 + 0x18) <= iVar5) {
        iVar5 = *(int *)(lVar9 + 0x18);
      }
      SpillBetweenUntil(this,this_00,uVar3,uVar3,iVar5,param_3);
      goto LAB_01664164;
    }
  }
LAB_01664144:
  uVar6 = RegisterAllocator::SplitRangeAt((RegisterAllocator *)this,this_00,uVar3);
  RegisterAllocator::Spill((RegisterAllocator *)this,uVar6,param_3);
LAB_01664164:
  plVar7 = (long *)InactiveToHandled(this,plVar11);
LAB_01664080:
  plVar11 = plVar7;
  if ((long *)(*(long *)(this + 0x68) + uVar14 * 0x20 + 8) == plVar7) goto LAB_0166404c;
  goto LAB_01664094;
LAB_0166404c:
  iVar5 = *(int *)(this + 0xc);
LAB_01664050:
  do {
    uVar13 = uVar13 + 1;
    if ((long)iVar5 <= (long)uVar13) {
      return;
    }
  } while (uVar13 != uVar14);
  goto LAB_01664064;
}

