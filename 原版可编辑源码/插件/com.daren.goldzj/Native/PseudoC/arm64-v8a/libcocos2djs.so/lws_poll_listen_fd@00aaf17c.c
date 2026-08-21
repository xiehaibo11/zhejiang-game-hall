
int lws_poll_listen_fd(pollfd *param_1)

{
  int iVar1;
  
  iVar1 = poll(param_1,1,0);
  return iVar1;
}

