
/* spine::Atlas::readLine(char const**, char const*, spine::Atlas::Str*) */

undefined8 spine::Atlas::readLine(char **param_1,char *param_2,Str *param_3)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)*param_1;
  if (pbVar5 == (byte *)param_2) {
    uVar2 = 0;
  }
  else {
    *(byte **)param_3 = pbVar5;
    pbVar3 = (byte *)*param_1;
    pbVar4 = (byte *)param_2;
    if (pbVar3 != (byte *)param_2) {
      do {
        pbVar4 = pbVar3;
        if (*pbVar3 == 10) break;
        pbVar3 = pbVar3 + 1;
        *param_1 = (char *)pbVar3;
        pbVar4 = (byte *)param_2;
      } while ((byte *)param_2 != pbVar3);
      pbVar5 = *(byte **)param_3;
    }
    *(byte **)(param_3 + 8) = pbVar4;
    iVar1 = isspace((uint)*pbVar5);
    while ((iVar1 != 0 && (pbVar3 = pbVar5 + 1, pbVar5 < pbVar4))) {
      *(byte **)param_3 = pbVar3;
      iVar1 = isspace((uint)*pbVar3);
      pbVar5 = pbVar3;
    }
    if (pbVar5 != pbVar4) {
      do {
        pbVar3 = pbVar4;
        pbVar4 = pbVar3 + -1;
        *(byte **)(param_3 + 8) = pbVar4;
        if (pbVar4 < pbVar5) break;
      } while (*pbVar4 == 0xd);
      *(byte **)(param_3 + 8) = pbVar3;
    }
    if (*param_1 != param_2) {
      *param_1 = *param_1 + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

