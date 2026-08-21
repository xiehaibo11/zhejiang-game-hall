
/* spine::Json::parseObject(spine::Json*, char const*) */

byte * spine::Json::parseObject(Json *param_1,char *param_2)

{
  byte *pbVar1;
  Json *pJVar2;
  long lVar3;
  Json *pJVar4;
  int iVar5;
  undefined8 uVar6;
  byte *pbVar7;
  
  *(undefined4 *)(param_1 + 0x10) = 6;
  pbVar1 = (byte *)(param_2 + 1);
  do {
    pbVar7 = pbVar1;
    pbVar1 = pbVar7 + 1;
  } while (*pbVar7 - 1 < 0x20);
  if (*pbVar7 != 0x7d) {
    pbVar7 = pbVar7 + -1;
    pJVar2 = operator_new(0x30);
    *(undefined8 *)(pJVar2 + 0x18) = 0;
    *(undefined8 *)(pJVar2 + 0x10) = 0;
    *(undefined8 *)(pJVar2 + 0x28) = 0;
    *(undefined8 *)(pJVar2 + 0x20) = 0;
    *(undefined8 *)(pJVar2 + 8) = 0;
    *(undefined8 *)pJVar2 = 0;
    *(Json **)(param_1 + 8) = pJVar2;
    do {
      pbVar7 = pbVar7 + 1;
    } while (*pbVar7 - 1 < 0x20);
    lVar3 = parseString(pJVar2,(char *)pbVar7);
    pbVar1 = (byte *)0x0;
    if (lVar3 != 0) {
      pbVar7 = (byte *)(lVar3 + -1);
      do {
        pbVar7 = pbVar7 + 1;
      } while (*pbVar7 - 1 < 0x20);
      uVar6 = *(undefined8 *)(pJVar2 + 0x18);
      *(undefined8 *)(pJVar2 + 0x18) = 0;
      *(undefined8 *)(pJVar2 + 0x28) = uVar6;
      if (*pbVar7 == 0x3a) {
        do {
          pbVar7 = pbVar7 + 1;
        } while (*pbVar7 - 1 < 0x20);
        lVar3 = parseValue(pJVar2,(char *)pbVar7);
        pbVar1 = (byte *)0x0;
        if (lVar3 != 0) {
          pbVar7 = (byte *)(lVar3 + -1);
          do {
            pbVar7 = pbVar7 + 1;
          } while (*pbVar7 - 1 < 0x20);
          iVar5 = 1;
          while( true ) {
            *(int *)(param_1 + 0x14) = iVar5;
            if (*pbVar7 != 0x2c) break;
            pJVar4 = operator_new(0x30);
            *(undefined8 *)(pJVar4 + 0x18) = 0;
            *(undefined8 *)(pJVar4 + 0x10) = 0;
            *(undefined8 *)(pJVar4 + 0x28) = 0;
            *(undefined8 *)(pJVar4 + 0x20) = 0;
            *(undefined8 *)(pJVar4 + 8) = 0;
            *(undefined8 *)pJVar4 = 0;
            *(Json **)pJVar2 = pJVar4;
            do {
              pbVar7 = pbVar7 + 1;
            } while (*pbVar7 - 1 < 0x20);
            lVar3 = parseString(pJVar4,(char *)pbVar7);
            if (lVar3 == 0) {
              return (byte *)0x0;
            }
            pbVar7 = (byte *)(lVar3 + -1);
            do {
              pbVar7 = pbVar7 + 1;
            } while (*pbVar7 - 1 < 0x20);
            uVar6 = *(undefined8 *)(pJVar4 + 0x18);
            *(undefined8 *)(pJVar4 + 0x18) = 0;
            *(undefined8 *)(pJVar4 + 0x28) = uVar6;
            if (*pbVar7 != 0x3a) goto LAB_00d5927c;
            do {
              pbVar7 = pbVar7 + 1;
            } while (*pbVar7 - 1 < 0x20);
            lVar3 = parseValue(pJVar4,(char *)pbVar7);
            if (lVar3 == 0) {
              return (byte *)0x0;
            }
            pbVar7 = (byte *)(lVar3 + -1);
            do {
              pbVar7 = pbVar7 + 1;
            } while (*pbVar7 - 1 < 0x20);
            iVar5 = *(int *)(param_1 + 0x14) + 1;
            pJVar2 = pJVar4;
          }
          if (*pbVar7 == 0x7d) {
            pbVar1 = pbVar7 + 1;
          }
          else {
            pbVar1 = (byte *)0x0;
            _error = pbVar7;
          }
        }
      }
      else {
LAB_00d5927c:
        pbVar1 = (byte *)0x0;
        _error = pbVar7;
      }
    }
  }
  return pbVar1;
}

