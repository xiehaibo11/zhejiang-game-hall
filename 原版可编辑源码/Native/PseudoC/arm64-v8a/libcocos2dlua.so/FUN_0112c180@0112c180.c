
bool FUN_0112c180(int param_1,undefined8 *param_2,size_t *param_3)

{
  size_t __len;
  int iVar1;
  void *pvVar2;
  size_t local_80;
  
  iVar1 = fstat(param_1,(stat *)&stack0xffffffffffffff50);
  __len = 0;
  if (-1 < iVar1) {
    __len = local_80;
  }
  pvVar2 = mmap((void *)0x0,__len,1,1,param_1,0);
  *param_2 = pvVar2;
  if (pvVar2 != (void *)0xffffffffffffffff) {
    *param_3 = __len;
  }
  return pvVar2 != (void *)0xffffffffffffffff;
}

