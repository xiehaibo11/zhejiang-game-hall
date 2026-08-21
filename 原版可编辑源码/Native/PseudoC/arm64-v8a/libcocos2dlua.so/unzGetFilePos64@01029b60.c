
/* cocos2d::unzGetFilePos64(void*, cocos2d::unz64_file_pos_s*) */

undefined8 cocos2d::unzGetFilePos64(void *param_1,unz64_file_pos_s *param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xffffff9a;
  if ((param_1 != (void *)0x0) && (param_2 != (unz64_file_pos_s *)0x0)) {
    if (*(long *)((long)param_1 + 0x90) == 0) {
      return 0xffffff9c;
    }
    uVar1 = 0;
    auVar2 = NEON_ext(*(undefined1 (*) [16])((long)param_1 + 0x80),
                      *(undefined1 (*) [16])((long)param_1 + 0x80),8,1);
    *(long *)(param_2 + 8) = auVar2._8_8_;
    *(long *)param_2 = auVar2._0_8_;
  }
  return uVar1;
}

