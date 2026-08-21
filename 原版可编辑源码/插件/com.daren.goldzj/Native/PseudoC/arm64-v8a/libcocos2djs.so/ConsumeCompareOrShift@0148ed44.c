
/* v8::internal::AsmJsScanner::ConsumeCompareOrShift(int) */

void __thiscall v8::internal::AsmJsScanner::ConsumeCompareOrShift(AsmJsScanner *this,int param_1)

{
  ulong uVar1;
  short sVar2;
  ulong uVar3;
  short *psVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  psVar4 = (short *)plVar5[2];
  if ((short *)plVar5[3] <= psVar4) {
    if ((char)plVar5[6] == '\0') {
      uVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
      psVar4 = (short *)plVar5[2];
      if ((uVar3 & 1) != 0) goto LAB_0148ed6c;
    }
    plVar5[2] = (long)(psVar4 + 1);
    plVar5 = *(long **)this;
LAB_0148ee54:
    uVar3 = plVar5[1];
    uVar1 = plVar5[2];
    if (uVar1 < uVar3 || uVar1 - uVar3 == 0) {
      plVar5[2] = uVar3;
      plVar5[4] = plVar5[4] + ((long)(uVar1 - uVar3) >> 1) + -1;
      if ((char)plVar5[6] == '\0') {
        (**(code **)(*plVar5 + 0x28))(plVar5);
      }
    }
    else {
      plVar5[2] = uVar1 - 2;
    }
    *(int *)(this + 8) = param_1;
    return;
  }
LAB_0148ed6c:
  sVar2 = *psVar4;
  plVar5[2] = (long)(psVar4 + 1);
  if (sVar2 == 0x3d) {
    switch(param_1) {
    case 0x21:
      *(undefined4 *)(this + 8) = 0xffffd92b;
      return;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case 0x3c:
      *(undefined4 *)(this + 8) = 0xffffd928;
      return;
    case 0x3d:
      *(undefined4 *)(this + 8) = 0xffffd92a;
      return;
    case 0x3e:
      *(undefined4 *)(this + 8) = 0xffffd929;
      return;
    }
  }
  if ((param_1 == 0x3c) && (sVar2 == 0x3c)) {
    *(undefined4 *)(this + 8) = 0xffffd92c;
    return;
  }
  plVar5 = *(long **)this;
  if ((param_1 != 0x3e) || (sVar2 != 0x3e)) goto LAB_0148ee54;
  psVar4 = (short *)plVar5[2];
  if (psVar4 < (short *)plVar5[3]) {
LAB_0148ede8:
    sVar2 = *psVar4;
    plVar5[2] = (long)(psVar4 + 1);
    if (sVar2 == 0x3e) {
      *(undefined4 *)(this + 8) = 0xffffd92e;
      return;
    }
  }
  else {
    if ((char)plVar5[6] == '\0') {
      uVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
      psVar4 = (short *)plVar5[2];
      if ((uVar3 & 1) != 0) goto LAB_0148ede8;
    }
    plVar5[2] = (long)(psVar4 + 1);
  }
  plVar5 = *(long **)this;
  *(undefined4 *)(this + 8) = 0xffffd92d;
  uVar3 = plVar5[1];
  uVar1 = plVar5[2];
  if (uVar1 < uVar3 || uVar1 - uVar3 == 0) {
    plVar5[2] = uVar3;
    plVar5[4] = plVar5[4] + ((long)(uVar1 - uVar3) >> 1) + -1;
    if ((char)plVar5[6] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0148ef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x28))();
      return;
    }
  }
  else {
    plVar5[2] = uVar1 - 2;
  }
  return;
}

