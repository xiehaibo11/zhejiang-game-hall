
/* cocos2d::fill_fopen_filefunc(cocos2d::zlib_filefunc_def_s*) */

void cocos2d::fill_fopen_filefunc(zlib_filefunc_def_s *param_1)

{
  *(code **)param_1 = FUN_0104062c;
  *(code **)(param_1 + 0x18) = FUN_010406b4;
  *(code **)(param_1 + 0x20) = FUN_010406bc;
  *(code **)(param_1 + 0x10) = FUN_0104069c;
  *(code **)(param_1 + 8) = FUN_01040684;
  *(code **)(param_1 + 0x30) = FUN_010406fc;
  *(code **)(param_1 + 0x28) = FUN_010406f4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}

