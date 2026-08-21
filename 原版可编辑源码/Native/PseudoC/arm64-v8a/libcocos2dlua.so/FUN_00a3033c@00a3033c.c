
/* WARNING: Type propagation algorithm not settling */

void FUN_00a3033c(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  char *__s;
  byte *pbVar4;
  size_t sVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  undefined4 local_26c;
  undefined1 auStack_268 [256];
  undefined1 auStack_168 [264];
  
  lVar1 = tpidr_el0;
  lVar9 = *(long *)(lVar1 + 0x28);
  puVar11 = *(undefined8 **)(param_1 + 0x930);
joined_r0x00a30374:
  do {
    if (puVar11 == (undefined8 *)0x0) {
      uVar8 = 0;
      *(undefined8 *)(param_1 + 0x930) = 0;
LAB_00a30614:
      if (*(long *)(lVar1 + 0x28) == lVar9) {
                    /* try { // try from 00a30640 to 00b30673 has its CatchHandler @ 00a30740 */
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar8);
    }
    __s = (char *)*puVar11;
    if (__s != (char *)0x0) {
      if (*__s == '-') {
        iVar2 = sscanf(__s + 1,"%255[^:]:%d",auStack_168,&local_26c);
        if (iVar2 != 2) {
          FUN_00a38740(param_1,"Couldn\'t parse CURLOPT_RESOLVE removal entry \'%s\'!\n",*puVar11);
          puVar11 = (undefined8 *)puVar11[1];
          goto joined_r0x00a30374;
        }
        pbVar4 = (byte *)FUN_00a24258("%s:%d",auStack_168,local_26c);
        if (pbVar4 != (byte *)0x0) {
          uVar3 = (uint)*pbVar4;
          pbVar12 = pbVar4;
          if (*pbVar4 != 0) {
            do {
              if (uVar3 == 0x3a) break;
              iVar2 = tolower(uVar3);
              *pbVar12 = (byte)iVar2;
              uVar3 = (uint)pbVar12[1];
              pbVar12 = pbVar12 + 1;
            } while (uVar3 != 0);
          }
          sVar5 = strlen((char *)pbVar4);
          if (*(long *)(param_1 + 0x70) != 0) {
            FUN_00a4bf64(param_1,3,2);
          }
          FUN_00a4afac(*(undefined8 *)(param_1 + 0x50),pbVar4,sVar5 + 1);
          if (*(long *)(param_1 + 0x70) != 0) {
            FUN_00a4bfbc(param_1,3);
          }
                    /* try { // try from 00a30460 to 00b304ab has its CatchHandler @ 00a30460
                       catch() { ... } // from try @ 00a30460 with catch @ 00a30460
                       catch() { ... } // from try @ 00a304b0 with catch @ 00a30460 */
          (*(code *)PTR_free_01769a00)(pbVar4);
          goto LAB_00a30464;
        }
      }
      else {
        iVar2 = sscanf(__s,"%255[^:]:%d:%255s",auStack_168,&local_26c,auStack_268);
        if (iVar2 != 3) {
          FUN_00a38740(param_1,"Couldn\'t parse CURLOPT_RESOLVE entry \'%s\'!\n",*puVar11);
          puVar11 = (undefined8 *)puVar11[1];
          goto joined_r0x00a30374;
        }
        lVar6 = FUN_00a2c1e0(auStack_268,local_26c);
        if (lVar6 == 0) {
          FUN_00a38740(param_1,"Address in \'%s\' found illegal!\n",*puVar11);
          puVar11 = (undefined8 *)puVar11[1];
          goto joined_r0x00a30374;
        }
                    /* try { // try from 00a304ac to 00b304af has its CatchHandler @ 00a304e4 */
                    /* try { // try from 00a304b0 to 00b304f7 has its CatchHandler @ 00a30460 */
        pbVar4 = (byte *)FUN_00a24258("%s:%d",auStack_168,local_26c);
        if (pbVar4 != (byte *)0x0) {
          uVar3 = (uint)*pbVar4;
          pbVar12 = pbVar4;
          if (*pbVar4 != 0) {
            do {
              if (uVar3 == 0x3a) break;
              iVar2 = tolower(uVar3);
              *pbVar12 = (byte)iVar2;
              uVar3 = (uint)pbVar12[1];
              pbVar12 = pbVar12 + 1;
            } while (uVar3 != 0);
          }
                    /* catch() { ... } // from try @ 00a304ac with catch @ 00a304e4 */
          sVar5 = strlen((char *)pbVar4);
          if (*(long *)(param_1 + 0x70) != 0) {
                    /* try { // try from 00a304f8 to 00b3063f has its CatchHandler @ 00a304f8
                       catch() { ... } // from try @ 00a304f8 with catch @ 00a304f8
                       catch() { ... } // from try @ 00a306c0 with catch @ 00a304f8 */
            FUN_00a4bf64(param_1,3,2);
          }
          lVar7 = FUN_00a4b04c(*(undefined8 *)(param_1 + 0x50),pbVar4,sVar5 + 1);
          (*(code *)PTR_free_01769a00)(pbVar4);
          if (lVar7 == 0) {
            lVar7 = FUN_00a2fd04(param_1,lVar6,auStack_168,local_26c);
            if (lVar7 != 0) {
              *(undefined8 *)(lVar7 + 8) = 0;
              *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + -1;
            }
            lVar10 = *(long *)(param_1 + 0x70);
          }
          else {
            FUN_00a2bcc4(lVar6);
            lVar10 = *(long *)(param_1 + 0x70);
          }
          if (lVar10 != 0) {
            FUN_00a4bfbc(param_1,3);
          }
          if (lVar7 != 0) {
            FUN_00a38740(param_1,"Added %s:%d:%s to DNS cache\n",auStack_168,local_26c,auStack_268);
            puVar11 = (undefined8 *)puVar11[1];
            goto joined_r0x00a30374;
          }
        }
        FUN_00a2bcc4(lVar6);
      }
      uVar8 = 0x1b;
      goto LAB_00a30614;
    }
LAB_00a30464:
    puVar11 = (undefined8 *)puVar11[1];
  } while( true );
}

