
/* v8::internal::Bignum::ToHexString(char*, int) const */

undefined8 __thiscall v8::internal::Bignum::ToHexString(Bignum *this,char *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  long lVar10;
  
  iVar4 = *(int *)(this + 0x210);
  if (iVar4 == 0) {
    if (1 < param_2) {
      param_1[0] = '0';
      param_1[1] = '\0';
      return 1;
    }
  }
  else {
    iVar7 = 0;
    for (uVar5 = *(uint *)(*(long *)(this + 0x200) + (long)(iVar4 + -1) * 4); uVar5 != 0;
        uVar5 = uVar5 >> 4) {
      iVar7 = iVar7 + 1;
    }
    iVar7 = (*(int *)(this + 0x214) + iVar4) * 7 + -7 + iVar7;
    if (iVar7 < param_2) {
      param_1[iVar7] = '\0';
      iVar7 = iVar7 + -1;
      if (0 < *(int *)(this + 0x214)) {
        iVar4 = 0;
        do {
          builtin_strncpy(param_1 + (long)iVar7 + -6,"0000000",7);
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + -7;
        } while (iVar4 < *(int *)(this + 0x214));
      }
      lVar10 = (long)*(int *)(this + 0x210) + -1;
      if (0 < (int)lVar10) {
        lVar6 = 0;
        do {
          pcVar3 = param_1 + iVar7;
          iVar7 = iVar7 + -7;
          uVar5 = *(uint *)(*(long *)(this + 0x200) + lVar6 * 4);
          lVar6 = lVar6 + 1;
          cVar8 = '0';
          cVar9 = '0';
          if (9 < (uVar5 & 0xf)) {
            cVar9 = '7';
          }
          uVar1 = uVar5 >> 4 & 0xf;
          *pcVar3 = cVar9 + (char)(uVar5 & 0xf);
          if (9 < uVar1) {
            cVar8 = '7';
          }
          uVar2 = uVar5 >> 8 & 0xf;
          pcVar3[-1] = cVar8 + (char)uVar1;
          cVar8 = '0';
          cVar9 = cVar8;
          if (9 < uVar2) {
            cVar9 = '7';
          }
          uVar1 = uVar5 >> 0xc & 0xf;
          pcVar3[-2] = cVar9 + (char)uVar2;
          cVar9 = cVar8;
          if (9 < uVar1) {
            cVar9 = '7';
          }
          uVar2 = uVar5 >> 0x10 & 0xf;
          pcVar3[-3] = cVar9 + (char)uVar1;
          cVar9 = '0';
          if (9 < uVar2) {
            cVar9 = '7';
          }
          uVar1 = uVar5 >> 0x14 & 0xf;
          uVar5 = uVar5 >> 0x18 & 0xf;
          pcVar3[-4] = cVar9 + (char)uVar2;
          if (9 < uVar1) {
            cVar8 = '7';
          }
          cVar9 = '0';
          if (9 < uVar5) {
            cVar9 = '7';
          }
          pcVar3[-5] = cVar8 + (char)uVar1;
          pcVar3[-6] = cVar9 + (char)uVar5;
          lVar10 = (long)*(int *)(this + 0x210) + -1;
        } while (lVar6 < lVar10);
      }
      uVar5 = *(uint *)(*(long *)(this + 0x200) + lVar10 * 4);
      if (uVar5 != 0) {
        pcVar3 = param_1 + iVar7;
        do {
          uVar1 = uVar5 & 0xf;
          cVar9 = '0';
          if (9 < uVar1) {
            cVar9 = '7';
          }
          uVar5 = uVar5 >> 4;
          *pcVar3 = cVar9 + (char)uVar1;
          pcVar3 = pcVar3 + -1;
        } while (uVar5 != 0);
      }
      return 1;
    }
  }
  return 0;
}

