
/* cocos2d::unzGetGlobalInfo64(void*, cocos2d::unz_global_info64_s*) */

undefined8 cocos2d::unzGetGlobalInfo64(void *param_1,unz_global_info64_s *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != (void *)0x0) {
    uVar1 = *(undefined8 *)((long)param_1 + 0x68);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)((long)param_1 + 0x70);
    *(undefined8 *)param_2 = uVar1;
    return 0;
  }
  return 0xffffff9a;
}

