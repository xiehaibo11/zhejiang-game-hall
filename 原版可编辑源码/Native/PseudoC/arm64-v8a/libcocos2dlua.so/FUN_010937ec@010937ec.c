
int FUN_010937ec(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  uint local_44;
  
                    /* catch() { ... } // from try @ 0109378c with catch @ 010937ec */
  if (*(ulong *)(param_2 + 0x168) != 0) {
    plVar4 = *(long **)(param_2 + 0x170);
    uVar5 = 0;
    do {
                    /* try { // try from 01093824 to 01193863 has its CatchHandler @ 01093824
                       catch() { ... } // from try @ 01093824 with catch @ 01093824
                       catch() { ... } // from try @ 0109386c with catch @ 01093824 */
      if (*plVar4 == param_3) {
        if (((ulong)plVar4[3] < *(ulong *)(param_1 + 0x10)) ||
           (iVar1 = FT_Stream_Skip(param_1,plVar4[3] - *(ulong *)(param_1 + 0x10)), iVar1 != 0)) {
          return 0x53;
        }
        local_44 = 0;
        uVar2 = FT_Stream_ReadULongLE(param_1,&local_44);
        if (local_44 != 0) {
          return local_44;
        }
        if ((uVar2 & 0xffffff00 | 0x100) != 0x100) {
          return 0;
        }
        if ((uVar2 >> 2 & 1) == 0) {
                    /* catch() { ... } // from try @ 01093864 with catch @ 010938b8 */
          puVar3 = &DAT_0145fb36;
        }
        else {
          puVar3 = &DAT_0145fb02;
        }
        local_44 = FT_Stream_ReadFields(param_1,puVar3,param_2 + 0x178);
        if (local_44 != 0) {
          return local_44;
        }
                    /* try { // try from 010938f0 to 01193927 has its CatchHandler @ 010938f0
                       catch() { ... } // from try @ 010938f0 with catch @ 010938f0
                       catch() { ... } // from try @ 01093930 with catch @ 010938f0 */
        puVar3 = &DAT_0145fb6a;
        if ((uVar2 & 4) == 0) {
          puVar3 = &DAT_0145fb8a;
        }
        local_44 = FT_Stream_ReadFields(param_1,puVar3,(undefined8 *)(param_2 + 0x198));
        if (local_44 != 0) {
          return local_44;
        }
                    /* try { // try from 01093928 to 0119392f has its CatchHandler @ 0109397c */
        local_44 = FT_Stream_ReadFields(param_1,puVar3,(undefined8 *)(param_2 + 0x1b0));
                    /* try { // try from 01093930 to 011939b3 has its CatchHandler @ 010938f0 */
        if (local_44 != 0) {
          return local_44;
        }
        if ((uVar2 & 0xffffff00) == 0x100) {
          local_44 = FT_Stream_ReadFields(param_1,puVar3);
          if (local_44 != 0) {
            return local_44;
          }
          iVar1 = FT_Stream_ReadFields(param_1,puVar3,param_2 + 0x1e0);
          return iVar1;
        }
                    /* catch() { ... } // from try @ 01093928 with catch @ 0109397c */
        *(undefined8 *)(param_2 + 0x1d8) = *(undefined8 *)(param_2 + 0x1a8);
        *(undefined8 *)(param_2 + 0x1d0) = *(undefined8 *)(param_2 + 0x1a0);
        *(undefined8 *)(param_2 + 0x1c8) = *(undefined8 *)(param_2 + 0x198);
        *(undefined8 *)(param_2 + 0x1f0) = *(undefined8 *)(param_2 + 0x1c0);
        *(undefined8 *)(param_2 + 0x1e8) = *(undefined8 *)(param_2 + 0x1b8);
        *(undefined8 *)(param_2 + 0x1e0) = *(undefined8 *)(param_2 + 0x1b0);
        return 0;
      }
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 4;
    } while (uVar5 < *(ulong *)(param_2 + 0x168));
  }
                    /* try { // try from 01093864 to 0119386b has its CatchHandler @ 010938b8 */
                    /* try { // try from 0109386c to 011938ef has its CatchHandler @ 01093824 */
  return 3;
}

