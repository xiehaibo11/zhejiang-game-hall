
/* v8::internal::compiler::LinearScanAllocator::TrySplitAndSpillSplinter(v8::internal::compiler::LiveRange*)
    */

undefined8 __thiscall
v8::internal::compiler::LinearScanAllocator::TrySplitAndSpillSplinter
          (LinearScanAllocator *this,LiveRange *param_1)

{
  uint uVar1;
  int iVar2;
  LiveRange *pLVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 0x38);
  iVar2 = **(int **)(param_1 + 0x10);
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) <= iVar2)) goto LAB_01662914;
  for (lVar4 = *(long *)(param_1 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x10)) {
LAB_01662914:
    if (iVar2 <= *(int *)(lVar4 + 0x18)) {
      *(long *)(param_1 + 0x38) = lVar4;
      goto LAB_01662934;
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  goto LAB_016629f4;
LAB_0166298c:
  do {
    switch(*(uint *)(lVar5 + 0x1c) >> 2 & 7) {
    case 1:
      goto switchD_016629ac_caseD_1;
    case 2:
      if ((*(uint *)(lVar6 + 0x1c) & 0xfc0) != 0x800) goto switchD_016629ac_caseD_1;
    case 0:
    case 4:
switchD_016629ac_caseD_0:
      do {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) {
          return 0;
        }
        lVar6 = *(long *)(lVar5 + 8);
      } while (lVar6 == 0);
      break;
    case 3:
      if (*(int *)(lVar6 + 0x30) != 0x20) goto switchD_016629ac_caseD_1;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  } while( true );
switchD_016629ac_caseD_1:
  uVar1 = *(int *)(lVar4 + 0x18) - 2U & 0xfffffffe;
  if ((int)uVar1 <= **(int **)(param_1 + 0x10)) {
    return 0;
  }
  pLVar3 = (LiveRange *)RegisterAllocator::SplitRangeAt((RegisterAllocator *)this,param_1,uVar1);
  AddToUnhandled(this,pLVar3);
  goto LAB_016629f4;
  while (lVar4 = *(long *)(lVar4 + 0x10), lVar4 != 0) {
LAB_01662934:
    if ((*(uint *)(lVar4 + 0x1c) & 3) == 2) {
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 == 0) {
        return 0;
      }
      lVar6 = *(long *)(lVar5 + 8);
      if (lVar6 != 0) goto LAB_0166298c;
      goto switchD_016629ac_caseD_0;
    }
  }
LAB_016629f4:
  RegisterAllocator::Spill((RegisterAllocator *)this,param_1,0);
  return 1;
}

