
/* spine::Atlas::trim(spine::Atlas::Str*) */

void spine::Atlas::trim(Str *param_1)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar2 = *(byte **)param_1;
  iVar1 = isspace((uint)*pbVar2);
  pbVar3 = *(byte **)(param_1 + 8);
  while ((iVar1 != 0 && (pbVar4 = pbVar2 + 1, pbVar2 < pbVar3))) {
    *(byte **)param_1 = pbVar4;
    iVar1 = isspace((uint)*pbVar4);
    pbVar2 = pbVar4;
  }
  if (pbVar2 != pbVar3) {
    do {
      pbVar4 = pbVar3;
      pbVar3 = pbVar4 + -1;
      *(byte **)(param_1 + 8) = pbVar3;
      if (pbVar3 < pbVar2) break;
    } while (*pbVar3 == 0xd);
    *(byte **)(param_1 + 8) = pbVar4;
  }
  return;
}

