
/* v8::String::Utf8Length(v8::Isolate*) const */

int __thiscall v8::String::Utf8Length(String *this,Isolate *param_1)

{
  ushort uVar1;
  long *plVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort *puVar8;
  ulong uVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  ulong uVar14;
  byte *pbVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  long local_28;
  ushort *puVar9;
  
  plVar2 = (long *)internal::String::Flatten(param_1,this,0);
  local_28 = *plVar2;
  iVar16 = *(int *)(local_28 + 7);
  if (iVar16 == 0) {
    return 0;
  }
  auVar19 = internal::String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_28);
  uVar17 = auVar19._8_8_;
  puVar3 = auVar19._0_8_;
  uVar10 = (ulong)auVar19._8_4_;
  if (uVar17 >> 0x20 != 1) {
    if (uVar17 << 0x20 == 0) {
      return 0;
    }
    uVar17 = ((-(uVar17 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar17 & 0xffffffff) << 1) - 2 >> 1) +
             1;
    if (uVar17 < 2) {
      iVar12 = 0;
      uVar13 = 0xffff;
      puVar9 = puVar3;
    }
    else {
      uVar18 = uVar17 & 0xfffffffffffffffe;
      iVar16 = 0;
      iVar12 = 0;
      puVar9 = puVar3 + uVar18;
      uVar14 = uVar18;
      puVar8 = puVar3 + 1;
      uVar7 = 0xffff;
      do {
        uVar1 = puVar8[-1];
        uVar13 = *puVar8;
        iVar4 = 3;
        iVar11 = iVar4;
        if ((uVar1 & 0xfc00) == 0xdc00 && (uVar7 & 0xfc00) == 0xd800) {
          iVar11 = 1;
        }
        if ((uVar13 & 0xfc00) == 0xdc00 && (uVar1 & 0xfc00) == 0xd800) {
          iVar4 = 1;
        }
        iVar5 = 1;
        if ((ushort)(uVar1 - 0x80) < 0x780) {
          iVar5 = 2;
        }
        iVar6 = 1;
        if ((ushort)(uVar13 - 0x80) < 0x780) {
          iVar6 = 2;
        }
        if (uVar1 < 0x800) {
          iVar11 = iVar5;
        }
        if (uVar13 < 0x800) {
          iVar4 = iVar6;
        }
        iVar16 = iVar11 + iVar16;
        uVar14 = uVar14 - 2;
        iVar12 = iVar4 + iVar12;
        puVar8 = puVar8 + 2;
        uVar7 = uVar13;
      } while (uVar14 != 0);
      iVar12 = iVar12 + iVar16;
      if (uVar17 == uVar18) {
        return iVar12;
      }
    }
    do {
      uVar7 = *puVar9;
      if (uVar7 < 0x80) {
        iVar16 = 1;
      }
      else if (uVar7 < 0x800) {
        iVar16 = 2;
      }
      else {
        iVar16 = 3;
        if ((uVar7 & 0xfc00) == 0xdc00 && (uVar13 & 0xfc00) == 0xd800) {
          iVar16 = 1;
        }
      }
      puVar9 = puVar9 + 1;
      iVar12 = iVar16 + iVar12;
      uVar13 = uVar7;
    } while (puVar3 + uVar10 != puVar9);
    return iVar12;
  }
  if (uVar17 << 0x20 == 0) {
    return iVar16;
  }
  if (uVar10 < 2) {
    iVar11 = 0;
    puVar9 = puVar3;
  }
  else {
    uVar14 = uVar10 & 0xfffffffffffffffe;
    iVar12 = 0;
    iVar11 = 0;
    puVar9 = (ushort *)((long)puVar3 + uVar14);
    pbVar15 = (byte *)((long)puVar3 + 1);
    uVar17 = uVar14;
    do {
      uVar17 = uVar17 - 2;
      iVar12 = iVar12 + (uint)(pbVar15[-1] >> 7);
      iVar11 = iVar11 + (uint)(*pbVar15 >> 7);
      pbVar15 = pbVar15 + 2;
    } while (uVar17 != 0);
    iVar11 = iVar11 + iVar12;
    if (uVar10 == uVar14) goto LAB_00ebe3a0;
  }
  do {
    puVar8 = (ushort *)((long)puVar9 + 1);
    iVar11 = iVar11 + (uint)(byte)((byte)*puVar9 >> 7);
    puVar9 = puVar8;
  } while ((ushort *)((long)puVar3 + uVar10) != puVar8);
LAB_00ebe3a0:
  return iVar11 + iVar16;
}

