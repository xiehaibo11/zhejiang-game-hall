
void recordTombStoneFileHeader(undefined4 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  tm tStack_180;
  time_t local_148;
  char acStack_140 [64];
  undefined8 local_100 [11];
  undefined8 local_a4 [11];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  log2Console(4,"eup","create tombstone file: %s ",param_2 + 0x128);
  log2Console(4,"eup","Record crash banner.");
  iVar2 = __system_property_get("ro.build.fingerprint",local_a4);
  if (iVar2 < 1) {
    local_a4[0] = 0x6e776f6e6b6e75;
  }
  iVar2 = __system_property_get("ro.revision",local_100);
  if (iVar2 < 1) {
    local_100[0] = 0x6e776f6e6b6e75;
  }
  local_148 = time((time_t *)0x0);
  localtime_r(&local_148,&tStack_180);
  strftime(acStack_140,0x40,"%F %T",&tStack_180);
  log2Report(param_1,0,"--- --- --- --- --- --- --- Bugly NDK %s --- --- --- --- --- --- --- \n",
             "4.1.9.2");
  log2Report(param_1,0,"Build fingerprint: %s\n",local_a4);
  log2Report(param_1,0,"Revision: %s\n",local_100);
  log2Report(param_1,0,"ABI: %s\n","arm64");
  log2Report(param_1,0,"time: %s\n",acStack_140);
  log2Report(param_1,0,"pid: %d, tid: %d, name: %s  >>> %s <<<\n",*(undefined4 *)(param_2 + 4),
             *(undefined4 *)(param_2 + 8),param_2 + 0x428,param_2 + 0x228);
  if (*(int *)(param_2 + 0xc) != 0) {
    log2Report(param_1,0,"signal: %d (%s), code: %d (%s) fault addr: %s\n",*(int *)(param_2 + 0xc),
               param_2 + 0xd0,*(undefined4 *)(param_2 + 0x14),param_2 + 0x38,param_2 + 0xe8);
    log2Report(param_1,0,"si_errno:%d, si_errnoMsg:%s, sending pid:%d, sending uid:%d",
               *(undefined4 *)(param_2 + 0x10),param_2 + 0x50,*(undefined4 *)(param_2 + 0x18),
               *(undefined4 *)(param_2 + 0x1c));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

