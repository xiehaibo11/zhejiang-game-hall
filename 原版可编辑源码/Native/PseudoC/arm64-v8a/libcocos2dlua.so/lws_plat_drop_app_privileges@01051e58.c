
void lws_plat_drop_app_privileges(long param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  passwd *ppVar4;
  
                    /* try { // try from 01051e60 to 01151e67 has its CatchHandler @ 010538cc */
                    /* try { // try from 01051e68 to 01151e7b has its CatchHandler @ 01053764 */
  if (1 < *(__gid_t *)(param_1 + 0x5c) + 1) {
    iVar1 = setgid(*(__gid_t *)(param_1 + 0x5c));
    if (iVar1 != 0) {
                    /* try { // try from 01051e80 to 01151ea3 has its CatchHandler @ 010538d4 */
      piVar2 = (int *)__errno();
      pcVar3 = strerror(*piVar2);
      _lws_log(2,"setgid: %s\n",pcVar3);
    }
  }
  if (*(__uid_t *)(param_1 + 0x60) + 1 < 2) {
                    /* try { // try from 01051eb8 to 01151ecb has its CatchHandler @ 01053760 */
    return;
  }
  ppVar4 = getpwuid(*(__uid_t *)(param_1 + 0x60));
  if (ppVar4 == (passwd *)0x0) {
                    /* try { // try from 01051f0c to 01151f13 has its CatchHandler @ 010538cc */
                    /* try { // try from 01051f14 to 01151f27 has its CatchHandler @ 0105375c */
    _lws_log(2,"getpwuid: unable to find uid %d",*(undefined4 *)(param_1 + 0x60));
    return;
  }
                    /* try { // try from 01051ed0 to 01151ef3 has its CatchHandler @ 010538d0 */
  initgroups(ppVar4->pw_name,*(__gid_t *)(param_1 + 0x5c));
  iVar1 = setuid(*(__uid_t *)(param_1 + 0x60));
  if (iVar1 != 0) {
    piVar2 = (int *)__errno();
    pcVar3 = strerror(*piVar2);
    _lws_log(2,"setuid: %s\n",pcVar3);
    return;
  }
                    /* try { // try from 01051f2c to 01151f47 has its CatchHandler @ 01053758 */
  _lws_log(4,"Set privs to user \'%s\'\n",ppVar4->pw_name);
  return;
}

