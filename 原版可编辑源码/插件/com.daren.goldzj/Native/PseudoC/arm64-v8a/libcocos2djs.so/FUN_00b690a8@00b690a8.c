
undefined8 FUN_00b690a8(int *param_1,void *param_2,void *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
                    /* try { // try from 00b690ac to 00c690cf has its CatchHandler @ 00b6903c */
                    /* try { // try from 00b690d0 to 00c690db has its CatchHandler @ 00b691a0 */
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == (void *)0x0) {
    return 0;
  }
  if (param_3 == (void *)0x0) {
    return 0;
  }
                    /* try { // try from 00b690dc to 00c69103 has its CatchHandler @ 00b6903c */
  if (*param_1 == 1) {
    piVar3 = (int *)**(undefined8 **)(param_1 + 2);
    iVar1 = *piVar3;
    if (iVar1 < 0) {
      return 0;
    }
    if (param_4 < iVar1) {
      return 0;
    }
    if (0 < iVar1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b69104 with catch @ 00b6919c
                       catch(type#1 @ 00000000) { ... } // from try @ 00b6912c with catch @ 00b6919c
                       catch(type#1 @ 00000000) { ... } // from try @ 00b69154 with catch @ 00b6919c
                        */
      memcpy(param_2,*(void **)(piVar3 + 2),(long)iVar1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b690a4 with catch @ 00b691a0
                       catch(type#1 @ 00000000) { ... } // from try @ 00b690d0 with catch @ 00b691a0
                        */
      if ((*(ulong *)(piVar3 + 4) & 7) != 0) {
        *(byte *)((long)param_2 + (long)*piVar3 + -1) =
             *(byte *)((long)param_2 + (long)*piVar3 + -1) &
             ((byte)(0xff >> (ulong)(8U - (int)(*(ulong *)(piVar3 + 4) & 7) & 0x1f)) ^ 0xff);
      }
    }
    memset((void *)((long)param_2 + (long)*piVar3),0,(long)param_4 - (long)*piVar3);
    piVar3 = *(int **)(*(long *)(param_1 + 2) + 8);
  }
  else {
    if (*param_1 != 0) {
      return 0;
    }
    piVar3 = *(int **)(param_1 + 2);
    iVar1 = *piVar3;
    if (iVar1 < 0) {
      return 0;
    }
    if (param_4 < iVar1) {
      return 0;
    }
                    /* try { // try from 00b69104 to 00c6910b has its CatchHandler @ 00b6919c */
                    /* try { // try from 00b6910c to 00c6912b has its CatchHandler @ 00b6903c */
    if (0 < iVar1) {
      memcpy(param_2,*(void **)(piVar3 + 2),(long)iVar1);
      if ((*(ulong *)(piVar3 + 4) & 7) != 0) {
                    /* try { // try from 00b6912c to 00c69133 has its CatchHandler @ 00b6919c */
                    /* try { // try from 00b69134 to 00c69153 has its CatchHandler @ 00b6903c */
        *(byte *)((long)param_2 + (long)*piVar3 + -1) =
             *(byte *)((long)param_2 + (long)*piVar3 + -1) &
             ((byte)(0xff >> (ulong)(8U - (int)(*(ulong *)(piVar3 + 4) & 7) & 0x1f)) ^ 0xff);
      }
    }
                    /* try { // try from 00b69154 to 00c6915f has its CatchHandler @ 00b6919c */
                    /* try { // try from 00b69160 to 00c691a3 has its CatchHandler @ 00b6903c */
    memset((void *)((long)param_2 + (long)*piVar3),0,(long)param_4 - (long)*piVar3);
    piVar3 = *(int **)(param_1 + 2);
  }
  iVar1 = *piVar3;
  uVar2 = 0;
  if ((-1 < iVar1) && (iVar1 <= param_4)) {
    if (0 < iVar1) {
      memcpy(param_3,*(void **)(piVar3 + 2),(long)iVar1);
      if ((*(ulong *)(piVar3 + 4) & 7) != 0) {
        *(byte *)((long)param_3 + (long)*piVar3 + -1) =
             (byte)(0xff >> (ulong)(8U - (int)(*(ulong *)(piVar3 + 4) & 7) & 0x1f)) |
             *(byte *)((long)param_3 + (long)*piVar3 + -1);
      }
    }
    memset((void *)((long)param_3 + (long)*piVar3),0xff,(long)param_4 - (long)*piVar3);
    uVar2 = 1;
  }
                    /* try { // try from 00b69274 to 00c69423 has its CatchHandler @ 00b69274
                       catch() { ... } // from try @ 00b69274 with catch @ 00b69274
                       catch() { ... } // from try @ 00b69460 with catch @ 00b69274 */
  return uVar2;
}

