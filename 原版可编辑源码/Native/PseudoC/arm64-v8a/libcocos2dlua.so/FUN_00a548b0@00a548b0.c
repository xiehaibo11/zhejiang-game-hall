
void FUN_00a548b0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    FUN_00a54d8c(param_1 + 0x618,"AUTH %s %s",param_2,param_3);
    return;
  }
  FUN_00a54d8c(param_1 + 0x618,"AUTH %s",param_2);
  return;
}

