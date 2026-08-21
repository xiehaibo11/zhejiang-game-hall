
int FUN_00a0f618(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
                    /* try { // try from 00a0f628 to 00b0f633 has its CatchHandler @ 00a0f7cc */
                    /* try { // try from 00a0f634 to 00b0f63b has its CatchHandler @ 00a0f7d4 */
  uVar1 = (param_2 & 4) << 3 | (param_2 & 1) << 4;
                    /* try { // try from 00a0f648 to 00b0f66f has its CatchHandler @ 00a0f7dc */
  *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xffffffcf | uVar1;
  if ((param_2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x8b40);
    if (lVar3 != 0) {
      *(long *)(param_1 + 0x8b40) = 0;
                    /* try { // try from 00a0f678 to 00b0f683 has its CatchHandler @ 00a0f784 */
      iVar2 = FUN_00a23524(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x8b50),lVar3,
                           *(undefined8 *)(param_1 + 0x8b48));
                    /* try { // try from 00a0f684 to 00b0f697 has its CatchHandler @ 00a0f774 */
      (*(code *)PTR_free_01d1b748)(lVar3);
      goto joined_r0x00a0f6b8;
    }
  }
  iVar2 = 0;
joined_r0x00a0f6b8:
                    /* try { // try from 00a0f6b8 to 00b0f6c3 has its CatchHandler @ 00a0f758 */
  if ((uVar1 != 0x30) && (iVar2 == 0)) {
    FUN_00a11760(param_1,0);
                    /* try { // try from 00a0f6ac to 00b0f6b7 has its CatchHandler @ 00a0f770 */
  }
                    /* try { // try from 00a0f6cc to 00b0f6e3 has its CatchHandler @ 00a0f788 */
  return iVar2;
}

