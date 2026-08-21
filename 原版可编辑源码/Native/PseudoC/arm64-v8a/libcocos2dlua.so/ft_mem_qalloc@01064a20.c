
long ft_mem_qalloc(long param_1,long param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  
                    /* try { // try from 01064a20 to 01164a2b has its CatchHandler @ 01064c58 */
                    /* try { // try from 01064a30 to 01164a3b has its CatchHandler @ 01064c54 */
  if (param_2 < 1) {
    iVar2 = 6;
    lVar1 = 0;
    if (param_2 == 0) {
      iVar2 = 0;
    }
  }
  else {
    lVar1 = (**(code **)(param_1 + 8))();
    iVar2 = (uint)(lVar1 == 0) << 6;
  }
  *param_3 = iVar2;
  return lVar1;
}

