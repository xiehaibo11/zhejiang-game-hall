
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf6128(ulong param_1)

{
  int iVar1;
  FILE *__stream;
  undefined8 uVar2;
  undefined8 local_410;
  char acStack_408 [1024];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  snprintf(acStack_408,0x400,"/sys/devices/system/cpu/cpu%u/cpufreq/scaling_cur_freq",
           param_1 & 0xffffffff);
  __stream = (FILE *)uv__open_file(acStack_408);
  if (__stream == (FILE *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = fscanf(__stream,"%lu",&local_410);
    if (iVar1 != 1) {
      local_410 = 0;
    }
    fclose(__stream);
    uVar2 = local_410;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

