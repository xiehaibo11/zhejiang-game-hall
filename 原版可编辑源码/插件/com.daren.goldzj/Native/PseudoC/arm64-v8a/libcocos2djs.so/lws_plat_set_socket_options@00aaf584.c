
uint lws_plat_set_socket_options(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  char *__s;
  undefined4 local_24;
  
  local_24 = 1;
  if (*(int *)(param_1 + 0x1e0) == 0) {
LAB_00aaf638:
    if ((*(int *)(param_1 + 0x180) != 0) && (__s = *(char **)(param_1 + 0x178), __s != (char *)0x0))
    {
                    /* try { // try from 00aaf64c to 00baf67f has its CatchHandler @ 00aaf860 */
      sVar3 = strlen(__s);
      iVar1 = setsockopt(param_2,1,0x19,__s,(socklen_t)sVar3);
      if (iVar1 < 0) {
        _lws_log(2,"Failed to bind to device %s\n",*(undefined8 *)(param_1 + 0x178));
        goto LAB_00aaf6bc;
      }
    }
    uVar2 = 1;
                    /* try { // try from 00aaf684 to 00baf697 has its CatchHandler @ 00aaf85c */
    local_24 = 1;
    iVar1 = setsockopt(param_2,6,1,&local_24,4);
    if (-1 < iVar1) {
                    /* try { // try from 00aaf69c to 00baf6a7 has its CatchHandler @ 00aaf858 */
      uVar2 = fcntl(param_2,4,0x800);
      uVar2 = uVar2 >> 0x1f;
    }
  }
  else {
    local_24 = 1;
    iVar1 = setsockopt(param_2,1,9,&local_24,4);
    if (iVar1 < 0) {
      return 1;
    }
    local_24 = *(undefined4 *)(param_1 + 0x1e0);
                    /* try { // try from 00aaf5e4 to 00baf5ef has its CatchHandler @ 00aaf854 */
    iVar1 = setsockopt(param_2,6,4,&local_24,4);
    if (-1 < iVar1) {
      local_24 = *(undefined4 *)(param_1 + 0x1e8);
                    /* try { // try from 00aaf5fc to 00baf603 has its CatchHandler @ 00aaf850 */
                    /* try { // try from 00aaf604 to 00baf60b has its CatchHandler @ 00aaf84c */
      iVar1 = setsockopt(param_2,6,5,&local_24,4);
      if (-1 < iVar1) {
        local_24 = *(undefined4 *)(param_1 + 0x1e4);
        iVar1 = setsockopt(param_2,6,6,&local_24,4);
        if (-1 < iVar1) goto LAB_00aaf638;
      }
    }
LAB_00aaf6bc:
    uVar2 = 1;
  }
                    /* try { // try from 00aaf6cc to 00baf7eb has its CatchHandler @ 00aaf860 */
  return uVar2;
}

