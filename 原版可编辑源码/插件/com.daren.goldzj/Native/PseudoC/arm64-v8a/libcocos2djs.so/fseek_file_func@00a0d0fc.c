
undefined8 fseek_file_func(undefined8 param_1,FILE *param_2,long param_3,uint param_4)

{
  if (param_4 < 3) {
    fseek(param_2,param_3,param_4);
    return 0;
  }
  return 0xffffffffffffffff;
}

