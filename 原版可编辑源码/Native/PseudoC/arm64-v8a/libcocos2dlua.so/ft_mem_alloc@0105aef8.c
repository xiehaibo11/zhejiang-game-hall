
void * ft_mem_alloc(long param_1,size_t param_2,undefined4 *param_3)

{
  void *__s;
  undefined4 uVar1;
  
  if ((long)param_2 < 1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105af1c with catch @ 0105af44
                        */
    uVar1 = 6;
    __s = (void *)0x0;
    if (param_2 == 0) {
      uVar1 = 0;
    }
  }
  else {
                    /* try { // try from 0105af1c to 0115af2b has its CatchHandler @ 0105af44 */
    __s = (void *)(**(code **)(param_1 + 8))(param_1,param_2);
    if (__s == (void *)0x0) {
      uVar1 = 0x40;
    }
    else {
      memset(__s,0,param_2);
      uVar1 = 0;
    }
  }
                    /* catch() { ... } // from try @ 0105af90 with catch @ 0105af58 */
  *param_3 = uVar1;
  return __s;
}

