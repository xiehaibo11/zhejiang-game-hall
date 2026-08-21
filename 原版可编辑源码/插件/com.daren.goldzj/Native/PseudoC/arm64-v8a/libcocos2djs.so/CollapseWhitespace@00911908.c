
/* tinyxml2::StrPair::CollapseWhitespace() */

void __thiscall tinyxml2::StrPair::CollapseWhitespace(StrPair *this)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar4 = *(byte **)(this + 8);
  uVar3 = (uint)(char)*pbVar4;
  if ((char)*pbVar4 < '\0') {
LAB_0091194c:
    *(byte **)(this + 8) = pbVar4;
    if (pbVar4 == (byte *)0x0) {
      return;
    }
    bVar1 = *pbVar4;
  }
  else {
    do {
      iVar2 = isspace(uVar3 & 0xff);
      if (iVar2 == 0) goto LAB_0091194c;
      pbVar4 = pbVar4 + 1;
      uVar3 = (uint)(char)*pbVar4;
    } while (-1 < (int)uVar3);
    *(byte **)(this + 8) = pbVar4;
    bVar1 = *pbVar4;
  }
  if (bVar1 != 0) {
    uVar3 = (uint)bVar1;
    pbVar6 = pbVar4;
    do {
      pbVar5 = pbVar4;
      if ((-1 < (char)uVar3) && (iVar2 = isspace(uVar3), iVar2 != 0)) {
        do {
          iVar2 = isspace(uVar3 & 0xff);
          if (iVar2 == 0) {
            if ((uVar3 & 0xff) == 0) goto LAB_009119ac;
            break;
          }
          pbVar6 = pbVar6 + 1;
          uVar3 = (uint)(char)*pbVar6;
        } while (-1 < (int)uVar3);
        pbVar5 = pbVar4 + 1;
        *pbVar4 = 0x20;
        uVar3 = (uint)*pbVar6;
      }
      pbVar4 = pbVar5 + 1;
      *pbVar5 = (byte)uVar3;
      pbVar6 = pbVar6 + 1;
      uVar3 = (uint)*pbVar6;
    } while (uVar3 != 0);
LAB_009119ac:
    *pbVar4 = 0;
  }
  return;
}

