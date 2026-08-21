
long FUN_0147cb10(Isolate *param_1,ulong *param_2,ulong *param_3,undefined8 param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  Isolate *pIVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong *puVar10;
  byte *pbVar11;
  ulong *puVar12;
  CanonicalHandleScope *this;
  ulong *puVar13;
  long lVar14;
  ulong *puVar15;
  undefined4 uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  ulong uVar24;
  int iVar25;
  double dVar26;
  undefined1 auStack_78 [24];
  
  uVar17 = *param_3;
  iVar21 = *(int *)(uVar17 + 7);
  uVar4 = iVar21 >> 1;
  if (uVar4 != 0) {
    lVar9 = FUN_0147ed94(param_1,param_2,uVar4,1);
    if (lVar9 != 0) {
      return lVar9;
    }
    uVar17 = *param_3;
  }
  pIVar3 = param_1 + 0x95a0;
  if ((*(byte *)(uVar17 + 0x2b) >> 4 & 1) == 0) {
    uVar18 = uVar17 & 0xffffffff00000000;
    uVar24 = *(ulong *)(uVar18 + 0xa0);
    if (*(uint *)(uVar17 + 0x23) != (uint)uVar24) {
      uVar24 = uVar18 | *(uint *)((uVar18 | *(uint *)(uVar17 + 0x23)) + 3);
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)pIVar3;
      if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
        puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar3 = puVar10 + 1;
      *puVar10 = uVar24;
      if ((uVar24 & 1) != 0) goto LAB_0147cbf0;
LAB_0147cc40:
      lVar9 = FUN_0147d7f4(param_1,puVar10,0,1);
      if (lVar9 == 0) {
        return 0;
      }
    }
    else {
      puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar24);
      uVar24 = *puVar10;
      if ((uVar24 & 1) == 0) goto LAB_0147cc40;
LAB_0147cbf0:
      if ((int)uVar24 != *(int *)(param_1 + 0xa0)) goto LAB_0147cc40;
      uVar17 = *param_3 & 0xffffffff00000000;
      uVar8 = *(uint *)(*param_3 + 0x23);
      uVar18 = *(ulong *)(uVar17 + 0xa0);
      if (uVar8 != (uint)uVar18) {
        uVar18 = uVar17 | *(uint *)((uVar17 | uVar8) + 7);
      }
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)pIVar3;
        if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
          puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar3 = puVar10 + 1;
        *puVar10 = uVar18;
        if ((uVar18 & 1) != 0) goto LAB_0147d5a8;
LAB_0147d5f0:
        lVar9 = FUN_0147ef78(param_1,puVar10);
        if (lVar9 == 0) {
          return 0;
        }
      }
      else {
        puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
        uVar18 = *puVar10;
        if ((uVar18 & 1) == 0) goto LAB_0147d5f0;
LAB_0147d5a8:
        if ((int)uVar18 != *(int *)(param_1 + 0xa0)) goto LAB_0147d5f0;
        uVar17 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
        uVar17 = uVar17 | *(uint *)((uVar17 | *(uint *)((uVar17 | *(uint *)(*(ulong *)(param_1 +
                                                                                      0x2bc8) - 1))
                                                       + 0x13)) + 499);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar10 = *(ulong **)pIVar3;
          if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
            puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar3 = puVar10 + 1;
          *puVar10 = uVar17;
        }
        else {
          puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
        }
        lVar9 = v8::internal::Factory::NewJSObject((Factory *)param_1,puVar10,0);
      }
    }
    uVar18 = *param_3 & 0xffffffff00000000;
    uVar8 = *(uint *)(*param_3 + 0x23);
    uVar17 = *(ulong *)(uVar18 + 0xa0);
    if (uVar8 != (uint)uVar17) {
      uVar17 = uVar18 | *(uint *)((uVar18 | uVar8) + 0xb);
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)pIVar3;
      if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
        puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar3 = puVar10 + 1;
      *puVar10 = uVar17;
    }
    else {
      puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
      uVar17 = *puVar10;
    }
    if (((uVar17 & 1) == 0) || ((int)uVar17 != *(int *)(param_1 + 0xa0))) {
      pbVar11 = (byte *)FUN_0147ef78(param_1,puVar10);
      if (pbVar11 == (byte *)0x0) {
        return 0;
      }
      if ((*pbVar11 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","parent_prototype->IsHeapObject()");
      }
      v8::internal::JSObject::ForceSetPrototype(lVar9,pbVar11);
    }
  }
  else {
    lVar9 = 0;
  }
  uVar17 = *param_3;
  if ((*(byte *)(uVar17 + 0x2b) >> 2 & 1) == 0) {
    uVar24 = uVar17 & 0xffffffff00000000;
    uVar8 = *(uint *)(uVar17 + 0x23);
    uVar18 = *(ulong *)(uVar24 + 0xa0);
    uVar17 = uVar18;
    if (uVar8 != (uint)uVar18) {
      uVar17 = (ulong)*(uint *)((uVar24 | uVar8) + 0xf);
    }
    if (((uVar17 & 1) != 0) && ((int)uVar17 == *(int *)(param_1 + 0xa0))) {
      if (uVar8 != (uint)uVar18) {
        uVar18 = (ulong)*(uint *)((uVar24 | uVar8) + 0x13);
      }
      uVar16 = 0x410;
      if (((uVar18 & 1) != 0) && (uVar16 = 0x420, (int)uVar18 != (int)uVar17)) {
        uVar16 = 0x410;
      }
      goto LAB_0147cd60;
    }
  }
  uVar16 = 0x410;
