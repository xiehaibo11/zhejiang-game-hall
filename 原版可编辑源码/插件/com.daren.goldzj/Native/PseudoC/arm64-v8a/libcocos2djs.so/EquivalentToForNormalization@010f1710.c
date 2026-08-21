
/* v8::internal::Map::EquivalentToForNormalization(v8::internal::Map, v8::internal::ElementsKind,
   v8::internal::PropertyNormalizationMode) const */

bool __thiscall
v8::internal::Map::EquivalentToForNormalization(Map *this,ulong param_2,uint param_3,int param_4)

{
  uint *puVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  
  if (param_4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (uint)*(byte *)(param_2 + 3) - (uint)*(byte *)(param_2 + 4);
  }
  uVar10 = *(ulong *)this;
  uVar7 = uVar10 & 0xffffffff00000000;
  uVar6 = uVar7 | *(uint *)(uVar10 + 0x13);
  if ((*(uint *)(uVar10 + 0x13) & 1) != 0) {
    do {
      if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0xa2) break;
      puVar1 = (uint *)(uVar6 + 0x13);
      uVar6 = uVar7 | *puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  uVar8 = param_2 & 0xffffffff00000000;
  uVar7 = uVar8 | *(uint *)(param_2 + 0x13);
  if ((*(uint *)(param_2 + 0x13) & 1) != 0) {
    do {
      if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0xa2) break;
      puVar1 = (uint *)(uVar7 + 0x13);
      uVar7 = uVar8 | *puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  if (((((int)uVar6 == (int)uVar7) && (*(int *)(uVar10 + 0xf) == *(int *)(param_2 + 0xf))) &&
      (sVar3 = *(short *)(uVar10 + 7), sVar3 == *(short *)(param_2 + 7))) &&
     ((*(char *)(uVar10 + 9) == *(char *)(param_2 + 9) &&
      (((*(uint *)(uVar10 + 0xb) ^ *(uint *)(param_2 + 0xb)) >> 0x1b & 1) == 0)))) {
    if ((*(byte *)(param_2 + 10) & 1) == (uint)((*(byte *)(uVar10 + 10) & 1) == 0)) {
      return false;
    }
    if ((*(byte *)(param_2 + 10) & 7 | (param_3 & 0xff) << 3) != (uint)*(byte *)(uVar10 + 10)) {
      return false;
    }
    if ((uint)*(byte *)(uVar10 + 3) - (uint)*(byte *)(uVar10 + 4) == iVar4) {
      bVar2 = *(byte *)(uVar10 + 3);
      if (bVar2 == 0) {
        uVar9 = 0;
      }
      else {
        if (sVar3 == 0x421) {
          iVar4 = 0xc;
        }
        else {
          iVar4 = JSObject::GetHeaderSize(sVar3,*(char *)(uVar10 + 9) < '\0');
        }
        iVar4 = (((int)((uint)bVar2 * 4 - iVar4) >> 2) - (uint)*(byte *)(uVar10 + 3)) +
                (uint)*(byte *)(uVar10 + 4);
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        uVar9 = iVar4 >> 1;
      }
      bVar2 = *(byte *)(param_2 + 3);
      uVar5 = (uint)bVar2;
      if (bVar2 != 0) {
        if (*(short *)(param_2 + 7) == 0x421) {
          iVar4 = 0xc;
        }
        else {
          iVar4 = JSObject::GetHeaderSize(*(short *)(param_2 + 7),*(char *)(param_2 + 9) < '\0');
        }
        iVar4 = (((int)((uint)bVar2 * 4 - iVar4) >> 2) - (uint)*(byte *)(param_2 + 3)) +
                (uint)*(byte *)(param_2 + 4);
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        uVar5 = iVar4 >> 1;
      }
      return uVar9 == uVar5;
    }
  }
  return false;
}

