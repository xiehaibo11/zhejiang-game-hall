
int FUN_010632f0(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                undefined8 param_5)

{
  int iVar1;
  long lVar2;
  void *__s;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  lVar2 = FUN_01066efc(lVar3,param_3,&DAT_0145cbbb);
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
                    /* catch() { ... } // from try @ 0106343c with catch @ 010633b0
                       catch() { ... } // from try @ 010636bc with catch @ 010633b0 */
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
        (**(code **)(lVar4 + 0x10))(lVar4,__s);
      }
    }
    (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
  }
  return iVar1;
}

