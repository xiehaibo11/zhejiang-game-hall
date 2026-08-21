
/* WARNING: Type propagation algorithm not settling */

char * FUN_00a58b10(char *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  char *__s;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  char *__s2;
  char *__dest;
  
                    /* try { // try from 00a58b20 to 00b58b2f has its CatchHandler @ 00a58e20 */
                    /* try { // try from 00a58b34 to 00b58b4f has its CatchHandler @ 00a58e1c */
  sVar2 = strlen(param_1);
  pcVar3 = (char *)(*(code *)PTR_malloc_017699f8)(sVar2 + 1);
  __s = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    __s = (char *)(*(code *)PTR_strdup_01769a10)(param_1);
                    /* try { // try from 00a58b68 to 00b58b87 has its CatchHandler @ 00a58e44 */
    if (__s == (char *)0x0) {
      (*(code *)PTR_free_01769a00)(pcVar3);
      __s = (char *)0x0;
    }
    else {
      if (*__s != '\0') {
        pcVar4 = strchr(__s,0x3f);
        __dest = pcVar3;
        pcVar6 = __s;
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
LAB_00a58bb8:
        do {
          iVar1 = strncmp("./",pcVar6,2);
          __s2 = pcVar6;
          while (iVar1 != 0) {
            pcVar6 = __s2 + 1;
            iVar1 = strncmp("../",__s2,3);
            if (iVar1 == 0) {
              pcVar6 = __s2 + 3;
              cVar5 = *pcVar6;
              goto joined_r0x00a58c48;
            }
            iVar1 = strncmp("/./",__s2,3);
            if (iVar1 == 0) {
              pcVar6 = __s2 + 2;
              cVar5 = *pcVar6;
              goto joined_r0x00a58c48;
            }
            iVar1 = strcmp("/.",__s2);
            if (iVar1 != 0) {
                    /* try { // try from 00a58c64 to 00b58c9b has its CatchHandler @ 00a58e4c */
              iVar1 = strncmp("/../",__s2,4);
              if (iVar1 == 0) {
                pcVar6 = __s2 + 3;
                __s2 = __dest;
                goto LAB_00a58cd4;
              }
              iVar1 = strcmp("/..",__s2);
              if (iVar1 == 0) {
                pcVar6 = __s2 + 2;
                *pcVar6 = '/';
                __s2 = __dest;
                goto LAB_00a58cf4;
              }
              iVar1 = strcmp(".",__s2);
                    /* try { // try from 00a58c9c to 00b58cc7 has its CatchHandler @ 00a58718 */
              pcVar6 = __s2;
              if ((iVar1 == 0) || (iVar1 = strcmp("..",__s2), iVar1 == 0)) goto LAB_00a58d14;
              cVar5 = *__s2;
              goto LAB_00a58cb8;
            }
            *pcVar6 = '/';
            iVar1 = strncmp("./",pcVar6,2);
            __s2 = pcVar6;
          }
          pcVar6 = __s2 + 2;
        } while (__s2[2] != '\0');
        goto LAB_00a58d20;
      }
      (*(code *)PTR_free_01769a00)(pcVar3);
    }
  }
  return __s;
                    /* try { // try from 00a58ce0 to 00b58cf3 has its CatchHandler @ 00a58e58 */
  while (__s2 = __s2 + -1, __dest = __s2, *__s2 != '/') {
LAB_00a58cd4:
    __dest = __s2;
    if (__s2 <= pcVar3) break;
  }
  goto LAB_00a58d14;
  while (__s2 = __s2 + -1, __dest = __s2, *__s2 != '/') {
LAB_00a58cf4:
                    /* try { // try from 00a58cf8 to 00b58d0b has its CatchHandler @ 00a58e5c */
    __dest = __s2;
    if (__s2 <= pcVar3) break;
  }
  goto LAB_00a58d14;
                    /* try { // try from 00a58cc8 to 00b58cdb has its CatchHandler @ 00a58e54 */
  while (cVar5 != '\0') {
LAB_00a58cb8:
    __s2 = __dest + 1;
    *__dest = cVar5;
    pcVar6 = pcVar6 + 1;
    cVar5 = *pcVar6;
    __dest = __s2;
    if (cVar5 == '/') break;
  }
LAB_00a58d14:
  *__s2 = '\0';
  cVar5 = *pcVar6;
joined_r0x00a58c48:
  if (cVar5 == '\0') {
LAB_00a58d20:
    if (pcVar4 != (char *)0x0) {
                    /* try { // try from 00a58d34 to 00b58d47 has its CatchHandler @ 00a58e70 */
      sVar2 = strlen(param_1 + ((long)pcVar4 - (long)__s));
      memcpy(__dest,param_1 + ((long)pcVar4 - (long)__s),sVar2 + 1);
    }
                    /* try { // try from 00a58d4c to 00b58d5f has its CatchHandler @ 00a58e74 */
    (*(code *)PTR_free_01769a00)(__s);
    return pcVar3;
  }
  goto LAB_00a58bb8;
}

