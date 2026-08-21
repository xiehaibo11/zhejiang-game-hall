
/* v8::internal::compiler::LinearScanAllocator::TryAllocateFreeReg(v8::internal::compiler::LiveRange*,
   v8::internal::Vector<v8::internal::compiler::LifetimePosition> const&) */

undefined8 __thiscall
v8::internal::compiler::LinearScanAllocator::TryAllocateFreeReg
          (LinearScanAllocator *this,LiveRange *param_1,Vector *param_2)

{
  int iVar1;
  int iVar2;
  LiveRange *pLVar3;
  ulong uVar4;
  char *pcVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  uVar6 = *(uint *)(param_1 + 4) >> 0x16 & 0x3f;
  if (uVar6 == 0x20) {
    lVar7 = *(long *)(param_1 + 0x18);
    if (lVar7 != 0) {
      puVar8 = *(undefined8 **)(lVar7 + 8);
      if (puVar8 != (undefined8 *)0x0) goto LAB_01663434;
switchD_01663454_caseD_0:
      do {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) goto LAB_01663478;
        puVar8 = *(undefined8 **)(lVar7 + 8);
      } while (puVar8 == (undefined8 *)0x0);
LAB_01663434:
      switch(*(uint *)(lVar7 + 0x1c) >> 2 & 7) {
      case 0:
      case 4:
        goto switchD_01663454_caseD_0;
      case 1:
        goto switchD_01663454_caseD_1;
      case 2:
        uVar6 = *(uint *)((long)puVar8 + 0x1c) >> 6 & 0x3f;
        break;
      case 3:
        uVar6 = *(uint *)(puVar8 + 6);
        break;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      if (uVar6 != 0x20) goto LAB_0166348c;
      goto switchD_01663454_caseD_0;
    }
LAB_01663478:
    if (*(long *)(param_1 + 0x50) == 0) {
      uVar6 = 0x20;
    }
    else {
      uVar6 = *(uint *)(*(long *)(param_1 + 0x50) + 0x44);
    }
  }
LAB_0166348c:
  iVar2 = PickRegisterThatIsAvailableLongest(this,param_1,uVar6,param_2);
  iVar1 = *(int *)(*(long *)param_2 + (long)iVar2 * 4);
  if (iVar1 <= **(int **)(param_1 + 0x10)) {
    return 0;
  }
  if (iVar1 < *(int *)(*(long *)(param_1 + 8) + 4)) {
    pLVar3 = (LiveRange *)RegisterAllocator::SplitRangeAt((RegisterAllocator *)this,param_1);
    AddToUnhandled(this,pLVar3);
    uVar4 = TryAllocatePreferredReg(this,param_1,param_2);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
  }
  if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) == 0) goto LAB_01663574;
  if (iVar2 == 0x20) {
    pcVar5 = "unassigned";
  }
  else {
    if (*(int *)(this + 8) == 0) {
      if (iVar2 == -1) goto LAB_01663554;
      puVar8 = &RegisterName(v8::internal::Register)::Names;
    }
    else {
      if (iVar2 == -1) {
LAB_01663554:
        pcVar5 = "invalid";
        goto LAB_0166355c;
      }
      puVar8 = &RegisterName(v8::internal::VRegister)::Names;
    }
    pcVar5 = (char *)puVar8[iVar2];
  }
LAB_0166355c:
  PrintF("Assigning free reg %s to live range %d:%d\n",pcVar5,
         (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x5c),(ulong)*(uint *)param_1);
LAB_01663574:
  SetLiveRangeAssignedRegister(this,param_1,iVar2);
  return 1;
switchD_01663454_caseD_1:
  uVar6 = (uint)((long)*puVar8 >> 0x23);
  goto LAB_0166348c;
}

