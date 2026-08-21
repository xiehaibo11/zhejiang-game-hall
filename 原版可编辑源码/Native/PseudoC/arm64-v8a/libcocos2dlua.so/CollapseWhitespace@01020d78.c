
/* tinyxml2::StrPair::CollapseWhitespace() */

void __thiscall tinyxml2::StrPair::CollapseWhitespace(StrPair *this)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  
  pbVar3 = *(byte **)(this + 8);
  uVar2 = (uint)(char)*pbVar3;
  if ((char)*pbVar3 < '\0') {
LAB_01020dbc:
    *(byte **)(this + 8) = pbVar3;
    if (pbVar3 == (byte *)0x0) {
      return;
    }
    bVar6 = *pbVar3;
  }
  else {
    do {
      iVar1 = isspace(uVar2 & 0xff);
      if (iVar1 == 0) goto LAB_01020dbc;
      pbVar3 = pbVar3 + 1;
      uVar2 = (uint)(char)*pbVar3;
    } while (-1 < (int)uVar2);
    *(byte **)(this + 8) = pbVar3;
    bVar6 = *pbVar3;
  }
  pbVar5 = pbVar3;
  if (bVar6 != 0) {
    do {
      uVar2 = (uint)bVar6;
      pbVar4 = pbVar3;
      if ((-1 < (char)bVar6) && (iVar1 = isspace(uVar2), iVar1 != 0)) {
        do {
          iVar1 = isspace(uVar2 & 0xff);
          if (iVar1 == 0) {
            if ((uVar2 & 0xff) == 0) goto LAB_01020e28;
            break;
          }
          pbVar5 = pbVar5 + 1;
          uVar2 = (uint)(char)*pbVar5;
        } while (-1 < (char)*pbVar5);
        pbVar4 = pbVar3 + 1;
        *pbVar3 = 0x20;
        bVar6 = *pbVar5;
      }
      pbVar3 = pbVar4 + 1;
      *pbVar4 = bVar6;
      pbVar5 = pbVar5 + 1;
      bVar6 = *pbVar5;
    } while (bVar6 != 0);
LAB_01020e28:
    *pbVar3 = 0;
  }
  return;
}

