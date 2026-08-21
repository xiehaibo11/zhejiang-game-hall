
/* v8::internal::ValueDeserializer::ReadExpectedString(v8::internal::Handle<v8::internal::String>)
    */

undefined8 __thiscall
v8::internal::ValueDeserializer::ReadExpectedString(ValueDeserializer *this,undefined8 *param_2)

{
  ulong *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  ulong *__s2;
  ulong uVar8;
  uint uVar9;
  ulong *puVar10;
  ulong *puVar11;
  uint uVar12;
  byte *pbVar13;
  byte *__s1;
  ulong __n;
  undefined1 auVar14 [16];
  undefined8 local_48;
  
  pbVar2 = *(byte **)(this + 0x10);
  pbVar3 = *(byte **)(this + 0x18);
  pbVar13 = pbVar2;
  do {
    if (pbVar3 <= pbVar13) goto LAB_011471c8;
    __s1 = pbVar13 + 1;
    bVar4 = *pbVar13;
    *(byte **)(this + 0x10) = __s1;
    pbVar13 = __s1;
  } while (bVar4 == 0);
  uVar9 = 0;
  uVar12 = 0;
  do {
    if (pbVar3 <= __s1) goto LAB_011471c8;
    bVar5 = *__s1;
    if (uVar12 < 0x20) {
      uVar9 = (bVar5 & 0x7f) << (ulong)(uVar12 & 0x1f) | uVar9;
      uVar12 = uVar12 + 7;
    }
    __s1 = __s1 + 1;
    *(byte **)(this + 0x10) = __s1;
  } while ((char)bVar5 < '\0');
  if (((int)uVar9 < 0) || (__n = (ulong)uVar9, (long)pbVar3 - (long)__s1 < (long)__n))
  goto LAB_011471c8;
  *(byte **)(this + 0x10) = __s1 + __n;
  local_48 = *param_2;
  auVar14 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_48);
  uVar8 = auVar14._8_8_;
  __s2 = auVar14._0_8_;
  if (bVar4 == 99) {
    if (uVar8 >> 0x20 != 2) goto LAB_011471c8;
    uVar8 = (uVar8 & 0xffffffff) << 1;
joined_r0x0114724c:
    if (uVar8 != __n) goto LAB_011471c8;
  }
  else {
    uVar12 = auVar14._8_4_;
    if (bVar4 != 0x53) {
      if ((bVar4 != 0x22) || (uVar8 >> 0x20 != 1)) goto LAB_011471c8;
      uVar8 = (ulong)(int)uVar12;
      goto joined_r0x0114724c;
    }
    if ((uVar8 >> 0x20 != 1) || (__n != (long)(int)uVar12)) goto LAB_011471c8;
    puVar1 = (ulong *)((long)__s2 + __n);
    puVar11 = __s2;
    if (uVar12 < 8) {
LAB_011472d0:
      puVar10 = puVar11;
      if (puVar11 < puVar1) {
        do {
          puVar10 = puVar11;
          if ((char)*puVar11 < '\0') break;
          puVar11 = (ulong *)((long)puVar11 + 1);
          puVar10 = puVar1;
        } while (puVar1 != puVar11);
      }
    }
    else if (((ulong)__s2 & 7) == 0) {
LAB_011472ac:
      do {
        puVar10 = puVar11;
        puVar11 = puVar10;
        if (puVar1 < puVar10 + 1) goto LAB_011472d0;
        puVar11 = puVar10 + 1;
      } while ((*puVar10 & 0x8080808080808080) == 0);
    }
    else {
      cVar6 = (char)*__s2;
      puVar10 = __s2;
      while (-1 < cVar6) {
        puVar10 = (ulong *)((long)puVar10 + 1);
        puVar11 = puVar10;
        if (((ulong)puVar10 & 7) == 0) goto LAB_011472ac;
        cVar6 = *(char *)puVar10;
      }
    }
    if ((int)puVar10 - auVar14._0_4_ < (int)uVar12) goto LAB_011471c8;
  }
  iVar7 = memcmp(__s1,__s2,__n);
  if (iVar7 == 0) {
    return 1;
  }
LAB_011471c8:
  *(byte **)(this + 0x10) = pbVar2;
  return 0;
}

