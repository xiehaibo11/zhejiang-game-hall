
void FUN_00e883d8(long *param_1,long param_2)

{
  if (*param_1 != 0) {
    (*(code *)param_1[0x1d])(*param_1,param_2,0);
    param_1[2] = param_2;
    ogg_sync_reset(param_1[4]);
    return;
  }
  return;
}

