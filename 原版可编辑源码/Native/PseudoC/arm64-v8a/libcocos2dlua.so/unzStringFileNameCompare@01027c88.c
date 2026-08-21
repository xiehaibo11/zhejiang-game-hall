
/* cocos2d::unzStringFileNameCompare(char const*, char const*, int) */

int cocos2d::unzStringFileNameCompare(char *param_1,char *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  if (param_3 == 1) {
    iVar3 = strcmp(param_1,param_2);
    return iVar3;
  }
  while( true ) {
    bVar1 = *param_1;
    bVar2 = *param_2;
    uVar4 = bVar1 - 0x20;
    if (0x19 < bVar1 - 0x61) {
      uVar4 = (uint)bVar1;
    }
    bVar1 = bVar2 - 0x20;
    if (0x19 < bVar2 - 0x61) {
      bVar1 = bVar2;
    }
    if ((uVar4 & 0xff) == 0) {
      return -(uint)(bVar1 != 0);
    }
    if (bVar1 == 0) {
      return 1;
    }
    if ((char)uVar4 < (char)bVar1) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if ((char)bVar1 < (char)uVar4) {
      return 1;
    }
  }
  return -1;
}

