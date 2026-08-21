
undefined8 FUN_00a37110(long *param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  char *__s;
  long lVar9;
  long local_70 [2];
  
                    /* try { // try from 00a37130 to 00b37163 has its CatchHandler @ 00a37328 */
  lVar9 = *param_1;
  if ((param_2 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x3be) == '\0') {
      local_70[0] = *(long *)(lVar9 + 0x3b8);
      goto LAB_00a37194;
    }
                    /* try { // try from 00a3716c to 00b3717b has its CatchHandler @ 00a37324 */
    local_70[0] = *(long *)(lVar9 + 0x3b8);
                    /* try { // try from 00a3717c to 00b3718f has its CatchHandler @ 00a37320 */
    if ((*(char *)((long)param_1 + 0x3c9) != '\x01') && (*(char *)(lVar9 + 0x3d0) != '\0')) {
      lVar6 = 2;
      local_70[1] = *(undefined8 *)(lVar9 + 0x3c0);
      goto LAB_00a3719c;
    }
  }
  else {
    plVar1 = (long *)(lVar9 + 0x3c0);
    if (*(char *)(lVar9 + 0x3d0) == '\0') {
      plVar1 = (long *)(lVar9 + 0x3b8);
    }
    local_70[0] = *plVar1;
LAB_00a37194:
  }
  lVar6 = 1;
LAB_00a3719c:
                    /* try { // try from 00a371a4 to 00b371af has its CatchHandler @ 00a37328 */
  lVar7 = 0;
  do {
    for (puVar8 = (undefined8 *)local_70[lVar7]; puVar8 != (undefined8 *)0x0;
        puVar8 = (undefined8 *)puVar8[1]) {
      __s = (char *)*puVar8;
                    /* try { // try from 00a371c8 to 00b37247 has its CatchHandler @ 00a37338 */
      pbVar3 = (byte *)strchr(__s,0x3a);
      if (pbVar3 == (byte *)0x0) {
        pbVar3 = (byte *)strchr(__s,0x3b);
        if (pbVar3 != (byte *)0x0) {
          do {
            uVar5 = (uint)pbVar3[1];
            if (uVar5 == 0) {
                    /* try { // try from 00a372c4 to 00b372d7 has its CatchHandler @ 00a37328 */
              if (*pbVar3 == 0x3b) {
                *pbVar3 = 0x3a;
                goto LAB_00a372d4;
              }
              break;
            }
            iVar2 = isspace(uVar5);
            pbVar3 = pbVar3 + 1;
          } while (iVar2 != 0);
        }
      }
      else {
        do {
          pbVar3 = pbVar3 + 1;
          if (*pbVar3 == 0) goto LAB_00a372ec;
          iVar2 = isspace((uint)*pbVar3);
        } while (iVar2 != 0);
                    /* try { // try from 00a37248 to 00b372c3 has its CatchHandler @ 00a370d4 */
        if ((((((param_1[0x8a] == 0) || (iVar2 = FUN_00a4a37c("Host:",__s,5), iVar2 == 0)) &&
              ((*(int *)(lVar9 + 0x430) != 3 ||
               (iVar2 = FUN_00a4a37c("Content-Type:",*puVar8,0xd), iVar2 == 0)))) &&
             ((*(char *)((long)param_1 + 0x3ca) == '\0' ||
              (iVar2 = FUN_00a4a37c("Content-Length",*puVar8,0xe), iVar2 == 0)))) &&
            ((param_1[0x8d] == 0 || (iVar2 = FUN_00a4a37c("Connection",*puVar8,10), iVar2 == 0))))
           && (((int)param_1[0x47] != 0x14 ||
               (iVar2 = FUN_00a4a37c("Transfer-Encoding:",*puVar8,0x12), iVar2 == 0)))) {
LAB_00a372d4:
          uVar4 = FUN_00a36d68(param_3,"%s\r\n",*puVar8);
                    /* try { // try from 00a372e8 to 00b372fb has its CatchHandler @ 00a37338 */
          if ((int)uVar4 != 0) {
            return uVar4;
          }
        }
      }
LAB_00a372ec:
    }
    lVar7 = lVar7 + 1;
                    /* try { // try from 00a372fc to 00b3738b has its CatchHandler @ 00a370d4 */
    if (lVar6 <= lVar7) {
                    /* catch() { ... } // from try @ 00a3717c with catch @ 00a37320 */
      return 0;
    }
  } while( true );
}

