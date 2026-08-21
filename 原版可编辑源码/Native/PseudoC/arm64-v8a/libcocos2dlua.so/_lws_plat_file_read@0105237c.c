
undefined4 _lws_plat_file_read(int *param_1,ssize_t *param_2,void *param_3,size_t param_4)

{
  ssize_t sVar1;
  undefined4 uVar2;
  
  sVar1 = read(*param_1,param_3,param_4);
  if (sVar1 == -1) {
    sVar1 = 0;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + sVar1;
  }
                    /* try { // try from 010523c4 to 011523db has its CatchHandler @ 01053984 */
  *param_2 = sVar1;
  return uVar2;
}

