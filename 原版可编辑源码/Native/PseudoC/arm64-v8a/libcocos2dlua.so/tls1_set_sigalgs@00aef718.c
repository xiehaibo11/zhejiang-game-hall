
undefined8 tls1_set_sigalgs(long param_1,long param_2,ulong param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  void *ptr;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  int iVar8;
  long lVar9;
  
                    /* try { // try from 00aef734 to 00bef73f has its CatchHandler @ 00aef80c */
  if ((param_3 & 1) == 0) {
                    /* try { // try from 00aef740 to 00bef75f has its CatchHandler @ 00aef7f4 */
    ptr = CRYPTO_malloc((int)param_3,"ssl/t1_lib.c",0xebd);
    uVar5 = 0;
    if (ptr != (void *)0x0) {
      if (param_3 != 0) {
        uVar6 = 0;
        do {
                    /* try { // try from 00aef77c to 00bef78f has its CatchHandler @ 00aef80c */
          piVar1 = (int *)(param_2 + uVar6 * 4);
          iVar3 = *piVar1;
          iVar8 = -1;
          if (0x328 < iVar3) {
                    /* try { // try from 00aef7b0 to 00bef82b has its CatchHandler @ 00aef68c */
            if (iVar3 == 0x329) {
              lVar9 = 6;
            }
            else if (iVar3 == 0x3d6) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aef6f4 with catch @ 00aef808
                        */
              lVar9 = 7;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aef734 with catch @ 00aef80c
                       catch(type#1 @ 00000000) { ... } // from try @ 00aef77c with catch @ 00aef80c
                        */
            }
            else {
              if (iVar3 != 0x3d7) goto LAB_00aef81c;
              lVar9 = 8;
            }
            goto LAB_00aef814;
          }
          switch(iVar3) {
          case 0x2a0:
            lVar9 = 3;
                    /* try { // try from 00aef7ac to 00bef7af has its CatchHandler @ 00aef7e8 */
            break;
          case 0x2a1:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aef7ac with catch @ 00aef7e8
                        */
            lVar9 = 4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aef6dc with catch @ 00aef7ec
                        */
            break;
          case 0x2a2:
            lVar9 = 5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aef740 with catch @ 00aef7f4
                        */
            break;
          case 0x2a3:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aef6fc with catch @ 00aef7f8
                        */
            lVar9 = 2;
            break;
          default:
            if (iVar3 == 4) {
              lVar9 = 0;
              break;
            }
            if (iVar3 == 0x40) {
              lVar9 = 1;
              break;
            }
            goto LAB_00aef81c;
          }
LAB_00aef814:
          iVar8 = (&DAT_013d37d8)[lVar9 * 2];
LAB_00aef81c:
          iVar3 = piVar1[1];
          if (0x32a < iVar3) {
            if (iVar3 == 0x32b) {
              lVar9 = 3;
              goto joined_r0x00aef8a0;
            }
            if (iVar3 == 0x3d3) {
              lVar9 = 4;
              goto joined_r0x00aef8a0;
            }
            if (iVar3 == 0x3d4) {
              lVar9 = 5;
              goto joined_r0x00aef8a0;
            }
LAB_00aef8f8:
            CRYPTO_free(ptr);
            goto LAB_00aef90c;
          }
                    /* try { // try from 00aef82c to 00bef82f has its CatchHandler @ 00aef838 */
          if (iVar3 == 6) {
            lVar9 = 0;
          }
          else {
                    /* try { // try from 00aef830 to 00bef83b has its CatchHandler @ 00aef68c */
            if (iVar3 == 0x74) {
              lVar9 = 1;
            }
            else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aef82c with catch @ 00aef838
                        */
                    /* try { // try from 00aef83c to 00bef83f has its CatchHandler @ 00aef848 */
              if (iVar3 != 0x198) goto LAB_00aef8f8;
                    /* try { // try from 00aef840 to 00bef84b has its CatchHandler @ 00aef68c */
              lVar9 = 2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aef83c with catch @ 00aef848
                        */
            }
          }
joined_r0x00aef8a0:
          if (iVar8 == -1) goto LAB_00aef8f8;
          uVar4 = (&DAT_013d3820)[lVar9 * 2];
          puVar2 = (undefined1 *)((long)ptr + uVar6);
          uVar6 = uVar6 + 2;
          *puVar2 = (char)iVar8;
          puVar2[1] = (char)uVar4;
        } while (uVar6 < param_3);
      }
      if (param_4 == 0) {
        CRYPTO_free(*(void **)(param_1 + 0x148));
        puVar7 = (ulong *)(param_1 + 0x150);
        *(void **)(param_1 + 0x148) = ptr;
      }
      else {
        CRYPTO_free(*(void **)(param_1 + 0x158));
        *(void **)(param_1 + 0x158) = ptr;
        puVar7 = (ulong *)(param_1 + 0x160);
      }
      *puVar7 = param_3;
      uVar5 = 1;
    }
  }
  else {
LAB_00aef90c:
    uVar5 = 0;
  }
                    /* try { // try from 00aef944 to 00bef94b has its CatchHandler @ 00aefa40 */
  return uVar5;
}

