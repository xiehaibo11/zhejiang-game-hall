
undefined8 FUN_00e47934(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  
  FUN_00e47a30();
  if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1ac)) {
    if (*param_4 != 0) {
      lVar1 = FT_MulDiv();
      *param_4 = lVar1;
    }
    if (param_4[1] != 0) {
      lVar1 = FT_MulDiv(param_4[1],*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1ac)
                       );
      param_4[1] = lVar1;
    }
  }
  return 0;
}

