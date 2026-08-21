
/* v8::internal::Factory::CopyFixedDoubleArray(v8::internal::Handle<v8::internal::FixedDoubleArray>)
    */

long * __thiscall v8::internal::Factory::CopyFixedDoubleArray(Factory *this,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  iVar1 = *(int *)(*param_2 + 3) >> 1;
  plVar6 = param_2;
  if (iVar1 != 0) {
    plVar6 = (long *)NewFixedDoubleArray(this,iVar1);
    uVar2 = iVar1 << 3 | 4;
    uVar3 = iVar1 << 3 | 7;
    if (-1 < (int)uVar2) {
      uVar3 = uVar2;
    }
    puVar7 = (undefined4 *)(*plVar6 + 3);
    puVar8 = (undefined4 *)(*param_2 + 3);
    uVar9 = (long)((ulong)uVar3 << 0x20) >> 0x22;
    if ((uint)((int)uVar3 >> 2) < 0x10) {
      if ((7 < (uint)((int)uVar3 >> 2)) &&
         ((puVar8 + uVar9 <= puVar7 || (puVar7 + uVar9 <= puVar8)))) {
        uVar10 = uVar9 & 0xfffffffffffffff8;
        puVar11 = (undefined8 *)(*plVar6 + 0x13);
        puVar8 = puVar8 + uVar10;
        puVar7 = puVar7 + uVar10;
        puVar12 = (undefined8 *)(*param_2 + 0x13);
        uVar13 = uVar10;
        do {
          puVar4 = puVar12 + -1;
          uVar14 = puVar12[-2];
          uVar16 = puVar12[1];
          uVar15 = *puVar12;
          uVar13 = uVar13 - 8;
          puVar12 = puVar12 + 4;
          puVar11[-1] = *puVar4;
          puVar11[-2] = uVar14;
          puVar11[1] = uVar16;
          *puVar11 = uVar15;
          puVar11 = puVar11 + 4;
        } while (uVar13 != 0);
        bVar5 = uVar10 == uVar9;
        uVar9 = uVar9 - uVar10;
        if (bVar5) {
          return plVar6;
        }
      }
      do {
        uVar9 = uVar9 - 1;
        *puVar7 = *puVar8;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar9 != 0);
    }
    else {
      MemCopy(puVar7,puVar8,uVar9 << 2);
    }
  }
  return plVar6;
}

