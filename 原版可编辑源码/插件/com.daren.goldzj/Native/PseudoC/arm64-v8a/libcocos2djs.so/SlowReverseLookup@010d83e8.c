
/* v8::internal::JSObject::SlowReverseLookup(v8::internal::Object) */

ulong __thiscall v8::internal::JSObject::SlowReverseLookup(JSObject *this,ulong param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  double dVar17;
  double dVar18;
  ulong local_18;
  
  uVar11 = *(ulong *)this;
  uVar10 = uVar11 & 0xffffffff00000000;
  if ((*(uint *)((uVar10 | 0xb) + (ulong)*(uint *)(uVar11 - 1)) >> 0x15 & 1) == 0) {
    uVar8 = (uint)param_2;
    if ((param_2 & 1) == 0) {
      bVar3 = true;
    }
    else {
      bVar3 = *(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0x42
      ;
    }
    uVar14 = (ulong)(*(uint *)((uVar10 | *(uint *)(uVar11 - 1)) + 0xb) >> 10) & 0x3ff;
    if ((int)uVar14 != 0) {
      lVar12 = 0;
      uVar13 = uVar10 | *(uint *)((uVar10 | *(uint *)(uVar11 - 1)) + 0x17);
      do {
        uVar1 = *(uint *)(uVar13 + lVar12 + 0x13);
        if ((uVar1 >> 2 & 1) == 0) {
          uVar4 = uVar10 | *(uint *)(uVar11 - 1);
          uVar1 = *(int *)((lVar12 + 0x13U | uVar10) + (ulong)*(uint *)(uVar4 + 0x17)) >> 1;
          uVar15 = uVar1 >> 0x13 & 0x3ff;
          iVar2 = (uint)*(byte *)(uVar4 + 3) - (uint)*(byte *)(uVar4 + 4);
          if ((int)uVar15 < iVar2) {
            uVar5 = (ulong)*(byte *)(uVar4 + 4) << 0x1c;
            iVar9 = (uVar15 + *(byte *)(uVar4 + 4)) * 4;
          }
          else {
            iVar9 = (uVar15 - iVar2) * 4 + 8;
            uVar5 = 0x20000000;
          }
          uVar1 = uVar1 >> 6 & 7;
          local_18 = CONCAT71(local_18._1_7_,(char)uVar1);
          if (4 < uVar1) {
            uVar7 = Representation::Mnemonic((Representation *)&local_18);
            PrintF("%s\n",uVar7);
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          uVar4 = (ulong)iVar9;
          uVar16 = (ulong)((int)uVar15 < iVar2) << 0xd | (long)iVar2 << 0x10 | uVar4;
          if (((uint)uVar16 >> 0xd & 1) == 0) {
            uVar15 = *(uint *)(uVar11 + 3);
            if (((uVar15 & 1) == 0) || (uVar15 == *(uint *)(uVar10 + 0x168))) {
              uVar6 = *(ulong *)(uVar10 + 0x3b8);
            }
            else {
              uVar6 = uVar10 | uVar15;
            }
            uVar15 = *(uint *)(((uVar4 & 0x1ffc) - ((uVar16 | uVar5) >> 0x1a & 0x7c)) + uVar6 + 7);
          }
          else {
            uVar15 = *(uint *)((uVar4 & 0x1fff) + uVar11 + -1);
          }
          if ((*(ulong *)(&DAT_019d75d8 + (ulong)uVar1 * 8) | uVar4 & 0xc000) == 0x4000) {
            if (bVar3) {
              if ((uVar15 & 1) == 0) {
                dVar17 = (double)((int)uVar15 >> 1);
              }
              else {
                dVar17 = *(double *)((uVar10 | uVar15) + 3);
              }
              dVar18 = (double)((int)uVar8 >> 1);
              if ((param_2 & 1) != 0) {
                dVar18 = *(double *)(param_2 + 3);
              }
              if (dVar17 == dVar18) goto LAB_010d8604;
            }
          }
          else if (uVar15 == uVar8) {
LAB_010d8604:
            return uVar10 | *(uint *)(uVar13 + lVar12 + 0xf);
          }
        }
        else if (((uVar1 >> 1 & 1) == 0) && (*(uint *)(uVar13 + lVar12 + 0x17) == uVar8)) {
          return uVar10 | *(uint *)(uVar13 + lVar12 + 0xf);
        }
        lVar12 = lVar12 + 0xc;
      } while (uVar14 * 0xc - lVar12 != 0);
    }
    uVar10 = *(ulong *)(uVar10 + 0xa0);
  }
  else if (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0xaa) {
    local_18 = uVar10 | *(uint *)(uVar11 + 3);
    uVar10 = Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::
             SlowReverseLookup((Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>
                                *)&local_18);
  }
  else {
    if ((*(uint *)(uVar11 + 3) & 1) == 0) {
      local_18 = *(ulong *)(uVar10 + 0x410);
    }
    else {
      local_18 = uVar10 | *(uint *)(uVar11 + 3);
    }
    uVar10 = Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::
             SlowReverseLookup((Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>
                                *)&local_18);
  }
  return uVar10;
}

