
/* spine::Atlas::readValue(char const**, char const*, spine::Atlas::Str*) */

undefined8 spine::Atlas::readValue(char **param_1,char *param_2,Str *param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  Str *pSVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)*param_1;
  if (pbVar5 != (byte *)param_2) {
    *(byte **)param_3 = pbVar5;
    pbVar2 = (byte *)*param_1;
    pbVar3 = (byte *)param_2;
    if (pbVar2 != (byte *)param_2) {
      do {
        pbVar3 = pbVar2;
        if (*pbVar2 == 10) break;
        pbVar2 = pbVar2 + 1;
        *param_1 = (char *)pbVar2;
        pbVar3 = (byte *)param_2;
      } while ((byte *)param_2 != pbVar2);
      pbVar5 = *(byte **)param_3;
    }
    pSVar4 = param_3 + 8;
    *(byte **)pSVar4 = pbVar3;
    iVar1 = isspace((uint)*pbVar5);
    while ((iVar1 != 0 && (pbVar2 = pbVar5 + 1, pbVar5 < pbVar3))) {
      *(byte **)param_3 = pbVar2;
      iVar1 = isspace((uint)*pbVar2);
      pbVar5 = pbVar2;
    }
    if (pbVar5 != pbVar3) {
      do {
        pbVar2 = pbVar3;
        pbVar3 = pbVar2 + -1;
        *(byte **)pSVar4 = pbVar3;
        if (pbVar3 < pbVar5) break;
      } while (*pbVar3 == 0xd);
      *(byte **)pSVar4 = pbVar2;
    }
    if (*param_1 != param_2) {
      *param_1 = *param_1 + 1;
    }
  }
  pSVar4 = param_3 + 8;
  pbVar5 = *(byte **)pSVar4;
  pbVar2 = *(byte **)param_3;
  do {
    pbVar3 = pbVar2;
    if (pbVar5 == pbVar3) {
      return 0;
    }
    pbVar2 = pbVar3 + 1;
  } while (*pbVar3 != 0x3a);
  *(byte **)param_3 = pbVar2;
  iVar1 = isspace((uint)*pbVar2);
  for (pbVar3 = pbVar3 + 2; (iVar1 != 0 && (pbVar2 = pbVar3 + -1, pbVar2 < pbVar5));
      pbVar3 = pbVar3 + 1) {
    *(byte **)param_3 = pbVar3;
    iVar1 = isspace((uint)*pbVar3);
    pbVar2 = pbVar3;
  }
  if (pbVar2 != pbVar5) {
    do {
      pbVar3 = pbVar5;
      pbVar5 = pbVar3 + -1;
      *(byte **)pSVar4 = pbVar5;
      if (pbVar5 < pbVar2) break;
    } while (*pbVar5 == 0xd);
    *(byte **)pSVar4 = pbVar3;
  }
  return 1;
}

