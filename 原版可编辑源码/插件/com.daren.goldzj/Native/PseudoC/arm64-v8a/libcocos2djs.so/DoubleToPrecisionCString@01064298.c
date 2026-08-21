
/* v8::internal::DoubleToPrecisionCString(double, int) */

undefined8 v8::internal::DoubleToPrecisionCString(double param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  internal *piVar8;
  int local_d4;
  undefined1 auStack_d0 [4];
  int local_cc;
  long local_c8 [2];
  int local_b8;
  char acStack_b0 [104];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  piVar8 = (internal *)-param_1;
  if (0.0 <= param_1) {
    piVar8 = (internal *)param_1;
  }
  DoubleToAscii(piVar8,2,param_2,acStack_b0,0x65,auStack_d0,&local_d4,&local_cc);
  if ((local_cc < -5) || (param_2 < local_cc)) {
    uVar5 = FUN_01064148(acStack_b0,local_cc + -1,param_1 < 0.0,param_2);
    goto LAB_01064480;
  }
  iVar7 = (param_2 - local_cc) + 3;
  if (0 < local_cc) {
    iVar7 = param_2 + 2;
  }
  SimpleStringBuilder::SimpleStringBuilder((SimpleStringBuilder *)local_c8,iVar7 + 1);
  if (param_1 < 0.0) {
    lVar6 = (long)local_b8;
    local_b8 = local_b8 + 1;
    *(undefined1 *)(local_c8[0] + lVar6) = 0x2d;
  }
  if (local_cc < 1) {
    SimpleStringBuilder::AddString((SimpleStringBuilder *)local_c8,"0.");
    SimpleStringBuilder::AddPadding((SimpleStringBuilder *)local_c8,'0',-local_cc);
    SimpleStringBuilder::AddString((SimpleStringBuilder *)local_c8,acStack_b0);
    local_d4 = param_2 - local_d4;
LAB_01064458:
    SimpleStringBuilder::AddPadding((SimpleStringBuilder *)local_c8,'0',local_d4);
  }
  else {
    iVar7 = local_d4;
    if (local_cc <= local_d4) {
      iVar7 = local_cc;
    }
    SimpleStringBuilder::AddSubstring((SimpleStringBuilder *)local_c8,acStack_b0,iVar7);
    SimpleStringBuilder::AddPadding((SimpleStringBuilder *)local_c8,'0',local_cc - local_d4);
    if (local_cc < param_2) {
      lVar6 = (long)local_b8;
      local_b8 = local_b8 + 1;
      *(undefined1 *)(local_c8[0] + lVar6) = 0x2e;
      iVar7 = 2;
      if (0.0 <= param_1) {
        iVar7 = 1;
      }
      if (local_cc < local_d4) {
        sVar4 = strlen(acStack_b0 + local_cc);
        iVar1 = (iVar7 - local_b8) + param_2;
        iVar2 = (int)sVar4;
        if (iVar1 <= (int)sVar4) {
          iVar2 = iVar1;
        }
        SimpleStringBuilder::AddSubstring
                  ((SimpleStringBuilder *)local_c8,acStack_b0 + local_cc,iVar2);
      }
      local_d4 = (iVar7 + param_2) - local_b8;
      goto LAB_01064458;
    }
  }
  uVar5 = SimpleStringBuilder::Finalize((SimpleStringBuilder *)local_c8);
  if (-1 < local_b8) {
    SimpleStringBuilder::Finalize((SimpleStringBuilder *)local_c8);
  }
LAB_01064480:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

