
void FUN_01838484(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_120 [8];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 *local_e0;
  undefined1 **ppuStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  char *local_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  
  uStack_78 = 0xffffff80ffffffc8;
  local_118 = param_2;
  uStack_110 = param_3;
  local_108 = param_4;
  local_100 = param_5;
  uStack_f8 = param_6;
  local_f0 = param_7;
  uStack_e8 = param_8;
  local_90 = (undefined1 *)register0x00000008;
  ppuStack_88 = &local_e0;
  puStack_80 = auStack_120;
  vfprintf((FILE *)__cxa_thread_atexit_impl,param_1,&local_90);
  fputc(10,(FILE *)__cxa_thread_atexit_impl);
  uStack_c8 = 0xffffff80ffffffc8;
  local_e0 = (undefined1 *)register0x00000008;
  ppuStack_d8 = &local_e0;
  puStack_d0 = auStack_120;
  vasprintf(&local_98,param_1,&local_e0);
  android_set_abort_message(local_98);
  openlog("libc++abi",0,0);
  syslog(2,"%s",local_98);
  closelog();
                    /* WARNING: Subroutine does not return */
  abort();
}

