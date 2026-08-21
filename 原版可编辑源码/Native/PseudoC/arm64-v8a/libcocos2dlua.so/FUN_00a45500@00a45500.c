
undefined8
FUN_00a45500(undefined8 param_1,byte *param_2,size_t param_3,undefined8 *param_4,long *param_5,
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
  
                    /* try { // try from 00a45534 to 00b45597 has its CatchHandler @ 00a45688 */
  if (param_3 == 0) {
    param_3 = strlen((char *)param_2);
  }
  uVar8 = param_3 + 1;
  puVar4 = (undefined1 *)(*(code *)PTR_malloc_017699f8)(uVar8);
  if (puVar4 == (undefined1 *)0x0) {
    uVar5 = 0x1b;
  }
  else {
    if (param_3 == 0) {
                    /* try { // try from 00a4560c to 00b4564f has its CatchHandler @ 00a45478 */
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
                    /* try { // try from 00a45650 to 00b45657 has its CatchHandler @ 00a45688 */
              iVar3 = isxdigit((uint)bVar1);
              if (iVar3 != 0) {
                    /* catch() { ... } // from try @ 00a455e8 with catch @ 00a45658
                       try { // try from 00a45658 to 00b456a3 has its CatchHandler @ 00a45478 */
                local_62 = 0;
                local_64 = bVar2;
                local_63 = bVar1;
                strtoul((char *)&local_64,&pcStack_70,0x10);
                bVar2 = FUN_00a2c6c0();
                uVar7 = uVar8 - 3;
                param_2 = param_2 + 2;
                goto LAB_00a45688;
              }
            }
            bVar2 = 0x25;
          }
LAB_00a45688:
                    /* catch() { ... } // from try @ 00a454d0 with catch @ 00a45688
                       catch() { ... } // from try @ 00a45534 with catch @ 00a45688
                       catch() { ... } // from try @ 00a45600 with catch @ 00a45688
                       catch() { ... } // from try @ 00a45650 with catch @ 00a45688 */
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
LAB_00a455d0:
            param_2 = pbVar10;
            if (bVar2 < 0x20) {
              (*(code *)PTR_free_01769a00)(puVar4);
              return 3;
            }
          }
          else {
            bVar2 = param_2[1];
            iVar3 = isxdigit((uint)bVar2);
            if (iVar3 != 0) {
                    /* try { // try from 00a45598 to 00b455e7 has its CatchHandler @ 00a45478 */
              pbVar10 = param_2 + 2;
              bVar1 = *pbVar10;
              iVar3 = isxdigit((uint)bVar1);
              if (iVar3 != 0) {
                local_62 = 0;
                local_64 = bVar2;
                local_63 = bVar1;
                strtoul((char *)&local_64,&pcStack_70,0x10);
                bVar2 = FUN_00a2c6c0();
                uVar7 = uVar8 - 3;
                goto LAB_00a455d0;
              }
            }
            bVar2 = 0x25;
          }
                    /* try { // try from 00a455e8 to 00b455eb has its CatchHandler @ 00a45658 */
          lVar6 = lVar9 + 1;
          puVar4[lVar9] = bVar2;
          param_2 = param_2 + 1;
          param_3 = uVar7 - 1;
          uVar8 = uVar7;
          lVar9 = lVar6;
        } while (uVar7 - 1 != 0);
      }
                    /* try { // try from 00a456a4 to 00b45737 has its CatchHandler @ 00a456a4
                       catch() { ... } // from try @ 00a456a4 with catch @ 00a456a4
                       catch() { ... } // from try @ 00a45740 with catch @ 00a456a4 */
      puVar4[lVar6] = 0;
    }
    if (param_5 != (long *)0x0) {
      *param_5 = lVar6;
    }
    uVar5 = 0;
    *param_4 = puVar4;
  }
  return uVar5;
}

