
void FUN_0107bbd4(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  int local_24c;
  undefined1 local_248 [8];
  undefined8 auStack_240 [11];
  int local_1e4;
  undefined8 local_1e0 [48];
  
  (*(code *)param_2[0xf])(param_2,local_1e0,0x10,&local_1e4);
                    /* try { // try from 0107bc18 to 0117bc4b has its CatchHandler @ 0107bc18
                       catch() { ... } // from try @ 0107bc18 with catch @ 0107bc18
                       catch() { ... } // from try @ 0107bc98 with catch @ 0107bc18 */
  if (local_1e4 < 0) {
    iVar2 = 0xa2;
  }
  else {
    iVar2 = 3;
    if ((local_1e4 != 0) && (local_1e4 < 0x11)) {
      uVar4 = *param_2;
      uVar5 = param_2[2];
      if (0 < local_1e4) {
        lVar9 = *(long *)(param_1 + 0x348);
                    /* try { // try from 0107bc4c to 0117bc53 has its CatchHandler @ 0107bcc4 */
        lVar7 = 0;
        iVar2 = 0;
        do {
          uVar3 = local_1e0[lVar7 * 3 + 1];
                    /* try { // try from 0107bc70 to 0117bc97 has its CatchHandler @ 0107bcac */
          *param_2 = local_1e0[lVar7 * 3];
          param_2[2] = uVar3;
          (*(code *)param_2[0xf])(param_2,local_248,4,&local_24c);
          iVar1 = local_24c;
          if (lVar7 == 0) {
                    /* catch() { ... } // from try @ 0107bc70 with catch @ 0107bcac */
            if (3 < local_24c - 1U) goto LAB_0107bd74;
            iVar2 = FUN_0107c1f0(param_1,local_1e4,local_24c);
                    /* catch() { ... } // from try @ 0107bc4c with catch @ 0107bcc4 */
            if (iVar2 != 0) goto LAB_0107bd50;
            lVar9 = *(long *)(param_1 + 0x348);
            iVar2 = iVar1;
            iVar1 = local_24c;
          }
          else {
            iVar1 = iVar2;
                    /* try { // try from 0107bc98 to 0117bcd7 has its CatchHandler @ 0107bc18 */
            if (local_24c != iVar2) {
LAB_0107bd74:
              iVar2 = 3;
              goto LAB_0107bd50;
            }
          }
                    /* try { // try from 0107bcd8 to 0117bd2b has its CatchHandler @ 0107bcd8
                       catch() { ... } // from try @ 0107bcd8 with catch @ 0107bcd8
                       catch() { ... } // from try @ 0107bd58 with catch @ 0107bcd8 */
          if (0 < iVar1) {
            lVar6 = 0;
            puVar8 = auStack_240;
            do {
              *param_2 = puVar8[-1];
              param_2[2] = *puVar8;
              uVar3 = (*(code *)param_2[10])(param_2,0);
              *(undefined8 *)(*(long *)(lVar9 + lVar7 * 8 + 0x28) + lVar6 * 8) = uVar3;
              lVar6 = lVar6 + 1;
              puVar8 = puVar8 + 3;
            } while (lVar6 < local_24c);
          }
          lVar7 = lVar7 + 1;
                    /* try { // try from 0107bd2c to 0117bd57 has its CatchHandler @ 0107bd68 */
        } while (lVar7 < local_1e4);
      }
      iVar2 = 0;
      *param_2 = uVar4;
      param_2[2] = uVar5;
    }
  }
LAB_0107bd50:
  *(int *)(param_2 + 3) = iVar2;
                    /* try { // try from 0107bd58 to 0117bd83 has its CatchHandler @ 0107bcd8 */
                    /* catch() { ... } // from try @ 0107bd2c with catch @ 0107bd68 */
  return;
}

