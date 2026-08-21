
long FUN_010b1a3c(undefined8 param_1,long *param_2,undefined8 *param_3,long param_4,long param_5)

{
  long lVar1;
  void *__s;
  int __c;
  size_t __n;
  long lVar2;
  
  __c = FUN_010b2a7c(*param_3);
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

