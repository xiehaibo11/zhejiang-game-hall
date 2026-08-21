
/* tinyxml2::XMLText::ParseDeep(char*, tinyxml2::StrPair*) */

StrPair * tinyxml2::XMLText::ParseDeep(char *param_1,StrPair *param_2)

{
  uint uVar1;
  StrPair SVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  StrPair *pSVar6;
  
  if (param_1[0x58] == '\0') {
    lVar4 = *(long *)(param_1 + 8);
    SVar2 = *param_2;
    uVar5 = 2;
    if (*(char *)(lVar4 + 0x59) != '\0') {
      uVar5 = 3;
    }
    pSVar6 = param_2;
    uVar1 = uVar5 | 4;
    if (*(int *)(lVar4 + 0x60) != 1) {
      uVar1 = uVar5;
    }
    while (SVar2 != (StrPair)0x0) {
      if (SVar2 == (StrPair)0x3c) {
        if ((((byte)param_1[0x19] >> 1 & 1) != 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
          operator_delete__(*(void **)(param_1 + 0x20));
        }
        *(StrPair **)(param_1 + 0x20) = param_2;
        *(StrPair **)(param_1 + 0x28) = pSVar6;
        *(uint *)(param_1 + 0x18) = uVar1 | 0x100;
        if (pSVar6[1] == (StrPair)0x0) {
          return (StrPair *)0x0;
        }
        return pSVar6;
      }
      SVar2 = pSVar6[1];
      pSVar6 = pSVar6 + 1;
    }
    *(undefined4 *)(lVar4 + 0x5c) = 10;
    *(StrPair **)(lVar4 + 0x68) = param_2;
    *(undefined8 *)(lVar4 + 0x70) = 0;
  }
  else {
    SVar2 = *param_2;
    pSVar6 = param_2;
    while (SVar2 != (StrPair)0x0) {
      if ((SVar2 == (StrPair)0x5d) && (iVar3 = strncmp((char *)pSVar6,"]]>",3), iVar3 == 0)) {
        if ((((byte)param_1[0x19] >> 1 & 1) != 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
          operator_delete__(*(void **)(param_1 + 0x20));
        }
        *(StrPair **)(param_1 + 0x20) = param_2;
        *(StrPair **)(param_1 + 0x28) = pSVar6;
        param_1[0x18] = '\x02';
        param_1[0x19] = '\x01';
        param_1[0x1a] = '\0';
        param_1[0x1b] = '\0';
        return pSVar6 + 3;
      }
      pSVar6 = pSVar6 + 1;
      SVar2 = *pSVar6;
    }
    lVar4 = *(long *)(param_1 + 8);
    *(undefined4 *)(lVar4 + 0x5c) = 0xb;
    *(StrPair **)(lVar4 + 0x68) = param_2;
    *(undefined8 *)(lVar4 + 0x70) = 0;
  }
  return (StrPair *)0x0;
}

