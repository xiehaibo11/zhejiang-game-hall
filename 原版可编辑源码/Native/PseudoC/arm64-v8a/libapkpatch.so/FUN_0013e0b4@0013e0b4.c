
undefined8 *
FUN_0013e0b4(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,long param_5,
            long param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *__s;
  long lVar3;
  
  __s = (undefined8 *)(param_5 + 7U & 0xfffffffffffffff8);
  puVar1 = __s + 0x11;
  lVar3 = (param_5 + param_6) - (long)puVar1;
  memset(__s,0,0x88);
  __s[1] = puVar1;
  __s[2] = lVar3;
  *__s = param_4;
  __s[6] = puVar1;
  *(int *)(__s + 7) = (int)lVar3;
  iVar2 = FUN_0012e2b4(__s + 3,param_2,8,(long)*(char *)(param_1 + 0x28),param_3,
                       *(undefined4 *)(param_1 + 0x30),"1.2.11",0x70);
  if (iVar2 != 0) {
    __s = (undefined8 *)0x0;
  }
  return __s;
}

