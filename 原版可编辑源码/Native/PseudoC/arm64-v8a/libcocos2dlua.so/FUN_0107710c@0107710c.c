
long FUN_0107710c(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = (param_2 & 0xffff) * (int)*(short *)(param_1 + 0x21a);
  iVar4 = ((int)param_2 >> 0x10) * (int)*(short *)(param_1 + 0x21a);
  uVar5 = (param_3 & 0xffff) * (int)*(short *)(param_1 + 0x21c);
                    /* try { // try from 01077130 to 01177133 has its CatchHandler @ 01077154 */
  iVar6 = ((int)param_3 >> 0x10) * (int)*(short *)(param_1 + 0x21c);
                    /* try { // try from 01077134 to 011771ab has its CatchHandler @ 010770b4 */
  uVar1 = iVar4 * 0x10000;
  uVar2 = uVar3 + uVar1;
                    /* catch() { ... } // from try @ 010770fc with catch @ 01077144 */
  iVar4 = (iVar4 >> 0x10) + ((int)uVar3 >> 0x1f) + ((int)uVar5 >> 0x1f) + (iVar6 >> 0x10);
  if (CARRY4(uVar3,uVar1)) {
    iVar4 = iVar4 + 1;
  }
  uVar1 = iVar6 * 0x10000;
  uVar3 = uVar5 + uVar1;
  if (CARRY4(uVar5,uVar1)) {
    iVar4 = iVar4 + 1;
  }
                    /* catch() { ... } // from try @ 01077130 with catch @ 01077154 */
  uVar1 = uVar3 + uVar2;
  if (CARRY4(uVar3,uVar2)) {
    iVar4 = iVar4 + 1;
  }
  uVar3 = iVar4 >> 0x1f;
  uVar2 = uVar3 + uVar1;
  iVar4 = uVar3 + iVar4;
  if (CARRY4(uVar3,uVar1)) {
    iVar4 = iVar4 + 1;
  }
  if (0xffffdfff < uVar2) {
    iVar4 = iVar4 + 1;
  }
  return (long)(int)(CONCAT44(iVar4,uVar2 + 0x2000) >> 0xe);
}

