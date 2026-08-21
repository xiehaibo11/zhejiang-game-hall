
undefined8 FUN_00a36790(long *param_1,uint param_2,byte *param_3)

{
  long lVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  long lVar8;
  
                    /* try { // try from 00a36798 to 00b3683f has its CatchHandler @ 00a3686c */
  lVar8 = *param_1;
  lVar1 = lVar8 + 0x8c18;
  puVar2 = (ulong *)(lVar8 + 0x8d98);
  if ((param_2 & 1) == 0) {
    lVar1 = lVar8 + 0x8bf8;
    puVar2 = (ulong *)(lVar8 + 0x8da0);
  }
  if (*param_3 == 0) {
                    /* catch() { ... } // from try @ 00a36978 with catch @ 00a36a34
                       catch() { ... } // from try @ 00a369e0 with catch @ 00a36a34 */
    return 0;
  }
  do {
    iVar3 = FUN_00a4a37c(&DAT_013c3aeb,param_3,4);
                    /* try { // try from 00a36840 to 00b368a7 has its CatchHandler @ 00a365d0 */
    if (iVar3 == 0) {
      iVar3 = FUN_00a4a37c("Digest",param_3,6);
      if (iVar3 == 0) {
        iVar3 = FUN_00a4a37c("Basic",param_3,5);
        if (iVar3 != 0) {
          *puVar2 = *puVar2 | 1;
                    /* try { // try from 00a36928 to 00b36977 has its CatchHandler @ 00a36928
                       catch() { ... } // from try @ 00a36928 with catch @ 00a36928
                       catch() { ... } // from try @ 00a369b0 with catch @ 00a36928
                       catch() { ... } // from try @ 00a369f4 with catch @ 00a36928 */
          *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 1;
          if (*(long *)(lVar1 + 8) == 1) {
            *(undefined8 *)(lVar1 + 0x10) = 0;
LAB_00a36894:
            FUN_00a38740(lVar8,"Authentication problem. Ignoring this.\n");
            *(undefined1 *)(lVar8 + 0x8c38) = 1;
          }
        }
      }
      else if ((*(byte *)(lVar1 + 0x10) >> 1 & 1) == 0) {
        uVar4 = FUN_00a5a898();
        if ((uVar4 & 1) != 0) {
          *puVar2 = *puVar2 | 2;
          *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 2;
          iVar3 = FUN_00a4c014(param_1,param_2 & 1,param_3);
          if (iVar3 != 0) goto LAB_00a36894;
        }
      }
      else {
                    /* try { // try from 00a369e0 to 00b369f3 has its CatchHandler @ 00a36a34 */
        FUN_00a38740(lVar8,"Ignoring duplicate digest auth header.\n");
      }
LAB_00a36a14:
      while( true ) {
        bVar7 = *param_3;
LAB_00a36a18:
        if ((bVar7 == 0) || (bVar7 == 0x2c)) break;
        param_3 = param_3 + 1;
      }
    }
    else {
                    /* catch() { ... } // from try @ 00a3669c with catch @ 00a36854 */
      if (((*(byte *)(lVar1 + 0x10) & 0x28) == 0) && (uVar4 = FUN_00a5bf68(), (uVar4 & 1) == 0))
      goto LAB_00a36a14;
                    /* catch() { ... } // from try @ 00a3668c with catch @ 00a36858 */
                    /* catch() { ... } // from try @ 00a36628 with catch @ 00a3685c
                       catch() { ... } // from try @ 00a366c4 with catch @ 00a3685c
                       catch() { ... } // from try @ 00a36770 with catch @ 00a3685c */
      *puVar2 = *puVar2 | 8;
                    /* catch() { ... } // from try @ 00a366e0 with catch @ 00a3686c
                       catch() { ... } // from try @ 00a36798 with catch @ 00a3686c */
      *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 8;
      if ((*(long *)(lVar1 + 8) != 0x20) && (*(long *)(lVar1 + 8) != 8)) goto LAB_00a36a14;
      iVar3 = FUN_00a56e90(param_1,param_2 & 1,param_3);
      if (iVar3 != 0) goto LAB_00a36894;
      *(undefined1 *)(lVar8 + 0x8c38) = 0;
      if (*(long *)(lVar1 + 8) != 0x20) goto LAB_00a36a14;
      *puVar2 = *puVar2 & 0xfffffffffffffff7;
      *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) & 0xfffffffffffffff7;
      *puVar2 = *puVar2 | 0x20;
                    /* try { // try from 00a36978 to 00b369af has its CatchHandler @ 00a36a34 */
      *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 0x20;
      uVar6 = (uint)*param_3;
      if (*param_3 != 0) {
        do {
          iVar3 = isspace(uVar6);
          if (iVar3 == 0) break;
          param_3 = param_3 + 1;
          uVar6 = (uint)*param_3;
        } while (uVar6 != 0);
      }
      iVar3 = FUN_00a4a37c(&DAT_013c3aeb,param_3,4);
                    /* try { // try from 00a369b0 to 00b369df has its CatchHandler @ 00a36928 */
      if (iVar3 == 0) goto LAB_00a36a14;
      param_3 = param_3 + 4;
      uVar6 = (uint)*param_3;
      if (*param_3 != 0) {
        while (iVar3 = isspace(uVar6), iVar3 != 0) {
          param_3 = param_3 + 1;
          uVar6 = (uint)*param_3;
          bVar7 = 0;
          if (uVar6 == 0) goto LAB_00a36a18;
        }
        lVar5 = (*(code *)PTR_strdup_01769a10)(param_3);
        param_1[0x9f] = lVar5;
        if (lVar5 == 0) {
          return 0x1b;
        }
        goto LAB_00a36a14;
      }
      bVar7 = 0;
                    /* try { // try from 00a369f4 to 00b36a4f has its CatchHandler @ 00a36928 */
    }
    if (bVar7 == 0x2c) {
      param_3 = param_3 + 1;
    }
    bVar7 = *param_3;
    while( true ) {
      if (bVar7 == 0) {
        return 0;
      }
      iVar3 = isspace((uint)bVar7);
      if (iVar3 == 0) break;
      param_3 = param_3 + 1;
      bVar7 = *param_3;
    }
  } while( true );
}

