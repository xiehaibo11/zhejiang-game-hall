
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
                    /* try { // try from 00ba1a8c to 00ca1a8f has its CatchHandler @ 00ba1ed0 */
  if (conf == (CONF *)0x0) {
                    /* try { // try from 00ba1adc to 00ca1af3 has its CatchHandler @ 00ba1ec0 */
    pcVar3 = getenv(name);
    return pcVar3;
  }
                    /* try { // try from 00ba1a90 to 00ca1aaf has its CatchHandler @ 00ba1a58 */
  if (section != (char *)0x0) {
    local_48 = section;
    local_40 = name;
    lVar2 = OPENSSL_LH_retrieve(conf->data,&local_48);
    if (lVar2 != 0) goto LAB_00ba1b14;
                    /* try { // try from 00ba1ab0 to 00ca1ab3 has its CatchHandler @ 00ba1eb4 */
                    /* try { // try from 00ba1ab4 to 00ca1adb has its CatchHandler @ 00ba1a58 */
    iVar1 = strcmp(section,"ENV");
    if ((iVar1 == 0) && (pcVar3 = getenv(name), pcVar3 != (char *)0x0)) {
      return pcVar3;
    }
  }
                    /* try { // try from 00ba1af4 to 00ca1ba7 has its CatchHandler @ 00ba1a58 */
  local_48 = "default";
  local_40 = name;
  lVar2 = OPENSSL_LH_retrieve(conf->data,&local_48);
  if (lVar2 == 0) {
    return (char *)0x0;
  }
LAB_00ba1b14:
  return *(char **)(lVar2 + 0x10);
}

