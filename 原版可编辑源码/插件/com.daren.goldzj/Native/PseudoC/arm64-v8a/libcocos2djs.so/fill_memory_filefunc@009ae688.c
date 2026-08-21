
/* cocos2d::fill_memory_filefunc(cocos2d::zlib_filefunc_def_s*) */

void cocos2d::fill_memory_filefunc(zlib_filefunc_def_s *param_1)

{
  *(code **)param_1 = fopen_mem_func;
  *(code **)(param_1 + 0x18) = ftell_mem_func;
  *(code **)(param_1 + 0x20) = fseek_mem_func;
  *(code **)(param_1 + 0x10) = fwrite_mem_func;
  *(code **)(param_1 + 8) = fread_mem_func;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(code **)(param_1 + 0x30) = ferror_mem_func;
  *(code **)(param_1 + 0x28) = fclose_mem_func;
  return;
}

