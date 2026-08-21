
uint FUN_010ba818(char *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  
  cVar1 = *param_1;
                    /* catch() { ... } // from try @ 010ba650 with catch @ 010ba824 */
  pcVar6 = param_1;
  if (cVar1 != 'u') goto LAB_010baabc;
  bVar2 = param_1[1];
                    /* catch() { ... } // from try @ 010ba704 with catch @ 010ba838
                       catch() { ... } // from try @ 010ba7a0 with catch @ 010ba838 */
  if ((bVar2 == 0x6e) && (param_1[2] == 'i')) {
                    /* catch() { ... } // from try @ 010ba728 with catch @ 010ba848 */
    bVar3 = param_1[3];
    uVar5 = bVar3 - 0x30;
    if (9 < uVar5) {
      uVar5 = 0x10;
      if (bVar3 - 0x41 < 6) {
        uVar5 = bVar3 - 0x37;
      }
      if (0xf < uVar5) goto LAB_010ba934;
    }
    bVar3 = param_1[4];
    uVar4 = bVar3 - 0x30;
    if (uVar4 < 10) {
                    /* try { // try from 010ba8a8 to 011ba8e7 has its CatchHandler @ 010ba8a8
                       catch() { ... } // from try @ 010ba8a8 with catch @ 010ba8a8
                       catch() { ... } // from try @ 010ba900 with catch @ 010ba8a8 */
      iVar7 = uVar4 + uVar5 * 0x10;
    }
    else {
      uVar4 = 0x10;
      if (bVar3 - 0x41 < 6) {
        uVar4 = bVar3 - 0x37;
      }
      if (0xf < uVar4) goto LAB_010ba934;
      iVar7 = uVar4 + uVar5 * 0x10;
    }
    bVar3 = param_1[5];
    uVar5 = bVar3 - 0x30;
    if (uVar5 < 10) {
      iVar7 = uVar5 + iVar7 * 0x10;
    }
    else {
      uVar5 = 0x10;
      if (bVar3 - 0x41 < 6) {
        uVar5 = bVar3 - 0x37;
      }
      if (0xf < uVar5) goto LAB_010ba934;
      iVar7 = uVar5 + iVar7 * 0x10;
    }
    bVar3 = param_1[6];
                    /* try { // try from 010ba8e8 to 011ba8ff has its CatchHandler @ 010ba938 */
    uVar5 = bVar3 - 0x30;
    if (uVar5 < 10) {
      uVar5 = uVar5 + iVar7 * 0x10;
      cVar1 = param_1[7];
    }
    else {
                    /* try { // try from 010ba900 to 011ba953 has its CatchHandler @ 010ba8a8 */
      uVar5 = 0x10;
      if (bVar3 - 0x41 < 6) {
        uVar5 = bVar3 - 0x37;
      }
      if (0xf < uVar5) goto LAB_010ba934;
      uVar5 = uVar5 + iVar7 * 0x10;
      cVar1 = param_1[7];
    }
    if (cVar1 == '\0') {
      return uVar5;
    }
    if (cVar1 != '.') goto LAB_010ba934;
LAB_010baab0:
    uVar5 = uVar5 | 0x80000000;
  }
  else {
LAB_010ba934:
    uVar5 = bVar2 - 0x30;
                    /* catch() { ... } // from try @ 010ba8e8 with catch @ 010ba938 */
    if (uVar5 < 10) {
LAB_010ba960:
      bVar2 = param_1[2];
      uVar4 = bVar2 - 0x30;
      if (uVar4 < 10) {
                    /* try { // try from 010ba998 to 011ba9af has its CatchHandler @ 010bab6c */
        iVar7 = uVar4 + uVar5 * 0x10;
      }
      else {
        uVar4 = 0x10;
        if (bVar2 - 0x41 < 6) {
          uVar4 = bVar2 - 0x37;
        }
        if (0xf < uVar4) goto LAB_010baab8;
        iVar7 = uVar4 + uVar5 * 0x10;
      }
      bVar2 = param_1[3];
      uVar5 = bVar2 - 0x30;
      if (uVar5 < 10) {
        iVar7 = uVar5 + iVar7 * 0x10;
      }
      else {
        uVar5 = 0x10;
        if (bVar2 - 0x41 < 6) {
          uVar5 = bVar2 - 0x37;
        }
                    /* try { // try from 010ba9c8 to 011ba9db has its CatchHandler @ 010bab4c */
        if (0xf < uVar5) goto LAB_010baab8;
        iVar7 = uVar5 + iVar7 * 0x10;
      }
      bVar2 = param_1[4];
      uVar5 = bVar2 - 0x30;
      if (uVar5 < 10) {
        uVar5 = uVar5 + iVar7 * 0x10;
      }
      else {
        uVar5 = 0x10;
        if (bVar2 - 0x41 < 6) {
          uVar5 = bVar2 - 0x37;
        }
        if (0xf < uVar5) goto LAB_010baab8;
        uVar5 = uVar5 + iVar7 * 0x10;
      }
      pbVar8 = (byte *)(param_1 + 5);
      bVar2 = *pbVar8;
      uVar4 = bVar2 - 0x30;
      if (uVar4 < 10) {
                    /* try { // try from 010baa4c to 011baa53 has its CatchHandler @ 010bab80 */
        uVar5 = uVar4 + uVar5 * 0x10;
LAB_010baa50:
        pbVar8 = (byte *)(param_1 + 6);
        bVar2 = *pbVar8;
        uVar4 = bVar2 - 0x30;
        if (uVar4 < 10) {
          uVar5 = uVar4 + uVar5 * 0x10;
          pbVar8 = (byte *)(param_1 + 7);
          goto LAB_010baa9c;
        }
                    /* try { // try from 010baa70 to 011baab3 has its CatchHandler @ 010bab90 */
        uVar4 = 0x10;
        if (bVar2 - 0x41 < 6) {
          uVar4 = bVar2 - 0x37;
        }
        if (0xf < uVar4) goto LAB_010baa9c;
        uVar5 = uVar4 + uVar5 * 0x10;
        bVar2 = param_1[7];
      }
      else {
        uVar4 = 0x10;
        if (bVar2 - 0x41 < 6) {
          uVar4 = bVar2 - 0x37;
        }
        if (uVar4 < 0x10) {
          uVar5 = uVar4 + uVar5 * 0x10;
          goto LAB_010baa50;
        }
LAB_010baa9c:
        bVar2 = *pbVar8;
      }
      if (bVar2 == 0) {
        return uVar5;
      }
      if (bVar2 == 0x2e) goto LAB_010baab0;
    }
    else {
      uVar5 = 0x10;
      if (bVar2 - 0x41 < 6) {
        uVar5 = bVar2 - 0x37;
      }
                    /* try { // try from 010ba954 to 011ba997 has its CatchHandler @ 010ba954
                       catch() { ... } // from try @ 010ba954 with catch @ 010ba954
                       catch() { ... } // from try @ 010baaf8 with catch @ 010ba954 */
      if (uVar5 < 0x10) goto LAB_010ba960;
    }
LAB_010baab8:
    while( true ) {
      cVar1 = *pcVar6;
LAB_010baabc:
      if (cVar1 == '\0') goto LAB_010baae8;
      if ((cVar1 == '.') && (param_1 < pcVar6)) break;
      pcVar6 = pcVar6 + 1;
    }
    if (pcVar6 == (char *)0x0) {
LAB_010baae8:
                    /* try { // try from 010baae8 to 011baaf7 has its CatchHandler @ 010bab80 */
      uVar5 = FUN_010bb3bc();
    }
    else {
      uVar5 = FUN_010bb3bc();
      uVar5 = uVar5 | 0x80000000;
    }
  }
                    /* try { // try from 010baaf8 to 011babef has its CatchHandler @ 010ba954 */
  return uVar5;
}

