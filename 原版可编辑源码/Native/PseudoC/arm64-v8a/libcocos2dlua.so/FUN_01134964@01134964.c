
undefined8 FUN_01134964(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  
  lVar3 = *(long *)(param_1 + 0x350);
  *(undefined8 *)(lVar3 + 0x48) = 0x800000000;
  *(undefined4 *)(lVar3 + 0x78) = 0;
  if (*(void **)(lVar3 + 0x80) != (void *)0x0) {
    _TIFFmemset(*(void **)(lVar3 + 0x80),0,*(size_t *)(lVar3 + 8));
  }
  if ((*(byte *)(lVar3 + 0x20) & 1) == 0) {
    iVar1 = 0;
    iVar2 = 0;
  }
  else {
                    /* try { // try from 011349c8 to 012349d3 has its CatchHandler @ 011349f4 */
    fVar4 = *(float *)(param_1 + 0xa4) * 2.54;
    if (*(short *)(param_1 + 0xa8) != 3) {
      fVar4 = *(float *)(param_1 + 0xa4);
    }
                    /* try { // try from 011349d4 to 012349eb has its CatchHandler @ 011349ec */
    iVar1 = 4;
    if (fVar4 <= 150.0) {
      iVar1 = 2;
    }
    iVar2 = iVar1 + -1;
  }
  *(int *)(lVar3 + 0x88) = iVar2;
  *(int *)(lVar3 + 0x8c) = iVar1;
  *(undefined4 *)(lVar3 + 0x90) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 011349d4 with catch @ 011349ec
                       try { // try from 011349ec to 01234a07 has its CatchHandler @ 01134894 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 011349c8 with catch @ 011349f4
                        */
  return 1;
}

