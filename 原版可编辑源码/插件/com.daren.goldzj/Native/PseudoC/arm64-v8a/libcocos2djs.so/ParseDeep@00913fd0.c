
/* tinyxml2::XMLUnknown::ParseDeep(char*, tinyxml2::StrPair*) */

StrPair * tinyxml2::XMLUnknown::ParseDeep(char *param_1,StrPair *param_2)

{
  StrPair SVar1;
  StrPair *pSVar2;
  long lVar3;
  StrPair *pSVar4;
  
  SVar1 = *param_2;
  pSVar2 = param_2;
  while( true ) {
    if (SVar1 == (StrPair)0x0) {
      lVar3 = *(long *)(param_1 + 8);
      *(undefined4 *)(lVar3 + 0x5c) = 0xe;
      *(StrPair **)(lVar3 + 0x68) = param_2;
      *(undefined8 *)(lVar3 + 0x70) = 0;
      return (StrPair *)0x0;
    }
    pSVar4 = pSVar2 + 1;
    if (SVar1 == (StrPair)0x3e) break;
    SVar1 = *pSVar4;
    pSVar2 = pSVar4;
  }
  if ((((byte)param_1[0x19] >> 1 & 1) != 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
    operator_delete__(*(void **)(param_1 + 0x20));
  }
  *(StrPair **)(param_1 + 0x20) = param_2;
  *(StrPair **)(param_1 + 0x28) = pSVar2;
  param_1[0x18] = '\x02';
  param_1[0x19] = '\x01';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  return pSVar4;
}

