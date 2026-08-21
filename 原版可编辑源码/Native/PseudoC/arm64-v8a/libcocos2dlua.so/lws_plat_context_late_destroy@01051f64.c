
int lws_plat_context_late_destroy(long param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  
                    /* try { // try from 01051f68 to 01151f6b has its CatchHandler @ 01053648 */
  sVar1 = *(short *)(param_1 + 0xca6);
  if (*(long *)(param_1 + 0x828) != 0) {
                    /* try { // try from 01051f8c to 01151f93 has its CatchHandler @ 01053604 */
    thunk_FUN_0104b1cc(*(long *)(param_1 + 0x828),0,"lws_free");
  }
  if (sVar1 != 0) {
    iVar2 = -(int)sVar1;
    piVar3 = (int *)(param_1 + 0x7c4);
    do {
      if (piVar3[-1] != 0) {
        close(piVar3[-1]);
      }
      if (*piVar3 != 0) {
        close(*piVar3);
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x1be;
    } while (iVar2 != 0);
  }
  iVar2 = *(int *)(param_1 + 0xc6c);
  if (iVar2 == 0) {
    _lws_log(1,"ZERO RANDOM FD\n");
    iVar2 = *(int *)(param_1 + 0xc6c);
  }
                    /* try { // try from 01051ffc to 01152007 has its CatchHandler @ 010535a0 */
  if (iVar2 == -1) {
                    /* try { // try from 01052008 to 01152023 has its CatchHandler @ 01053598 */
    return -1;
  }
  iVar2 = close(iVar2);
  return iVar2;
}

