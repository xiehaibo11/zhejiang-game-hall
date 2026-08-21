
/* cocos2d::fseek_mem_func(void*, void*, unsigned long, int) */

undefined8 cocos2d::fseek_mem_func(void *param_1,void *param_2,ulong param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_4 != 0) {
    if (param_4 == 1) {
      lVar2 = 0x18;
    }
    else {
      if (param_4 != 2) {
        return 0xffffffffffffffff;
      }
      lVar2 = 0x10;
    }
    param_3 = *(long *)((long)param_2 + lVar2) + param_3;
  }
  if (*(ulong *)((long)param_2 + 8) < param_3) {
    uVar1 = 1;
  }
  else {
    uVar3 = *(ulong *)((long)param_2 + 0x10);
    if (uVar3 <= param_3 && param_3 - uVar3 != 0) {
      memset((void *)(*(long *)param_2 + uVar3),0,param_3 - uVar3);
    }
    uVar1 = 0;
    *(ulong *)((long)param_2 + 0x18) = param_3;
  }
  return uVar1;
}

