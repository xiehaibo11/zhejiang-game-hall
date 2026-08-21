
undefined8 FUN_00a21728(long *param_1,ulong param_2,undefined8 param_3)

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
  
  lVar9 = *param_1;
  if ((param_2 & 1) == 0) {
                    /* catch() { ... } // from try @ 00a21758 with catch @ 00a21774 */
    if (*(char *)((long)param_1 + 0x3be) == '\0') {
      local_70[0] = *(long *)(lVar9 + 0x3b8);
      goto LAB_00a217ac;
    }
    local_70[0] = *(long *)(lVar9 + 0x3b8);
    if ((*(char *)((long)param_1 + 0x3c9) != '\x01') && (*(char *)(lVar9 + 0x3d0) != '\0')) {
      lVar6 = 2;
      local_70[1] = *(undefined8 *)(lVar9 + 0x3c0);
      goto LAB_00a217b4;
    }
  }
  else {
                    /* try { // try from 00a21758 to 00b21767 has its CatchHandler @ 00a21774 */
    plVar1 = (long *)(lVar9 + 0x3c0);
                    /* try { // try from 00a21768 to 00b2178f has its CatchHandler @ 00a21724 */
    if (*(char *)(lVar9 + 0x3d0) == '\0') {
      plVar1 = (long *)(lVar9 + 0x3b8);
    }
    local_70[0] = *plVar1;
LAB_00a217ac:
  }
  lVar6 = 1;
LAB_00a217b4:
  lVar7 = 0;
  do {
    for (puVar8 = (undefined8 *)local_70[lVar7]; puVar8 != (undefined8 *)0x0;
        puVar8 = (undefined8 *)puVar8[1]) {
      __s = (char *)*puVar8;
      pbVar3 = (byte *)strchr(__s,0x3a);
      if (pbVar3 == (byte *)0x0) {
        pbVar3 = (byte *)strchr(__s,0x3b);
        if (pbVar3 != (byte *)0x0) {
          do {
            uVar5 = (uint)pbVar3[1];
            if (uVar5 == 0) {
              if (*pbVar3 == 0x3b) {
                *pbVar3 = 0x3a;
                goto LAB_00a218ec;
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
          if (*pbVar3 == 0) goto LAB_00a21904;
          iVar2 = isspace((uint)*pbVar3);
        } while (iVar2 != 0);
        if ((((((param_1[0x8a] == 0) || (iVar2 = FUN_00a33994("Host:",__s,5), iVar2 == 0)) &&
              ((*(int *)(lVar9 + 0x430) != 3 ||
               (iVar2 = FUN_00a33994("Content-Type:",*puVar8,0xd), iVar2 == 0)))) &&
             ((*(char *)((long)param_1 + 0x3ca) == '\0' ||
              (iVar2 = FUN_00a33994("Content-Length",*puVar8,0xe), iVar2 == 0)))) &&
            ((param_1[0x8d] == 0 || (iVar2 = FUN_00a33994("Connection",*puVar8,10), iVar2 == 0))))
           && (((int)param_1[0x47] != 0x14 ||
               (iVar2 = FUN_00a33994("Transfer-Encoding:",*puVar8,0x12), iVar2 == 0)))) {
LAB_00a218ec:
          uVar4 = FUN_00a21380(param_3,"%s\r\n",*puVar8);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
        }
      }
LAB_00a21904:
    }
    lVar7 = lVar7 + 1;
    if (lVar6 <= lVar7) {
                    /* try { // try from 00a21924 to 00b21927 has its CatchHandler @ 00a2194c */
      return 0;
    }
  } while( true );
}

