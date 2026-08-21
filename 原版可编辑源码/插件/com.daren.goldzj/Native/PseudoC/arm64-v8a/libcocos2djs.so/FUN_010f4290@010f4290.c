
void FUN_010f4290(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
LAB_010f42bc:
  puVar13 = param_2 + -1;
  puVar8 = param_1;
LAB_010f42d0:
  param_1 = puVar8;
  lVar9 = (long)param_2 - (long)param_1;
  uVar6 = lVar9 >> 3;
  switch(uVar6) {
  case 0:
  case 1:
    goto switchD_010f45b0_caseD_0;
  case 2:
    iVar3 = v8::internal::String::Compare(*(undefined8 *)*param_3,param_2[-1],*param_1);
    if (iVar3 != 0) {
      return;
    }
    uVar7 = *param_1;
    *param_1 = param_2[-1];
    param_2[-1] = uVar7;
    return;
  case 3:
    FUN_010f4730(param_1,param_1 + 1,puVar13,param_3);
    return;
  case 4:
    FUN_010f4840(param_1,param_1 + 1,param_1 + 2,puVar13,param_3);
    return;
  case 5:
    FUN_010f491c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar13,param_3);
    return;
  default:
    if (0xf7 < lVar9) {
      uVar5 = uVar6;
      if ((long)uVar6 < 0) {
        uVar5 = uVar6 + 1;
      }
      puVar8 = (undefined8 *)((long)param_1 + (uVar5 & 0x3ffffffffffffffe) * 4);
      if (lVar9 < 0x1f39) {
        iVar3 = FUN_010f4730(param_1,puVar8,puVar13,param_3);
      }
      else {
        uVar5 = uVar6 + 3;
        if (-1 < (long)uVar6) {
          uVar5 = uVar6;
        }
        lVar9 = (uVar5 & 0x7ffffffffffffffc) * 2;
        iVar3 = FUN_010f491c(param_1,(long)param_1 + lVar9,puVar8,(long)puVar8 + lVar9,puVar13,
                             param_3);
      }
      iVar4 = v8::internal::String::Compare(*(undefined8 *)*param_3,*param_1,*puVar8);
      puVar14 = puVar13;
      puVar11 = param_2 + -2;
      if (iVar4 != 0) goto LAB_010f4370;
      goto LAB_010f43ac;
    }
    FUN_010f4730(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar9 = 0;
    puVar8 = param_1 + 2;
    puVar13 = param_1 + 3;
  }
LAB_010f4628:
  iVar3 = v8::internal::String::Compare(*(undefined8 *)*param_3,*puVar13,*puVar8);
  if (iVar3 == 0) {
    uVar7 = *puVar13;
    lVar1 = lVar9;
    do {
      lVar12 = lVar1;
      *(undefined8 *)((long)param_1 + lVar12 + 0x18) =
           *(undefined8 *)((long)param_1 + lVar12 + 0x10);
      puVar8 = param_1;
      if (lVar12 == -0x10) goto LAB_010f4610;
      iVar3 = v8::internal::String::Compare
                        (*(undefined8 *)*param_3,uVar7,*(undefined8 *)((long)param_1 + lVar12 + 8));
      lVar1 = lVar12 + -8;
    } while (iVar3 == 0);
    puVar8 = (undefined8 *)((long)param_1 + lVar12 + 0x10);
LAB_010f4610:
    *puVar8 = uVar7;
  }
  puVar14 = puVar13 + 1;
  lVar9 = lVar9 + 8;
  puVar8 = puVar13;
  puVar13 = puVar14;
  if (puVar14 == param_2) {
switchD_010f45b0_caseD_0:
    return;
  }
  goto LAB_010f4628;
LAB_010f4370:
  while (puVar14 = puVar11, param_1 != puVar14) {
    iVar4 = v8::internal::String::Compare(*(undefined8 *)*param_3,*puVar14,*puVar8);
    puVar11 = puVar14 + -1;
    if (iVar4 == 0) goto code_r0x010f4390;
  }
  puVar14 = param_1 + 1;
  iVar3 = v8::internal::String::Compare(*(undefined8 *)*param_3,*param_1,param_2[-1]);
  if (iVar3 != 0) {
    if (puVar14 == puVar13) {
      return;
    }
    puVar14 = param_1 + 2;
    while (iVar3 = v8::internal::String::Compare(*(undefined8 *)*param_3,*param_1,puVar14[-1]),
          iVar3 != 0) {
      puVar14 = puVar14 + 1;
      if (param_2 == puVar14) {
        return;
      }
    }
    uVar7 = puVar14[-1];
    puVar14[-1] = *puVar13;
    *puVar13 = uVar7;
  }
  puVar11 = puVar13;
  if (puVar14 == puVar13) {
    return;
  }
  while( true ) {
    puVar8 = puVar14 + -1;
    do {
      puVar14 = puVar8;
      puVar8 = puVar14 + 1;
      iVar3 = v8::internal::String::Compare(*(undefined8 *)*param_3,*param_1,*puVar8);
    } while (iVar3 != 0);
    puVar14 = puVar14 + 2;
    do {
      puVar11 = puVar11 + -1;
      iVar3 = v8::internal::String::Compare(*(undefined8 *)*param_3,*param_1,*puVar11);
    } while (iVar3 == 0);
    if (puVar11 <= puVar8) break;
    uVar7 = *puVar8;
    *puVar8 = *puVar11;
    *puVar11 = uVar7;
  }
  goto LAB_010f42d0;
code_r0x010f4390:
  uVar7 = *param_1;
  iVar3 = iVar3 + 1;
  *param_1 = *puVar14;
  *puVar14 = uVar7;
LAB_010f43ac:
  puVar11 = param_1 + 1;
  puVar10 = puVar11;
  puVar2 = puVar8;
  if (puVar11 < puVar14) {
    while( true ) {
      puVar8 = puVar2;
      puVar11 = puVar10 + -1;
      do {
        puVar10 = puVar11;
        puVar11 = puVar10 + 1;
        iVar4 = v8::internal::String::Compare(*(undefined8 *)*param_3,*puVar11,*puVar8);
      } while (iVar4 == 0);
      puVar10 = puVar10 + 2;
      do {
        puVar14 = puVar14 + -1;
        iVar4 = v8::internal::String::Compare(*(undefined8 *)*param_3,*puVar14,*puVar8);
      } while (iVar4 != 0);
      if (puVar14 < puVar11) break;
      uVar7 = *puVar11;
      iVar3 = iVar3 + 1;
      *puVar11 = *puVar14;
      *puVar14 = uVar7;
      puVar2 = puVar14;
      if (puVar8 != puVar11) {
        puVar2 = puVar8;
      }
    }
  }
  if ((puVar11 == puVar8) ||
     (iVar4 = v8::internal::String::Compare(*(undefined8 *)*param_3,*puVar8,*puVar11), iVar4 != 0))
  {
    if (iVar3 != 0) goto LAB_010f44e0;
  }
  else {
    uVar7 = *puVar11;
    *puVar11 = *puVar8;
    *puVar8 = uVar7;
    if (iVar3 != -1) goto LAB_010f44e0;
  }
  uVar6 = FUN_010f4a34(param_1,puVar11,param_3);
  uVar5 = FUN_010f4a34(puVar11 + 1,param_2,param_3);
  if ((uVar5 & 1) != 0) goto LAB_010f4590;
  puVar8 = puVar11 + 1;
  if ((uVar6 & 1) != 0) goto LAB_010f42d0;
LAB_010f44e0:
  if ((long)param_2 - (long)puVar11 <= (long)puVar11 - (long)param_1) {
    FUN_010f4290(puVar11 + 1,param_2,param_3);
    param_2 = puVar11;
    goto LAB_010f42bc;
  }
  FUN_010f4290(param_1,puVar11,param_3);
  puVar8 = puVar11 + 1;
  goto LAB_010f42d0;
LAB_010f4590:
  param_2 = puVar11;
  if ((uVar6 & 1) != 0) {
    return;
  }
  goto LAB_010f42bc;
}

