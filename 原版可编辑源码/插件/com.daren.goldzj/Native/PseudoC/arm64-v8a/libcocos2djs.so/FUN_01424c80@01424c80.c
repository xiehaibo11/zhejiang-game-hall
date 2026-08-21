
long FUN_01424c80(long param_1,long param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long unaff_x26;
  int in_stack_00000000;
  
  uVar2 = param_4 + in_stack_00000000;
  uVar5 = (long)((ulong)uVar2 << 0x20) >> 0x21;
  if ((ulong)((long)((ulong)*(uint *)(param_2 + 3) << 0x20) >> 0x21) <= uVar5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0,0x1424cd4);
    (*pcVar4)();
  }
  uVar5 = (**(code **)(unaff_x26 + (long)*(int *)(param_1 + 0x13) * 4 + 0x2c78))
                    (unaff_x26 + (ulong)*(uint *)(param_1 + 0xf),param_3,
                     unaff_x26 + (ulong)*(uint *)(param_2 + uVar5 * 4 + 7));
  if ((uVar5 & 1) == 0) {
    if ((int)uVar5 < 0) goto LAB_01424e58;
  }
  else if (*(double *)(uVar5 + 3) < 0.0) {
LAB_01424e58:
    iVar6 = in_stack_00000000 + 2;
    iVar3 = 2;
    iVar9 = 0;
    while (iVar8 = iVar3, iVar8 < iVar6) {
      uVar5 = (long)((ulong)(uVar2 - iVar8) << 0x20) >> 0x21;
      if ((ulong)((long)((ulong)*(uint *)(param_2 + 3) << 0x20) >> 0x21) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0,0x1424f2c);
        (*pcVar4)();
      }
      uVar5 = (**(code **)(unaff_x26 + (long)*(int *)(param_1 + 0x13) * 4 + 0x2c78))
                        (unaff_x26 + (ulong)*(uint *)(param_1 + 0xf),param_3,
                         unaff_x26 + (ulong)*(uint *)(param_2 + uVar5 * 4 + 7));
      if ((uVar5 & 1) == 0) {
        if (-1 < (int)uVar5) break;
      }
      else if (0.0 <= *(double *)(uVar5 + 3)) break;
      iVar1 = iVar8 * 2 + 2;
      iVar3 = iVar6;
      iVar9 = iVar8;
      if (0 < iVar1) {
        iVar3 = iVar1;
      }
    }
    if (iVar6 < iVar8) {
      iVar8 = iVar6;
    }
    iVar8 = -iVar8;
    iVar6 = -iVar9;
    goto LAB_01424f64;
  }
  param_5 = param_5 - in_stack_00000000;
  iVar3 = 2;
  iVar8 = 0;
  while (iVar6 = iVar3, iVar6 < param_5) {
    uVar5 = (long)((ulong)(uVar2 + iVar6) << 0x20) >> 0x21;
    if ((ulong)((long)((ulong)*(uint *)(param_2 + 3) << 0x20) >> 0x21) <= uVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x1424e18);
      (*pcVar4)();
    }
    uVar5 = (**(code **)(unaff_x26 + (long)*(int *)(param_1 + 0x13) * 4 + 0x2c78))
                      (unaff_x26 + (ulong)*(uint *)(param_1 + 0xf),param_3,
                       unaff_x26 + (ulong)*(uint *)(param_2 + uVar5 * 4 + 7));
    if ((uVar5 & 1) == 0) {
      if ((int)uVar5 < 0) break;
    }
    else if (*(double *)(uVar5 + 3) < 0.0) break;
    iVar9 = iVar6 * 2 + 2;
    iVar3 = param_5;
    iVar8 = iVar6;
    if (0 < iVar9) {
      iVar3 = iVar9;
    }
  }
  if (param_5 < iVar6) {
    iVar6 = param_5;
  }
LAB_01424f64:
  lVar7 = (long)(iVar6 + in_stack_00000000);
  iVar6 = iVar8 + in_stack_00000000 + 2;
  do {
    while( true ) {
      if ((int)lVar7 <= iVar6) {
        return lVar7;
      }
      iVar3 = iVar6 + ((int)lVar7 - iVar6 >> 1 & 0xfffffffeU);
      uVar5 = (long)((ulong)(uint)(param_4 + iVar3) << 0x20) >> 0x21;
      if ((ulong)((long)((ulong)*(uint *)(param_2 + 3) << 0x20) >> 0x21) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0,0x1425044);
        (*pcVar4)();
      }
      uVar5 = (**(code **)(unaff_x26 + (long)*(int *)(param_1 + 0x13) * 4 + 0x2c78))
                        (unaff_x26 + (ulong)*(uint *)(param_1 + 0xf),param_3,
                         unaff_x26 + (ulong)*(uint *)(param_2 + uVar5 * 4 + 7));
      if ((uVar5 & 1) == 0) break;
      if (0.0 <= *(double *)(uVar5 + 3)) goto LAB_01425008;
LAB_0142501c:
      lVar7 = (long)iVar3;
    }
    if ((int)uVar5 < 0) goto LAB_0142501c;
LAB_01425008:
    iVar6 = iVar3 + 2;
  } while( true );
}

