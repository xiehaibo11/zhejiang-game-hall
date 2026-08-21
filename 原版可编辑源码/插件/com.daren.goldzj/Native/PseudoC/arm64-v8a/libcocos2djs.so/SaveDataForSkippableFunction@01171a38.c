
/* v8::internal::PreparseDataBuilder::SaveDataForSkippableFunction(v8::internal::PreparseDataBuilder*)
    */

bool __thiscall
v8::internal::PreparseDataBuilder::SaveDataForSkippableFunction
          (PreparseDataBuilder *this,PreparseDataBuilder *param_1)

{
  byte bVar1;
  PreparseDataBuilder PVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  
  lVar7 = *(long *)(param_1 + 0x38);
  uVar8 = *(uint *)(lVar7 + 0x70);
  do {
    iVar3 = *(int *)(this + 0x10);
    uVar5 = uVar8 >> 7;
    *(int *)(this + 0x10) = iVar3 + 1;
    bVar1 = (byte)uVar8 | 0x80;
    if (uVar5 == 0) {
      bVar1 = (byte)uVar8 & 0x7f;
    }
    *(byte *)(**(long **)(this + 8) + (long)iVar3) = bVar1;
    uVar8 = uVar5;
  } while (uVar5 != 0);
  this[0x18] = (PreparseDataBuilder)0x0;
  uVar8 = *(uint *)(lVar7 + 0x74);
  do {
    iVar3 = *(int *)(this + 0x10);
    uVar5 = uVar8 >> 7;
    *(int *)(this + 0x10) = iVar3 + 1;
    bVar1 = (byte)uVar8 | 0x80;
    if (uVar5 == 0) {
      bVar1 = (byte)uVar8 & 0x7f;
    }
    *(byte *)(**(long **)(this + 8) + (long)iVar3) = bVar1;
    uVar8 = uVar5;
  } while (uVar5 != 0);
  this[0x18] = (PreparseDataBuilder)0x0;
  PVar2 = param_1[0x4c];
  uVar8 = *(uint *)(lVar7 + 0x88);
  uVar5 = *(uint *)(param_1 + 0x40);
  uVar9 = (uVar8 & 0xffff) << 2 | (uint)(((byte)PVar2 & 3) == 2) | (uint)(uVar8 == uVar5) << 1;
  do {
    iVar3 = *(int *)(this + 0x10);
    uVar6 = uVar9 >> 7;
    *(int *)(this + 0x10) = iVar3 + 1;
    bVar1 = (byte)uVar9 | 0x80;
    if (uVar6 == 0) {
      bVar1 = (byte)uVar9 & 0x7f;
    }
    *(byte *)(**(long **)(this + 8) + (long)iVar3) = bVar1;
    uVar9 = uVar6;
  } while (uVar6 != 0);
  this[0x18] = (PreparseDataBuilder)0x0;
  if (uVar8 != uVar5) {
    uVar8 = *(uint *)(param_1 + 0x40);
    do {
      iVar3 = *(int *)(this + 0x10);
      uVar5 = uVar8 >> 7;
      *(int *)(this + 0x10) = iVar3 + 1;
      bVar1 = (byte)uVar8 | 0x80;
      if (uVar5 == 0) {
        bVar1 = (byte)uVar8 & 0x7f;
      }
      *(byte *)(**(long **)(this + 8) + (long)iVar3) = bVar1;
      uVar8 = uVar5;
    } while (uVar5 != 0);
    this[0x18] = (PreparseDataBuilder)0x0;
  }
  uVar8 = *(uint *)(param_1 + 0x44);
  do {
    iVar3 = *(int *)(this + 0x10);
    uVar5 = uVar8 >> 7;
    *(int *)(this + 0x10) = iVar3 + 1;
    bVar1 = (byte)uVar8 | 0x80;
    if (uVar5 == 0) {
      bVar1 = (byte)uVar8 & 0x7f;
    }
    *(byte *)(**(long **)(this + 8) + (long)iVar3) = bVar1;
    uVar8 = uVar5;
  } while (uVar5 != 0);
  this[0x18] = (PreparseDataBuilder)0x0;
  uVar4 = *(ushort *)(lVar7 + 0x81);
  if ((*(byte *)(lVar7 + 0x83) >> 5 & 1) == 0) {
    if ((uVar4 >> 6 & 1) == 0) {
      uVar8 = 0;
      goto LAB_01171bdc;
    }
    uVar8 = 0;
    if ((0x12 < *(byte *)(lVar7 + 0x85)) ||
       ((1 << (ulong)(*(byte *)(lVar7 + 0x85) & 0x1f) & 0x731f8U) == 0)) goto LAB_01171bdc;
  }
  uVar8 = 2;
LAB_01171bdc:
  iVar3 = *(int *)(this + 0x10);
  *(int *)(this + 0x10) = iVar3 + 1;
  *(undefined1 *)(**(long **)(this + 8) + (long)iVar3) = 0;
  this[0x18] = (PreparseDataBuilder)0x3;
  *(byte *)((long)*(int *)(this + 0x10) + **(long **)(this + 8) + -1) =
       *(byte *)((long)*(int *)(this + 0x10) + **(long **)(this + 8) + -1) |
       (byte)((uVar8 | uVar4 & 1) << 6);
  return ((byte)PVar2 & 3) == 2;
}

