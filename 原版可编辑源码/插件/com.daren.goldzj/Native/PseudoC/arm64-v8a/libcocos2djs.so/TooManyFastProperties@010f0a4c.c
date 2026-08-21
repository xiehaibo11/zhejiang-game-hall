
/* v8::internal::Map::TooManyFastProperties(v8::internal::StoreOrigin) const */

bool __thiscall v8::internal::Map::TooManyFastProperties(Map *this,int param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  
  uVar3 = *(ulong *)this;
  bVar1 = *(byte *)(uVar3 + 5);
  uVar4 = (uint)bVar1;
  if (2 < bVar1) {
    uVar4 = (uint)*(byte *)(uVar3 + 3) - (uint)bVar1;
  }
  if ((uVar4 != 0) || ((*(uint *)(uVar3 + 0xb) >> 0x14 & 1) != 0)) {
    return false;
  }
  iVar2 = (uint)*(byte *)(uVar3 + 3) - (uint)*(byte *)(uVar3 + 4);
  if (param_2 != 1) {
    if (iVar2 < 0xd) {
      iVar2 = 0xc;
    }
    uVar7 = (ulong)(*(uint *)(uVar3 + 0xb) >> 10) & 0x3ff;
    iVar5 = 0;
    if ((int)uVar7 != 0) {
      puVar8 = (uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0x17)) + 0x13);
      do {
        uVar7 = uVar7 - 1;
        iVar5 = ((*puVar8 >> 2 ^ 0xffffffff) & 1) + iVar5;
        puVar8 = puVar8 + 3;
      } while (uVar7 != 0);
    }
    return iVar2 < (int)((iVar5 - (uint)*(byte *)(uVar3 + 3)) + (uint)*(byte *)(uVar3 + 4));
  }
  if (iVar2 < 0x81) {
    iVar2 = 0x80;
  }
  uVar7 = (ulong)(*(uint *)(uVar3 + 0xb) >> 10) & 0x3ff;
  if ((int)uVar7 == 0) {
    iVar5 = 0;
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    iVar5 = 0;
    puVar8 = (uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0x17)) + 0x13);
    uVar4 = *puVar8;
    while( true ) {
      if ((uVar4 >> 2 & 1) == 0) {
        if ((uVar4 >> 3 & 1) == 0) {
          iVar6 = iVar6 + 1;
        }
        else {
          iVar5 = iVar5 + 1;
        }
      }
      uVar7 = uVar7 - 1;
      puVar8 = puVar8 + 3;
      if (uVar7 == 0) break;
      uVar4 = *puVar8;
    }
  }
  if (iVar2 < (int)((iVar6 - (uint)*(byte *)(uVar3 + 3)) + (uint)*(byte *)(uVar3 + 4))) {
    return true;
  }
  return 0x3fc < iVar6 + iVar5;
}

