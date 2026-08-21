
void FUN_010b15a8(long param_1,long param_2,long param_3,ulong param_4,short param_5)

{
  undefined2 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint uVar6;
  
  uVar4 = (uint)(param_4 >> 9);
  uVar6 = -uVar4;
  if (-1 < (int)uVar4) {
    uVar6 = uVar4;
  }
  if ((*(byte *)(param_1 + 0x848) >> 1 & 1) == 0) {
    if (0xfe < (int)uVar6) {
      uVar6 = 0xff;
    }
  }
  else {
    uVar4 = uVar6 & 0x1ff;
    if (uVar4 < 0x101) {
      uVar6 = 0xff;
                    /* try { // try from 010b1608 to 011b1673 has its CatchHandler @ 010b158c */
      if (uVar4 != 0x100) {
        uVar6 = uVar4;
      }
    }
    else {
      uVar6 = 0x200 - uVar4;
                    /* try { // try from 010b15fc to 011b1607 has its CatchHandler @ 010b1660 */
    }
  }
  param_2 = *(long *)(param_1 + 0x110) + param_2;
  param_3 = *(long *)(param_1 + 0x120) + param_3;
  if (0x7ffe < param_2) {
    param_2 = 0x7fff;
  }
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  if (uVar6 != 0) {
    iVar3 = *(int *)(param_1 + 0x958);
    lVar2 = (long)*(int *)(param_1 + 0x970);
    puVar1 = (undefined2 *)(param_1 + 0x898);
    puVar5 = puVar1 + (long)iVar3 * 3;
                    /* catch() { ... } // from try @ 010b15fc with catch @ 010b1660 */
                    /* try { // try from 010b1674 to 011b16cf has its CatchHandler @ 010b1674
                       catch() { ... } // from try @ 010b1674 with catch @ 010b1674
                       catch() { ... } // from try @ 010b16dc with catch @ 010b1674
                       catch() { ... } // from try @ 010b17c4 with catch @ 010b1674 */
    if ((((iVar3 < 1) || (param_3 != lVar2)) ||
        ((uint)(ushort)puVar5[-2] + (int)(short)puVar5[-3] != (int)param_2)) ||
       (uVar6 != *(byte *)(puVar5 + -1))) {
      if ((0x1f < iVar3) || (param_3 != lVar2)) {
        if ((0 < iVar3) && (*(code **)(param_1 + 0x960) != (code *)0x0)) {
          (**(code **)(param_1 + 0x960))(lVar2,(long)iVar3,puVar1,*(undefined8 *)(param_1 + 0x968));
        }
        iVar3 = 0;
        *(undefined4 *)(param_1 + 0x958) = 0;
        *(int *)(param_1 + 0x970) = (int)param_3;
        puVar5 = puVar1;
      }
      *puVar5 = (short)param_2;
                    /* try { // try from 010b16d0 to 011b16db has its CatchHandler @ 010b1810 */
      puVar5[1] = param_5;
      *(char *)(puVar5 + 2) = (char)uVar6;
      *(int *)(param_1 + 0x958) = iVar3 + 1;
    }
    else {
      puVar5[-2] = puVar5[-2] + param_5;
    }
  }
                    /* try { // try from 010b16dc to 011b176f has its CatchHandler @ 010b1674 */
  return;
}

