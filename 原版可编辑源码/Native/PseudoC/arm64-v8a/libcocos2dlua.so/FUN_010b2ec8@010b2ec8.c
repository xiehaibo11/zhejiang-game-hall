
int FUN_010b2ec8(undefined8 *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_34;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b2e40 with catch @ 010b2ef4
                        */
  param_1[7] = param_3;
  uVar1 = ft_mem_realloc(param_3,8,0,(long)param_2,0,&local_34);
  param_1[5] = uVar1;
  if (local_34 == 0) {
    uVar1 = ft_mem_realloc(param_3,8,0,(long)param_2,0,&local_34);
    param_1[6] = uVar1;
    if (local_34 == 0) {
      *(int *)(param_1 + 4) = param_2;
      *(undefined4 *)((long)param_1 + 0x24) = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xdeadbeef;
      param_1[9] = 0x10b2f94;
      param_1[8] = 0x10b2ec8;
      param_1[0xb] = 0x10b3320;
      param_1[10] = 0x10b30f4;
      return 0;
    }
  }
  ft_mem_free(param_3,param_1[5]);
  param_1[5] = 0;
  return local_34;
}

