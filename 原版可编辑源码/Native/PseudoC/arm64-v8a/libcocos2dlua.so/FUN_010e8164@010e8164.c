
int FUN_010e8164(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  
  lVar10 = param_1[0x4c];
  if (*(int *)(lVar10 + 0x24) != 0) {
    return 2;
  }
LAB_010e8500:
  do {
    while( true ) {
      iVar4 = (**(code **)(param_1[0x4d] + 8))(param_1);
      if (iVar4 != 1) {
        if (iVar4 != 2) {
          return iVar4;
        }
        *(undefined4 *)(lVar10 + 0x24) = 1;
        if (*(int *)(lVar10 + 0x28) == 0) {
          if (*(int *)((long)param_1 + 0xac) < *(int *)((long)param_1 + 0xb4)) {
            *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xac);
          }
        }
        else if (*(int *)(param_1[0x4d] + 0x1c) != 0) {
          puVar5 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar5 + 5) = 0x3e;
          (*(code *)*puVar5)(param_1);
        }
        return 2;
      }
      if (*(int *)(lVar10 + 0x28) == 0) break;
      if (*(int *)(lVar10 + 0x28) != 1) {
        iVar4 = (int)param_1[0x38];
        goto joined_r0x010e81d0;
      }
      if ((0xffdc < *(uint *)((long)param_1 + 0x34)) || (0xffdc < *(uint *)(param_1 + 6))) {
        puVar5 = (undefined8 *)*param_1;
        puVar5[5] = 0xffdc0000002a;
        (*(code *)*puVar5)(param_1);
      }
      lVar1 = param_1[0x25];
      if (4 < (int)lVar1 - 8U) {
        puVar5 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar5 + 5) = 0x10;
        *(int *)((long)puVar5 + 0x2c) = (int)lVar1;
        (*(code *)*puVar5)(param_1);
      }
      iVar4 = (int)param_1[7];
      if (10 < iVar4) {
        puVar5 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar5 + 5) = 0x1b;
        *(int *)((long)puVar5 + 0x2c) = iVar4;
        *(undefined4 *)(puVar5 + 6) = 10;
        (*(code *)*puVar5)(param_1);
        iVar4 = (int)param_1[7];
      }
      param_1[0x34] = 0x100000001;
      if (0 < iVar4) {
        iVar2 = 0;
        iVar7 = 1;
        iVar8 = 1;
        piVar11 = (int *)(param_1[0x26] + 0xc);
        do {
          iVar9 = piVar11[-1];
          if ((3 < iVar9 - 1U) || (3 < *piVar11 - 1U)) {
            puVar5 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar5 + 5) = 0x13;
            (*(code *)*puVar5)(param_1);
            iVar8 = (int)param_1[0x34];
            iVar9 = piVar11[-1];
            iVar7 = *(int *)((long)param_1 + 0x1a4);
            iVar4 = (int)param_1[7];
          }
          if (iVar8 <= iVar9) {
            iVar8 = iVar9;
          }
          *(int *)(param_1 + 0x34) = iVar8;
          iVar2 = iVar2 + 1;
          if (iVar7 <= *piVar11) {
            iVar7 = *piVar11;
          }
          *(int *)((long)param_1 + 0x1a4) = iVar7;
          piVar11 = piVar11 + 0x18;
        } while (iVar2 < iVar4);
      }
      if (((int)param_1[0x27] != 0) ||
         ((*(int *)((long)param_1 + 0x13c) != 0 && ((int)param_1[0x38] != 0)))) {
switchD_010e8334_caseD_3f:
        iVar2 = 8;
        goto LAB_010e81e8;
      }
      iVar2 = (int)param_1[0x44];
      if (0x77 < iVar2) {
        if (iVar2 < 0xc3) {
          if (iVar2 == 0x78) {
            iVar2 = 0xb;
          }
          else if (iVar2 == 0x8f) {
            iVar2 = 0xc;
          }
          else {
            if (iVar2 != 0xa8) goto switchD_010e8334_caseD_1;
            iVar2 = 0xd;
          }
        }
        else if (iVar2 == 0xc3) {
          iVar2 = 0xe;
        }
        else if (iVar2 == 0xe0) {
          iVar2 = 0xf;
        }
        else {
          if (iVar2 != 0xff) goto switchD_010e8334_caseD_1;
          iVar2 = 0x10;
        }
        goto LAB_010e81e8;
      }
      switch(iVar2) {
      case 0:
        iVar2 = 1;
        *(undefined4 *)((long)param_1 + 0x22c) = 1;
        *(undefined4 *)(param_1 + 0x47) = 0;
        goto LAB_010e81f8;
      default:
switchD_010e8334_caseD_1:
        puVar5 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar5 + 5) = 0x11;
        *(undefined4 *)((long)puVar5 + 0x2c) = *(undefined4 *)((long)param_1 + 0x21c);
        *(int *)(puVar5 + 6) = (int)param_1[0x44];
        *(undefined4 *)((long)puVar5 + 0x34) = *(undefined4 *)((long)param_1 + 0x224);
        *(int *)(puVar5 + 7) = (int)param_1[0x45];
        (*(code *)*puVar5)(param_1);
        iVar2 = *(int *)((long)param_1 + 0x22c);
        iVar4 = (int)param_1[7];
        break;
      case 3:
        iVar2 = 2;
        *(undefined4 *)((long)param_1 + 0x22c) = 2;
        param_1[0x46] = (long)jpeg_natural_order2;
        *(undefined4 *)(param_1 + 0x47) = 3;
        break;
      case 8:
        iVar2 = 3;
        *(undefined4 *)((long)param_1 + 0x22c) = 3;
        param_1[0x46] = (long)jpeg_natural_order3;
        *(undefined4 *)(param_1 + 0x47) = 8;
        break;
      case 0xf:
        iVar2 = 4;
        *(undefined4 *)((long)param_1 + 0x22c) = 4;
        param_1[0x46] = (long)jpeg_natural_order4;
        *(undefined4 *)(param_1 + 0x47) = 0xf;
        break;
      case 0x18:
        iVar2 = 5;
        *(undefined4 *)((long)param_1 + 0x22c) = 5;
        param_1[0x46] = (long)jpeg_natural_order5;
        *(undefined4 *)(param_1 + 0x47) = 0x18;
        break;
      case 0x23:
        iVar2 = 6;
        *(undefined4 *)((long)param_1 + 0x22c) = 6;
        param_1[0x46] = (long)jpeg_natural_order6;
        *(undefined4 *)(param_1 + 0x47) = 0x23;
        break;
      case 0x30:
        iVar2 = 7;
        *(undefined4 *)((long)param_1 + 0x22c) = 7;
        param_1[0x46] = (long)&jpeg_natural_order7;
        *(undefined4 *)(param_1 + 0x47) = 0x30;
        break;
      case 0x3f:
        goto switchD_010e8334_caseD_3f;
      case 0x50:
        iVar2 = 9;
        goto LAB_010e81e8;
      case 99:
        iVar2 = 10;