LAB_0147cd60:
  lVar9 = v8::internal::ApiNatives::CreateApiFunction(param_1,param_2,param_3,lVar9,uVar16,param_4);
  if (uVar4 != 0) {
    FUN_0147f18c(param_1,param_2,uVar4,1,lVar9);
  }
  lVar19 = *(long *)pIVar3;
  lVar20 = *(long *)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  FUN_0147f360(auStack_78,param_1,lVar9);
  uVar17 = *param_3;
  if ((int)uVar17 != 0) {
    iVar25 = 0;
    do {
      uVar8 = *(uint *)(uVar17 + 0x13);
      uVar18 = uVar17 & 0xffffffff00000000;
      if (((uVar8 & 1) == 0) || (uVar8 != *(uint *)(param_1 + 0xa0))) {
        iVar25 = iVar25 + (*(int *)((uVar18 | uVar8) + 7) >> 1);
      }
      puVar1 = (uint *)(uVar17 + 0x23);
      uVar17 = *(ulong *)(uVar18 + 0xa0);
      if (*puVar1 != (uint)uVar17) {
        uVar17 = uVar18 | *(uint *)((uVar18 | *puVar1) + 0xb);
      }
    } while ((((uVar17 & 1) == 0) || ((int)uVar17 != *(int *)(param_1 + 0xa0))) &&
            ((int)uVar17 != 0));
    if (0 < iVar25) {
      puVar10 = (ulong *)v8::internal::Factory::NewFixedArray((Factory *)param_1,iVar25,0);
      uVar17 = *param_3;
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar12 = *(ulong **)pIVar3;
        if (puVar12 == *(ulong **)(param_1 + 0x95a8)) {
          puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar3 = puVar12 + 1;
        *puVar12 = uVar17;
        iVar25 = (int)uVar17;
      }
      else {
        puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
        uVar17 = *puVar12;
        iVar25 = (int)uVar17;
      }
      if (iVar25 != 0) {
        uVar8 = 0;
        do {
          while( true ) {
            uVar7 = *(uint *)(uVar17 + 0x13);
            uVar18 = uVar17 & 0xffffffff00000000;
            if (((uVar7 & 1) == 0) || (uVar7 != *(uint *)(param_1 + 0xa0))) {
              if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar13 = *(ulong **)pIVar3;
                if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
                  puVar13 = (ulong *)v8::internal::HandleScope::Extend(param_1);
                }
                *(ulong **)pIVar3 = puVar13 + 1;
                *puVar13 = uVar18 | uVar7;
              }
              else {
                puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                             (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                              uVar18 | uVar7);
              }
              uVar8 = v8::internal::AccessorInfo::AppendUnique(param_1,puVar13,puVar10,uVar8);
              uVar17 = *puVar12;
              uVar18 = uVar17 & 0xffffffff00000000;
            }
            puVar1 = (uint *)(uVar17 + 0x23);
            uVar17 = *(ulong *)(uVar18 + 0xa0);
            if (*puVar1 != (uint)uVar17) {
              uVar17 = uVar18 | *(uint *)((uVar18 | *puVar1) + 0xb);
            }
            if (((uVar17 & 1) != 0) && ((int)uVar17 == *(int *)(param_1 + 0xa0))) {
              uVar17 = 0;
            }
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) break;
            puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
            uVar17 = *puVar12;
            if ((int)uVar17 == 0) goto LAB_0147cf88;
          }
          puVar12 = *(ulong **)pIVar3;
          if (puVar12 == *(ulong **)(param_1 + 0x95a8)) {
            puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar3 = puVar12 + 1;
          *puVar12 = uVar17;
        } while ((int)uVar17 != 0);
LAB_0147cf88:
        if (0 < (int)uVar8) {
          lVar22 = 0;
          do {
            uVar17 = *puVar10 & 0xffffffff00000000 |
                     (ulong)*(uint *)(*puVar10 + (long)(int)lVar22 + 7);
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar12 = *(ulong **)pIVar3;
              if (puVar12 == *(ulong **)(param_1 + 0x95a8)) {
                puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar3 = puVar12 + 1;
              *puVar12 = uVar17;
            }
            else {
              puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
              uVar17 = *puVar12;
            }
            uVar17 = uVar17 & 0xffffffff00000000 | (ulong)*(uint *)(uVar17 + 3);
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar13 = *(ulong **)pIVar3;
              if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
                puVar13 = (ulong *)v8::internal::HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar3 = puVar13 + 1;
              *puVar13 = uVar17;
            }
            else {
              puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
            }
            v8::internal::JSObject::SetAccessor
                      (lVar9,puVar13,puVar12,*(uint *)(*puVar12 + 7) >> 10 & 7);
            lVar22 = lVar22 + 4;
          } while ((ulong)uVar8 * 4 - lVar22 != 0);
        }
      }
    }
  }
  uVar8 = *(uint *)(*param_3 + 0xf);
  lVar22 = lVar9;
  if (((uVar8 & 1) == 0) || (uVar8 != *(uint *)(param_1 + 0xa0))) {
    uVar17 = *param_3 & 0xffffffff00000000 | (ulong)uVar8;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)pIVar3;
      if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
        puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar3 = puVar10 + 1;
      *puVar10 = uVar17;
    }
    else {
      puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
      uVar17 = *puVar10;
    }
    if ((1 < *(uint *)(uVar17 + 7)) && (1 < *(int *)(*param_3 + 0xb))) {
      iVar23 = 0;
      iVar25 = 1;
      do {
        iVar5 = iVar23 * 4;
        uVar17 = uVar17 & 0xffffffff00000000 | (ulong)*(uint *)(uVar17 + (long)(iVar5 + 4) + 7);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar12 = *(ulong **)pIVar3;
          if (puVar12 == *(ulong **)(param_1 + 0x95a8)) {
            puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar3 = puVar12 + 1;
          *puVar12 = uVar17;
        }
        else {
          puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
        }
        lVar14 = *puVar10 + 7;
        uVar8 = *(uint *)(lVar14 + (iVar5 + 8));
        if ((uVar8 & 1) == 0) {
          this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
          uVar7 = uVar8 >> 4 & 7;
          uVar17 = *puVar10 & 0xffffffff00000000 | (ulong)*(uint *)(lVar14 + ((iVar23 + 2) * 4 + 4))
          ;
          if ((uVar8 >> 1 & 1) != 0) {
            if (this == (CanonicalHandleScope *)0x0) {
              puVar13 = *(ulong **)pIVar3;
              if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
                puVar13 = (ulong *)v8::internal::HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar3 = puVar13 + 1;
              *puVar13 = uVar17;
            }
            else {
              puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(this,uVar17);
            }
            uVar17 = *puVar10 & 0xffffffff00000000 |
                     (ulong)*(uint *)(*puVar10 + (long)((iVar23 + 3) * 4 + 4) + 7);
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar15 = *(ulong **)pIVar3;
              if (puVar15 == *(ulong **)(param_1 + 0x95a8)) {
                puVar15 = (ulong *)v8::internal::HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar3 = puVar15 + 1;
              *puVar15 = uVar17;
            }
            else {
              puVar15 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
            }
            lVar14 = FUN_0147f58c(param_1,lVar9,puVar12,puVar13,puVar15,uVar7);
            goto joined_r0x0147d22c;
          }
          if (this == (CanonicalHandleScope *)0x0) {
            puVar13 = *(ulong **)pIVar3;
            if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
              puVar13 = (ulong *)v8::internal::HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar3 = puVar13 + 1;
            *puVar13 = uVar17;
          }
          else {
            puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(this,uVar17);
          }
          lVar14 = FUN_0147f444(param_1,lVar9,puVar12,puVar13,uVar7);
          iVar23 = iVar23 + 3;
        }
        else {
          uVar8 = *(uint *)(lVar14 + ((iVar23 + 2) * 4 + 4));
          uVar17 = FUN_0147f77c(param_1,*(int *)(lVar14 + (iVar5 + 0x10)) >> 1);
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar13 = *(ulong **)pIVar3;
            if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
              puVar13 = (ulong *)v8::internal::HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar3 = puVar13 + 1;
            *puVar13 = uVar17;
          }
          else {
            puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
          }
          lVar14 = FUN_0147f444(param_1,lVar9,puVar12,puVar13,uVar8 >> 4 & 7);
joined_r0x0147d22c:
          iVar23 = iVar23 + 4;
        }
        if (lVar14 == 0) {
          lVar22 = 0;
          break;
        }
        if (*(int *)(*param_3 + 0xb) >> 1 <= iVar25) break;
        uVar17 = *puVar10;
        iVar25 = iVar25 + 1;
      } while( true );
    }
  }
  FUN_0147f87c(auStack_78);
  *(long *)pIVar3 = lVar19;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(long *)(param_1 + 0x95a8) != lVar20) {
    *(long *)(param_1 + 0x95a8) = lVar20;
    v8::internal::HandleScope::DeleteExtensions(param_1);
  }
  if ((lVar22 == 0) && (lVar9 = 0, uVar4 != 0)) {
    uVar18 = *param_2;
    uVar17 = uVar18 & 0xffffffff00000000;
    if (iVar21 < 0x802) {
      lVar9 = 0;
      *(undefined4 *)((uVar17 | *(uint *)(uVar18 + 0xc3)) + (long)(int)(uVar4 * 4 + -4) + 7) =
           *(undefined4 *)(uVar17 + 0xa0);
    }
    else {
      uVar17 = uVar17 | *(uint *)(uVar18 + 0x2a3);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)pIVar3;
        if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
          puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar3 = puVar10 + 1;
        *puVar10 = uVar17;
      }
      else {
        puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar17);
      }
      uVar18 = *puVar10;
      uVar17 = (*(ulong *)(*(long *)(param_1 + 0x490) + 7) ^ (ulong)uVar4 ^ 0xffffffffffffffff) +
               (*(ulong *)(*(long *)(param_1 + 0x490) + 7) ^ (ulong)uVar4) * 0x40000;
      uVar6 = (*(int *)(uVar18 + 0xf) >> 1) - 1;
      uVar17 = (uVar17 ^ uVar17 >> 0x1f) * 0x15;
      uVar17 = (uVar17 ^ uVar17 >> 0xb) * 0x41;
      uVar7 = uVar6 & ((uint)(uVar17 >> 0x16) ^ (uint)uVar17);
      uVar8 = uVar7 & 0x3fffffff;
      uVar7 = *(uint *)(uVar18 + 7 + (long)(int)(uVar7 * 8 + 0xc));
      if (uVar7 != *(uint *)(param_1 + 0xa0)) {
        iVar21 = 1;
        do {
          if (uVar7 != (uint)*(undefined8 *)(param_1 + 0xa8)) {
            if ((uVar7 & 1) == 0) {
              dVar26 = (double)((int)uVar7 >> 1);
            }
            else {
              dVar26 = *(double *)((uVar18 & 0xffffffff00000000 | (ulong)uVar7) + 3);
            }
            if (uVar4 == (int)dVar26) {
              uVar17 = (ulong)uVar8;
              goto LAB_0147d4f4;
            }
          }
          uVar8 = uVar8 + iVar21 & uVar6;
          uVar7 = *(uint *)(uVar18 + 7 + (long)(int)(uVar8 * 8 + 0xc));
          iVar21 = iVar21 + 1;
        } while (uVar7 != *(uint *)(param_1 + 0xa0));
      }
      uVar17 = 0xffffffffffffffff;
LAB_0147d4f4:
      puVar10 = (ulong *)v8::internal::
                         Dictionary<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
                         ::DeleteEntry(param_1,puVar10,uVar17);
      uVar18 = *param_2;
      uVar17 = *puVar10;
      puVar2 = (undefined4 *)(uVar18 + 0x2a3);
      *puVar2 = (int)uVar17;
      if ((uVar17 & 1) != 0) {
        uVar24 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar24 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar18,puVar2,uVar17);
          uVar24 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar24 & 0x18) != 0) && ((*(byte *)((uVar18 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar18,puVar2,uVar17);
        }
      }
      lVar9 = 0;
    }
  }
  return lVar9;
}

