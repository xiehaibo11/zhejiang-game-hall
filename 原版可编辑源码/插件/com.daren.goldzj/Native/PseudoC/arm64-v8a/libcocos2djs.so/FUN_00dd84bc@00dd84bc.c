
undefined8 FUN_00dd84bc(long param_1)

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
    fVar4 = *(float *)(param_1 + 0xa4) * 2.54;
    if (*(short *)(param_1 + 0xa8) != 3) {
      fVar4 = *(float *)(param_1 + 0xa4);
    }
    iVar1 = 4;
    if (fVar4 <= 150.0) {
      iVar1 = 2;
    }
    iVar2 = iVar1 + -1;
  }
  *(int *)(lVar3 + 0x88) = iVar2;
  *(int *)(lVar3 + 0x8c) = iVar1;
  *(undefined4 *)(lVar3 + 0x90) = 0;
  return 1;
}

