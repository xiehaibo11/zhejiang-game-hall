
/* tinyxml2::XMLDeclaration::ParseDeep(char*, tinyxml2::StrPair*) */

StrPair * tinyxml2::XMLDeclaration::ParseDeep(char *param_1,StrPair *param_2)

{
  int iVar1;
  StrPair SVar2;
  long lVar3;
  StrPair *pSVar4;
  
  SVar2 = *param_2;
  if (SVar2 != (StrPair)0x0) {
    pSVar4 = param_2 + 2;
    do {
      if (SVar2 == (StrPair)0x3f) {
        iVar1 = strncmp((char *)(pSVar4 + -2),"?>",2);
        if (iVar1 == 0) {
          if ((((byte)param_1[0x19] >> 1 & 1) != 0) && (*(void **)(param_1 + 0x20) != (void *)0x0))
          {
            operator_delete__(*(void **)(param_1 + 0x20));
          }
          *(StrPair **)(param_1 + 0x20) = param_2;
          *(StrPair **)(param_1 + 0x28) = pSVar4 + -2;
          param_1[0x18] = '\x02';
          param_1[0x19] = '\x01';
          param_1[0x1a] = '\0';
          param_1[0x1b] = '\0';
          return pSVar4;
        }
      }
      SVar2 = pSVar4[-1];
      pSVar4 = pSVar4 + 1;
    } while (SVar2 != (StrPair)0x0);
  }
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar3 + 0x5c) = 0xd;
  *(StrPair **)(lVar3 + 0x68) = param_2;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  return (StrPair *)0x0;
}

