
void FUN_009a3854(long param_1,uint param_2,long param_3,ulong param_4,ulong param_5,
                 undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  
                    /* catch() { ... } // from try @ 009a3708 with catch @ 009a3858 */
                    /* catch() { ... } // from try @ 009a36dc with catch @ 009a385c */
  iVar6 = *(int *)(param_3 + 8);
  uVar4 = 2;
  if ((param_5 & 1) == 0) {
    uVar4 = 0;
  }
  uVar5 = (ulong)uVar4;
  lVar1 = param_3 + 4;
  if ((param_4 & 1) == 0) {
    uVar2 = uVar4 << 2;
    if ((1 << (ulong)uVar4 & param_2) != 0) {
                    /* try { // try from 009a3a54 to 00aa3b6b has its CatchHandler @ 009a394c */
      iVar3 = FUN_009a3be8(param_6,param_1 + uVar5 * 3,lVar1,uVar2,param_7);
      iVar6 = iVar3 + iVar6;
    }
    if ((1 << (uVar5 | 1) & param_2) != 0) {
      iVar3 = FUN_009a3be8(param_6,param_1 + (uVar5 | 1) * 3,lVar1,uVar2 | 4,param_7);
      iVar6 = iVar3 + iVar6;
    }
    if ((1 << (uVar5 | 4) & param_2) != 0) {
      iVar3 = FUN_009a3be8(param_6,param_1 + (uVar5 | 4) * 3,lVar1,uVar2 | 1,param_7);
      iVar6 = iVar3 + iVar6;
    }
                    /* catch() { ... } // from try @ 009a3a04 with catch @ 009a3ad0 */
    if ((1 << (uVar5 | 5) & param_2) != 0) {
                    /* catch() { ... } // from try @ 009a3a1c with catch @ 009a3ae8 */
                    /* catch() { ... } // from try @ 009a39dc with catch @ 009a3aec */
                    /* catch() { ... } // from try @ 009a3a24 with catch @ 009a3af0 */
      iVar3 = FUN_009a3be8(param_6,param_1 + (uVar5 | 5) * 3,lVar1,uVar2 | 5,param_7);
      iVar6 = iVar3 + iVar6;
    }
                    /* catch() { ... } // from try @ 009a3a0c with catch @ 009a3b00 */
    if ((1 << (uVar5 | 8) & param_2) != 0) {
                    /* catch() { ... } // from try @ 009a39c8 with catch @ 009a3b18 */
                    /* catch() { ... } // from try @ 009a399c with catch @ 009a3b1c */
      iVar3 = FUN_009a3be8(param_6,param_1 + (uVar5 | 8) * 3,lVar1,uVar2 | 2,param_7);
      iVar6 = iVar3 + iVar6;
    }
    if ((1 << (uVar5 | 9) & param_2) != 0) {
      iVar3 = FUN_009a3be8(param_6,param_1 + (uVar5 | 9) * 3,lVar1,uVar2 | 6,param_7);
      iVar6 = iVar3 + iVar6;
    }
                    /* catch() { ... } // from try @ 009a3bcc with catch @ 009a3b6c */
    if ((1 << (uVar5 | 0xc) & param_2) != 0) {
      iVar3 = FUN_009a3be8(param_6,param_1 + (uVar5 | 0xc) * 3,lVar1,uVar2 | 3,param_7);
      iVar6 = iVar3 + iVar6;
    }
    if ((1 << (uVar5 | 0xd) & param_2) == 0) goto LAB_009a3bc8;
    uVar5 = (uVar5 | 0xd) * 3;
    uVar4 = uVar2 | 7;
  }
  else {
    uVar2 = uVar4 << 2;
                    /* try { // try from 009a38ac to 00aa38ef has its CatchHandler @ 009a38ac
                       catch() { ... } // from try @ 009a38ac with catch @ 009a38ac
                       catch() { ... } // from try @ 009a3908 with catch @ 009a38ac */
    if ((1 << (ulong)uVar2 & param_2) != 0) {
      iVar3 = FUN_009a3be8(param_6,param_1 + (ulong)(uVar4 * 0xc),lVar1,uVar5,param_7);
      iVar6 = iVar3 + iVar6;
    }
    if ((1 << (ulong)(uVar2 | 1) & param_2) != 0) {
                    /* try { // try from 009a38f0 to 00aa3907 has its CatchHandler @ 009a3938 */
      iVar3 = FUN_009a3be8(param_6,param_1 + (ulong)((uVar2 | 1) * 3),lVar1,uVar4 | 4,param_7);
      iVar6 = iVar3 + iVar6;
    }
                    /* try { // try from 009a3908 to 00aa394b has its CatchHandler @ 009a38ac */
    if ((1 << (ulong)(uVar2 | 2) & param_2) != 0) {
      iVar3 = FUN_009a3be8(param_6,param_1 + (ulong)((uVar2 | 2) * 3),lVar1,uVar4 | 8,param_7);
      iVar6 = iVar3 + iVar6;
    }
                    /* catch() { ... } // from try @ 009a38f0 with catch @ 009a3938 */
    if ((1 << (ulong)(uVar2 | 3) & param_2) != 0) {
                    /* try { // try from 009a394c to 00aa399b has its CatchHandler @ 009a394c
                       catch() { ... } // from try @ 009a394c with catch @ 009a394c
                       catch() { ... } // from try @ 009a3a54 with catch @ 009a394c */
      iVar3 = FUN_009a3be8(param_6,param_1 + (ulong)((uVar2 | 3) * 3),lVar1,uVar4 | 0xc,param_7);
      iVar6 = iVar3 + iVar6;
    }
    if ((1 << (ulong)(uVar2 | 4) & param_2) != 0) {
      iVar3 = FUN_009a3be8(param_6,param_1 + (ulong)((uVar2 | 4) * 3),lVar1,uVar4 | 1,param_7);
      iVar6 = iVar3 + iVar6;
    }
                    /* try { // try from 009a399c to 00aa39b3 has its CatchHandler @ 009a3b1c */
    if ((1 << (ulong)(uVar2 | 5) & param_2) != 0) {
                    /* try { // try from 009a39c8 to 00aa39db has its CatchHandler @ 009a3b18 */
      iVar3 = FUN_009a3be8(param_6,param_1 + (ulong)((uVar2 | 5) * 3),lVar1,uVar4 | 5,param_7);
      iVar6 = iVar3 + iVar6;
    }
                    /* try { // try from 009a39dc to 00aa39eb has its CatchHandler @ 009a3aec */
    if ((1 << (ulong)(uVar2 | 6) & param_2) != 0) {
      iVar3 = FUN_009a3be8(param_6,param_1 + (ulong)((uVar2 | 6) * 3),lVar1,uVar4 | 9,param_7);
                    /* try { // try from 009a3a04 to 00aa3a0b has its CatchHandler @ 009a3ad0 */
      iVar6 = iVar3 + iVar6;
    }
                    /* try { // try from 009a3a0c to 00aa3a1b has its CatchHandler @ 009a3b00 */
    if ((1 << (ulong)(uVar2 | 7) & param_2) == 0) goto LAB_009a3bc8;
    uVar5 = (ulong)((uVar2 | 7) * 3);
                    /* try { // try from 009a3a24 to 00aa3a53 has its CatchHandler @ 009a3af0 */
    uVar4 = uVar4 | 0xd;
                    /* try { // try from 009a3a1c to 00aa3a23 has its CatchHandler @ 009a3ae8 */
  }
                    /* try { // try from 009a3bb8 to 00aa3bcb has its CatchHandler @ 009a3ce8 */
  iVar3 = FUN_009a3be8(param_6,param_1 + uVar5,lVar1,uVar4,param_7);
  iVar6 = iVar3 + iVar6;
LAB_009a3bc8:
  *(int *)(param_3 + 8) = iVar6;
                    /* try { // try from 009a3bcc to 00aa3d03 has its CatchHandler @ 009a3b6c */
  return;
}

