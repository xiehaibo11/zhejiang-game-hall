
/* v8::internal::DoubleToCString(double, v8::internal::Vector<char>) */

internal * __thiscall v8::internal::DoubleToCString(double param_1,internal *this,uint param_3)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  internal iVar6;
  long lVar7;
  internal *piVar8;
  int iVar9;
  int local_60;
  int local_5c;
  int local_58;
  internal local_54 [20];
  internal *local_40;
  long lStack_38;
  int local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (param_1 == 0.0) {
    piVar8 = (internal *)0x18a2138;
  }
  else if (NAN(param_1)) {
    piVar8 = (internal *)0x1a48592;
  }
  else if (ABS(param_1) == INFINITY) {
    piVar8 = (internal *)"-Infinity";
    if (0.0 <= param_1) {
      piVar8 = (internal *)0x19d51e7;
    }
  }
  else if ((((2147483647.0 < param_1) || (param_1 < -2147483648.0)) || (param_1 == -0.0)) ||
          (iVar4 = (int)param_1, (double)iVar4 != param_1)) {
    lStack_38 = (long)(int)param_3;
    local_30 = 0;
    local_40 = this;
    DoubleToAscii((internal *)0x0,0,local_54,0x12,&local_5c,&local_60,&local_58);
    if (local_5c != 0) {
      local_30 = 1;
      *this = (internal)0x2d;
    }
    if ((local_58 < local_60) || (0x15 < local_58)) {
      if (local_58 - 1U < 0x15) {
        SimpleStringBuilder::AddSubstring
                  ((SimpleStringBuilder *)&local_40,(char *)local_54,local_58);
        lVar5 = (long)local_30;
        local_30 = local_30 + 1;
        local_40[lVar5] = (internal)0x2e;
        SimpleStringBuilder::AddString
                  ((SimpleStringBuilder *)&local_40,(char *)(local_54 + local_58));
      }
      else if (local_58 + 5U < 6) {
        SimpleStringBuilder::AddString((SimpleStringBuilder *)&local_40,"0.");
        SimpleStringBuilder::AddPadding((SimpleStringBuilder *)&local_40,'0',-local_58);
        SimpleStringBuilder::AddString((SimpleStringBuilder *)&local_40,(char *)local_54);
      }
      else {
        iVar4 = local_30 + 1;
        local_40[local_30] = local_54[0];
        if (local_60 != 1) {
          local_30 = local_30 + 2;
          local_40[iVar4] = (internal)0x2e;
          SimpleStringBuilder::AddString
                    ((SimpleStringBuilder *)&local_40,(char *)((ulong)local_54 | 1));
          iVar4 = local_30;
        }
        local_30 = iVar4;
        iVar4 = local_30 + 1;
        local_40[local_30] = (internal)0x65;
        iVar6 = (internal)0x2b;
        if (local_58 < 0) {
          iVar6 = (internal)0x2d;
        }
        local_30 = local_30 + 2;
        local_40[iVar4] = iVar6;
        iVar4 = 1 - local_58;
        if (0 < local_58) {
          iVar4 = local_58 + -1;
        }
        SimpleStringBuilder::AddDecimalInteger((SimpleStringBuilder *)&local_40,iVar4);
      }
    }
    else {
      SimpleStringBuilder::AddString((SimpleStringBuilder *)&local_40,(char *)local_54);
      SimpleStringBuilder::AddPadding((SimpleStringBuilder *)&local_40,'0',local_58 - local_60);
    }
    piVar8 = (internal *)SimpleStringBuilder::Finalize((SimpleStringBuilder *)&local_40);
    if (-1 < local_30) {
      SimpleStringBuilder::Finalize((SimpleStringBuilder *)&local_40);
    }
  }
  else {
    lVar5 = ((ulong)param_3 << 0x20) + -0x100000000;
    piVar8 = this + (lVar5 >> 0x20);
    iVar9 = -iVar4;
    if (iVar4 < 0) {
      iVar9 = iVar4;
    }
    *piVar8 = (internal)0x0;
    do {
      lVar7 = lVar5;
      piVar8 = piVar8 + -1;
      cVar3 = (char)iVar9;
      uVar1 = iVar9 + 9;
      iVar9 = iVar9 / 10;
      *piVar8 = (internal)(((char)iVar9 * '\n' - cVar3) + '0');
      lVar5 = lVar7 + -0x100000000;
    } while (0x12 < uVar1);
    if (iVar4 < 0) {
      lVar5 = lVar7 + -0x200000000 >> 0x20;
      this[lVar5] = (internal)0x2d;
      piVar8 = this + lVar5;
    }
    else {
      piVar8 = this + (lVar5 >> 0x20);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return piVar8;
}

