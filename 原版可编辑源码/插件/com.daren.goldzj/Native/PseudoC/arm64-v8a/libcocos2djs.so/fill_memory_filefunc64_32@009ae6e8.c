
/* cocos2d::fill_memory_filefunc64_32(cocos2d::zlib_filefunc64_32_def_s*) */

void cocos2d::fill_memory_filefunc64_32(zlib_filefunc64_32_def_s *param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(code **)(param_1 + 0x40) = fopen_mem_func;
  *(code **)param_1 = fopen_mem_func64_32;
  *(code **)(param_1 + 0x48) = ftell_mem_func;
  *(code **)(param_1 + 0x50) = fseek_mem_func;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(code **)(param_1 + 0x10) = fwrite_mem_func;
  *(code **)(param_1 + 8) = fread_mem_func;
  *(code **)(param_1 + 0x30) = ferror_mem_func;
  *(code **)(param_1 + 0x28) = fclose_mem_func;
  return;
}

