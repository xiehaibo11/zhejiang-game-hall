
char * png_format_number(char *param_1,long param_2,int param_3,ulong param_4)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  pcVar2 = (char *)(param_2 + -1);
  *pcVar2 = '\0';
  if (pcVar2 <= param_1) {
                    /* try { // try from 010c1ee4 to 011c1f37 has its CatchHandler @ 010c1e80 */
    return pcVar2;
  }
  bVar1 = false;
  iVar4 = 0;
  iVar5 = 1;
  pcVar3 = pcVar2;
  uVar6 = param_4;
LAB_010c1de8:
  if (param_3 != 5) {
    if (param_3 == 2) {
      iVar4 = 0;
      iVar5 = 1;
      while ((param_4 != 0 || (iVar4 < iVar5))) {
                    /* catch() { ... } // from try @ 010c1ed4 with catch @ 010c1f1c */
        iVar4 = iVar4 + 1;
        pcVar2 = pcVar2 + -1;
        *pcVar2 = "0123456789ABCDEF"[param_4 % 10];
        iVar5 = 2;
        param_4 = param_4 / 10;
        if (pcVar2 <= param_1) {
          return pcVar2;
        }
      }
      return pcVar2;
    }
    do {
      if ((uVar6 == 0) && (iVar5 <= iVar4)) {
        return pcVar3;
      }
      if (param_3 == 1) {
        uVar7 = uVar6 / 10;
        pcVar3[-1] = "0123456789ABCDEF"[uVar6 % 10];
      }
      else {
        if (param_3 != 3) {
          if (param_3 != 4) goto LAB_010c1e94;
          iVar5 = 2;
        }
        uVar7 = uVar6 >> 4;
        pcVar3[-1] = "0123456789ABCDEF"[uVar6 & 0xf];
      }
      pcVar3 = pcVar3 + -1;
      iVar4 = iVar4 + 1;
      uVar6 = uVar7;
      if (pcVar3 <= param_1) {
        return pcVar3;
      }
    } while( true );
  }
  if ((uVar6 == 0) && (iVar5 <= iVar4)) {
    return pcVar3;
  }
  uVar7 = uVar6 / 10;
  if ((uVar6 % 10 != 0) || (bVar1)) {
                    /* try { // try from 010c1e80 to 011c1ed3 has its CatchHandler @ 010c1e80
                       catch() { ... } // from try @ 010c1e80 with catch @ 010c1e80
                       catch() { ... } // from try @ 010c1ee4 with catch @ 010c1e80 */
    pcVar3 = pcVar3 + -1;
    *pcVar3 = "0123456789ABCDEF"[uVar6 % 10];
    bVar1 = true;
  }
  iVar5 = 5;
  goto LAB_010c1e98;
LAB_010c1e94:
  uVar7 = 0;
LAB_010c1e98:
  iVar4 = iVar4 + 1;
  if (((param_3 == 5) && (iVar4 == 5)) && (param_1 < pcVar3)) {
    if (bVar1) {
      pcVar3 = pcVar3 + -1;
      *pcVar3 = '.';
    }
    else if (uVar7 == 0) {
      bVar1 = false;
      pcVar3 = pcVar3 + -1;
      *pcVar3 = '0';
    }
    else {
      bVar1 = false;
    }
                    /* try { // try from 010c1ed4 to 011c1ee3 has its CatchHandler @ 010c1f1c */
    iVar4 = 5;
  }
  uVar6 = uVar7;
  if (pcVar3 <= param_1) {
    return pcVar3;
  }
  goto LAB_010c1de8;
}

