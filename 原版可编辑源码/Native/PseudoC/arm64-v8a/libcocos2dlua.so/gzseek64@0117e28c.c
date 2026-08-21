
long gzseek64(uint *param_1,long param_2,uint param_3)

{
  uint uVar1;
  __off_t _Var2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((((param_1 == (uint *)0x0) || ((uVar3 = param_1[6], uVar3 != 0x79b1 && (uVar3 != 0x1c4f)))) ||
      ((uVar1 = param_1[0x1b], uVar1 != 0 && (uVar1 != 0xfffffffb)))) || (1 < param_3)) {
LAB_0117e2d8:
    param_2 = -1;
  }
  else {
    if (param_3 == 0) {
      param_2 = param_2 - *(long *)(param_1 + 4);
    }
    else if (param_1[0x1a] != 0) {
      param_2 = *(long *)(param_1 + 0x18) + param_2;
    }
    param_1[0x1a] = 0;
    if (((uVar3 == 0x1c4f) && (param_1[0x11] == 1)) && (-1 < *(long *)(param_1 + 4) + param_2)) {
      _Var2 = lseek(param_1[7],param_2 - (ulong)*param_1,1);
      if (_Var2 == -1) {
        return -1;
      }
      *param_1 = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x1a] = 0;
      if (*(void **)(param_1 + 0x1c) != (void *)0x0) {
        if (param_1[0x1b] != 0xfffffffc) {
          free(*(void **)(param_1 + 0x1c));
        }
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
      }
      lVar4 = *(long *)(param_1 + 4);
      param_1[0x1b] = 0;
      param_1[0x20] = 0;
      *(long *)(param_1 + 4) = lVar4 + param_2;
      return lVar4 + param_2;
    }
    if (param_2 < 0) {
      if (((uVar3 != 0x1c4f) || (param_2 = *(long *)(param_1 + 4) + param_2, param_2 < 0)) ||
         ((uVar1 != 0 && (uVar1 != 0xfffffffb)))) goto LAB_0117e2d8;
      _Var2 = lseek(param_1[7],*(__off_t *)(param_1 + 0x12),0);
      if (_Var2 == -1) {
        return -1;
      }
      uVar3 = param_1[6];
      *param_1 = 0;
      if (uVar3 == 0x1c4f) {
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x11] = 0;
      }
      param_1[0x1a] = 0;
      if (*(void **)(param_1 + 0x1c) != (void *)0x0) {
        if (param_1[0x1b] != 0xfffffffc) {
          free(*(void **)(param_1 + 0x1c));
          uVar3 = param_1[6];
        }
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
      }
      param_1[0x1b] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[0x20] = 0;
    }
    if (uVar3 == 0x1c4f) {
      uVar1 = *param_1;
      uVar3 = (uint)param_2;
      if ((long)(ulong)uVar1 <= param_2) {
        uVar3 = uVar1;
      }
      uVar5 = (ulong)uVar3;
      param_2 = param_2 - uVar5;
      *param_1 = uVar1 - uVar3;
      *(ulong *)(param_1 + 2) = *(long *)(param_1 + 2) + uVar5;
      *(ulong *)(param_1 + 4) = *(long *)(param_1 + 4) + uVar5;
    }
    if (param_2 != 0) {
      param_1[0x1a] = 1;
      *(long *)(param_1 + 0x18) = param_2;
    }
    param_2 = *(long *)(param_1 + 4) + param_2;
  }
  return param_2;
}

