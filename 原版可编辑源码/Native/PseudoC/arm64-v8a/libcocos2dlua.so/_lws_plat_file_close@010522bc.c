
int _lws_plat_file_close(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1;
  free((int *)*param_1);
  *param_1 = 0;
                    /* try { // try from 010522e0 to 011522e3 has its CatchHandler @ 01053644 */
  iVar1 = close(iVar1);
  return iVar1;
}

