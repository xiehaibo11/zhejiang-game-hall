
/* spine::Json::parseArray(spine::Json*, char const*) */

byte * spine::Json::parseArray(Json *param_1,char *param_2)

{
  byte *pbVar1;
  Json *pJVar2;
  long lVar3;
  Json *pJVar4;
  int iVar5;
  byte *pbVar6;
  
  *(undefined4 *)(param_1 + 0x10) = 5;
  pbVar1 = (byte *)(param_2 + 1);
  do {
    pbVar6 = pbVar1;
    pbVar1 = pbVar6 + 1;
  } while (*pbVar6 - 1 < 0x20);
  if (*pbVar6 != 0x5d) {
    pbVar6 = pbVar6 + -1;
    pJVar2 = operator_new(0x30);
    *(undefined8 *)(pJVar2 + 0x18) = 0;
    *(undefined8 *)(pJVar2 + 0x10) = 0;
    *(undefined8 *)(pJVar2 + 0x28) = 0;
    *(undefined8 *)(pJVar2 + 0x20) = 0;
    *(undefined8 *)(pJVar2 + 8) = 0;
    *(undefined8 *)pJVar2 = 0;
    *(Json **)(param_1 + 8) = pJVar2;
    do {
      pbVar6 = pbVar6 + 1;
    } while (*pbVar6 - 1 < 0x20);
    lVar3 = parseValue(pJVar2,(char *)pbVar6);
    pbVar1 = (byte *)0x0;
    if (lVar3 != 0) {
      pbVar6 = (byte *)(lVar3 + -1);
      do {
        pbVar6 = pbVar6 + 1;
      } while (*pbVar6 - 1 < 0x20);
      iVar5 = 1;
      while( true ) {
        *(int *)(param_1 + 0x14) = iVar5;
        if (*pbVar6 != 0x2c) break;
        pJVar4 = operator_new(0x30);
        *(undefined8 *)(pJVar4 + 0x18) = 0;
        *(undefined8 *)(pJVar4 + 0x10) = 0;
        *(undefined8 *)(pJVar4 + 0x28) = 0;
        *(undefined8 *)(pJVar4 + 0x20) = 0;
        *(undefined8 *)(pJVar4 + 8) = 0;
        *(undefined8 *)pJVar4 = 0;
        *(Json **)pJVar2 = pJVar4;
        do {
          pbVar6 = pbVar6 + 1;
        } while (*pbVar6 - 1 < 0x20);
        lVar3 = parseValue(pJVar4,(char *)pbVar6);
        if (lVar3 == 0) {
          return (byte *)0x0;
        }
        pbVar6 = (byte *)(lVar3 + -1);
        do {
          pbVar6 = pbVar6 + 1;
        } while (*pbVar6 - 1 < 0x20);
        iVar5 = *(int *)(param_1 + 0x14) + 1;
        pJVar2 = pJVar4;
      }
      if (*pbVar6 == 0x5d) {
        pbVar1 = pbVar6 + 1;
      }
      else {
        pbVar1 = (byte *)0x0;
        _error = pbVar6;
      }
    }
  }
  return pbVar1;
}

