
undefined8 FUN_01080bdc(long *param_1,uint param_2,long *param_3,long *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  byte abStack_44 [4];
  
                    /* try { // try from 01080bf8 to 01180c03 has its CatchHandler @ 01080c48 */
                    /* try { // try from 01080c04 to 01180c6f has its CatchHandler @ 01080b58 */
  if ((param_1 == (long *)0x0) || (*(uint *)(param_1 + 2) <= param_2)) {
    return 6;
  }
  lVar4 = param_1[5];
  lVar6 = *param_1;
  if (lVar4 == 0) {
    uVar1 = FT_Stream_Seek(lVar6,param_1[1] + (ulong)(*(byte *)((long)param_1 + 0x14) * param_2) + 3
                          );
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FT_Stream_Read(*param_1,abStack_44,*(undefined1 *)((long)param_1 + 0x14));
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x14);
    if (uVar2 == 0) {
      uVar7 = 0;
      goto LAB_01080c3c;
    }
    uVar7 = 0;
    pbVar3 = abStack_44;
    uVar5 = uVar2;
    do {
                    /* try { // try from 01080cf0 to 01180cff has its CatchHandler @ 01080d48 */
      uVar5 = uVar5 - 1;
      uVar7 = (ulong)*pbVar3 | uVar7 << 8;
      pbVar3 = pbVar3 + 1;
    } while (uVar5 != 0);
    if (uVar7 == 0) goto LAB_01080c3c;
    while( true ) {
      uVar1 = FT_Stream_Read(*param_1,abStack_44,uVar2);
      if (((int)uVar1 == 0) && (uVar5 = (ulong)*(byte *)((long)param_1 + 0x14), uVar5 != 0)) {
        uVar2 = 0;
        pbVar3 = abStack_44;
        do {
          uVar5 = uVar5 - 1;
          uVar2 = (ulong)*pbVar3 | uVar2 << 8;
          pbVar3 = pbVar3 + 1;
        } while (uVar5 != 0);
        if (uVar2 != 0) goto LAB_01080d58;
      }
                    /* catch(type#1 @ 01722048) { ... } // from try @ 01080cf0 with catch @ 01080d48
                        */
      param_2 = param_2 + 1;
      if (*(uint *)(param_1 + 2) <= param_2) break;
      uVar2 = (ulong)*(byte *)((long)param_1 + 0x14);
    }
  }
  else {
    uVar7 = *(ulong *)(lVar4 + (ulong)param_2 * 8);
    if (uVar7 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar2 = *(ulong *)(lVar4 + (ulong)param_2 * 8);
        if (uVar2 != 0) goto LAB_01080d58;
      } while (param_2 < *(uint *)(param_1 + 2));
    }
LAB_01080c3c:
    uVar1 = 0;
  }
  lVar4 = *(long *)(lVar6 + 8);
  uVar2 = 0;
LAB_01080c48:
                    /* catch() { ... } // from try @ 01080bf8 with catch @ 01080c48 */
  uVar5 = param_1[3];
                    /* catch() { ... } // from try @ 01080bd8 with catch @ 01080c4c */
  if (uVar5 <= (lVar4 + 1) - uVar2) goto joined_r0x01080d78;
LAB_01080d70:
  uVar2 = (lVar4 + 1) - uVar5;
joined_r0x01080d78:
  if ((uVar7 == 0) || (lVar4 = uVar2 - uVar7, uVar2 < uVar7 || lVar4 == 0)) {
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    *param_4 = lVar4;
                    /* try { // try from 01080c70 to 01180cef has its CatchHandler @ 01080c70
                       catch() { ... } // from try @ 01080c70 with catch @ 01080c70
                       catch() { ... } // from try @ 01080d00 with catch @ 01080c70
                       catch() { ... } // from try @ 01080d60 with catch @ 01080c70 */
    if (param_1[6] == 0) {
      uVar1 = FT_Stream_Seek(lVar6,uVar7 + param_1[3] + -1);
      if ((int)uVar1 == 0) {
        uVar1 = FT_Stream_ExtractFrame(lVar6,lVar4,param_3);
      }
    }
    else {
      *param_3 = param_1[6] + uVar7 + -1;
    }
  }
  return uVar1;
LAB_01080d58:
  lVar4 = *(long *)(lVar6 + 8);
                    /* try { // try from 01080d5c to 01180d5f has its CatchHandler @ 01080d68 */
                    /* try { // try from 01080d60 to 01180d8b has its CatchHandler @ 01080c70 */
  if (uVar2 <= lVar4 + 1U) {
    uVar1 = 0;
    goto LAB_01080c48;
  }
                    /* catch() { ... } // from try @ 01080d5c with catch @ 01080d68 */
  uVar5 = param_1[3];
  uVar1 = 0;
  goto LAB_01080d70;
}

