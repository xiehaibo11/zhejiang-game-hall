
int FUN_01063684(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                undefined8 param_5)

{
  int iVar1;
  long lVar2;
  void *__s;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
                    /* try { // try from 010636b0 to 011636bb has its CatchHandler @ 01063724 */
                    /* try { // try from 010636bc to 01163777 has its CatchHandler @ 010633b0 */
  lVar2 = FUN_01066efc(lVar3,param_3,"%");
  if (lVar2 == 0) {
    iVar1 = 0x40;
  }
  else {
    lVar4 = *param_1;
    __s = (void *)(**(code **)(lVar4 + 8))(lVar4,0x50);
    if (__s == (void *)0x0) {
      iVar1 = 0x40;
    }
    else {
      memset(__s,0,0x50);
      *(long *)((long)__s + 0x38) = lVar4;
      iVar1 = FT_Stream_Open(__s,lVar2);
      *(long *)((long)__s + 0x20) = lVar2;
      if (iVar1 == 0) {
        *(long *)((long)__s + 0x38) = lVar4;
        iVar1 = FUN_01066be4(__s,0x51607,param_5);
        lVar4 = *(long *)((long)__s + 0x38);
        if (*(code **)((long)__s + 0x30) != (code *)0x0) {
          (**(code **)((long)__s + 0x30))(__s);
        }
        (**(code **)(lVar4 + 0x10))(lVar4,__s);
        if (iVar1 == 0) {
          *param_4 = lVar2;
          return 0;
        }
      }
      else {
                    /* catch() { ... } // from try @ 0106367c with catch @ 01063720 */
        (**(code **)(lVar4 + 0x10))(lVar4,__s);
                    /* catch() { ... } // from try @ 01063424 with catch @ 01063724
                       catch() { ... } // from try @ 010635d0 with catch @ 01063724
                       catch() { ... } // from try @ 010636b0 with catch @ 01063724 */
      }
    }
    (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
  }
  return iVar1;
}

