
void FUN_01047710(long *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  memset((void *)(lVar1 + 0x300),0,0x5b);
  memset((void *)(lVar1 + 0x1c),0,0x2d8);
  *(undefined1 *)(lVar1 + 0xb8b) = 0;
  *(undefined8 *)(lVar1 + 0xb60) = 0;
  *(undefined1 *)((long)param_1 + 0x36) = 0x5c;
  *(undefined2 *)((long)param_1 + 0x2c) = 0;
  *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) & 0xfffffffe;
  lws_set_timeout(param_1,0x19,*(undefined4 *)(param_1[0x45] + 0x1f0));
  time((time_t *)(lVar1 + 0x2f8));
  if ((void *)param_1[2] != (void *)0x0) {
    memcpy((void *)(lVar1 + 0x35b),(void *)param_1[2],(ulong)*(uint *)(param_1 + 4));
    *(short *)(lVar1 + 0xb5e) = (short)(int)param_1[4];
    thunk_FUN_0104b1cc(param_1[2],0,"free");
    param_1[2] = 0;
    if (param_2 != 0) {
      lVar1 = *(long *)(param_1[0x44] + (ulong)*(byte *)((long)param_1 + 0x304) * 0x6f8 + 0xe0) +
              (long)*(int *)((long)param_1 + 0x2d4) * 8;
      *(ushort *)(lVar1 + 6) = *(ushort *)(lVar1 + 6) | 1;
      _lws_log(1,"%s: calling service\n","lws_header_table_reset");
      lws_service_fd_tsi(param_1[0x44],lVar1,*(undefined1 *)((long)param_1 + 0x304));
      return;
    }
  }
  return;
}

