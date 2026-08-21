
undefined8 FUN_00a3bb6c(long *param_1,long param_2,ulong param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = *param_1;
  uVar4 = param_1[0xd2];
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar9 = 0;
    uVar3 = 0;
    lVar10 = 0;
    do {
      cVar1 = *(char *)(param_2 + uVar9);
      if (cVar1 == '\n') {
        uVar6 = uVar4;
        if ((uVar4 != 1) && (uVar4 != 4)) goto LAB_00a3bc1c;
LAB_00a3bc6c:
        uVar6 = uVar6 + 1;
LAB_00a3bc70:
        param_1[0xd2] = uVar6;
        if (uVar4 < uVar6) goto LAB_00a3bcc8;
LAB_00a3bc7c:
        lVar7 = param_1[0xd3];
        lVar5 = -uVar4;
        do {
          lVar7 = lVar7 + -1;
                    /* try { // try from 00a3bc8c to 00b3bca3 has its CatchHandler @ 00a3be0c */
          if (lVar7 == -1) {
                    /* try { // try from 00a3bcb8 to 00b3bccb has its CatchHandler @ 00a3be08 */
            uVar2 = FUN_00a23808(param_1,1,&DAT_0189601b,-lVar5 - lVar10);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            lVar10 = 0;
            uVar3 = uVar9;
            break;
          }
          param_1[0xd3] = lVar7;
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0);
      }
      else if (cVar1 == '.') {
        if (uVar4 == 2) {
          uVar6 = 2;
          goto LAB_00a3bc6c;
        }
        uVar6 = 0;
                    /* try { // try from 00a3bc3c to 00b3bc8b has its CatchHandler @ 00a3bc3c
                       catch() { ... } // from try @ 00a3bc3c with catch @ 00a3bc3c
                       catch() { ... } // from try @ 00a3bd44 with catch @ 00a3bc3c */
        if (uVar4 == 3) {
          lVar10 = 1;
          goto LAB_00a3bc70;
        }
LAB_00a3bc54:
        param_1[0xd2] = uVar6;
        if (uVar4 == 0) goto LAB_00a3bcc8;
LAB_00a3bc5c:
        if (uVar6 <= uVar4) goto LAB_00a3bc7c;
      }
      else {
                    /* catch() { ... } // from try @ 00a3ba64 with catch @ 00a3bbcc */
        if (cVar1 == '\r') {
                    /* catch() { ... } // from try @ 00a3ba58 with catch @ 00a3bbd0 */
                    /* catch() { ... } // from try @ 00a3ba38 with catch @ 00a3bbd4 */
          if (uVar4 == 3) {
            uVar6 = 4;
            goto LAB_00a3bc70;
          }
          if (uVar4 != 0) {
            uVar6 = 1;
            goto LAB_00a3bc54;
          }
          param_1[0xd2] = 1;
                    /* catch() { ... } // from try @ 00a3ba70 with catch @ 00a3bbe4 */
          if ((uVar9 != 0) &&
             (uVar2 = FUN_00a23808(param_1,1,param_2 + uVar3,uVar9 - uVar3), uVar3 = uVar9,
             (int)uVar2 != 0)) {
            return uVar2;
          }
          goto LAB_00a3bcc8;
        }
LAB_00a3bc1c:
        uVar6 = 0;
        param_1[0xd2] = 0;
        if (uVar4 != 0) goto LAB_00a3bc5c;
      }
LAB_00a3bcc8:
      uVar4 = param_1[0xd2];
                    /* try { // try from 00a3bccc to 00b3bcdb has its CatchHandler @ 00a3bddc */
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_3);
  }
                    /* try { // try from 00a3bd14 to 00b3bd43 has its CatchHandler @ 00a3bde0 */
  if (uVar4 == 0) {
    if (param_3 != uVar3) {
      uVar2 = FUN_00a23808(param_1,1,param_2 + uVar3);
      return uVar2;
    }
  }
  else if (uVar4 == 5) {
                    /* try { // try from 00a3bcf4 to 00b3bcfb has its CatchHandler @ 00a3bdc0 */
    uVar2 = FUN_00a23808(param_1,1,&DAT_0189601b,2);
                    /* try { // try from 00a3bcfc to 00b3bd0b has its CatchHandler @ 00a3bdf0 */
    *(uint *)(lVar8 + 0x1e4) = *(uint *)(lVar8 + 0x1e4) & 0xfffffffe;
    param_1[0xd2] = 0;
    return uVar2;
                    /* try { // try from 00a3bd0c to 00b3bd13 has its CatchHandler @ 00a3bdd8 */
  }
                    /* try { // try from 00a3bd44 to 00b3be5b has its CatchHandler @ 00a3bc3c */
  return 0;
}

