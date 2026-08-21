
void FUN_00fcbf20(long param_1,uint param_2,long param_3,ulong param_4,ulong param_5,
                 undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  
                    /* try { // try from 00fcbf34 to 010cbf3b has its CatchHandler @ 00fcbfb0 */
  iVar6 = *(int *)(param_3 + 8);
  uVar4 = 2;
                    /* try { // try from 00fcbf5c to 010cbf97 has its CatchHandler @ 00fcbfb8 */
  if ((param_5 & 1) == 0) {
    uVar4 = 0;
  }
  uVar5 = (ulong)uVar4;
  lVar1 = param_3 + 4;
  if ((param_4 & 1) == 0) {
    uVar2 = uVar4 << 2;
    if ((1 << (ulong)uVar4 & param_2) != 0) {
                    /* try { // try from 00fcc118 to 010cc123 has its CatchHandler @ 00fcc23c */
                    /* try { // try from 00fcc124 to 010cc12f has its CatchHandler @ 00fcc22c */
      iVar3 = FUN_00fcc2b4(param_6,param_1 + uVar5 * 3,lVar1,uVar2,param_7);
      iVar6 = iVar3 + iVar6;
    }
    if ((1 << (uVar5 | 1) & param_2) != 0) {
                    /* try { // try from 00fcc154 to 010cc15b has its CatchHandler @ 00fcc208 */
      iVar3 = FUN_00fcc2b4(param_6,param_1 + (uVar5 | 1) * 3,lVar1,uVar2 | 4,param_7);
      iVar6 = iVar3 + iVar6;
    }
                    /* try { // try from 00fcc164 to 010cc16f has its CatchHandler @ 00fcc204 */
    if ((1 << (uVar5 | 4) & param_2) != 0) {
                    /* try { // try from 00fcc170 to 010cc17b has its CatchHandler @ 00fcc200 */
                    /* try { // try from 00fcc17c to 010cc187 has its CatchHandler @ 00fcc1fc */
      iVar3 = FUN_00fcc2b4(param_6,param_1 + (uVar5 | 4) * 3,lVar1,uVar2 | 1,param_7);
      iVar6 = iVar3 + iVar6;
    }
    if ((1 << (uVar5 | 5) & param_2) != 0) {
                    /* try { // try from 00fcc1b4 to 010cc1bb has its CatchHandler @ 00fcc228 */
                    /* try { // try from 00fcc1bc to 010cc26f has its CatchHandler @ 00fcc02c */
      iVar3 = FUN_00fcc2b4(param_6,param_1 + (uVar5 | 5) * 3,lVar1,uVar2 | 5,param_7);
      iVar6 = iVar3 + iVar6;
    }
    if ((1 << (uVar5 | 8) & param_2) != 0) {
      iVar3 = FUN_00fcc2b4(param_6,param_1 + (uVar5 | 8) * 3,lVar1,uVar2 | 2,param_7);
      iVar6 = iVar3 + iVar6;
    }
                    /* catch() { ... } // from try @ 00fcc17c with catch @ 00fcc1fc */
                    /* catch() { ... } // from try @ 00fcc170 with catch @ 00fcc200 */
                    /* catch() { ... } // from try @ 00fcc164 with catch @ 00fcc204 */
                    /* catch() { ... } // from try @ 00fcc154 with catch @ 00fcc208 */
    if ((1 << (uVar5 | 9) & param_2) != 0) {
                    /* catch() { ... } // from try @ 00fcc0e4 with catch @ 00fcc20c */
                    /* catch() { ... } // from try @ 00fcc0d8 with catch @ 00fcc21c */
                    /* catch() { ... } // from try @ 00fcc0c4 with catch @ 00fcc220 */
                    /* catch() { ... } // from try @ 00fcc0bc with catch @ 00fcc224 */
      iVar3 = FUN_00fcc2b4(param_6,param_1 + (uVar5 | 9) * 3,lVar1,uVar2 | 6,param_7);
                    /* catch() { ... } // from try @ 00fcc1b4 with catch @ 00fcc228 */
      iVar6 = iVar3 + iVar6;
    }
                    /* catch() { ... } // from try @ 00fcc124 with catch @ 00fcc22c */
                    /* catch() { ... } // from try @ 00fcc118 with catch @ 00fcc23c */
    if ((1 << (uVar5 | 0xc) & param_2) != 0) {
                    /* catch() { ... } // from try @ 00fcc0a4 with catch @ 00fcc258 */
      iVar3 = FUN_00fcc2b4(param_6,param_1 + (uVar5 | 0xc) * 3,lVar1,uVar2 | 3,param_7);
      iVar6 = iVar3 + iVar6;
    }
                    /* catch() { ... } // from try @ 00fcc08c with catch @ 00fcc260 */
                    /* catch() { ... } // from try @ 00fcc074 with catch @ 00fcc268 */
    if ((1 << (uVar5 | 0xd) & param_2) == 0) goto LAB_00fcc294;
    uVar5 = (uVar5 | 0xd) * 3;
    uVar4 = uVar2 | 7;
  }
  else {
    uVar2 = uVar4 << 2;
    if ((1 << (ulong)uVar2 & param_2) != 0) {
                    /* try { // try from 00fcbf98 to 010cbfdb has its CatchHandler @ 00fcbf10 */
      iVar3 = FUN_00fcc2b4(param_6,param_1 + (ulong)(uVar4 * 0xc),lVar1,uVar5,param_7);
      iVar6 = iVar3 + iVar6;
    }
    if ((1 << (ulong)(uVar2 | 1) & param_2) != 0) {
                    /* catch() { ... } // from try @ 00fcbf34 with catch @ 00fcbfb0 */
                    /* catch() { ... } // from try @ 00fcbf5c with catch @ 00fcbfb8 */
      iVar3 = FUN_00fcc2b4(param_6,param_1 + (ulong)((uVar2 | 1) * 3),lVar1,uVar4 | 4,param_7);
      iVar6 = iVar3 + iVar6;
    }
    if ((1 << (ulong)(uVar2 | 2) & param_2) != 0) {
      iVar3 = FUN_00fcc2b4(param_6,param_1 + (ulong)((uVar2 | 2) * 3),lVar1,uVar4 | 8,param_7);
      iVar6 = iVar3 + iVar6;
    }
    if ((1 << (ulong)(uVar2 | 3) & param_2) != 0) {
                    /* try { // try from 00fcc02c to 010cc073 has its CatchHandler @ 00fcc02c
                       catch() { ... } // from try @ 00fcc02c with catch @ 00fcc02c
                       catch() { ... } // from try @ 00fcc1bc with catch @ 00fcc02c */
      iVar3 = FUN_00fcc2b4(param_6,param_1 + (ulong)((uVar2 | 3) * 3),lVar1,uVar4 | 0xc,param_7);
      iVar6 = iVar3 + iVar6;
    }
    if ((1 << (ulong)(uVar2 | 4) & param_2) != 0) {
      iVar3 = FUN_00fcc2b4(param_6,param_1 + (ulong)((uVar2 | 4) * 3),lVar1,uVar4 | 1,param_7);
      iVar6 = iVar3 + iVar6;
    }
                    /* try { // try from 00fcc074 to 010cc07f has its CatchHandler @ 00fcc268 */
    if ((1 << (ulong)(uVar2 | 5) & param_2) != 0) {
                    /* try { // try from 00fcc08c to 010cc08f has its CatchHandler @ 00fcc260 */
      iVar3 = FUN_00fcc2b4(param_6,param_1 + (ulong)((uVar2 | 5) * 3),lVar1,uVar4 | 5,param_7);
      iVar6 = iVar3 + iVar6;
    }
                    /* try { // try from 00fcc0a4 to 010cc0b3 has its CatchHandler @ 00fcc258 */
    if ((1 << (ulong)(uVar2 | 6) & param_2) != 0) {
                    /* try { // try from 00fcc0bc to 010cc0c3 has its CatchHandler @ 00fcc224 */
                    /* try { // try from 00fcc0c4 to 010cc0d7 has its CatchHandler @ 00fcc220 */
      iVar3 = FUN_00fcc2b4(param_6,param_1 + (ulong)((uVar2 | 6) * 3),lVar1,uVar4 | 9,param_7);
      iVar6 = iVar3 + iVar6;
    }
                    /* try { // try from 00fcc0d8 to 010cc0e3 has its CatchHandler @ 00fcc21c */
    if ((1 << (ulong)(uVar2 | 7) & param_2) == 0) goto LAB_00fcc294;
                    /* try { // try from 00fcc0e4 to 010cc0ef has its CatchHandler @ 00fcc20c */
    uVar5 = (ulong)((uVar2 | 7) * 3);
    uVar4 = uVar4 | 0xd;
  }
  iVar3 = FUN_00fcc2b4(param_6,param_1 + uVar5,lVar1,uVar4,param_7);
  iVar6 = iVar3 + iVar6;
LAB_00fcc294:
  *(int *)(param_3 + 8) = iVar6;
                    /* try { // try from 00fcc2a4 to 010cc2d7 has its CatchHandler @ 00fcc2a4
                       catch() { ... } // from try @ 00fcc2a4 with catch @ 00fcc2a4
                       catch() { ... } // from try @ 00fcc314 with catch @ 00fcc2a4 */
  return;
}

