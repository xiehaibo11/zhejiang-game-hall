
void * ft_mem_realloc(long param_1,ulong param_2,ulong param_3,ulong param_4,void *param_5,
                     int *param_6)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  ulong uVar4;
  size_t __n;
  
                    /* try { // try from 0105b22c to 0115b23b has its CatchHandler @ 0105b24c */
  if ((long)(param_3 | param_2 | param_4) < 0) {
    iVar3 = 6;
    goto LAB_0105b2a4;
  }
  if ((param_2 == 0) || (param_4 == 0)) {
    if (param_5 == (void *)0x0) {
LAB_0105b324:
      iVar3 = 0;
                    /* catch() { ... } // from try @ 0105b360 with catch @ 0105b328 */
      uVar4 = param_4 - param_3;
      if (param_4 - param_3 == 0 || (long)param_4 < (long)param_3) goto LAB_0105b2a4;
    }
    else {
      (**(code **)(param_1 + 0x10))(param_1,param_5);
      iVar3 = 0;
      param_5 = (void *)0x0;
      uVar4 = param_4 - param_3;
                    /* try { // try from 0105b288 to 0115b297 has its CatchHandler @ 0105b2b0 */
      if (uVar4 == 0 || (long)param_4 < (long)param_3) goto LAB_0105b2a4;
    }
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105b22c with catch @ 0105b24c
                        */
    lVar1 = 0;
    if (param_2 != 0) {
      lVar1 = 0x7fffffff / (long)param_2;
    }
    if (lVar1 < (long)param_4) {
      iVar3 = 10;
      goto LAB_0105b2a4;
    }
    if (param_3 == 0) {
      __n = param_4 * param_2;
      if (0 < (long)__n) {
        param_5 = (void *)(**(code **)(param_1 + 8))(param_1,__n);
        if (param_5 == (void *)0x0) {
          iVar3 = 0x40;
          goto LAB_0105b2a4;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105b2ec with catch @ 0105b314
                        */
        memset(param_5,0,__n);
        goto LAB_0105b324;
      }
      iVar3 = 6;
      param_5 = (void *)0x0;
      if (__n == 0) {
        iVar3 = 0;
      }
      uVar4 = param_4;
      if ((long)param_4 < 1) goto LAB_0105b2a4;
    }
    else {
      pvVar2 = (void *)(**(code **)(param_1 + 0x18))
                                 (param_1,param_3 * param_2,param_4 * param_2,param_5);
      iVar3 = (uint)(pvVar2 == (void *)0x0) << 6;
      if (pvVar2 != (void *)0x0) {
        param_5 = pvVar2;
      }
                    /* try { // try from 0105b2ec to 0115b2fb has its CatchHandler @ 0105b314 */
      uVar4 = param_4 - param_3;
      if (param_4 - param_3 == 0 || (long)param_4 < (long)param_3) goto LAB_0105b2a4;
    }
  }
  if (iVar3 == 0) {
    memset((void *)((long)param_5 + param_3 * param_2),0,uVar4 * param_2);
    iVar3 = 0;
  }
LAB_0105b2a4:
  *param_6 = iVar3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105b288 with catch @ 0105b2b0
                        */
  return param_5;
}

