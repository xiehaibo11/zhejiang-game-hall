
undefined8 FUN_013e98c0(ulong param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x26;
  double dVar6;
  double dVar7;
  
  iVar5 = (int)param_3;
  iVar4 = (int)param_1;
  bVar2 = (param_1 & 1) == 0;
  if ((!bVar2) &&
     ((*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140) ||
      (((dVar6 = *(double *)(param_1 + 3), dVar6 != INFINITY && (dVar6 != -INFINITY)) &&
       (dVar6 - (double)(long)dVar6 != 0.0)))))) goto LAB_013e99dc;
  if ((param_2 & 1) == 0) {
    if (!bVar2) {
      dVar7 = *(double *)(param_1 + 3);
      dVar6 = (double)((int)param_2 >> 1);
      goto LAB_013e9960;
    }
    if ((int)param_2 <= iVar4) goto LAB_013e997c;
LAB_013e9974:
    bVar3 = false;
  }
  else {
    dVar6 = *(double *)(param_2 + 3);
    if (bVar2) {
      dVar7 = (double)(iVar4 >> 1);
    }
    else {
      dVar7 = *(double *)(param_1 + 3);
    }
LAB_013e9960:
    if (dVar7 < dVar6) goto LAB_013e9974;
LAB_013e997c:
    bVar3 = true;
  }
  bVar1 = false;
  if (!bVar3) goto LAB_013e99dc;
  bVar3 = (param_3 & 1) == 0;
  if (bVar2) {
    if (!bVar3) {
      dVar7 = *(double *)(param_3 + 3);
      dVar6 = (double)(iVar4 >> 1);
      goto LAB_013e99c0;
    }
    if (iVar4 <= iVar5) goto LAB_013e99d4;
  }
  else {
    dVar6 = *(double *)(param_1 + 3);
    if (bVar3) {
      dVar7 = (double)(iVar5 >> 1);
    }
    else {
      dVar7 = *(double *)(param_3 + 3);
    }
LAB_013e99c0:
    if (dVar6 <= dVar7) {
LAB_013e99d4:
      bVar1 = true;
    }
  }
  if (bVar1) {
    return *(undefined8 *)(unaff_x26 + 0xa0);
  }
LAB_013e99dc:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2718),iVar5,param_1,0,param_2,in_x6,in_x7,
               unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf30) + 0x18b),0,param_1,param_2,
               param_3,0x1a);
}

