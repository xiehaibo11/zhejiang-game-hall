
/* tinyxml2::StrPair::ParseName(char*) */

byte * __thiscall tinyxml2::StrPair::ParseName(StrPair *this,char *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  if ((param_1 != (char *)0x0) &&
     (uVar3 = (uint)(byte)*param_1, pbVar2 = (byte *)param_1, *param_1 != 0)) {
    do {
      if (((-1 < (char)uVar3) &&
          (((iVar1 = isalnum(uVar3), iVar1 == 0 && (uVar3 != 0x5f)) && (uVar3 != 0x3a)))) &&
         (((uVar3 != 0x2d && (uVar3 != 0x2e)) || (pbVar2 <= param_1)))) break;
      pbVar2 = pbVar2 + 1;
      uVar3 = (uint)*pbVar2;
    } while (uVar3 != 0);
    if (param_1 < pbVar2) {
      if ((((byte)this[1] >> 1 & 1) != 0) && (*(void **)(this + 8) != (void *)0x0)) {
        operator_delete__(*(void **)(this + 8));
      }
      *(char **)(this + 8) = param_1;
      *(byte **)(this + 0x10) = pbVar2;
      *(undefined4 *)this = 0x100;
      return pbVar2;
    }
  }
  return (byte *)0x0;
}

