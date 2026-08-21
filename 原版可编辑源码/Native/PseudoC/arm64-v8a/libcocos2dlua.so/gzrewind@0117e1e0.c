
__off_t gzrewind(undefined4 *param_1)

{
  __off_t _Var1;
  
  if (((param_1 == (undefined4 *)0x0) || (param_1[6] != 0x1c4f)) ||
     ((param_1[0x1b] != 0 && (param_1[0x1b] != -5)))) {
    _Var1 = 0xffffffff;
  }
  else {
    _Var1 = lseek(param_1[7],*(__off_t *)(param_1 + 0x12),0);
    if (_Var1 != -1) {
      *param_1 = 0;
      if (param_1[6] == 0x1c4f) {
        *(undefined8 *)(param_1 + 0x14) = 0;
        param_1[0x11] = 0;
      }
      param_1[0x1a] = 0;
      if (*(void **)(param_1 + 0x1c) != (void *)0x0) {
        if (param_1[0x1b] != -4) {
          free(*(void **)(param_1 + 0x1c));
        }
        *(undefined8 *)(param_1 + 0x1c) = 0;
      }
      _Var1 = 0;
      param_1[0x1b] = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      param_1[0x20] = 0;
    }
  }
  return _Var1;
}

