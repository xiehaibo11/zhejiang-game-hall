
/* v8::internal::AstRawString::AsArrayIndex(unsigned int*) const */

undefined8 __thiscall v8::internal::AstRawString::AsArrayIndex(AstRawString *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  
  if ((*(uint *)(this + 0x18) >> 1 & 1) != 0) {
    return 0;
  }
  iVar4 = (int)*(ulong *)(this + 0x10);
  iVar1 = iVar4;
  if (iVar4 < 0) {
    iVar1 = iVar4 + 1;
  }
  iVar1 = iVar1 >> 1;
  if (this[0x1c] != (AstRawString)0x0) {
    iVar1 = iVar4;
  }
  if (iVar1 < 8) {
    uVar3 = *(uint *)(this + 0x18) >> 3 & 0xffffff;
LAB_01493240:
    *param_1 = uVar3;
    return 1;
  }
  pbVar5 = *(byte **)(this + 8);
  uVar3 = *pbVar5 - 0x30;
  if (uVar3 == 0) {
    *param_1 = 0;
    if (iVar4 < 2) {
      return 1;
    }
  }
  else if (uVar3 < 10) {
    if (1 < iVar4) {
      lVar6 = (*(ulong *)(this + 0x10) & 0xffffffff) - 1;
      do {
        pbVar5 = pbVar5 + 1;
        uVar2 = *pbVar5 - 0x30;
        if ((9 < uVar2) || (0x19999999U - ((int)(*pbVar5 - 0x2d) >> 3) < uVar3)) goto LAB_014932d8;
        uVar3 = uVar2 + uVar3 * 10;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    goto LAB_01493240;
  }
LAB_014932d8:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","StringToIndex(&stream, index)");
}

