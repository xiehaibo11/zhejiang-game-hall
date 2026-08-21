
/* tinyxml2::StrPair::ParseName(char*) */

byte * __thiscall tinyxml2::StrPair::ParseName(StrPair *this,char *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  if ((param_1 != (char *)0x0) && (bVar1 = *param_1, pbVar3 = (byte *)param_1, bVar1 != 0)) {
    do {
      if (-1 < (char)bVar1) {
        uVar4 = (uint)bVar1;
        iVar2 = isalnum(uVar4);
                    /* try { // try from 01020ce8 to 01120d9f has its CatchHandler @ 01020bf4 */
        if ((((iVar2 == 0) && (uVar4 != 0x5f)) && (uVar4 != 0x3a)) &&
           (((uVar4 != 0x2d && (uVar4 != 0x2e)) || (pbVar3 <= param_1)))) break;
      }
      pbVar3 = pbVar3 + 1;
      bVar1 = *pbVar3;
    } while (bVar1 != 0);
    if (param_1 < pbVar3) {
      if ((((byte)this[1] >> 1 & 1) != 0) && (*(void **)(this + 8) != (void *)0x0)) {
        operator_delete__(*(void **)(this + 8));
      }
                    /* catch() { ... } // from try @ 01020c80 with catch @ 01020d4c */
      *(char **)(this + 8) = param_1;
      *(byte **)(this + 0x10) = pbVar3;
      *(undefined4 *)this = 0x100;
      return pbVar3;
    }
  }
                    /* catch() { ... } // from try @ 01020cd4 with catch @ 01020d68 */
  return (byte *)0x0;
}

