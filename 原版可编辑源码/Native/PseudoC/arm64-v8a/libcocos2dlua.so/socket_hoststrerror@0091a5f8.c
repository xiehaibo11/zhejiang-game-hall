
char * socket_hoststrerror(int param_1)

{
  char *pcVar1;
  
  if (param_1 < 1) {
    pcVar1 = (char *)io_strerror();
    return pcVar1;
  }
  if (param_1 == 1) {
    return "host not found";
  }
  pcVar1 = hstrerror(param_1);
  return pcVar1;
}

