
/* cocos2d::unzGetFilePos(void*, cocos2d::unz_file_pos_s*) */

undefined8 cocos2d::unzGetFilePos(void *param_1,unz_file_pos_s *param_2)

{
  undefined1 auVar1 [16];
  
  if (param_1 == (void *)0x0) {
    return 0xffffff9a;
  }
  if (*(long *)((long)param_1 + 0x90) != 0) {
    auVar1 = NEON_ext(*(undefined1 (*) [16])((long)param_1 + 0x80),
                      *(undefined1 (*) [16])((long)param_1 + 0x80),8,1);
    *(long *)(param_2 + 8) = auVar1._8_8_;
    *(long *)param_2 = auVar1._0_8_;
    return 0;
  }
  return 0xffffff9c;
}

