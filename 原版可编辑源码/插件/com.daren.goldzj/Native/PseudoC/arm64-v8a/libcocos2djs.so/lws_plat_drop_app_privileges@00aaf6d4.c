
void lws_plat_drop_app_privileges(long param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  passwd *ppVar4;
  
  if (1 < *(__gid_t *)(param_1 + 0x5c) + 1) {
    iVar1 = setgid(*(__gid_t *)(param_1 + 0x5c));
    if (iVar1 != 0) {
      piVar2 = (int *)__errno();
      pcVar3 = strerror(*piVar2);
      _lws_log(2,"setgid: %s\n",pcVar3);
    }
  }
  if (*(__uid_t *)(param_1 + 0x60) + 1 < 2) {
    return;
  }
  ppVar4 = getpwuid(*(__uid_t *)(param_1 + 0x60));
  if (ppVar4 == (passwd *)0x0) {
    _lws_log(2,"getpwuid: unable to find uid %d",*(undefined4 *)(param_1 + 0x60));
    return;
  }
  initgroups(ppVar4->pw_name,*(__gid_t *)(param_1 + 0x5c));
  iVar1 = setuid(*(__uid_t *)(param_1 + 0x60));
  if (iVar1 != 0) {
    piVar2 = (int *)__errno();
    pcVar3 = strerror(*piVar2);
    _lws_log(2,"setuid: %s\n",pcVar3);
    return;
  }
  _lws_log(4,"Set privs to user \'%s\'\n",ppVar4->pw_name);
  return;
}

