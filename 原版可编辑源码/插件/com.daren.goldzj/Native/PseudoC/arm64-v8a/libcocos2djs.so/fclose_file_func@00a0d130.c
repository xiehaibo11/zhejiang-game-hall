
int fclose_file_func(undefined8 param_1,FILE *param_2)

{
  int iVar1;
  
                    /* try { // try from 00a0d130 to 00b0d137 has its CatchHandler @ 00a0d290 */
  iVar1 = fclose(param_2);
  return iVar1;
}

