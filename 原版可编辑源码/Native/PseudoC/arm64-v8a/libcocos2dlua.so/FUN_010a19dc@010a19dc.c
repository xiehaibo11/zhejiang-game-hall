
int FUN_010a19dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 local_28;
  
                    /* try { // try from 010a19f0 to 011a19f7 has its CatchHandler @ 010a1ac4 */
                    /* try { // try from 010a19f8 to 011a1aeb has its CatchHandler @ 010a189c */
  iVar1 = FUN_0109ef40(param_1,param_2,&local_28);
  if (iVar1 == 0) {
    ft_mem_strcpyn(param_3,local_28,param_4);
  }
  return iVar1;
}

