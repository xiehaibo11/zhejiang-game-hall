
uint FUN_010bb2bc(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 != 0) {
    lVar8 = *(long *)(param_1 + 0x20);
    uVar5 = 0;
    uVar7 = 0;
    uVar6 = *param_2 + 1;
    uVar9 = uVar3;
    do {
      uVar2 = uVar7 + (uVar9 - uVar7 >> 1);
      uVar10 = (ulong)uVar2;
      uVar4 = *(uint *)(lVar8 + uVar10 * 8);
      if (uVar4 == uVar6) {
                    /* catch() { ... } // from try @ 010bb1f4 with catch @ 010bb354 */
        uVar5 = *(uint *)(lVar8 + uVar10 * 8 + 4);
        goto LAB_010bb35c;
      }
      uVar4 = uVar4 & 0x7fffffff;
                    /* catch() { ... } // from try @ 010bb26c with catch @ 010bb2f8 */
      if (uVar4 == uVar6) {
        uVar5 = *(uint *)(lVar8 + uVar10 * 8 + 4);
      }
      if (uVar4 < uVar6) {
        uVar7 = uVar2 + 1;
        uVar2 = uVar9;
      }
      uVar9 = uVar2;
    } while (uVar7 < uVar2);
    if (uVar5 != 0) goto LAB_010bb35c;
    if (uVar7 < uVar3) {
      puVar1 = (uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 8);
      uVar5 = puVar1[1];
                    /* catch() { ... } // from try @ 010bb220 with catch @ 010bb334 */
      uVar6 = *puVar1 & 0x7fffffff;
      goto LAB_010bb35c;
    }
  }
  uVar6 = 0;
  uVar5 = 0;
LAB_010bb35c:
  *param_2 = uVar6;
  return uVar5;
}

