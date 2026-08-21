
/* v8::internal::compiler::LinearScanAllocator::TryAllocatePreferredReg(v8::internal::compiler::LiveRange*,
   v8::internal::Vector<v8::internal::compiler::LifetimePosition> const&) */

undefined8 __thiscall
v8::internal::compiler::LinearScanAllocator::TryAllocatePreferredReg
          (LinearScanAllocator *this,LiveRange *param_1,Vector *param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 4) >> 0x16 & 0x3f;
  if (uVar4 == 0x20) {
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) {
      puVar3 = *(undefined8 **)(lVar2 + 8);
      if (puVar3 != (undefined8 *)0x0) goto LAB_01663220;
switchD_01663240_caseD_0:
      do {
        lVar2 = *(long *)(lVar2 + 0x10);
        if (lVar2 == 0) goto LAB_01663264;
        puVar3 = *(undefined8 **)(lVar2 + 8);
      } while (puVar3 == (undefined8 *)0x0);
LAB_01663220:
      switch(*(uint *)(lVar2 + 0x1c) >> 2 & 7) {
      case 0:
      case 4:
        goto switchD_01663240_caseD_0;
      case 1:
        goto switchD_01663240_caseD_1;
      case 2:
        uVar4 = *(uint *)((long)puVar3 + 0x1c) >> 6 & 0x3f;
        break;
      case 3:
        uVar4 = *(uint *)(puVar3 + 6);
        break;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      if (uVar4 != 0x20) goto LAB_01663278;
      goto switchD_01663240_caseD_0;
    }
LAB_01663264:
    if (*(long *)(param_1 + 0x50) == 0) {
      return 0;
    }
    uVar4 = *(uint *)(*(long *)(param_1 + 0x50) + 0x44);
    if (uVar4 == 0x20) {
      return 0;
    }
  }
LAB_01663278:
  if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
    if (uVar4 == 0x20) {
      pcVar1 = "unassigned";
    }
    else {
      if (*(int *)(this + 8) == 0) {
        if (uVar4 == 0xffffffff) goto LAB_016632d4;
        puVar3 = &RegisterName(v8::internal::Register)::Names;
      }
      else {
        if (uVar4 == 0xffffffff) {
LAB_016632d4:
          pcVar1 = "invalid";
          goto LAB_016632dc;
        }
        puVar3 = &RegisterName(v8::internal::VRegister)::Names;
      }
      pcVar1 = (char *)puVar3[(int)uVar4];
    }
LAB_016632dc:
    PrintF("Found reg hint %s (free until [%d) for live range %d:%d (end %d[).\n",pcVar1,
           (ulong)*(uint *)(*(long *)param_2 + (long)(int)uVar4 * 4),
           (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x5c),(ulong)*(uint *)param_1,
           (ulong)*(uint *)(*(long *)(param_1 + 8) + 4));
  }
  if (*(int *)(*(long *)param_2 + (long)(int)uVar4 * 4) < *(int *)(*(long *)(param_1 + 8) + 4)) {
    return 0;
  }
  if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) == 0) goto LAB_0166339c;
  if (uVar4 == 0x20) {
    pcVar1 = "unassigned";
  }
  else {
    if (*(int *)(this + 8) == 0) {
      if (uVar4 == 0xffffffff) goto LAB_0166337c;
      puVar3 = &RegisterName(v8::internal::Register)::Names;
    }
    else {
      if (uVar4 == 0xffffffff) {
LAB_0166337c:
        pcVar1 = "invalid";
        goto LAB_01663384;
      }
      puVar3 = &RegisterName(v8::internal::VRegister)::Names;
    }
    pcVar1 = (char *)puVar3[(int)uVar4];
  }
LAB_01663384:
  PrintF("Assigning preferred reg %s to live range %d:%d\n",pcVar1,
         (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x5c),(ulong)*(uint *)param_1);
LAB_0166339c:
  SetLiveRangeAssignedRegister(this,param_1,uVar4);
  return 1;
switchD_01663240_caseD_1:
  uVar4 = (uint)((long)*puVar3 >> 0x23);
  goto LAB_01663278;
}

