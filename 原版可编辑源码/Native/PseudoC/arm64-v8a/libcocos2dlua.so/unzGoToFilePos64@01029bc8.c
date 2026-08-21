
/* cocos2d::unzGoToFilePos64(void*, cocos2d::unz64_file_pos_s const*) */

undefined8 cocos2d::unzGoToFilePos64(void *param_1,unz64_file_pos_s *param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xffffff9a;
  if ((param_1 != (void *)0x0) && (param_2 != (unz64_file_pos_s *)0x0)) {
    auVar2 = NEON_ext(*(undefined1 (*) [16])param_2,*(undefined1 (*) [16])param_2,8,1);
    *(long *)((long)param_1 + 0x88) = auVar2._8_8_;
    *(long *)((long)param_1 + 0x80) = auVar2._0_8_;
    uVar1 = FUN_01028a58(param_1,(long)param_1 + 0xb0,(long)param_1 + 0x138,0,0,0,0,0,0);
    *(ulong *)((long)param_1 + 0x90) = (ulong)((int)uVar1 == 0);
  }
  return uVar1;
}

