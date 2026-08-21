
/* v8::internal::AreAliased(v8::internal::CPURegister const&, v8::internal::CPURegister const&,
   v8::internal::CPURegister const&, v8::internal::CPURegister const&, v8::internal::CPURegister
   const&, v8::internal::CPURegister const&, v8::internal::CPURegister const&,
   v8::internal::CPURegister const&) */

bool v8::internal::AreAliased
               (CPURegister *param_1,CPURegister *param_2,CPURegister *param_3,CPURegister *param_4,
               CPURegister *param_5,CPURegister *param_6,CPURegister *param_7,CPURegister *param_8)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  int local_90;
  int local_84;
  int local_78;
  int local_6c;
  int local_60;
  int local_54;
  int local_48;
  int local_3c;
  
  uVar4 = *(ulong *)param_1;
  uVar5 = *(ulong *)param_2;
  uVar6 = *(ulong *)param_3;
  uVar7 = *(ulong *)param_4;
  uVar8 = *(ulong *)param_5;
  uVar9 = *(ulong *)param_6;
  uVar10 = *(ulong *)param_7;
  uVar11 = *(ulong *)param_8;
  local_90 = (int)uVar4;
  local_84 = (int)uVar5;
  local_78 = (int)uVar6;
  local_6c = (int)uVar7;
  local_60 = (int)uVar8;
  local_54 = (int)uVar9;
  local_48 = (int)uVar10;
  local_3c = (int)uVar11;
  if (*(int *)(param_1 + 8) == 1) {
    iVar13 = 1;
    uVar12 = 0;
    if (local_90 != -1) {
      uVar12 = 1L << (uVar4 & 0x3f);
    }
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
      iVar14 = 1;
      uVar12 = 0;
      iVar13 = 0;
      uVar3 = 0;
      if (local_90 != -1) {
        uVar3 = 1L << (uVar4 & 0x3f);
      }
      goto joined_r0x0125e91c;
    }
    iVar13 = 0;
    uVar12 = 0;
  }
  iVar14 = 0;
  uVar3 = 0;
joined_r0x0125e91c:
  if (*(int *)(param_2 + 8) == 0) {
    iVar14 = iVar14 + 1;
    uVar4 = 0;
    if (local_84 != -1) {
      uVar4 = 1L << (uVar5 & 0x3f);
    }
    uVar3 = uVar4 | uVar3;
  }
  else if (*(int *)(param_2 + 8) == 1) {
    iVar13 = iVar13 + 1;
    uVar4 = 0;
    if (local_84 != -1) {
      uVar4 = 1L << (uVar5 & 0x3f);
    }
    uVar12 = uVar4 | uVar12;
  }
  if (*(int *)(param_3 + 8) == 0) {
    iVar14 = iVar14 + 1;
    uVar4 = 0;
    if (local_78 != -1) {
      uVar4 = 1L << (uVar6 & 0x3f);
    }
    uVar3 = uVar4 | uVar3;
  }
  else if (*(int *)(param_3 + 8) == 1) {
    iVar13 = iVar13 + 1;
    uVar4 = 0;
    if (local_78 != -1) {
      uVar4 = 1L << (uVar6 & 0x3f);
    }
    uVar12 = uVar4 | uVar12;
  }
  if (*(int *)(param_4 + 8) == 0) {
    iVar14 = iVar14 + 1;
    uVar4 = 0;
    if (local_6c != -1) {
      uVar4 = 1L << (uVar7 & 0x3f);
    }
    uVar3 = uVar4 | uVar3;
  }
  else if (*(int *)(param_4 + 8) == 1) {
    iVar13 = iVar13 + 1;
    uVar4 = 0;
    if (local_6c != -1) {
      uVar4 = 1L << (uVar7 & 0x3f);
    }
    uVar12 = uVar4 | uVar12;
  }
  if (*(int *)(param_5 + 8) == 0) {
    iVar14 = iVar14 + 1;
    uVar4 = 0;
    if (local_60 != -1) {
      uVar4 = 1L << (uVar8 & 0x3f);
    }
    uVar3 = uVar4 | uVar3;
  }
  else if (*(int *)(param_5 + 8) == 1) {
    iVar13 = iVar13 + 1;
    uVar4 = 0;
    if (local_60 != -1) {
      uVar4 = 1L << (uVar8 & 0x3f);
    }
    uVar12 = uVar4 | uVar12;
  }
  if (*(int *)(param_6 + 8) == 0) {
    iVar14 = iVar14 + 1;
    uVar4 = 0;
    if (local_54 != -1) {
      uVar4 = 1L << (uVar9 & 0x3f);
    }
    uVar3 = uVar4 | uVar3;
  }
  else if (*(int *)(param_6 + 8) == 1) {
    iVar13 = iVar13 + 1;
    uVar4 = 0;
    if (local_54 != -1) {
      uVar4 = 1L << (uVar9 & 0x3f);
    }
    uVar12 = uVar4 | uVar12;
  }
  if (*(int *)(param_7 + 8) == 0) {
    iVar14 = iVar14 + 1;
    uVar4 = 0;
    if (local_48 != -1) {
      uVar4 = 1L << (uVar10 & 0x3f);
    }
    uVar3 = uVar4 | uVar3;
  }
  else if (*(int *)(param_7 + 8) == 1) {
    iVar13 = iVar13 + 1;
    uVar4 = 0;
    if (local_48 != -1) {
      uVar4 = 1L << (uVar10 & 0x3f);
    }
    uVar12 = uVar4 | uVar12;
  }
  if (*(int *)(param_8 + 8) == 0) {
    iVar14 = iVar14 + 1;
    uVar4 = 0;
    if (local_3c != -1) {
      uVar4 = 1L << (uVar11 & 0x3f);
    }
    uVar3 = uVar4 | uVar3;
  }
  else if (*(int *)(param_8 + 8) == 1) {
    iVar13 = iVar13 + 1;
    uVar4 = 0;
    if (local_3c != -1) {
      uVar4 = 1L << (uVar11 & 0x3f);
    }
    uVar12 = uVar4 | uVar12;
  }
  iVar1 = CountSetBits(uVar3,0x40);
  iVar2 = CountSetBits(uVar12,0x40);
  return iVar14 != iVar1 || iVar13 != iVar2;
}

