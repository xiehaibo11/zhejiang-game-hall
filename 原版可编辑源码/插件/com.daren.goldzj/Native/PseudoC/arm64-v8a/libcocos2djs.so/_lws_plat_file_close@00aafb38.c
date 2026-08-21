
int _lws_plat_file_close(undefined8 *param_1)

{
  int iVar1;
  
                    /* try { // try from 00aafb3c to 00bafc03 has its CatchHandler @ 00aaf888 */
  iVar1 = *(int *)*param_1;
  free((int *)*param_1);
  *param_1 = 0;
  iVar1 = close(iVar1);
  return iVar1;
}

