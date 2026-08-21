
undefined8 FUN_00a20da8(long *param_1,uint param_2,byte *param_3)

{
  long lVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  long lVar8;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a20cb4 with catch @ 00a20dbc
                        */
                    /* try { // try from 00a20dc0 to 00b20ecf has its CatchHandler @ 00a20dc0
                       catch(type#1 @ 00000000) { ... } // from try @ 00a20dc0 with catch @ 00a20dc0
                       catch(type#1 @ 00000000) { ... } // from try @ 00a20ed8 with catch @ 00a20dc0
                       catch(type#1 @ 00000000) { ... } // from try @ 00a20fa4 with catch @ 00a20dc0
                        */
  lVar8 = *param_1;
  lVar1 = lVar8 + 0x8c18;
  puVar2 = (ulong *)(lVar8 + 0x8d98);
  if ((param_2 & 1) == 0) {
    lVar1 = lVar8 + 0x8bf8;
    puVar2 = (ulong *)(lVar8 + 0x8da0);
  }
  if (*param_3 == 0) {
    return 0;
  }
  do {
    iVar3 = FUN_00a33994(&DAT_018911cb,param_3,4);
    if (iVar3 == 0) {
                    /* try { // try from 00a20ed0 to 00b20ed7 has its CatchHandler @ 00a20ffc */
      iVar3 = FUN_00a33994("Digest",param_3,6);
                    /* try { // try from 00a20ed8 to 00b20f8b has its CatchHandler @ 00a20dc0 */
      if (iVar3 == 0) {
        iVar3 = FUN_00a33994("Basic",param_3,5);
        if (iVar3 != 0) {
          *puVar2 = *puVar2 | 1;
          *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 1;
          if (*(long *)(lVar1 + 8) == 1) {
            *(undefined8 *)(lVar1 + 0x10) = 0;
LAB_00a20eac:
            FUN_00a22d58(lVar8,"Authentication problem. Ignoring this.\n");
            *(undefined1 *)(lVar8 + 0x8c38) = 1;
          }
        }
      }
      else if ((*(byte *)(lVar1 + 0x10) >> 1 & 1) == 0) {
        uVar4 = FUN_00a43eb0();
        if ((uVar4 & 1) != 0) {
          *puVar2 = *puVar2 | 2;
          *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 2;
          iVar3 = FUN_00a3562c(param_1,param_2 & 1,param_3);
          if (iVar3 != 0) goto LAB_00a20eac;
        }
      }
      else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a20ed0 with catch @ 00a20ffc
                        */
        FUN_00a22d58(lVar8,"Ignoring duplicate digest auth header.\n");
                    /* try { // try from 00a21000 to 00b2110b has its CatchHandler @ 00a21000
                       catch(type#1 @ 00000000) { ... } // from try @ 00a21000 with catch @ 00a21000
                       catch(type#1 @ 00000000) { ... } // from try @ 00a21180 with catch @ 00a21000
                        */
      }
LAB_00a2102c:
      while( true ) {
        bVar7 = *param_3;
LAB_00a21030:
        if ((bVar7 == 0) || (bVar7 == 0x2c)) break;
        param_3 = param_3 + 1;
      }
    }
    else {
      if (((*(byte *)(lVar1 + 0x10) & 0x28) == 0) && (uVar4 = FUN_00a45580(), (uVar4 & 1) == 0))
      goto LAB_00a2102c;
      *puVar2 = *puVar2 | 8;
      *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 8;
      if ((*(long *)(lVar1 + 8) != 0x20) && (*(long *)(lVar1 + 8) != 8)) goto LAB_00a2102c;
      iVar3 = FUN_00a404a8(param_1,param_2 & 1,param_3);
      if (iVar3 != 0) goto LAB_00a20eac;
      *(undefined1 *)(lVar8 + 0x8c38) = 0;
      if (*(long *)(lVar1 + 8) != 0x20) goto LAB_00a2102c;
      *puVar2 = *puVar2 & 0xfffffffffffffff7;
      *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) & 0xfffffffffffffff7;
                    /* try { // try from 00a20f8c to 00b20fa3 has its CatchHandler @ 00a20fe0 */
      *puVar2 = *puVar2 | 0x20;
      *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 0x20;
      uVar6 = (uint)*param_3;
      if (*param_3 != 0) {
        do {
                    /* try { // try from 00a20fa4 to 00b20fff has its CatchHandler @ 00a20dc0 */
          iVar3 = isspace(uVar6);
          if (iVar3 == 0) break;
          param_3 = param_3 + 1;
          uVar6 = (uint)*param_3;
        } while (uVar6 != 0);
      }
      iVar3 = FUN_00a33994(&DAT_018911cb,param_3,4);
      if (iVar3 == 0) goto LAB_00a2102c;
      param_3 = param_3 + 4;
      uVar6 = (uint)*param_3;
      if (*param_3 != 0) {
        while (iVar3 = isspace(uVar6), iVar3 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a20f8c with catch @ 00a20fe0
                        */
          param_3 = param_3 + 1;
          uVar6 = (uint)*param_3;
          bVar7 = 0;
          if (uVar6 == 0) goto LAB_00a21030;
        }
        lVar5 = (*(code *)PTR_strdup_01d1b758)(param_3);
        param_1[0x9f] = lVar5;
        if (lVar5 == 0) {
          return 0x1b;
        }
        goto LAB_00a2102c;
      }
      bVar7 = 0;
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

