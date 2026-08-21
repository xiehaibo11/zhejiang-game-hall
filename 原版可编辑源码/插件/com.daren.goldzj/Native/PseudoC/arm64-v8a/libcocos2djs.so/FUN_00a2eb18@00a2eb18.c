
undefined8
FUN_00a2eb18(undefined8 param_1,byte *param_2,size_t param_3,undefined8 *param_4,long *param_5,
            uint param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  char *pcStack_70;
  byte local_64;
  byte local_63;
  undefined1 local_62;
  
  if (param_3 == 0) {
    param_3 = strlen((char *)param_2);
  }
  uVar8 = param_3 + 1;
  puVar4 = (undefined1 *)(*(code *)PTR_malloc_01d1b740)(uVar8);
  if (puVar4 == (undefined1 *)0x0) {
                    /* catch() { ... } // from try @ 00a2eab8 with catch @ 00a2ec1c */
    uVar5 = 0x1b;
                    /* catch() { ... } // from try @ 00a2ea98 with catch @ 00a2ec20 */
  }
  else {
    if (param_3 == 0) {
      lVar6 = 0;
      *puVar4 = 0;
    }
    else {
      if ((param_6 & 1) == 0) {
        lVar9 = 0;
        do {
          uVar7 = param_3;
          bVar2 = *param_2;
          if ((2 < uVar7) && (bVar2 == 0x25)) {
            bVar2 = param_2[1];
            iVar3 = isxdigit((uint)bVar2);
            if (iVar3 != 0) {
              bVar1 = param_2[2];
              iVar3 = isxdigit((uint)bVar1);
              if (iVar3 != 0) {
                local_62 = 0;
                local_64 = bVar2;
                local_63 = bVar1;
                    /* try { // try from 00a2ec88 to 00b2ecdb has its CatchHandler @ 00a2ec88
                       catch() { ... } // from try @ 00a2ec88 with catch @ 00a2ec88
                       catch() { ... } // from try @ 00a2ede4 with catch @ 00a2ec88 */
                strtoul((char *)&local_64,&pcStack_70,0x10);
                bVar2 = FUN_00a16cd8();
                uVar7 = uVar8 - 3;
                param_2 = param_2 + 2;
                goto LAB_00a2eca0;
              }
            }
            bVar2 = 0x25;
          }
LAB_00a2eca0:
          lVar6 = lVar9 + 1;
          puVar4[lVar9] = bVar2;
          param_2 = param_2 + 1;
          param_3 = uVar7 - 1;
          uVar8 = uVar7;
          lVar9 = lVar6;
        } while (uVar7 - 1 != 0);
      }
      else {
        lVar9 = 0;
        do {
          uVar7 = param_3;
          bVar2 = *param_2;
          pbVar10 = param_2;
          if ((uVar7 < 3) || (bVar2 != 0x25)) {
LAB_00a2ebe8:
            param_2 = pbVar10;
            if (bVar2 < 0x20) {
                    /* try { // try from 00a2ecfc to 00b2ed07 has its CatchHandler @ 00a2ee5c */
              (*(code *)PTR_free_01d1b748)(puVar4);
              return 3;
                    /* try { // try from 00a2ed08 to 00b2ed13 has its CatchHandler @ 00a2ee58 */
            }
          }
          else {
            bVar2 = param_2[1];
                    /* try { // try from 00a2eba4 to 00b2ec87 has its CatchHandler @ 00a2ea44 */
            iVar3 = isxdigit((uint)bVar2);
            if (iVar3 != 0) {
              pbVar10 = param_2 + 2;
              bVar1 = *pbVar10;
              iVar3 = isxdigit((uint)bVar1);
              if (iVar3 != 0) {
                local_62 = 0;
                local_64 = bVar2;
                local_63 = bVar1;
                strtoul((char *)&local_64,&pcStack_70,0x10);
                bVar2 = FUN_00a16cd8();
                uVar7 = uVar8 - 3;
                goto LAB_00a2ebe8;
              }
            }
            bVar2 = 0x25;
          }
          lVar6 = lVar9 + 1;
          puVar4[lVar9] = bVar2;
          param_2 = param_2 + 1;
          param_3 = uVar7 - 1;
          uVar8 = uVar7;
          lVar9 = lVar6;
        } while (uVar7 - 1 != 0);
      }
      puVar4[lVar6] = 0;
    }
    if (param_5 != (long *)0x0) {
      *param_5 = lVar6;
    }
    uVar5 = 0;
    *param_4 = puVar4;
  }
                    /* try { // try from 00a2ecdc to 00b2ecf3 has its CatchHandler @ 00a2ee60 */
  return uVar5;
}

