
undefined8 FUN_0173a914(ulong *param_1,int param_2,int *param_3)

{
  Isolate *pIVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  Isolate *pIVar15;
  long lVar16;
  int iVar17;
  ulong local_70;
  Representation local_68 [8];
  
  pIVar15 = (Isolate *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  uVar5 = v8::internal::JSObject::TryMigrateInstance(pIVar15,param_1);
  if (param_2 == 0) {
    return 0;
  }
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  pIVar1 = pIVar15 + 0x95b8;
  uVar5 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 7);
  if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar15 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar15 + 0x95a8)) {
      puVar6 = (ulong *)v8::internal::HandleScope::Extend(pIVar15);
    }
    *(ulong **)(pIVar15 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar5;
  }
  else {
    puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)pIVar1,uVar5);
    uVar5 = *puVar6;
  }
  iVar4 = *(int *)(uVar5 + 3);
  if ((1 < iVar4) && (*(int *)(uVar5 - 1) != *(int *)(pIVar15 + 0xe8))) {
    uVar10 = *param_1;
    uVar11 = uVar10 & 0xffffffff00000000 | 10;
    if (*(byte *)(uVar11 + *(uint *)(uVar10 - 1)) < 0x20) {
      iVar17 = 0;
      lVar16 = 0;
      do {
        iVar2 = *param_3;
        *param_3 = iVar2 + -1;
        if (iVar2 == 0) {
          return 0;
        }
        uVar9 = *(uint *)(*puVar6 + (long)iVar17 + 7);
        uVar5 = *puVar6 & 0xffffffff00000000 | (ulong)uVar9;
        if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)(pIVar15 + 0x95a0);
          if (puVar7 == *(ulong **)(pIVar15 + 0x95a8)) {
            puVar7 = (ulong *)v8::internal::HandleScope::Extend(pIVar15);
          }
          *(ulong **)(pIVar15 + 0x95a0) = puVar7 + 1;
          *puVar7 = uVar5;
          if ((uVar9 & 1) != 0) goto LAB_0173aaec;
        }
        else {
          puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)pIVar1,uVar5);
          uVar5 = *puVar7;
          if ((uVar5 & 1) != 0) {
LAB_0173aaec:
            if ((0xa9 < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))
               && (uVar5 = FUN_0173a914(puVar7,param_2 + -1,param_3), (uVar5 & 1) == 0)) {
              return 0;
            }
          }
        }
        lVar16 = lVar16 + 1;
        iVar17 = iVar17 + 4;
      } while (lVar16 < iVar4 >> 1);
    }
    else {
      if ((*(byte *)(uVar11 + *(uint *)(uVar10 - 1)) & 0xf0) != 0x20) {
        return 0;
      }
      local_70 = uVar5;
      iVar4 = v8::internal::HeapObject::SizeFromMap
                        ((HeapObject *)&local_70,
                         uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1));
      if (0x20000 < iVar4) {
        return 0;
      }
    }
  }
  uVar10 = *param_1;
  uVar5 = uVar10 & 0xffffffff00000000;
  if ((*(uint *)((uVar5 | 0xb) + (ulong)*(uint *)(uVar10 - 1)) >> 0x15 & 1) == 0) {
    uVar9 = *(uint *)(uVar10 + 3);
    if (((uVar9 & 1) == 0) || (uVar9 == *(uint *)(uVar5 + 0x168))) {
      uVar11 = *(ulong *)(uVar5 + 0x3b8);
    }
    else {
      uVar11 = uVar5 | uVar9;
    }
    if ((*(ushort *)(uVar11 + 3) & 0x7fe) == 0) {
      uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(uVar10 - 1)) + 0x17);
      if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)(pIVar15 + 0x95a0);
        if (puVar6 == *(ulong **)(pIVar15 + 0x95a8)) {
          puVar6 = (ulong *)v8::internal::HandleScope::Extend(pIVar15);
        }
        *(ulong **)(pIVar15 + 0x95a0) = puVar6 + 1;
        *puVar6 = uVar5;
      }
      else {
        puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)pIVar1,uVar5);
      }
      uVar5 = (ulong)(*(uint *)((*param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 - 1)) +
                               0xb) >> 10) & 0x3ff;
      if ((int)uVar5 == 0) {
        return 1;
      }
      lVar16 = 0;
      do {
        if ((*(uint *)(lVar16 + *puVar6 + 0x13) >> 2 & 1) == 0) {
          iVar4 = *param_3;
          *param_3 = iVar4 + -1;
          if (iVar4 == 0) {
            return 0;
          }
          uVar11 = *param_1;
          uVar10 = uVar11 & 0xffffffff00000000;
          uVar12 = uVar10 | *(uint *)(uVar11 - 1);
          uVar9 = *(int *)((uVar10 | lVar16 + 0x13U) + (ulong)*(uint *)(uVar12 + 0x17)) >> 1;
          uVar3 = uVar9 >> 0x13 & 0x3ff;
          iVar4 = (uint)*(byte *)(uVar12 + 3) - (uint)*(byte *)(uVar12 + 4);
          if ((int)uVar3 < iVar4) {
            uVar13 = (ulong)*(byte *)(uVar12 + 4) << 0x1c;
            iVar17 = (uVar3 + *(byte *)(uVar12 + 4)) * 4;
          }
          else {
            iVar17 = (uVar3 - iVar4) * 4 + 8;
            uVar13 = 0x20000000;
          }
          uVar9 = uVar9 >> 6 & 7;
          local_68[0] = SUB41(uVar9,0);
          if (4 < uVar9) {
            uVar8 = v8::internal::Representation::Mnemonic(local_68);
            v8::internal::PrintF("%s\n",uVar8);
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          uVar12 = (ulong)iVar17;
          uVar14 = (ulong)((int)uVar3 < iVar4) << 0xd | (long)iVar4 << 0x10 | uVar12;
          if (((uint)uVar14 >> 0xd & 1) == 0) {
            uVar9 = *(uint *)(uVar11 + 3);
            if (((uVar9 & 1) == 0) || (uVar9 == *(uint *)(uVar10 + 0x168))) {
              uVar11 = *(ulong *)(uVar10 + 0x3b8);
            }
            else {
              uVar11 = uVar10 | uVar9;
            }
            uVar9 = *(uint *)(((uVar12 & 0x1ffc) - ((uVar14 | uVar13) >> 0x1a & 0x7c)) + uVar11 + 7)
            ;
          }
          else {
            uVar9 = *(uint *)((uVar11 - 1) + (uVar12 & 0x1fff));
          }
          uVar10 = uVar10 | uVar9;
          if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)(pIVar15 + 0x95a0);
            if (puVar7 == *(ulong **)(pIVar15 + 0x95a8)) {
              puVar7 = (ulong *)v8::internal::HandleScope::Extend(pIVar15);
            }
            *(ulong **)(pIVar15 + 0x95a0) = puVar7 + 1;
            *puVar7 = uVar10;
            if ((uVar9 & 1) != 0) goto LAB_0173ad80;
          }
          else {
            puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)pIVar1,uVar10);
            uVar10 = *puVar7;
            if ((uVar10 & 1) != 0) {
LAB_0173ad80:
              if ((0xa9 < *(ushort *)
                           ((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1))) &&
                 (uVar10 = FUN_0173a914(puVar7,param_2 + -1,param_3), (uVar10 & 1) == 0)) {
                return 0;
              }
            }
          }
        }
        lVar16 = lVar16 + 0xc;
        if (uVar5 * 0xc - lVar16 == 0) {
          return 1;
        }
      } while( true );
    }
  }
  return 0;
}

