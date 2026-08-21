
/* tinyxml2::XMLText::ParseDeep(char*, tinyxml2::StrPair*) */

StrPair * tinyxml2::XMLText::ParseDeep(char *param_1,StrPair *param_2)

{
  uint uVar1;
  StrPair SVar2;
  int iVar3;
  size_t __n;
  char *pcVar4;
  long lVar5;
  uint uVar6;
  StrPair *__s1;
  
                    /* catch() { ... } // from try @ 01022d20 with catch @ 01022cf4 */
  if (param_1[0x58] == '\0') {
                    /* try { // try from 01022dac to 01122e8b has its CatchHandler @ 01022ff0 */
    uVar6 = 2;
    if (*(char *)(*(long *)(param_1 + 8) + 0x59) != '\0') {
      uVar6 = 3;
    }
    uVar1 = uVar6 | 4;
    if (*(int *)(*(long *)(param_1 + 8) + 0x60) != 1) {
      uVar1 = uVar6;
    }
    pcVar4 = (char *)StrPair::ParseText((StrPair *)(param_1 + 0x18),(char *)param_2,"<",uVar1);
    if (pcVar4 == (char *)0x0) {
      lVar5 = *(long *)(param_1 + 8);
      *(undefined4 *)(lVar5 + 0x5c) = 10;
      *(StrPair **)(lVar5 + 0x68) = param_2;
      *(undefined8 *)(lVar5 + 0x70) = 0;
    }
    else if (*pcVar4 != '\0') {
      return (StrPair *)(pcVar4 + -1);
    }
  }
  else {
                    /* try { // try from 01022d18 to 01122d1f has its CatchHandler @ 01022d64 */
    __n = __strlen_chk(&DAT_01458a2e,4);
                    /* try { // try from 01022d20 to 01122d7f has its CatchHandler @ 01022cf4 */
    SVar2 = *param_2;
    __s1 = param_2;
    while (SVar2 != (StrPair)0x0) {
      if ((SVar2 == (StrPair)0x5d) && (iVar3 = strncmp((char *)__s1,"]]>",__n), iVar3 == 0)) {
                    /* catch() { ... } // from try @ 01022d18 with catch @ 01022d64 */
        if ((((byte)param_1[0x19] >> 1 & 1) != 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
          operator_delete__(*(void **)(param_1 + 0x20));
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01022e8c with catch @ 01022d80
                        */
        *(StrPair **)(param_1 + 0x20) = param_2;
        *(StrPair **)(param_1 + 0x28) = __s1;
        param_1[0x18] = '\x02';
        param_1[0x19] = '\x01';
        param_1[0x1a] = '\0';
        param_1[0x1b] = '\0';
        if (__s1 + __n != (StrPair *)0x0) {
          return __s1 + __n;
        }
        break;
      }
      __s1 = __s1 + 1;
      SVar2 = *__s1;
    }
    lVar5 = *(long *)(param_1 + 8);
    *(undefined4 *)(lVar5 + 0x5c) = 0xb;
    *(StrPair **)(lVar5 + 0x68) = param_2;
    *(undefined8 *)(lVar5 + 0x70) = 0;
  }
  return (StrPair *)0x0;
}

