
void FUN_009fd3c8(__jmp_buf_tag *param_1,long *param_2,long param_3)

{
  ulong *__ptr;
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
                    /* try { // try from 009fd3d8 to 00afd41f has its CatchHandler @ 009fd3d8
                       catch() { ... } // from try @ 009fd3d8 with catch @ 009fd3d8
                       catch() { ... } // from try @ 009fd460 with catch @ 009fd3d8
                       catch() { ... } // from try @ 009fd4cc with catch @ 009fd3d8
                       catch() { ... } // from try @ 009fd5ec with catch @ 009fd3d8 */
  lVar2 = *param_2;
  __ptr = (ulong *)0x0;
  if (lVar2 == 0) {
    uVar4 = 0;
                    /* try { // try from 009fd420 to 00afd42f has its CatchHandler @ 009fd608 */
    uVar3 = 2;
  }
  else {
    uVar3 = *(ulong *)(lVar2 + -0x10);
    uVar4 = *(ulong *)(lVar2 + -8);
    __ptr = (ulong *)(lVar2 + -0x10);
    if (uVar4 < uVar3) {
      return;
    }
  }
  lVar2 = uVar3 + (uVar3 >> 1);
                    /* try { // try from 009fd434 to 00afd45f has its CatchHandler @ 009fd604 */
  plVar1 = realloc(__ptr,lVar2 * param_3 + 0x10);
  if ((plVar1 != (long *)0x0) && (!CARRY8(uVar3,uVar3 >> 1))) {
    *plVar1 = lVar2;
    plVar1[1] = uVar4;
    *param_2 = (long)(plVar1 + 2);
                    /* try { // try from 009fd460 to 00afd46b has its CatchHandler @ 009fd3d8 */
                    /* try { // try from 009fd46c to 00afd497 has its CatchHandler @ 009fd60c */
    memset((long *)((long)(plVar1 + 2) + uVar4 * param_3),0,(lVar2 - uVar4) * param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  longjmp(param_1,2);
}

