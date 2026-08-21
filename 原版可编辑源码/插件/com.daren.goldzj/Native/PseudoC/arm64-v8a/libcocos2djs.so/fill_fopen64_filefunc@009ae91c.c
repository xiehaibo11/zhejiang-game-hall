
/* cocos2d::fill_fopen64_filefunc(cocos2d::zlib_filefunc64_def_s*) */

void cocos2d::fill_fopen64_filefunc(zlib_filefunc64_def_s *param_1)

{
  *(code **)param_1 = FUN_009ae97c;
  *(code **)(param_1 + 0x18) = FUN_009ae9d4;
  *(code **)(param_1 + 0x20) = FUN_009ae9dc;
  *(code **)(param_1 + 0x10) = FUN_009ae8b4;
  *(code **)(param_1 + 8) = FUN_009ae89c;
  *(code **)(param_1 + 0x30) = FUN_009ae914;
  *(code **)(param_1 + 0x28) = FUN_009ae90c;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}

