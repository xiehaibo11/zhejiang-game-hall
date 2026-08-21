
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recordTombStoneFileHeader(undefined4 param_1,long param_2)

{
  time_t local_148;
  tm tStack_140;
  char acStack_108 [64];
  undefined1 auStack_c8 [96];
  undefined1 auStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  log2Console(4,"CrashReport-Native","create tombstone file: %s ",param_2 + 0x128);
  log2Console(4,"CrashReport-Native","Record crash banner.");
  property_get("ro.build.fingerprint",auStack_c8,"unknown");
  property_get("ro.revision",auStack_68,"unknown");
  local_148 = time((time_t *)0x0);
  localtime_r(&local_148,&tStack_140);
  strftime(acStack_108,0x40,"%F %T",&tStack_140);
  log2Report(param_1,0,"--- --- --- --- --- --- --- Bugly NDK %s --- --- --- --- --- --- --- \n",
             "3.9.2");
  log2Report(param_1,0,"Build fingerprint: %s\n",auStack_c8);
  log2Report(param_1,0,"Revision: %s\n",auStack_68);
  log2Report(param_1,0,"ABI: %s\n","arm64");
  log2Report(param_1,0,"time: %s\n",acStack_108);
  log2Report(param_1,0,"pid: %d, tid: %d, name: %s  >>> %s <<<\n",*(undefined4 *)(param_2 + 4),
             *(undefined4 *)(param_2 + 8),param_2 + 0x428,param_2 + 0x228);
  if (*(int *)(param_2 + 0xc) != 0) {
    log2Report(param_1,0,"signal: %d (%s), code: %d (%s) fault addr: %s\n",*(int *)(param_2 + 0xc),
               param_2 + 0xd0,*(undefined4 *)(param_2 + 0x14),param_2 + 0x38,param_2 + 0xe8);
    log2Report(param_1,0,"si_errno:%d, si_errnoMsg:%s, sending pid:%d, sending uid:%d",
               *(undefined4 *)(param_2 + 0x10),param_2 + 0x50,*(undefined4 *)(param_2 + 0x18),
               *(undefined4 *)(param_2 + 0x1c));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

