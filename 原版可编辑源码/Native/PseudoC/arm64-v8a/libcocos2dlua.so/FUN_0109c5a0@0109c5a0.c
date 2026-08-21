
int FUN_0109c5a0(long param_1,uint *param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  
  uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + 0xc);
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  if (uVar2 != 0) {
    uVar7 = *param_2;
    uVar10 = 0;
    if (param_3 != '\0') {
      uVar7 = uVar7 + 1;
    }
    uVar8 = (ulong)uVar2;
    do {
      while( true ) {
        uVar3 = uVar10 + (uint)uVar8 >> 1;
        uVar9 = (ulong)uVar3;
        puVar1 = (uint *)(*(long *)(param_1 + 0x18) + 0x10 + (ulong)(uVar3 * 0xc));
        uVar4 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
                    /* try { // try from 0109c5fc to 0119c607 has its CatchHandler @ 0109c618 */
        uVar5 = (puVar1[1] & 0xff00ff00) >> 8 | (puVar1[1] & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if (uVar7 < uVar4) break;
                    /* try { // try from 0109c608 to 0119c68b has its CatchHandler @ 0109c230 */
        if (uVar7 <= uVar5) {
          uVar10 = (puVar1[2] & 0xff00ff00) >> 8 | (puVar1[2] & 0xff00ff) << 8;
          iVar6 = (uVar7 - uVar4) + (uVar10 >> 0x10 | uVar10 << 0x10);
          goto joined_r0x0109c680;
        }
        uVar10 = uVar3 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0109c5fc with catch @ 0109c618
                        */
        if ((uint)uVar8 <= uVar10) goto LAB_0109c628;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0109c564 with catch @ 0109c620
                        */
      uVar8 = uVar9;
    } while (uVar10 < uVar3);
LAB_0109c628:
    iVar6 = 0;
joined_r0x0109c680:
    if (param_3 == '\0') {
      return iVar6;
    }
    if ((uVar7 <= uVar5) || (uVar9 = (ulong)(uVar3 + 1), uVar3 + 1 != uVar2)) {
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(ulong *)(param_1 + 0x30) = (ulong)uVar7;
      *(ulong *)(param_1 + 0x40) = uVar9;
      if (iVar6 == 0) {
                    /* try { // try from 0109c68c to 0119c68f has its CatchHandler @ 0109c690 */
        FUN_0109c6b8(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0109c68c with catch @ 0109c690
                        */
                    /* try { // try from 0109c694 to 0119c697 has its CatchHandler @ 0109c69c */
        if (*(char *)(param_1 + 0x28) == '\0') {
          return 0;
        }
        iVar6 = *(int *)(param_1 + 0x38);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0109c694 with catch @ 0109c69c
                        */
        if (iVar6 == 0) {
          return 0;
        }
        uVar7 = (uint)*(undefined8 *)(param_1 + 0x30);
      }
      else {
        *(int *)(param_1 + 0x38) = iVar6;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0109c410 with catch @ 0109c668
                        */
      *param_2 = uVar7;
      return iVar6;
    }
  }
  return 0;
}

