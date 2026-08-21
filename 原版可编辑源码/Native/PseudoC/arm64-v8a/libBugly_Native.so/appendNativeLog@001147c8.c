
void appendNativeLog(long param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  tm *__tp;
  ulong uVar5;
  long lVar6;
  time_t local_78e8;
  char acStack_78e0 [30720];
  char local_e0 [144];
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  uVar4 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    if (DAT_00140350 == 0) {
      FUN_00114b04(0);
    }
    memset(acStack_78e0,0,0x7800);
    local_e0[0x68] = '\0';
    local_e0[0x69] = '\0';
    local_e0[0x6a] = '\0';
    local_e0[0x6b] = '\0';
    local_e0[0x6c] = '\0';
    local_e0[0x6d] = '\0';
    local_e0[0x6e] = '\0';
    local_e0[0x6f] = '\0';
    local_e0[0x60] = '\0';
    local_e0[0x61] = '\0';
    local_e0[0x62] = '\0';
    local_e0[99] = '\0';
    local_e0[100] = '\0';
    local_e0[0x65] = '\0';
    local_e0[0x66] = '\0';
    local_e0[0x67] = '\0';
    local_e0[0x78] = '\0';
    local_e0[0x79] = '\0';
    local_e0[0x7a] = '\0';
    local_e0[0x7b] = '\0';
    local_e0[0x7c] = '\0';
    local_e0[0x7d] = '\0';
    local_e0[0x7e] = '\0';
    local_e0[0x7f] = '\0';
    local_e0[0x70] = '\0';
    local_e0[0x71] = '\0';
    local_e0[0x72] = '\0';
    local_e0[0x73] = '\0';
    local_e0[0x74] = '\0';
    local_e0[0x75] = '\0';
    local_e0[0x76] = '\0';
    local_e0[0x77] = '\0';
    local_e0[0x48] = '\0';
    local_e0[0x49] = '\0';
    local_e0[0x4a] = '\0';
    local_e0[0x4b] = '\0';
    local_e0[0x4c] = '\0';
    local_e0[0x4d] = '\0';
    local_e0[0x4e] = '\0';
    local_e0[0x4f] = '\0';
    local_e0[0x40] = '\0';
    local_e0[0x41] = '\0';
    local_e0[0x42] = '\0';
    local_e0[0x43] = '\0';
    local_e0[0x44] = '\0';
    local_e0[0x45] = '\0';
    local_e0[0x46] = '\0';
    local_e0[0x47] = '\0';
    local_e0[0x58] = '\0';
    local_e0[0x59] = '\0';
    local_e0[0x5a] = '\0';
    local_e0[0x5b] = '\0';
    local_e0[0x5c] = '\0';
    local_e0[0x5d] = '\0';
    local_e0[0x5e] = '\0';
    local_e0[0x5f] = '\0';
    local_e0[0x50] = '\0';
    local_e0[0x51] = '\0';
    local_e0[0x52] = '\0';
    local_e0[0x53] = '\0';
    local_e0[0x54] = '\0';
    local_e0[0x55] = '\0';
    local_e0[0x56] = '\0';
    local_e0[0x57] = '\0';
    local_e0[0x28] = '\0';
    local_e0[0x29] = '\0';
    local_e0[0x2a] = '\0';
    local_e0[0x2b] = '\0';
    local_e0[0x2c] = '\0';
    local_e0[0x2d] = '\0';
    local_e0[0x2e] = '\0';
    local_e0[0x2f] = '\0';
    local_e0[0x20] = '\0';
    local_e0[0x21] = '\0';
    local_e0[0x22] = '\0';
    local_e0[0x23] = '\0';
    local_e0[0x24] = '\0';
    local_e0[0x25] = '\0';
    local_e0[0x26] = '\0';
    local_e0[0x27] = '\0';
    local_e0[0x38] = '\0';
    local_e0[0x39] = '\0';
    local_e0[0x3a] = '\0';
    local_e0[0x3b] = '\0';
    local_e0[0x3c] = '\0';
    local_e0[0x3d] = '\0';
    local_e0[0x3e] = '\0';
    local_e0[0x3f] = '\0';
    local_e0[0x30] = '\0';
    local_e0[0x31] = '\0';
    local_e0[0x32] = '\0';
    local_e0[0x33] = '\0';
    local_e0[0x34] = '\0';
    local_e0[0x35] = '\0';
    local_e0[0x36] = '\0';
    local_e0[0x37] = '\0';
    local_e0[8] = '\0';
    local_e0[9] = '\0';
    local_e0[10] = '\0';
    local_e0[0xb] = '\0';
    local_e0[0xc] = '\0';
    local_e0[0xd] = '\0';
    local_e0[0xe] = '\0';
    local_e0[0xf] = '\0';
    local_e0[0] = '\0';
    local_e0[1] = '\0';
    local_e0[2] = '\0';
    local_e0[3] = '\0';
    local_e0[4] = '\0';
    local_e0[5] = '\0';
    local_e0[6] = '\0';
    local_e0[7] = '\0';
    local_e0[0x18] = '\0';
    local_e0[0x19] = '\0';
    local_e0[0x1a] = '\0';
    local_e0[0x1b] = '\0';
    local_e0[0x1c] = '\0';
    local_e0[0x1d] = '\0';
    local_e0[0x1e] = '\0';
    local_e0[0x1f] = '\0';
    local_e0[0x10] = '\0';
    local_e0[0x11] = '\0';
    local_e0[0x12] = '\0';
    local_e0[0x13] = '\0';
    local_e0[0x14] = '\0';
    local_e0[0x15] = '\0';
    local_e0[0x16] = '\0';
    local_e0[0x17] = '\0';
    local_78e8 = time((time_t *)0x0);
    __tp = localtime(&local_78e8);
    strftime(local_e0,0x80,"%m-%d %H:%M:%S",__tp);
    uVar2 = getpid();
    uVar5 = gettid((ulong)uVar2);
    iVar3 = snprintf(acStack_78e0,0x7800,"%s %d %d %s %s %s",local_e0,(ulong)uVar2,
                     uVar5 & 0xffffffff,param_1,param_2,param_3);
    if (iVar3 < 0) {
      log2Console(6,"eup","Failed to construct record of native log.");
      uVar4 = 0;
    }
    else {
      pthread_mutex_lock((pthread_mutex_t *)&DAT_00140358);
      insertCircularQueue(DAT_00140350,acStack_78e0,iVar3);
      insertCircularQueue(DAT_00140350,&DAT_001281ab,3);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00140358);
      uVar4 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

