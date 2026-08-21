
/* cocos2d::unzSetOffset(void*, unsigned long) */

undefined8 cocos2d::unzSetOffset(void *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (param_1 != (void *)0x0) {
    *(undefined8 *)((long)param_1 + 0x80) = *(undefined8 *)((long)param_1 + 0x68);
    *(ulong *)((long)param_1 + 0x88) = param_2;
    uVar1 = FUN_01028a58(param_1,(long)param_1 + 0xb0,(long)param_1 + 0x138,0,0,0,0,0,0);
    *(ulong *)((long)param_1 + 0x90) = (ulong)((int)uVar1 == 0);
    return uVar1;
  }
  return 0xffffff9a;
}

