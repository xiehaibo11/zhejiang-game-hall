
void FUN_010be3e4(undefined8 param_1,ulong param_2,ulong param_3,long param_4,long param_5)

{
  ulong extraout_x1;
  ulong extraout_x1_00;
  uint uVar1;
  long extraout_x8;
  long extraout_x8_00;
  double *extraout_x9;
  double *extraout_x9_00;
  double *pdVar2;
  uint *puVar3;
  ushort *puVar4;
  short *psVar5;
  double *pdVar6;
  char *pcVar7;
  int *piVar8;
  float *pfVar9;
  byte *pbVar10;
  
  if ((*(uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb)) + 0x1b) >> 2 & 1)
      != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!source.WasDetached()");
  }
  if ((*(uint *)((param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb)) + 0x1b) >> 2 & 1)
      == 0) {
    uVar1 = (uint)(*(byte *)((param_2 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(param_2 - 1)) >>
                  3);
    if (10 < uVar1 - 0x11) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    param_5 = param_5 - param_4;
    pdVar2 = (double *)(*(long *)(param_3 + 0x27) + (ulong)*(uint *)(param_3 + 0x2f));
    switch(uVar1) {
    case 0x11:
      if (param_5 != 0) {
        pbVar10 = (byte *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4);
        do {
          param_5 = param_5 + -1;
          *pdVar2 = (double)*pbVar10;
          pdVar2 = pdVar2 + 1;
          pbVar10 = pbVar10 + 1;
        } while (param_5 != 0);
      }
      break;
    case 0x12:
      if (param_5 != 0) {
        pcVar7 = (char *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4);
        do {
          param_5 = param_5 + -1;
          *pdVar2 = (double)(int)*pcVar7;
          pdVar2 = pdVar2 + 1;
          pcVar7 = pcVar7 + 1;
        } while (param_5 != 0);
      }
      break;
    case 0x14:
      if (param_5 != 0) {
        psVar5 = (short *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) +
                          param_4 * 2);
        do {
          param_5 = param_5 + -1;
          *pdVar2 = (double)(int)*psVar5;
          pdVar2 = pdVar2 + 1;
          psVar5 = psVar5 + 1;
        } while (param_5 != 0);
      }
      break;
    case 0x15:
      if (param_5 != 0) {
        puVar3 = (uint *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4 * 4
                         );
        do {
          param_5 = param_5 + -1;
          *pdVar2 = (double)*puVar3;
          pdVar2 = pdVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (param_5 != 0);
      }
      break;
    case 0x16:
      if (param_5 != 0) {
        piVar8 = (int *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4 * 4)
        ;
        do {
          param_5 = param_5 + -1;
          *pdVar2 = (double)*piVar8;
          pdVar2 = pdVar2 + 1;
          piVar8 = piVar8 + 1;
        } while (param_5 != 0);
      }
      break;
    case 0x17:
      if (param_5 != 0) {
        pfVar9 = (float *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) +
                          param_4 * 4);
        do {
          param_5 = param_5 + -1;
          *pdVar2 = (double)*pfVar9;
          pdVar2 = pdVar2 + 1;
          pfVar9 = pfVar9 + 1;
        } while (param_5 != 0);
      }
      break;
    case 0x18:
      if (param_5 != 0) {
        pdVar6 = (double *)
                 (*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4 * 8);
        do {
          param_5 = param_5 + -1;
          *pdVar2 = *pdVar6;
          pdVar2 = pdVar2 + 1;
          pdVar6 = pdVar6 + 1;
        } while (param_5 != 0);
      }
      break;
    case 0x1a:
      if (param_5 == 0) {
        return;
      }
      FUN_010be79c();
      param_2 = extraout_x1;
      param_5 = extraout_x8;
      pdVar2 = extraout_x9;
    case 0x13:
      if (param_5 != 0) {
        puVar4 = (ushort *)
                 (*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4 * 2);
        do {
          param_5 = param_5 + -1;
          *pdVar2 = (double)*puVar4;
          pdVar2 = pdVar2 + 1;
          puVar4 = puVar4 + 1;
        } while (param_5 != 0);
      }
      break;
    case 0x1b:
      if (param_5 == 0) {
        return;
      }
      FUN_010be7b0();
      param_2 = extraout_x1_00;
      param_5 = extraout_x8_00;
      pdVar2 = extraout_x9_00;
    case 0x19:
      if (param_5 != 0) {
        pbVar10 = (byte *)(*(long *)(param_2 + 0x27) + (ulong)*(uint *)(param_2 + 0x2f) + param_4);
        do {
          param_5 = param_5 + -1;
          *pdVar2 = (double)*pbVar10;
          pdVar2 = pdVar2 + 1;
          pbVar10 = pbVar10 + 1;
        } while (param_5 != 0);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!destination.WasDetached()");
}

