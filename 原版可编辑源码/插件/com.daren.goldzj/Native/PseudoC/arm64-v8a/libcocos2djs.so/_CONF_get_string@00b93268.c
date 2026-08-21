
char * _CONF_get_string(CONF *conf,char *section,char *name)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  char *local_48;
  char *local_40;
  
  if (name == (char *)0x0) {
    return (char *)0x0;
  }
  if (conf == (CONF *)0x0) {
    pcVar3 = getenv(name);
    return pcVar3;
  }
  if (section != (char *)0x0) {
    local_48 = section;
    local_40 = name;
    lVar2 = OPENSSL_LH_retrieve(conf->data,&local_48);
    if (lVar2 != 0) goto LAB_00b93314;
    iVar1 = strcmp(section,"ENV");
    if ((iVar1 == 0) && (pcVar3 = getenv(name), pcVar3 != (char *)0x0)) {
      return pcVar3;
    }
  }
  local_48 = "default";
  local_40 = name;
  lVar2 = OPENSSL_LH_retrieve(conf->data,&local_48);
  if (lVar2 == 0) {
    return (char *)0x0;
  }
LAB_00b93314:
  return *(char **)(lVar2 + 0x10);
}

