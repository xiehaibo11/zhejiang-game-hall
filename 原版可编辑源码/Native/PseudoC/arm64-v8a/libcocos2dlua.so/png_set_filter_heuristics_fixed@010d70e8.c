
void png_set_filter_heuristics_fixed
               (long param_1,int param_2,uint param_3,long param_4,uint *param_5)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined2 uVar5;
  long *plVar6;
  
                    /* try { // try from 010d70ec to 011d70f3 has its CatchHandler @ 010d710c */
                    /* try { // try from 010d70f4 to 011d70fb has its CatchHandler @ 010d7108 */
                    /* try { // try from 010d70fc to 011d7103 has its CatchHandler @ 010d7104 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d70fc with catch @ 010d7104
                       try { // try from 010d7104 to 011d7133 has its CatchHandler @ 010d6eb8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d70f4 with catch @ 010d7108
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d70ec with catch @ 010d710c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d7088 with catch @ 010d7110
                        */
  iVar3 = FUN_010d6eec();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d7050 with catch @ 010d7114
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010d7018 with catch @ 010d7118
                        */
  if ((param_2 == 2) && (iVar3 != 0)) {
    if (0 < (int)param_3) {
      uVar4 = 0;
      plVar1 = (long *)(param_1 + 0x3e0);
      do {
        uVar2 = *(uint *)(param_4 + uVar4 * 4);
        if ((int)uVar2 < 1) {
                    /* catch() { ... } // from try @ 010d71a8 with catch @ 010d7178 */
          uVar5 = 0x100;
          *(undefined2 *)(*plVar1 + uVar4 * 2) = 0x100;
          plVar6 = (long *)(param_1 + 1000);
        }
        else {
          *(short *)(*(long *)(param_1 + 1000) + uVar4 * 2) =
               (short)((int)(uVar2 * 0x100 + 50000) / 100000);
          uVar5 = 0;
          plVar6 = plVar1;
          if (uVar2 != 0) {
            uVar5 = (undefined2)((int)((uVar2 >> 1) + 25600000) / (int)uVar2);
          }
        }
        *(undefined2 *)(*plVar6 + uVar4 * 2) = uVar5;
        uVar4 = uVar4 + 1;
      } while (param_3 != uVar4);
    }
    uVar2 = *param_5;
                    /* try { // try from 010d71a0 to 011d71a7 has its CatchHandler @ 010d71cc */
                    /* try { // try from 010d71a8 to 011d71e7 has its CatchHandler @ 010d7178 */
    if (99999 < (int)uVar2) {
      uVar5 = 0;
      if (uVar2 != 0) {
        uVar5 = (undefined2)(((uVar2 >> 1) + 800000) / uVar2);
      }
      **(undefined2 **)(param_1 + 0x3f8) = uVar5;
                    /* catch() { ... } // from try @ 010d71a0 with catch @ 010d71cc */
      **(undefined2 **)(param_1 + 0x3f0) = (short)((uVar2 * 8 + 50000) / 100000);
    }
    uVar2 = param_5[1];
    if (99999 < (int)uVar2) {
                    /* try { // try from 010d71e8 to 011d727b has its CatchHandler @ 010d71e8
                       catch(type#1 @ 00000000) { ... } // from try @ 010d71e8 with catch @ 010d71e8
                       catch(type#1 @ 00000000) { ... } // from try @ 010d739c with catch @ 010d71e8
                       catch(type#1 @ 00000000) { ... } // from try @ 010d7400 with catch @ 010d71e8
                       catch(type#1 @ 00000000) { ... } // from try @ 010d7500 with catch @ 010d71e8
                        */
      uVar5 = 0;
      if (uVar2 != 0) {
        uVar5 = (undefined2)(((uVar2 >> 1) + 800000) / uVar2);
      }
      *(undefined2 *)(*(long *)(param_1 + 0x3f8) + 2) = uVar5;
      *(short *)(*(long *)(param_1 + 0x3f0) + 2) = (short)((uVar2 * 8 + 50000) / 100000);
    }
    uVar2 = param_5[2];
    if (99999 < (int)uVar2) {
      uVar5 = 0;
      if (uVar2 != 0) {
        uVar5 = (undefined2)(((uVar2 >> 1) + 800000) / uVar2);
      }
      *(undefined2 *)(*(long *)(param_1 + 0x3f8) + 4) = uVar5;
      *(short *)(*(long *)(param_1 + 0x3f0) + 4) = (short)((uVar2 * 8 + 50000) / 100000);
    }
    uVar2 = param_5[3];
    if (99999 < (int)uVar2) {
      uVar5 = 0;
      if (uVar2 != 0) {
        uVar5 = (undefined2)(((uVar2 >> 1) + 800000) / uVar2);
      }
      *(undefined2 *)(*(long *)(param_1 + 0x3f8) + 6) = uVar5;
      *(short *)(*(long *)(param_1 + 0x3f0) + 6) = (short)((uVar2 * 8 + 50000) / 100000);
    }
    uVar2 = param_5[4];
    if (99999 < (int)uVar2) {
      uVar5 = 0;
                    /* try { // try from 010d727c to 011d728f has its CatchHandler @ 010d744c */
      if (uVar2 != 0) {
        uVar5 = (undefined2)(((uVar2 >> 1) + 800000) / uVar2);
      }
      *(undefined2 *)(*(long *)(param_1 + 0x3f8) + 8) = uVar5;
      *(short *)(*(long *)(param_1 + 0x3f0) + 8) = (short)((uVar2 * 8 + 50000) / 100000);
    }
  }
  return;
}

