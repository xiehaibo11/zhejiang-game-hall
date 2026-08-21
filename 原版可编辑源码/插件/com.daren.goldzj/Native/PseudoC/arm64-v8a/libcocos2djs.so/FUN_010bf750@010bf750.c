
long FUN_010bf750(undefined8 param_1,long *param_2,ulong *param_3,long param_4,long param_5)

{
  long lVar1;
  void *__s;
  long lVar2;
  int __c;
  size_t __n;
  ulong uVar3;
  double dVar4;
  
  uVar3 = *param_3;
  if ((uVar3 & 1) == 0) {
    if (-1 < (int)uVar3) {
      __c = (int)uVar3 >> 1;
      if (0xfe < __c) {
        __c = 0xff;
      }
      goto LAB_010bf7cc;
    }
  }
  else {
    dVar4 = *(double *)(uVar3 + 3);
    if (0.0 < dVar4) {
      if (dVar4 <= 255.0) {
        __c = (int)(long)(double)(long)dVar4;
      }
      else {
        __c = 0xff;
      }
      goto LAB_010bf7cc;
    }
  }
  __c = 0;
LAB_010bf7cc:
  lVar2 = *param_2;
  lVar1 = *(long *)(lVar2 + 0x27) + (ulong)*(uint *)(lVar2 + 0x2f);
  __s = (void *)(lVar1 + param_4);
  __n = (lVar1 + param_5) - (long)__s;
  if (0 < (long)__n) {
    memset(__s,__c,__n);
    lVar2 = *param_2;
  }
  return lVar2;
}

