
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void appendNativeLog(long param_1,long param_2,long param_3)

{
  char *__s;
  uint uVar1;
  int iVar2;
  tm *__tp;
  ulong uVar3;
  undefined1 uVar4;
  time_t local_7890;
  char local_7888 [30848];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0 || (param_2 == 0 || param_3 == 0)) {
    uVar4 = 0;
  }
  else {
    if (DAT_0013f328 == 0) {
      FUN_00110bfc();
    }
    __s = local_7888 + 0x80;
    memset(__s,0,0x7800);
    local_7888[0] = '\0';
    local_7888[1] = '\0';
    local_7888[2] = '\0';
    local_7888[3] = '\0';
    local_7888[4] = '\0';
    local_7888[5] = '\0';
    local_7888[6] = '\0';
    local_7888[7] = '\0';
    local_7888[8] = '\0';
    local_7888[9] = '\0';
    local_7888[10] = '\0';
    local_7888[0xb] = '\0';
    local_7888[0xc] = '\0';
    local_7888[0xd] = '\0';
    local_7888[0xe] = '\0';
    local_7888[0xf] = '\0';
    local_7888[0x10] = '\0';
    local_7888[0x11] = '\0';
    local_7888[0x12] = '\0';
    local_7888[0x13] = '\0';
    local_7888[0x14] = '\0';
    local_7888[0x15] = '\0';
    local_7888[0x16] = '\0';
    local_7888[0x17] = '\0';
    local_7888[0x18] = '\0';
    local_7888[0x19] = '\0';
    local_7888[0x1a] = '\0';
    local_7888[0x1b] = '\0';
    local_7888[0x1c] = '\0';
    local_7888[0x1d] = '\0';
    local_7888[0x1e] = '\0';
    local_7888[0x1f] = '\0';
    local_7888[0x20] = '\0';
    local_7888[0x21] = '\0';
    local_7888[0x22] = '\0';
    local_7888[0x23] = '\0';
    local_7888[0x24] = '\0';
    local_7888[0x25] = '\0';
    local_7888[0x26] = '\0';
    local_7888[0x27] = '\0';
    local_7888[0x28] = '\0';
    local_7888[0x29] = '\0';
    local_7888[0x2a] = '\0';
    local_7888[0x2b] = '\0';
    local_7888[0x2c] = '\0';
    local_7888[0x2d] = '\0';
    local_7888[0x2e] = '\0';
    local_7888[0x2f] = '\0';
    local_7888[0x30] = '\0';
    local_7888[0x31] = '\0';
    local_7888[0x32] = '\0';
    local_7888[0x33] = '\0';
    local_7888[0x34] = '\0';
    local_7888[0x35] = '\0';
    local_7888[0x36] = '\0';
    local_7888[0x37] = '\0';
    local_7888[0x38] = '\0';
    local_7888[0x39] = '\0';
    local_7888[0x3a] = '\0';
    local_7888[0x3b] = '\0';
    local_7888[0x3c] = '\0';
    local_7888[0x3d] = '\0';
    local_7888[0x3e] = '\0';
    local_7888[0x3f] = '\0';
    local_7888[0x40] = '\0';
    local_7888[0x41] = '\0';
    local_7888[0x42] = '\0';
    local_7888[0x43] = '\0';
    local_7888[0x44] = '\0';
    local_7888[0x45] = '\0';
    local_7888[0x46] = '\0';
    local_7888[0x47] = '\0';
    local_7888[0x48] = '\0';
    local_7888[0x49] = '\0';
    local_7888[0x4a] = '\0';
    local_7888[0x4b] = '\0';
    local_7888[0x4c] = '\0';
    local_7888[0x4d] = '\0';
    local_7888[0x4e] = '\0';
    local_7888[0x4f] = '\0';
    local_7888[0x50] = '\0';
    local_7888[0x51] = '\0';
    local_7888[0x52] = '\0';
    local_7888[0x53] = '\0';
    local_7888[0x54] = '\0';
    local_7888[0x55] = '\0';
    local_7888[0x56] = '\0';
    local_7888[0x57] = '\0';
    local_7888[0x58] = '\0';
    local_7888[0x59] = '\0';
    local_7888[0x5a] = '\0';
    local_7888[0x5b] = '\0';
    local_7888[0x5c] = '\0';
    local_7888[0x5d] = '\0';
    local_7888[0x5e] = '\0';
    local_7888[0x5f] = '\0';
    local_7888[0x60] = '\0';
    local_7888[0x61] = '\0';
    local_7888[0x62] = '\0';
    local_7888[99] = '\0';
    local_7888[100] = '\0';
    local_7888[0x65] = '\0';
    local_7888[0x66] = '\0';
    local_7888[0x67] = '\0';
    local_7888[0x68] = '\0';
    local_7888[0x69] = '\0';
    local_7888[0x6a] = '\0';
    local_7888[0x6b] = '\0';
    local_7888[0x6c] = '\0';
    local_7888[0x6d] = '\0';
    local_7888[0x6e] = '\0';
    local_7888[0x6f] = '\0';
    local_7888[0x70] = '\0';
    local_7888[0x71] = '\0';
    local_7888[0x72] = '\0';
    local_7888[0x73] = '\0';
    local_7888[0x74] = '\0';
    local_7888[0x75] = '\0';
    local_7888[0x76] = '\0';
    local_7888[0x77] = '\0';
    local_7888[0x78] = '\0';
    local_7888[0x79] = '\0';
    local_7888[0x7a] = '\0';
    local_7888[0x7b] = '\0';
    local_7888[0x7c] = '\0';
    local_7888[0x7d] = '\0';
    local_7888[0x7e] = '\0';
    local_7888[0x7f] = '\0';
    local_7890 = time((time_t *)0x0);
    __tp = localtime(&local_7890);
    strftime(local_7888,0x80,"%m-%d %H:%M:%S",__tp);
    uVar1 = getpid();
    uVar3 = gettid();
    iVar2 = snprintf(__s,0x7800,"%s %d %d %s %s %s",local_7888,(ulong)uVar1,uVar3 & 0xffffffff,
                     param_1,param_2,param_3);
    if (iVar2 < 0) {
      log2Console(6,"CrashReport-Native","Failed to construct record of native log.");
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
      pthread_mutex_lock((pthread_mutex_t *)&DAT_0013f300);
      insertCircularQueue(DAT_0013f328,__s,iVar2);
      insertCircularQueue(DAT_0013f328,&DAT_001260e0,3);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013f300);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

