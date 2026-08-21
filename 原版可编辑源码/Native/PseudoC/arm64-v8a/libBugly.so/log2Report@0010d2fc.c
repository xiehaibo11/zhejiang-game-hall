
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void log2Report(int param_1,char param_2,char *param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  size_t __n;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  lVar1 = ___stack_chk_guard;
  local_28 = param_4;
  local_20 = param_5;
  local_18 = param_6;
  local_10 = param_7;
  local_8 = param_8;
  if (-1 < param_1) {
    uStack_e8 = 0xffffff80ffffffd8;
    local_100 = (undefined1 *)register0x00000008;
    puStack_f8 = (undefined1 *)register0x00000008;
    local_f0 = auStack_30;
    vsnprintf(&DAT_0013ee00,0x400,param_3,&local_100);
    __n = strlen(&DAT_0013ee00);
    write(param_1,&DAT_0013ee00,__n);
  }
  if ((param_2 == '\0') && (currentMode < 5)) {
    uStack_e8 = 0xffffff80ffffffd8;
    local_100 = (undefined1 *)register0x00000008;
    puStack_f8 = (undefined1 *)register0x00000008;
    local_f0 = auStack_30;
    __android_log_vprint(4,"CrashReport-Native",param_3,&local_100);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

