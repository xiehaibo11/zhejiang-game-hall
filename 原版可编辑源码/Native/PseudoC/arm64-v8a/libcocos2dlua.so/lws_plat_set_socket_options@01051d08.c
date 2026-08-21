
uint lws_plat_set_socket_options(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  char *__s;
  undefined4 local_24;
  
  local_24 = 1;
                    /* try { // try from 01051d28 to 01151d3b has its CatchHandler @ 0105361c */
  if (*(int *)(param_1 + 0x1e0) == 0) {
LAB_01051dbc:
    if ((*(int *)(param_1 + 0x180) != 0) && (__s = *(char **)(param_1 + 0x178), __s != (char *)0x0))
    {
      sVar3 = strlen(__s);
      iVar1 = setsockopt(param_2,1,0x19,__s,(socklen_t)sVar3);
      if (iVar1 < 0) {
        _lws_log(2,"Failed to bind to device %s\n",*(undefined8 *)(param_1 + 0x178));
        goto LAB_01051e40;
      }
    }
    uVar2 = 1;
    local_24 = 1;
    iVar1 = setsockopt(param_2,6,1,&local_24,4);
    if (-1 < iVar1) {
      uVar2 = fcntl(param_2,4,0x800);
      uVar2 = uVar2 >> 0x1f;
    }
  }
  else {
                    /* try { // try from 01051d40 to 01151d63 has its CatchHandler @ 010537c0 */
    local_24 = 1;
    iVar1 = setsockopt(param_2,1,9,&local_24,4);
    if (iVar1 < 0) {
      return 1;
    }
    local_24 = *(undefined4 *)(param_1 + 0x1e0);
    iVar1 = setsockopt(param_2,6,4,&local_24,4);
    if (-1 < iVar1) {
      local_24 = *(undefined4 *)(param_1 + 0x1e8);
                    /* try { // try from 01051d8c to 01151d97 has its CatchHandler @ 0105360c */
      iVar1 = setsockopt(param_2,6,5,&local_24,4);
      if (-1 < iVar1) {
        local_24 = *(undefined4 *)(param_1 + 0x1e4);
                    /* try { // try from 01051dac to 01151dcf has its CatchHandler @ 01053768 */
        iVar1 = setsockopt(param_2,6,6,&local_24,4);
        if (-1 < iVar1) goto LAB_01051dbc;
      }
    }
LAB_01051e40:
    uVar2 = 1;
  }
  return uVar2;
}

