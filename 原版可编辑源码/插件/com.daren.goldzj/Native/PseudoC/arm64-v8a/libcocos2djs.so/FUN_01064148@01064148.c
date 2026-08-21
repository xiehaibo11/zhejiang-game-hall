
undefined8 FUN_01064148(char *param_1,int param_2,ulong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 uVar7;
  long local_70 [2];
  int local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar2 = -param_2;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  uVar7 = 0x2d;
  if (-1 < param_2) {
    uVar7 = 0x2b;
  }
  v8::internal::SimpleStringBuilder::SimpleStringBuilder
            ((SimpleStringBuilder *)local_70,param_4 + 8);
  if ((param_3 & 1) != 0) {
    lVar6 = (long)local_60;
    local_60 = local_60 + 1;
    *(undefined1 *)(local_70[0] + lVar6) = 0x2d;
  }
  iVar1 = local_60 + 1;
  *(char *)(local_70[0] + local_60) = *param_1;
  if (param_4 != 1) {
    local_60 = local_60 + 2;
    *(undefined1 *)(local_70[0] + iVar1) = 0x2e;
    v8::internal::SimpleStringBuilder::AddString((SimpleStringBuilder *)local_70,param_1 + 1);
    sVar4 = strlen(param_1);
    v8::internal::SimpleStringBuilder::AddPadding
              ((SimpleStringBuilder *)local_70,'0',param_4 - (int)sVar4);
    iVar1 = local_60;
  }
  local_60 = iVar1;
  iVar1 = local_60 + 1;
  *(undefined1 *)(local_70[0] + local_60) = 0x65;
  local_60 = local_60 + 2;
  *(undefined1 *)(local_70[0] + iVar1) = uVar7;
  v8::internal::SimpleStringBuilder::AddDecimalInteger((SimpleStringBuilder *)local_70,iVar2);
  uVar5 = v8::internal::SimpleStringBuilder::Finalize((SimpleStringBuilder *)local_70);
  if (-1 < local_60) {
    v8::internal::SimpleStringBuilder::Finalize((SimpleStringBuilder *)local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

