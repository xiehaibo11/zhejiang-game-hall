
/* cocos2d::unzSetOffset64(void*, unsigned long long) */

undefined8 cocos2d::unzSetOffset64(void *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (param_1 != (void *)0x0) {
    *(undefined8 *)((long)param_1 + 0x80) = *(undefined8 *)((long)param_1 + 0x68);
    *(ulonglong *)((long)param_1 + 0x88) = param_2;
    uVar1 = FUN_009190b0(param_1,(long)param_1 + 0xb0,(long)param_1 + 0x138,0,0,0,0,0,0);
    *(ulong *)((long)param_1 + 0x90) = (ulong)((int)uVar1 == 0);
    return uVar1;
  }
  return 0xffffff9a;
}

