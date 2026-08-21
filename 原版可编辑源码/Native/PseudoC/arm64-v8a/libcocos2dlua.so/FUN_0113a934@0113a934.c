
void FUN_0113a934(long param_1,float *param_2,long param_3)

{
  int iVar1;
  ushort uVar2;
  ushort *puVar3;
  double dVar4;
  
                    /* try { // try from 0113a960 to 0123a96b has its CatchHandler @ 0113a9c0 */
  if (0 < param_3) {
                    /* try { // try from 0113a96c to 0123a9ef has its CatchHandler @ 01139f50 */
    param_3 = param_3 + 1;
    puVar3 = *(ushort **)(param_1 + 0x10);
    do {
      dVar4 = (double)*param_2;
      if (1.8371976e+19 <= dVar4) {
        uVar2 = 0x7fff;
      }
      else if (dVar4 <= -1.8371976e+19) {
        uVar2 = 0xffff;
      }
      else {
        iVar1 = *(int *)(param_1 + 4);
        if (dVar4 <= 5.4136769e-20) {
          if (-5.4136769e-20 <= dVar4) {
            uVar2 = 0;
          }
          else {
                    /* catch() { ... } // from try @ 0113a960 with catch @ 0113a9c0 */
            dVar4 = log(-dVar4);
                    /* catch() { ... } // from try @ 0113a73c with catch @ 0113a9c8 */
                    /* catch() { ... } // from try @ 0113a5a4 with catch @ 0113a9d0 */
            dVar4 = (dVar4 * 1.4426950408889634 + 64.0) * 256.0;
            if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 0113a484 with catch @ 0113a9d8 */
              iVar1 = rand();
                    /* catch() { ... } // from try @ 0113a558 with catch @ 0113a9e0 */
                    /* catch() { ... } // from try @ 0113a06c with catch @ 0113a9e8 */
                    /* try { // try from 0113a9f0 to 0123ab4f has its CatchHandler @ 0113a9f0
                       catch() { ... } // from try @ 0113a9f0 with catch @ 0113a9f0
                       catch() { ... } // from try @ 0113ae1c with catch @ 0113a9f0 */
              dVar4 = dVar4 + (double)iVar1 * 4.656612875245797e-10 + -0.5;
            }
            uVar2 = (ushort)(int)dVar4 | 0x8000;
          }
        }
        else {
          dVar4 = log(dVar4);
          dVar4 = (dVar4 * 1.4426950408889634 + 64.0) * 256.0;
          if (iVar1 != 0) {
            iVar1 = rand();
            dVar4 = dVar4 + (double)iVar1 * 4.656612875245797e-10 + -0.5;
          }
          uVar2 = (ushort)(int)dVar4;
        }
      }
      param_3 = param_3 + -1;
      *puVar3 = uVar2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    } while (1 < param_3);
  }
  return;
}

