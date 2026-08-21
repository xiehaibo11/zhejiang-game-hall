
long FUN_014248a0(long param_1,long param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long unaff_x26;
  int in_stack_00000000;
  
  uVar3 = param_4 + in_stack_00000000;
  uVar5 = (long)((ulong)uVar3 << 0x20) >> 0x21;
  if ((ulong)((long)((ulong)*(uint *)(param_2 + 3) << 0x20) >> 0x21) <= uVar5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(0,0x14248f4);
    (*pcVar4)();
  }
  uVar5 = (**(code **)(unaff_x26 + (long)*(int *)(param_1 + 0x13) * 4 + 0x2c78))
                    (unaff_x26 + (ulong)*(uint *)(param_1 + 0xf),
                     unaff_x26 + (ulong)*(uint *)(param_2 + uVar5 * 4 + 7));
  if ((uVar5 & 1) == 0) {
    if ((int)uVar5 < 0) goto LAB_01424a64;
  }
  else if (*(double *)(uVar5 + 3) < 0.0) {
LAB_01424a64:
    param_5 = param_5 - in_stack_00000000;
    iVar1 = 2;
    iVar7 = 0;
    while (iVar8 = iVar1, iVar8 < param_5) {
      uVar5 = (long)((ulong)(uVar3 + iVar8) << 0x20) >> 0x21;
      if ((ulong)((long)((ulong)*(uint *)(param_2 + 3) << 0x20) >> 0x21) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0,0x1424b3c);
        (*pcVar4)();
      }
      uVar5 = (**(code **)(unaff_x26 + (long)*(int *)(param_1 + 0x13) * 4 + 0x2c78))
                        (unaff_x26 + (ulong)*(uint *)(param_1 + 0xf),
                         unaff_x26 + (ulong)*(uint *)(param_2 + uVar5 * 4 + 7),param_3);
      if ((uVar5 & 1) == 0) {
        if (-1 < (int)uVar5) break;
      }
      else if (0.0 <= *(double *)(uVar5 + 3)) break;
      iVar9 = iVar8 * 2 + 2;
      iVar1 = param_5;
      iVar7 = iVar8;
      if (0 < iVar9) {
        iVar1 = iVar9;
      }
    }
    if (param_5 < iVar8) {
      iVar8 = param_5;
    }
    goto LAB_01424b74;
  }
  iVar1 = in_stack_00000000 + 2;
  iVar8 = 2;
  iVar9 = 0;
  while (iVar7 = iVar8, iVar7 < iVar1) {
    uVar5 = (long)((ulong)(uVar3 - iVar7) << 0x20) >> 0x21;
    if ((ulong)((long)((ulong)*(uint *)(param_2 + 3) << 0x20) >> 0x21) <= uVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x1424a28);
      (*pcVar4)();
    }
    uVar5 = (**(code **)(unaff_x26 + (long)*(int *)(param_1 + 0x13) * 4 + 0x2c78))
                      (unaff_x26 + (ulong)*(uint *)(param_1 + 0xf),
                       unaff_x26 + (ulong)*(uint *)(param_2 + uVar5 * 4 + 7),param_3);
    if ((uVar5 & 1) == 0) {
      if ((int)uVar5 < 0) break;
    }
    else if (*(double *)(uVar5 + 3) < 0.0) break;
    iVar2 = iVar7 * 2 + 2;
    iVar8 = iVar1;
    iVar9 = iVar7;
    if (0 < iVar2) {
      iVar8 = iVar2;
    }
  }
  if (iVar1 < iVar7) {
    iVar7 = iVar1;
  }
  iVar7 = -iVar7;
  iVar8 = -iVar9;
LAB_01424b74:
  lVar6 = (long)(in_stack_00000000 + iVar8);
  iVar7 = in_stack_00000000 + iVar7 + 2;
  do {
    while( true ) {
      if ((int)lVar6 <= iVar7) {
        return lVar6;
      }
      iVar1 = iVar7 + ((int)lVar6 - iVar7 >> 1 & 0xfffffffeU);
      uVar5 = (long)((ulong)(uint)(param_4 + iVar1) << 0x20) >> 0x21;
      if ((ulong)((long)((ulong)*(uint *)(param_2 + 3) << 0x20) >> 0x21) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0,0x1424c54);
        (*pcVar4)();
      }
      uVar5 = (**(code **)(unaff_x26 + (long)*(int *)(param_1 + 0x13) * 4 + 0x2c78))
                        (unaff_x26 + (ulong)*(uint *)(param_1 + 0xf),
                         unaff_x26 + (ulong)*(uint *)(param_2 + uVar5 * 4 + 7),param_3);
      if ((uVar5 & 1) == 0) break;
      if (0.0 <= *(double *)(uVar5 + 3)) goto LAB_01424c18;
LAB_01424c28:
      iVar7 = iVar1 + 2;
    }
    if ((int)uVar5 < 0) goto LAB_01424c28;
LAB_01424c18:
    lVar6 = (long)iVar1;
  } while( true );
}

