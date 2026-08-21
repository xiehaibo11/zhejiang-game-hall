
void FUN_00e49d7c(long *param_1)

{
  long lVar1;
  
  lVar1 = FT_List_Find(*(long *)(*param_1 + 0x328) + 200,param_1[0xb]);
  if (lVar1 != 0) {
    FT_Done_Size(param_1[0xb]);
    param_1[0xb] = 0;
  }
  return;
}

