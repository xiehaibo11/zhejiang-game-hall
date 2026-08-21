
ulong FUN_00a1082c(long param_1,char *param_2,uint param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  ulong uVar11;
  
  uVar6 = *(uint *)(param_1 + 0x44);
  if ((uVar6 & 3) == 0) {
    if (0x7f < param_3) {
      uVar6 = 1;
      pcVar4 = param_2 + 1;
      *param_2 = '+';
      iVar5 = 1;
      if (param_3 >> 0x10 == 0) goto LAB_00a108f0;
LAB_00a10918:
      if (0x10 < param_3 >> 0x10) {
        return 0xffffffff;
      }
      iVar8 = 5;
      if (((uVar6 ^ 0xffffffff) & 3) == 0) {
        iVar8 = 6;
      }
      param_3 = (param_3 - 0x10000 & 0x3ff | (param_3 - 0x10000 >> 10) << 0x10) + 0xd800dc00;
      iVar9 = 4;
      goto LAB_00a10950;
    }
    uVar11 = (ulong)(param_3 >> 3);
    uVar7 = 1 << (ulong)(param_3 & 7);
    if ((uVar7 & (byte)(&DAT_012fc5a4)[uVar11]) != 0) {
      *param_2 = (char)param_3;
      return 1;
    }
    pcVar4 = param_2 + 1;
    *param_2 = '+';
    if (param_3 == 0x2b) {
      if (param_4 < 2) {
        return 0xfffffffe;
      }
      *pcVar4 = '-';
      return 2;
    }
    uVar6 = 1;
    iVar5 = 1;
LAB_00a10864:
    if ((uVar7 & (byte)(&DAT_012fc5a4)[uVar11]) != 0) {
      bVar1 = (&DAT_012fc5b4)[uVar11];
      iVar5 = iVar5 + ((uVar6 & 2) >> 1);
      if ((uVar7 & bVar1) != 0) {
        iVar5 = iVar5 + 1;
      }
      if (param_4 < iVar5 + 1) {
        return 0xfffffffe;
      }
      pcVar3 = pcVar4;
      if ((uVar6 & 2) != 0) {
        uVar6 = uVar6 & 0xfffffffc;
        if (uVar6 < 0x1a) {
          cVar10 = 'A';
        }
        else if (uVar6 < 0x34) {
          cVar10 = 'G';
        }
        else {
          if (0x3d < uVar6) {
LAB_00a10af8:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          cVar10 = -4;
        }
        pcVar3 = pcVar4 + 1;
        *pcVar4 = cVar10 + (char)uVar6;
      }
      pcVar4 = pcVar3;
      if ((uVar7 & bVar1) != 0) {
        pcVar4 = pcVar3 + 1;
        *pcVar3 = '-';
      }
      *pcVar4 = (char)param_3;
      *(undefined4 *)(param_1 + 0x44) = 0;
      return (ulong)(iVar5 + 1);
    }
  }
  else {
    pcVar4 = param_2;
    if (param_3 < 0x80) {
      iVar5 = 0;
      uVar11 = (ulong)(param_3 >> 3);
      uVar7 = 1 << (ulong)(param_3 & 7);
      goto LAB_00a10864;
    }
    iVar5 = 0;
    if (param_3 >> 0x10 != 0) goto LAB_00a10918;
  }
LAB_00a108f0:
  iVar9 = 2;
  iVar8 = 2;
  if ((uVar6 & 2) != 0) {
    iVar8 = 3;
  }
LAB_00a10950:
  if (param_4 < (uint)(iVar8 + iVar5)) {
    return 0xfffffffe;
  }
  do {
    pcVar3 = pcVar4;
    switch(uVar6 & 3) {
    case 0:
      uVar7 = uVar6 >> 2;
      uVar6 = 1;
      break;
    case 1:
      iVar9 = iVar9 + -1;
      uVar6 = param_3 >> (ulong)(iVar9 * 8 & 0x1f);
      uVar7 = uVar6 >> 2 & 0x3f;
      uVar6 = (uVar6 & 3) << 4 | 2;
      break;
    case 2:
      iVar9 = iVar9 + -1;
      uVar2 = param_3 >> (ulong)(iVar9 * 8 & 0x1f);
      uVar7 = uVar2 >> 4 & 0xf | uVar6 & 0xfffffffc;
      uVar6 = (uVar2 & 0xf) << 2 | 3;
      break;
    case 3:
      iVar9 = iVar9 + -1;
      uVar2 = param_3 >> (ulong)(iVar9 * 8 & 0x1f);
      uVar7 = uVar6 & 0xfc | uVar2 >> 6 & 3;
      uVar6 = (uVar2 & 0x3f) << 2;
                    /* try { // try from 00a109e0 to 00b109eb has its CatchHandler @ 00a110c0 */
    }
    uVar2 = uVar7 & 0xff;
    cVar10 = (char)uVar7;
    if (uVar2 < 0x1a) {
      *pcVar3 = cVar10 + 'A';
    }
    else if (uVar2 < 0x34) {
      *pcVar3 = cVar10 + 'G';
    }
    else if (uVar2 < 0x3e) {
      *pcVar3 = cVar10 + -4;
    }
    else if ((uVar7 & 0xff) == 0x3e) {
      *pcVar3 = '+';
                    /* try { // try from 00a10a64 to 00b10a6f has its CatchHandler @ 00a11054 */
    }
    else {
      if ((uVar7 & 0xff) != 0x3f) goto LAB_00a10af8;
      *pcVar3 = '/';
    }
    pcVar4 = pcVar3 + 1;
    if ((iVar9 == 0) && (pcVar4 = pcVar3 + 1, (uVar6 & 3) != 0)) {
      *(uint *)(param_1 + 0x44) = uVar6;
      return (ulong)(uint)(iVar8 + iVar5);
    }
  } while( true );
}

