
undefined8 FUN_00de764c(void *param_1,uint param_2)

{
  if ((param_2 & 0xffffff00) != 0x200) {
    return 0;
  }
  if (param_1 != (void *)0x0) {
    memset(param_1,0,0xa0);
    return 1;
  }
  return 1;
}

