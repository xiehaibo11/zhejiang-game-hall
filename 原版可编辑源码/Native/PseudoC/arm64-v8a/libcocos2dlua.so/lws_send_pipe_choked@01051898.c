
ushort lws_send_pipe_choked(long param_1)

{
  int iVar1;
  ushort uVar2;
  pollfd local_18;
  
                    /* try { // try from 010518a8 to 011518bb has its CatchHandler @ 01053804 */
  if (*(int *)(param_1 + 0x2e8) != 0) {
    return 1;
  }
                    /* try { // try from 010518c0 to 011518e3 has its CatchHandler @ 01053924 */
  local_18.fd = *(int *)(param_1 + 0x2d0);
  local_18.events = 4;
  local_18.revents = 0;
  uVar2 = 1;
  iVar1 = poll(&local_18,1,0);
  if (iVar1 == 1) {
    uVar2 = ((ushort)local_18.revents >> 2 ^ 0xffff) & 1;
  }
                    /* try { // try from 010518f8 to 0115190b has its CatchHandler @ 01053800 */
  return uVar2;
}

