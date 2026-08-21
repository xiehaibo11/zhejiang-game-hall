
/* v8::internal::String::ToNumber(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::String>) */

Factory * v8::internal::String::ToNumber(Factory *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  ulong *puVar6;
  ulong uVar7;
  Factory *pFVar8;
  Factory *pFVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  double dVar16;
  ulong local_40;
  uint local_34;
  
  puVar6 = (ulong *)Flatten(param_1,param_2,0);
  local_40 = *puVar6;
  uVar2 = *(uint *)(local_40 + 3);
  if ((uVar2 & 0xc0000003) == 0) {
    local_34 = uVar2 >> 3 & 0xffffff;
  }
  else if (((uVar2 & 3) == 2) ||
          (uVar7 = SlowAsArrayIndex((String *)&local_40,&local_34), (uVar7 & 1) == 0)) {
    uVar7 = *puVar6;
    uVar10 = uVar7 & 0xffffffff00000000 | 7;
    if ((*(ushort *)(uVar10 + *(uint *)(uVar7 - 1)) < 0x40) &&
       (((*(byte *)(uVar10 + *(uint *)(uVar7 - 1)) & 7) == 0 &&
        ((*(byte *)(uVar10 + *(uint *)(uVar7 - 1)) >> 3 & 1) != 0)))) {
      uVar2 = *(uint *)(uVar7 + 7);
      pFVar8 = param_1 + 0x95a0;
      if (uVar2 == 0) {
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
          pFVar8 = (Factory *)
                   CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),0);
          return pFVar8;
        }
        pFVar9 = *(Factory **)pFVar8;
        if (pFVar9 == *(Factory **)(param_1 + 0x95a8)) {
          pFVar9 = (Factory *)HandleScope::Extend((Isolate *)param_1);
        }
        *(Factory **)pFVar8 = pFVar9 + 8;
        *(undefined8 *)pFVar9 = 0;
        return pFVar9;
      }
      pbVar11 = (byte *)(uVar7 + 0xb);
      bVar3 = *pbVar11;
      uVar13 = (uint)(bVar3 == 0x2d);
      if (uVar2 == uVar13) {
LAB_01135c3c:
        return param_1 + 0x430;
      }
      pbVar15 = pbVar11;
      if (bVar3 == 0x2d) {
        pbVar15 = (byte *)(uVar7 + 0xc);
      }
      bVar4 = *pbVar15;
      uVar12 = (uint)bVar4;
      if (bVar4 < 0x3a) {
        if ((int)(uVar2 - uVar13) < 10) {
          if (uVar2 == (bVar3 == 0x2d) || (int)uVar2 < (int)uVar13) {
LAB_01135cf0:
            uVar13 = 1;
            if (bVar3 == 0x2d) {
              uVar13 = 2;
            }
            uVar10 = (ulong)(uVar12 - 0x30);
            if ((int)uVar13 < (int)uVar2) {
              iVar14 = uVar2 - uVar13;
              pbVar11 = pbVar11 + uVar13;
              do {
                iVar14 = iVar14 + -1;
                uVar10 = (ulong)(((uint)*pbVar11 + (int)uVar10 * 10) - 0x30);
                pbVar11 = pbVar11 + 1;
              } while (iVar14 != 0);
            }
            uVar13 = (uint)uVar10;
            if (bVar3 == 0x2d) {
              if (uVar13 == 0) {
                return param_1 + 0x448;
              }
              uVar10 = (ulong)-uVar13;
            }
            else if ((((int)uVar2 < 0xb) && ((*(uint *)(uVar7 + 3) & 1) != 0)) &&
                    ((uVar2 == 1 || (bVar3 != 0x30)))) {
              uVar5 = StringHasher::MakeArrayIndexHash(uVar13,uVar2);
              *(undefined4 *)(*puVar6 + 3) = uVar5;
            }
            uVar7 = -(uVar10 >> 0x1f) & 0xfffffffe00000000 | uVar10 << 1;
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
              pFVar8 = (Factory *)
                       CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
              return pFVar8;
            }
            pFVar9 = *(Factory **)pFVar8;
            if (pFVar9 == *(Factory **)(param_1 + 0x95a8)) {
              pFVar9 = (Factory *)HandleScope::Extend((Isolate *)param_1);
            }
            *(Factory **)pFVar8 = pFVar9 + 8;
            *(ulong *)pFVar9 = uVar7;
            return pFVar9;
          }
          if (bVar4 - 0x30 < 10) {
            lVar1 = 1;
            if (bVar3 == 0x2d) {
              lVar1 = 2;
            }
            iVar14 = uVar2 - (int)lVar1;
            pbVar15 = pbVar11 + lVar1;
            do {
              if (iVar14 == 0) goto LAB_01135cf0;
              bVar4 = *pbVar15;
              iVar14 = iVar14 + -1;
              pbVar15 = pbVar15 + 1;
            } while (bVar4 - 0x30 < 10);
          }
        }
      }
      else if ((uVar12 != 0x49) && (uVar12 != 0xa0)) goto LAB_01135c3c;
    }
    dVar16 = (double)StringToDouble(0,param_1,puVar6,0xb);
    pFVar8 = (Factory *)Factory::NewNumber<(v8::internal::AllocationType)0>(param_1,dVar16);
    return pFVar8;
  }
  pFVar8 = (Factory *)Factory::NewNumberFromUint(param_1,local_34);
  return pFVar8;
}

