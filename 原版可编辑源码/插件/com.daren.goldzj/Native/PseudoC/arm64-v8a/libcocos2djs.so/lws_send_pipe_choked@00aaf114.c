
ushort lws_send_pipe_choked(long param_1)

{
  int iVar1;
  ushort uVar2;
  pollfd local_18;
  
  if (*(int *)(param_1 + 0x2e8) != 0) {
    return 1;
  }
  local_18.fd = *(int *)(param_1 + 0x2d0);
  local_18.events = 4;
  local_18.revents = 0;
  uVar2 = 1;
  iVar1 = poll(&local_18,1,0);
  if (iVar1 == 1) {
    uVar2 = ((ushort)local_18.revents >> 2 ^ 0xffff) & 1;
  }
  return uVar2;
}

