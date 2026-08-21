
void FUN_00a1bea0(long param_1,byte *param_2,uint param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte local_6c;
  byte local_6b;
  byte local_6a;
  long local_68;
  
                    /* try { // try from 00a1beb4 to 00b1bf2b has its CatchHandler @ 00a1be04 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar4 = *(uint *)(param_1 + 0x44);
  uVar5 = uVar4 & 0xff;
  uVar9 = uVar4 >> 8 & 0xff;
  uVar8 = uVar4 >> 0x10 & 0xff;
  uVar10 = uVar4 >> 0x18;
  if ((param_3 < 0x80) && (local_6c = (byte)param_3, -1 < (char)local_6c)) {
    uVar4 = 1;
    if (uVar5 != 0) {
      uVar4 = 2;
    }
    uVar3 = (ulong)uVar4;
                    /* catch() { ... } // from try @ 00a1be98 with catch @ 00a1bf10 */
    if (param_4 < uVar3) goto LAB_00a1c310;
    pbVar6 = param_2;
    if (uVar5 != 0) {
      pbVar6 = param_2 + 1;
      *param_2 = 0xf;
    }
    *pbVar6 = local_6c;
                    /* try { // try from 00a1bf2c to 00b1bf57 has its CatchHandler @ 00a1bf2c
                       catch() { ... } // from try @ 00a1bf2c with catch @ 00a1bf2c
                       catch() { ... } // from try @ 00a1bf70 with catch @ 00a1bf2c */
    if ((param_3 == 0xd) || (param_3 == 10)) {
      uVar10 = 0;
      uVar8 = 0;
      uVar9 = 0;
    }
    uVar5 = uVar10 << 0x18 | uVar8 << 0x10 | uVar9 << 8;
    goto LAB_00a1c35c;
  }
                    /* try { // try from 00a1bf58 to 00b1bf6f has its CatchHandler @ 00a1bf88 */
  iVar2 = FUN_00a158bc(param_1,&local_6c,param_3,2);
  if (iVar2 == -1) {
LAB_00a1bfe4:
    iVar2 = FUN_00a20728(&local_6c,param_3);
    if (iVar2 == -1) goto switchD_00a1c024_default;
    if (iVar2 != 3) goto LAB_00a1c390;
    switch(local_6c) {
    case 1:
      if (((char)local_6b < '\0') || ((char)local_6a < '\0')) break;
      uVar3 = (ulong)((uint)(uVar5 != 1) | (uint)(uVar9 != 2) << 2 | 2);
      if (uVar3 <= param_4) {
        pbVar6 = param_2;
        if (uVar9 != 2) {
          pbVar6 = param_2 + 4;
          param_2[0] = 0x1b;
          param_2[1] = 0x24;
          param_2[2] = 0x29;
          param_2[3] = 0x47;
        }
        pbVar7 = pbVar6;
        if (uVar5 != 1) {
          pbVar7 = pbVar6 + 1;
          *pbVar6 = 0xe;
        }
        *pbVar7 = local_6b;
        pbVar7[1] = local_6a;
        uVar5 = uVar4 & 0xff000000 | uVar8 << 0x10;
        uVar4 = 0x201;
        goto LAB_00a1c358;
      }
      goto LAB_00a1c310;
    case 2:
      if (((char)local_6b < '\0') || ((char)local_6a < '\0')) break;
      uVar5 = 4;
      if (uVar8 != 1) {
        uVar5 = 8;
      }
      uVar3 = (ulong)uVar5;
      if (param_4 < uVar3) goto LAB_00a1c310;
      pbVar6 = param_2;
      if (uVar8 != 1) {
        pbVar6 = param_2 + 4;
        param_2[0] = 0x1b;
        param_2[1] = 0x24;
        param_2[2] = 0x2a;
        param_2[3] = 0x48;
      }
      pbVar6[2] = local_6b;
      pbVar6[3] = local_6a;
      pbVar6[0] = 0x1b;
      pbVar6[1] = 0x4e;
      uVar5 = uVar4 & 0xff000000 | uVar4 & 0xff | uVar9 << 8 | 0x10000;
      goto LAB_00a1c35c;
    case 3:
      if ((-1 < (char)local_6b) && (-1 < (char)local_6a)) {
        uVar4 = 4;
        if (uVar10 != 1) {
          uVar4 = 8;
        }
        uVar3 = (ulong)uVar4;
        if (uVar3 <= param_4) {
          pbVar6 = param_2;
          if (uVar10 != 1) {
            pbVar6 = param_2 + 4;
            param_2[0] = 0x1b;
            param_2[1] = 0x24;
            param_2[2] = 0x2b;
            param_2[3] = 0x49;
          }
          pbVar6[2] = local_6b;
          pbVar6[3] = local_6a;
          pbVar6[0] = 0x1b;
          pbVar6[1] = 0x4f;
          uVar5 = uVar5 | uVar9 << 8 | uVar8 << 0x10 | 0x1000000;
          goto LAB_00a1c35c;
        }
        goto LAB_00a1c310;
      }
      break;
    case 4:
      if ((-1 < (char)local_6b) && (-1 < (char)local_6a)) {
        uVar4 = 4;
        if (uVar10 != 2) {
          uVar4 = 8;
        }
        uVar3 = (ulong)uVar4;
        if (uVar3 <= param_4) {
          pbVar6 = param_2;
          if (uVar10 != 2) {
            pbVar6 = param_2 + 4;
            param_2[0] = 0x1b;
            param_2[1] = 0x24;
            param_2[2] = 0x2b;
            param_2[3] = 0x4a;
          }
          pbVar6[2] = local_6b;
          pbVar6[3] = local_6a;
          pbVar6[0] = 0x1b;
          pbVar6[1] = 0x4f;
          uVar5 = uVar5 | uVar9 << 8 | uVar8 << 0x10 | 0x2000000;
          goto LAB_00a1c35c;
        }
        goto LAB_00a1c310;
      }
      break;
    case 5:
      if ((-1 < (char)local_6b) && (-1 < (char)local_6a)) {
        uVar4 = 4;
        if (uVar10 != 3) {
          uVar4 = 8;
        }
        uVar3 = (ulong)uVar4;
        if (uVar3 <= param_4) {
          pbVar6 = param_2;
          if (uVar10 != 3) {
            pbVar6 = param_2 + 4;
            param_2[0] = 0x1b;
            param_2[1] = 0x24;
            param_2[2] = 0x2b;
            param_2[3] = 0x4b;
          }
          pbVar6[2] = local_6b;
          pbVar6[3] = local_6a;
          pbVar6[0] = 0x1b;
          pbVar6[1] = 0x4f;
          uVar5 = uVar5 | uVar9 << 8 | uVar8 << 0x10 | 0x3000000;
          goto LAB_00a1c35c;
        }
        goto LAB_00a1c310;
      }
      break;
    case 6:
      if ((-1 < (char)local_6b) && (-1 < (char)local_6a)) {
        uVar4 = uVar10;
        if (uVar10 != 4) {
          uVar4 = 8;
        }
        uVar3 = (ulong)uVar4;
        if (uVar3 <= param_4) {
          pbVar6 = param_2;
          if (uVar10 != 4) {
            pbVar6 = param_2 + 4;
            param_2[0] = 0x1b;
            param_2[1] = 0x24;
            param_2[2] = 0x2b;
            param_2[3] = 0x4c;
          }
          pbVar6[2] = local_6b;
          pbVar6[3] = local_6a;
          pbVar6[0] = 0x1b;
          pbVar6[1] = 0x4f;
          uVar5 = uVar5 | uVar9 << 8 | uVar8 << 0x10 | 0x4000000;
          goto LAB_00a1c35c;
        }
        goto LAB_00a1c310;
      }
      break;
    case 7:
      if ((-1 < (char)local_6b) && (-1 < (char)local_6a)) {
        uVar4 = 4;
        if (uVar10 != 5) {
          uVar4 = 8;
        }
        uVar3 = (ulong)uVar4;
        if (uVar3 <= param_4) {
          pbVar6 = param_2;
          if (uVar10 != 5) {
            pbVar6 = param_2 + 4;
            param_2[0] = 0x1b;
            param_2[1] = 0x24;
            param_2[2] = 0x2b;
            param_2[3] = 0x4d;
          }
          pbVar6[2] = local_6b;
          pbVar6[3] = local_6a;
          pbVar6[0] = 0x1b;
          pbVar6[1] = 0x4f;
          uVar5 = uVar5 | uVar9 << 8 | uVar8 << 0x10 | 0x5000000;
          goto LAB_00a1c35c;
        }
        goto LAB_00a1c310;
      }
    }
switchD_00a1c024_default:
    uVar3 = FUN_00a15bcc(param_1,&local_6c,param_3,2);
    if ((int)uVar3 == -1) goto LAB_00a1c360;
    if ((int)uVar3 != 2) {
LAB_00a1c390:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (((char)local_6c < '\0') || ((char)local_6b < '\0')) {
      uVar3 = 0xffffffff;
      goto LAB_00a1c360;
    }
    uVar3 = (ulong)((uint)(uVar5 != 1) | (uint)(uVar9 != 3) << 2 | 2);
    if (param_4 < uVar3) {
LAB_00a1c310:
      uVar3 = 0xfffffffe;
      goto LAB_00a1c360;
    }
    pbVar6 = param_2;
    if (uVar9 != 3) {
      pbVar6 = param_2 + 4;
      param_2[0] = 0x1b;
      param_2[1] = 0x24;
      param_2[2] = 0x29;
      param_2[3] = 0x45;
    }
    pbVar7 = pbVar6;
    if (uVar5 != 1) {
      pbVar7 = pbVar6 + 1;
      *pbVar6 = 0xe;
    }
    *pbVar7 = local_6c;
    pbVar7[1] = local_6b;
    uVar5 = uVar4 & 0xff000000 | uVar8 << 0x10;
    uVar4 = 0x301;
  }
  else {
                    /* try { // try from 00a1bf70 to 00b1bfa3 has its CatchHandler @ 00a1bf2c */
    if (iVar2 != 2) goto LAB_00a1c390;
    if (((char)local_6c < '\0') || ((char)local_6b < '\0')) goto LAB_00a1bfe4;
                    /* catch() { ... } // from try @ 00a1bf58 with catch @ 00a1bf88 */
    uVar3 = (ulong)((uint)(uVar5 != 1) | (uint)(uVar9 != 1) << 2 | 2);
    if (param_4 < uVar3) goto LAB_00a1c310;
    pbVar6 = param_2;
    if (uVar9 != 1) {
      pbVar6 = param_2 + 4;
      param_2[0] = 0x1b;
      param_2[1] = 0x24;
      param_2[2] = 0x29;
      param_2[3] = 0x41;
    }
    pbVar7 = pbVar6;
    if (uVar5 != 1) {
      pbVar7 = pbVar6 + 1;
      *pbVar6 = 0xe;
    }
    *pbVar7 = local_6c;
    pbVar7[1] = local_6b;
    uVar5 = uVar4 & 0xff000000 | uVar8 << 0x10;
    uVar4 = 0x101;
  }
LAB_00a1c358:
  uVar5 = uVar5 | uVar4;
LAB_00a1c35c:
  *(uint *)(param_1 + 0x44) = uVar5;
LAB_00a1c360:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

