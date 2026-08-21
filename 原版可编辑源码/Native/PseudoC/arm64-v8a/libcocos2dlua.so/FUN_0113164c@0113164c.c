
undefined4
FUN_0113164c(long param_1,int *param_2,long param_3,undefined4 param_4,int param_5,float *param_6)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint *__ptr;
  uint uVar4;
  float fVar5;
  
  if (param_3 == 0) {
    uVar3 = 1;
    *param_2 = *param_2 + 1;
  }
  else {
    __ptr = _TIFFmalloc((ulong)(uint)(param_5 << 1) << 2);
    puVar1 = __ptr;
    iVar2 = param_5;
    if (__ptr == (uint *)0x0) {
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFWriteDirectoryTagCheckedRationalArray",
                   "Out of memory");
      uVar3 = 0;
    }
    else {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        fVar5 = *param_6;
        if (fVar5 <= 0.0) {
          *puVar1 = 0;
LAB_01131704:
          uVar4 = 1;
        }
        else {
          if (fVar5 == (float)(uint)(int)fVar5) {
            *puVar1 = (int)fVar5;
            goto LAB_01131704;
          }
          if (1.0 <= fVar5) {
            uVar4 = (uint)(4.2949673e+09 / fVar5);
            *puVar1 = 0xffffffff;
          }
          else {
            *puVar1 = (int)(fVar5 * 4.2949673e+09);
            uVar4 = 0xffffffff;
          }
        }
        puVar1[1] = uVar4;
        param_6 = param_6 + 1;
        puVar1 = puVar1 + 2;
      }
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabArrayOfLong(__ptr,(ulong)(uint)(param_5 << 1));
      }
      uVar3 = FUN_011317b0(param_1,param_2,param_3,param_4,5,param_5,param_5 << 3,__ptr);
      _TIFFfree(__ptr);
    }
  }
  return uVar3;
}

