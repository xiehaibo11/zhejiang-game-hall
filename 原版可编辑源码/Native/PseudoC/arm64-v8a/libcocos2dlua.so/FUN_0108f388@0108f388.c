
void FUN_0108f388(long *param_1)

{
  long lVar1;
  
  lVar1 = FT_List_Find(*(long *)(*param_1 + 800) + 200,param_1[0xb]);
  if (lVar1 != 0) {
    FT_Done_Size(param_1[0xb]);
    param_1[0xb] = 0;
  }
                    /* try { // try from 0108f3c0 to 0118f3cf has its CatchHandler @ 0108f518 */
  return;
}

