
void FUN_01072814(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (*(uint *)(param_1 + 0x2d0) != 0) {
    piVar5 = *(int **)(param_1 + 0x2d8);
    piVar7 = piVar5 + (ulong)*(uint *)(param_1 + 0x2d0) * 10;
    do {
      if ((*(char *)(param_1 + 0x290) == (char)piVar5[6]) && ((char)piVar5[7] != '\0')) {
        iVar3 = *(int *)(param_1 + 0x2e8);
        if (*(int *)(param_1 + 0x2ec) <= iVar3) {
          *(undefined4 *)(param_1 + 0x18) = 0x82;
          return;
        }
        *(int *)(param_1 + 0x2e8) = iVar3 + 1;
        puVar1 = (undefined4 *)(*(long *)(param_1 + 0x2f0) + (long)iVar3 * 0x20);
        *puVar1 = *(undefined4 *)(param_1 + 0x270);
        lVar8 = *(long *)(param_1 + 0x280);
        *(int **)(puVar1 + 6) = piVar5;
        *(long *)(puVar1 + 2) = lVar8 + 1;
        *(undefined8 *)(puVar1 + 4) = 1;
        iVar3 = *piVar5;
        uVar4 = iVar3 - 1;
        if (2 < uVar4) {
          *(undefined4 *)(param_1 + 0x18) = 0x84;
                    /* try { // try from 010728ac to 011728b7 has its CatchHandler @ 01072be4 */
          *(undefined1 *)(param_1 + 0x298) = 0;
          return;
        }
                    /* try { // try from 010728c4 to 011728cf has its CatchHandler @ 01072bbc */
        lVar8 = *(long *)(param_1 + (long)(int)uVar4 * 0x10 + 0x300);
        if (lVar8 == 0) {
                    /* try { // try from 010728f8 to 01172903 has its CatchHandler @ 01072bf4 */
          *(undefined4 *)(param_1 + 0x18) = 0x8a;
          *(undefined1 *)(param_1 + 0x298) = 0;
          return;
        }
        lVar2 = param_1 + (long)(int)uVar4 * 0x10;
        uVar6 = *(ulong *)(piVar5 + 2);
        if (*(ulong *)(lVar2 + 0x308) < uVar6) {
                    /* try { // try from 010728e4 to 011728eb has its CatchHandler @ 01072c10 */
          *(undefined4 *)(param_1 + 0x18) = 0x83;
          *(undefined1 *)(param_1 + 0x298) = 0;
          return;
        }
        *(long *)(param_1 + 0x278) = lVar8;
        uVar9 = *(undefined8 *)(lVar2 + 0x308);
                    /* try { // try from 01072910 to 01172917 has its CatchHandler @ 01072c0c */
        *(ulong *)(param_1 + 0x280) = uVar6;
        *(int *)(param_1 + 0x270) = iVar3;
        *(undefined1 *)(param_1 + 0x298) = 0;
        *(undefined8 *)(param_1 + 0x288) = uVar9;
        return;
      }
      piVar5 = piVar5 + 10;
    } while (piVar5 < piVar7);
  }
  *(undefined4 *)(param_1 + 0x18) = 0x80;
  return;
}

