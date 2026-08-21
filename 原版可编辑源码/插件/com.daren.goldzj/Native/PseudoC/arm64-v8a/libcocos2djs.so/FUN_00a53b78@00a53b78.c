
bool FUN_00a53b78(char *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  char *__s;
  char *__s_00;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 auStack_58 [24];
  undefined1 auStack_38 [8];
  
                    /* try { // try from 00a53b80 to 00b53b93 has its CatchHandler @ 00a53cd0 */
                    /* try { // try from 00a53b94 to 00b53ba3 has its CatchHandler @ 00a53ca4 */
  if (param_1 == (char *)0x0) {
    return false;
  }
  if (param_2 == (char *)0x0) {
    return false;
  }
  if (*param_1 == '\0') {
    return false;
  }
                    /* try { // try from 00a53bbc to 00b53bc3 has its CatchHandler @ 00a53c88 */
                    /* try { // try from 00a53bc4 to 00b53bd3 has its CatchHandler @ 00a53cb8 */
  if ((*param_2 == '\0') || (__s = (char *)(*(code *)PTR_strdup_01d1b758)(), __s == (char *)0x0)) {
    return false;
  }
  __s_00 = (char *)(*(code *)PTR_strdup_01d1b758)(param_2);
                    /* try { // try from 00a53bd4 to 00b53bdb has its CatchHandler @ 00a53ca0 */
  if (__s_00 == (char *)0x0) {
    bVar1 = false;
    goto LAB_00a53ce0;
  }
                    /* try { // try from 00a53bdc to 00b53c0b has its CatchHandler @ 00a53ca8 */
  sVar3 = strlen(__s_00);
  if (__s_00[sVar3 - 1] == '.') {
    __s_00[sVar3 - 1] = '\0';
  }
  sVar3 = strlen(__s);
                    /* try { // try from 00a53c0c to 00b53d23 has its CatchHandler @ 00a53b04 */
  if (__s[sVar3 - 1] == '.') {
    __s[sVar3 - 1] = '\0';
  }
  pcVar4 = strchr(__s,0x2a);
  if (pcVar4 == (char *)0x0) {
LAB_00a53cb8:
                    /* catch() { ... } // from try @ 00a53bc4 with catch @ 00a53cb8 */
    iVar2 = FUN_00a33710(__s,__s_00);
LAB_00a53cc4:
    bVar1 = iVar2 != 0;
  }
  else {
    iVar2 = inet_pton(2,__s_00,auStack_38);
    if ((iVar2 < 1) && (iVar2 = inet_pton(10,__s_00,auStack_58), iVar2 < 1)) {
      pcVar5 = strchr(__s,0x2e);
                    /* catch() { ... } // from try @ 00a53bbc with catch @ 00a53c88 */
                    /* catch() { ... } // from try @ 00a53bd4 with catch @ 00a53ca0 */
                    /* catch() { ... } // from try @ 00a53b94 with catch @ 00a53ca4 */
                    /* catch() { ... } // from try @ 00a53bdc with catch @ 00a53ca8 */
      if ((pcVar5 == (char *)0x0) ||
         (((pcVar6 = strchr(pcVar5 + 1,0x2e), pcVar5 < pcVar4 || (pcVar6 == (char *)0x0)) ||
          (iVar2 = FUN_00a33838(__s,&DAT_018996e9,4), iVar2 != 0)))) goto LAB_00a53cb8;
      pcVar6 = strchr(__s_00,0x2e);
                    /* catch() { ... } // from try @ 00a53d8c with catch @ 00a53d24 */
      if (((pcVar6 == (char *)0x0) || (iVar2 = FUN_00a33710(pcVar5,pcVar6), iVar2 == 0)) ||
         (((long)pcVar6 - (long)__s_00 < (long)pcVar5 - (long)__s ||
          (iVar2 = FUN_00a33838(__s,__s_00,(long)pcVar4 - (long)__s), iVar2 == 0))))
      goto LAB_00a53c5c;
      iVar2 = FUN_00a33838(pcVar4 + 1,(long)pcVar6 - ((long)pcVar5 - (long)(pcVar4 + 1)));
      goto LAB_00a53cc4;
    }
LAB_00a53c5c:
    bVar1 = false;
  }
                    /* catch() { ... } // from try @ 00a53b80 with catch @ 00a53cd0 */
                    /* catch() { ... } // from try @ 00a53b54 with catch @ 00a53cd4 */
  (*(code *)PTR_free_01d1b748)(__s_00);
LAB_00a53ce0:
  (*(code *)PTR_free_01d1b748)(__s);
  return bVar1;
}

