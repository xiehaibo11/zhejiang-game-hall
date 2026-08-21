
undefined4 lws_service_adjust_timeout(long param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  
                    /* try { // try from 01044fec to 01144ffb has its CatchHandler @ 01045838 */
                    /* try { // try from 01045004 to 01145027 has its CatchHandler @ 01045900 */
  if ((*(long *)(param_1 + (long)param_3 * 0x6f8 + 0xe8) == 0) &&
     (iVar1 = FUN_0104f374(param_1,param_3), iVar1 == 0)) {
                    /* try { // try from 01045028 to 0114502f has its CatchHandler @ 01045828 */
    for (plVar2 = *(long **)(param_1 + (long)param_3 * 0x6f8 + 0x110); plVar2 != (long *)0x0;
        plVar2 = (long *)*plVar2) {
      if (*(short *)((long)plVar2 + 0xb5c) != *(short *)((long)plVar2 + 0xb5e)) goto LAB_01045010;
    }
  }
  else {
LAB_01045010:
    param_2 = 0;
  }
  return param_2;
}

