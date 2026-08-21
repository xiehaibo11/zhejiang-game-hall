
/* dtNodePool::dtNodePool(int, int) */

void __thiscall dtNodePool::dtNodePool(dtNodePool *this,int param_1,int param_2)

{
  undefined8 uVar1;
  void *__s;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_1;
  *(int *)(this + 0x1c) = param_2;
  *(undefined4 *)(this + 0x20) = 0;
  uVar1 = dtAlloc(param_1 * 0x1c,0);
  *(undefined8 *)this = uVar1;
  uVar1 = dtAlloc(*(int *)(this + 0x18) << 1,0);
  *(undefined8 *)(this + 0x10) = uVar1;
  __s = (void *)dtAlloc(param_2 << 1,0);
  *(void **)(this + 8) = __s;
  memset(__s,0xff,(long)*(int *)(this + 0x1c) << 1);
  memset(*(void **)(this + 0x10),0xff,(long)*(int *)(this + 0x18) << 1);
  return;
}