LAB_010e81e8:
        *(int *)((long)param_1 + 0x22c) = iVar2;
        *(undefined4 *)(param_1 + 0x47) = 0x3f;
LAB_010e81f8:
        param_1[0x46] = (long)jpeg_natural_order;
      }
      *(int *)(param_1 + 0x35) = iVar2;
      *(int *)((long)param_1 + 0x1ac) = iVar2;
      if (0 < iVar4) {
        iVar4 = 1;
        piVar11 = (int *)(param_1[0x26] + 0x28);
        while( true ) {
          piVar11[-1] = iVar2;
          *piVar11 = iVar2;
          iVar2 = jdiv_round_up((long)piVar11[-8] * (ulong)*(uint *)(param_1 + 6),
                                (long)(int)param_1[0x34] * (long)iVar2);
          piVar11[-3] = iVar2;
          iVar2 = jdiv_round_up((long)piVar11[-7] * (ulong)*(uint *)((long)param_1 + 0x34),
                                (long)*(int *)((long)param_1 + 0x22c) *
                                (long)*(int *)((long)param_1 + 0x1a4));
          piVar11[-2] = iVar2;
          iVar2 = jdiv_round_up((long)piVar11[-8] * (ulong)*(uint *)(param_1 + 6),
                                (long)(int)param_1[0x34]);
          piVar11[1] = iVar2;
          iVar2 = jdiv_round_up((long)piVar11[-7] * (ulong)*(uint *)((long)param_1 + 0x34),
                                (long)*(int *)((long)param_1 + 0x1a4));
          piVar11[2] = iVar2;
          piVar11[3] = 1;
          piVar11[10] = 0;
          piVar11[0xb] = 0;
          if ((int)param_1[7] <= iVar4) break;
          iVar2 = *(int *)((long)param_1 + 0x22c);
          piVar11 = piVar11 + 0x18;
          iVar4 = iVar4 + 1;
        }
        iVar2 = *(int *)((long)param_1 + 0x22c);
      }
      uVar3 = jdiv_round_up(*(undefined4 *)((long)param_1 + 0x34),
                            (long)iVar2 * (long)*(int *)((long)param_1 + 0x1a4));
      iVar4 = (int)param_1[0x38];
      *(undefined4 *)(param_1 + 0x36) = uVar3;
      if (iVar4 < (int)param_1[7]) {
        uVar6 = 1;
      }
      else {
        uVar6 = (uint)(*(int *)((long)param_1 + 0x13c) != 0);
      }
      *(uint *)(param_1[0x4c] + 0x20) = uVar6;
joined_r0x010e81d0:
      if (iVar4 != 0) {
        *(undefined4 *)(lVar10 + 0x28) = 0;
        return 1;
      }
      *(undefined4 *)(lVar10 + 0x28) = 2;
    }
    if (*(int *)(lVar10 + 0x20) == 0) goto LAB_010e84e0;
  } while ((int)param_1[0x38] == 0);
  goto LAB_010e869c;
LAB_010e84e0:
  puVar5 = (undefined8 *)*param_1;
  *(undefined4 *)(puVar5 + 5) = 0x24;
  (*(code *)*puVar5)(param_1);
  if ((int)param_1[0x38] != 0) {
LAB_010e869c:
    FUN_010e8720(param_1);
    return 1;
  }
  goto LAB_010e8500;
}

