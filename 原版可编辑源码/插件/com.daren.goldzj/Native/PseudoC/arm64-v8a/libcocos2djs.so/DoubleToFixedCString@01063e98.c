
/* v8::internal::DoubleToFixedCString(double, int) */

undefined8 v8::internal::DoubleToFixedCString(double param_1,int param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  double dVar7;
  int local_104;
  undefined1 auStack_100 [4];
  int local_fc;
  long local_f8 [2];
  int local_e8;
  SimpleStringBuilder aSStack_e0 [16];
  int local_d0;
  char acStack_c4 [124];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  dVar7 = -param_1;
  if (0.0 <= param_1) {
    dVar7 = param_1;
  }
  if (1e+21 <= dVar7) {
    pcVar3 = (char *)DoubleToCString((internal *)param_1,acStack_c4,100);
    uVar4 = StrDup(pcVar3);
  }
  else {
    DoubleToAscii((internal *)param_1,1,param_2,acStack_c4,0x7a,auStack_100,&local_104,&local_fc);
    if (local_fc < 1) {
      iVar6 = 1 - local_fc;
      local_fc = 1;
    }
    else {
      iVar6 = 0;
    }
    local_104 = local_104 + iVar6;
    iVar1 = (local_fc + param_2) - local_104;
    if (iVar1 == 0 || local_fc + param_2 < local_104) {
      iVar1 = 0;
    }
    SimpleStringBuilder::SimpleStringBuilder(aSStack_e0,local_104 + iVar1 + 1);
    SimpleStringBuilder::AddPadding(aSStack_e0,'0',iVar6);
    SimpleStringBuilder::AddString(aSStack_e0,acStack_c4);
    SimpleStringBuilder::AddPadding(aSStack_e0,'0',iVar1);
    pcVar3 = (char *)SimpleStringBuilder::Finalize(aSStack_e0);
    SimpleStringBuilder::SimpleStringBuilder((SimpleStringBuilder *)local_f8,param_2 + local_fc + 3)
    ;
    if (param_1 < 0.0) {
      lVar5 = (long)local_e8;
      local_e8 = local_e8 + 1;
      *(undefined1 *)(local_f8[0] + lVar5) = 0x2d;
    }
    SimpleStringBuilder::AddSubstring((SimpleStringBuilder *)local_f8,pcVar3,local_fc);
    if (0 < param_2) {
      lVar5 = (long)local_e8;
      local_e8 = local_e8 + 1;
      *(undefined1 *)(local_f8[0] + lVar5) = 0x2e;
      SimpleStringBuilder::AddSubstring((SimpleStringBuilder *)local_f8,pcVar3 + local_fc,param_2);
    }
    if (pcVar3 != (char *)0x0) {
      operator_delete__(pcVar3);
    }
    uVar4 = SimpleStringBuilder::Finalize((SimpleStringBuilder *)local_f8);
    if (-1 < local_e8) {
      SimpleStringBuilder::Finalize((SimpleStringBuilder *)local_f8);
    }
    if (-1 < local_d0) {
      SimpleStringBuilder::Finalize(aSStack_e0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

