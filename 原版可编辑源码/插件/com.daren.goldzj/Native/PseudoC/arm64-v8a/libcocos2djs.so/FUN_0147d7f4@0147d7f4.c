
/* WARNING: Type propagation algorithm not settling */

long FUN_0147d7f4(Isolate *param_1,ulong *param_2,ulong *param_3,uint param_4)

{
  uint *puVar1;
  Isolate *pIVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  CanonicalHandleScope *pCVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 auStack_78 [24];
  
  uVar18 = *param_2;
  pIVar2 = param_1 + 0x95a0;
  if (param_3 == (ulong *)0x0) {
LAB_0147d8a8:
    iVar22 = *(int *)(uVar18 + 7) >> 1;
    if (iVar22 == 0) {
      bVar5 = false;
    }
    else {
      uVar18 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
      uVar18 = uVar18 | *(uint *)((uVar18 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)pIVar2;
        if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
          puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar2 = puVar7 + 1;
        *puVar7 = uVar18;
      }
      else {
        puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
      }
      lVar8 = FUN_0147ed94(param_1,puVar7,iVar22,0);
      if (lVar8 != 0) goto LAB_0147e280;
      bVar5 = true;
    }
    puVar10 = param_3;
    puVar7 = param_3;
    if (param_3 == (ulong *)0x0) goto LAB_0147d8e8;
  }
  else {
    uVar19 = *param_3;
    uVar15 = uVar19 & 0xffffffff00000000;
    if ((((*(short *)((uVar15 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x439) &&
         (*(int *)((uVar15 | *(uint *)(uVar19 + 0xb)) + 3) == *(int *)(uVar18 + 0x17))) &&
        ((*(byte *)(uVar18 + 0x1b) >> 1 & 1) == 0)) &&
       (*(int *)((uVar15 | *(uint *)((uVar15 | *(uint *)(uVar19 + 0xf)) - 1)) + 0x13) ==
        *(int *)((*(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000 |
                 (ulong)*(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13))) goto LAB_0147d8a8;
    iVar22 = 0;
    bVar5 = false;
LAB_0147d8e8:
    uVar6 = *(uint *)(*param_2 + 0x17);
    if (((uVar6 & 1) == 0) || (uVar6 != *(uint *)(param_1 + 0xa0))) {
      puVar7 = *(ulong **)pIVar2;
      puVar10 = *(ulong **)(param_1 + 0x95a8);
      uVar18 = *param_2 & 0xffffffff00000000 | (ulong)uVar6;
      *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar12 = puVar7;
        if (puVar10 == puVar7) {
          puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar2 = puVar12 + 1;
        *puVar12 = uVar18;
      }
      else {
        puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
      }
      uVar18 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
      uVar18 = uVar18 | *(uint *)((uVar18 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar14 = *(ulong **)pIVar2;
        if (puVar14 == *(ulong **)(param_1 + 0x95a8)) {
          puVar14 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar2 = puVar14 + 1;
        *puVar14 = uVar18;
      }
      else {
        puVar14 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
      }
      puVar12 = (ulong *)FUN_0147cb10(param_1,puVar14,puVar12,0);
      if (puVar12 == (ulong *)0x0) {
        *(ulong **)pIVar2 = puVar7;
        *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
        if (*(ulong **)(param_1 + 0x95a8) == puVar10) {
          return 0;
        }
        *(ulong **)(param_1 + 0x95a8) = puVar10;
        v8::internal::HandleScope::DeleteExtensions(param_1);
        return 0;
      }
      uVar18 = *puVar12;
      *(ulong **)pIVar2 = puVar7;
      *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
      if (*(ulong **)(param_1 + 0x95a8) != puVar10) {
        *(ulong **)(param_1 + 0x95a8) = puVar10;
        v8::internal::HandleScope::DeleteExtensions(param_1);
      }
      pCVar11 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    }
    else {
      uVar18 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
      pCVar11 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
      uVar18 = uVar18 | *(uint *)((uVar18 | *(uint *)((uVar18 | *(uint *)(*(ulong *)(param_1 +
                                                                                    0x2bc8) - 1)) +
                                                     0x13)) + 499);
    }
    if (pCVar11 == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar2;
      if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
        puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar2 = puVar7 + 1;
      *puVar7 = uVar18;
    }
    else {
      puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(pCVar11,uVar18);
    }
    puVar10 = puVar7;
    if (param_3 != (ulong *)0x0) {
      puVar10 = param_3;
    }
  }
  lVar9 = v8::internal::JSObject::New(puVar7,puVar10,0);
  if (lVar9 == 0) {
    return 0;
  }
  if ((param_4 & 1) != 0) {
    v8::internal::JSObject::OptimizeAsPrototype(lVar9,1);
  }
  lVar16 = *(long *)pIVar2;
  lVar17 = *(long *)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  FUN_0147f360(auStack_78,param_1,lVar9);
  uVar18 = *param_2;
  if ((int)uVar18 != 0) {
    iVar21 = 0;
    while( true ) {
      uVar6 = *(uint *)(uVar18 + 0x13);
      if (((uVar6 & 1) == 0) || (uVar6 != *(uint *)(param_1 + 0xa0))) {
        iVar21 = iVar21 + (*(int *)((uVar18 & 0xffffffff00000000 | (ulong)uVar6) + 7) >> 1);
      }
      uVar6 = *(uint *)(uVar18 + 0x17);
      if (((uVar6 & 1) != 0) && (uVar6 == *(uint *)(param_1 + 0xa0))) break;
      uVar15 = uVar18 & 0xffffffff00000000 | (ulong)uVar6;
      do {
        uVar18 = uVar15 & 0xffffffff00000000;
        puVar1 = (uint *)(uVar15 + 0x23);
        uVar15 = *(ulong *)(uVar18 + 0xa0);
        if (*puVar1 != (uint)uVar15) {
          uVar15 = uVar18 | *(uint *)((uVar18 | *puVar1) + 0xb);
        }
        if ((((uVar15 & 1) != 0) && ((int)uVar15 == *(int *)(param_1 + 0xa0))) || ((int)uVar15 == 0)
           ) goto LAB_0147dbe8;
        uVar19 = uVar15 & 0xffffffff00000000;
        uVar18 = *(ulong *)(uVar19 + 0xa0);
        if (*(uint *)(uVar15 + 0x23) != (uint)uVar18) {
          uVar18 = uVar19 | *(uint *)((uVar19 | *(uint *)(uVar15 + 0x23)) + 0x17);
        }
      } while (((uVar18 & 1) != 0) && ((int)uVar18 == *(int *)(param_1 + 0xa0)));
      if ((int)uVar18 == 0) break;
    }
LAB_0147dbe8:
    if (0 < iVar21) {
      puVar7 = (ulong *)v8::internal::Factory::NewFixedArray((Factory *)param_1,iVar21,0);
      uVar18 = *param_2;
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)pIVar2;
        if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
          puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar2 = puVar10 + 1;
        *puVar10 = uVar18;
        iVar21 = (int)uVar18;
      }
      else {
        puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
        uVar18 = *puVar10;
        iVar21 = (int)uVar18;
      }
      if (iVar21 != 0) {
        uVar6 = 0;
        do {
          while( true ) {
            uVar4 = *(uint *)(uVar18 + 0x13);
            uVar15 = uVar18 & 0xffffffff00000000;
            if (((uVar4 & 1) == 0) || (uVar4 != *(uint *)(param_1 + 0xa0))) {
              if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar12 = *(ulong **)pIVar2;
                if (puVar12 == *(ulong **)(param_1 + 0x95a8)) {
                  puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_1);
                }
                *(ulong **)pIVar2 = puVar12 + 1;
                *puVar12 = uVar15 | uVar4;
              }
              else {
                puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                             (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                              uVar15 | uVar4);
              }
              uVar6 = v8::internal::AccessorInfo::AppendUnique(param_1,puVar12,puVar7,uVar6);
              uVar18 = *puVar10;
              uVar15 = uVar18 & 0xffffffff00000000;
            }
            uVar4 = *(uint *)(uVar18 + 0x17);
            if (((uVar4 & 1) != 0) && (uVar4 == *(uint *)(param_1 + 0xa0))) break;
            uVar15 = uVar15 | uVar4;
            do {
              uVar18 = uVar15 & 0xffffffff00000000;
              puVar1 = (uint *)(uVar15 + 0x23);
              uVar15 = *(ulong *)(uVar18 + 0xa0);
              if (*puVar1 != (uint)uVar15) {
                uVar15 = uVar18 | *(uint *)((uVar18 | *puVar1) + 0xb);
              }
              if ((((uVar15 & 1) != 0) && ((int)uVar15 == *(int *)(param_1 + 0xa0))) ||
                 ((int)uVar15 == 0)) goto LAB_0147dc60;
              uVar19 = uVar15 & 0xffffffff00000000;
              uVar18 = *(ulong *)(uVar19 + 0xa0);
              if (*(uint *)(uVar15 + 0x23) != (uint)uVar18) {
                uVar18 = uVar19 | *(uint *)((uVar19 | *(uint *)(uVar15 + 0x23)) + 0x17);
              }
            } while (((uVar18 & 1) != 0) && ((int)uVar18 == *(int *)(param_1 + 0xa0)));
            pCVar11 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
            if (pCVar11 != (CanonicalHandleScope *)0x0) goto LAB_0147dc6c;
LAB_0147dd78:
            puVar10 = *(ulong **)pIVar2;
            if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
              puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar2 = puVar10 + 1;
            *puVar10 = uVar18;
            if ((int)uVar18 == 0) goto LAB_0147dda0;
          }
LAB_0147dc60:
          uVar18 = 0;
          pCVar11 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
          if (pCVar11 == (CanonicalHandleScope *)0x0) goto LAB_0147dd78;
LAB_0147dc6c:
          puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(pCVar11,uVar18);
          uVar18 = *puVar10;
        } while ((int)uVar18 != 0);
LAB_0147dda0:
        if (0 < (int)uVar6) {
          lVar8 = 0;
          do {
            uVar18 = *puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + (long)(int)lVar8 + 7)
            ;
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar10 = *(ulong **)pIVar2;
              if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
                puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar2 = puVar10 + 1;
              *puVar10 = uVar18;
            }
            else {
              puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
              uVar18 = *puVar10;
            }
            uVar18 = uVar18 & 0xffffffff00000000 | (ulong)*(uint *)(uVar18 + 3);
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar12 = *(ulong **)pIVar2;
              if (puVar12 == *(ulong **)(param_1 + 0x95a8)) {
                puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar2 = puVar12 + 1;
              *puVar12 = uVar18;
            }
            else {
              puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
            }
            v8::internal::JSObject::SetAccessor
                      (lVar9,puVar12,puVar10,*(uint *)(*puVar10 + 7) >> 10 & 7);
            lVar8 = lVar8 + 4;
          } while ((ulong)uVar6 * 4 - lVar8 != 0);
        }
      }
    }
  }
  uVar6 = *(uint *)(*param_2 + 0xf);
  lVar8 = lVar9;
  if (((uVar6 & 1) == 0) || (uVar6 != *(uint *)(param_1 + 0xa0))) {
    uVar18 = *param_2 & 0xffffffff00000000 | (ulong)uVar6;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar2;
      if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
        puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar2 = puVar7 + 1;
      *puVar7 = uVar18;
    }
    else {
      puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
      uVar18 = *puVar7;
    }
    if ((1 < *(uint *)(uVar18 + 7)) && (1 < *(int *)(*param_2 + 0xb))) {
      iVar20 = 0;
      iVar21 = 1;
      do {
        iVar3 = iVar20 * 4;
        uVar18 = uVar18 & 0xffffffff00000000 | (ulong)*(uint *)(uVar18 + (long)(iVar3 + 4) + 7);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar10 = *(ulong **)pIVar2;
          if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
            puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar2 = puVar10 + 1;
          *puVar10 = uVar18;
        }
        else {
          puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
        }
        lVar13 = *puVar7 + 7;
        uVar6 = *(uint *)(lVar13 + (iVar3 + 8));
        if ((uVar6 & 1) == 0) {
          pCVar11 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
          uVar4 = uVar6 >> 4 & 7;
          uVar18 = *puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(lVar13 + ((iVar20 + 2) * 4 + 4));
          if ((uVar6 >> 1 & 1) != 0) {
            if (pCVar11 == (CanonicalHandleScope *)0x0) {
              puVar12 = *(ulong **)pIVar2;
              if (puVar12 == *(ulong **)(param_1 + 0x95a8)) {
                puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar2 = puVar12 + 1;
              *puVar12 = uVar18;
            }
            else {
              puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(pCVar11,uVar18);
            }
            uVar18 = *puVar7 & 0xffffffff00000000 |
                     (ulong)*(uint *)(*puVar7 + (long)((iVar20 + 3) * 4 + 4) + 7);
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar14 = *(ulong **)pIVar2;
              if (puVar14 == *(ulong **)(param_1 + 0x95a8)) {
                puVar14 = (ulong *)v8::internal::HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar2 = puVar14 + 1;
              *puVar14 = uVar18;
            }
            else {
              puVar14 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
            }
            lVar13 = FUN_0147f58c(param_1,lVar9,puVar10,puVar12,puVar14,uVar4);
            goto joined_r0x0147e050;
          }
          if (pCVar11 == (CanonicalHandleScope *)0x0) {
            puVar12 = *(ulong **)pIVar2;
            if (puVar12 == *(ulong **)(param_1 + 0x95a8)) {
              puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar2 = puVar12 + 1;
            *puVar12 = uVar18;
          }
          else {
            puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(pCVar11,uVar18);
          }
          lVar13 = FUN_0147f444(param_1,lVar9,puVar10,puVar12,uVar4);
          iVar20 = iVar20 + 3;
        }
        else {
          uVar6 = *(uint *)(lVar13 + ((iVar20 + 2) * 4 + 4));
          uVar18 = FUN_0147f77c(param_1,*(int *)(lVar13 + (iVar3 + 0x10)) >> 1);
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar12 = *(ulong **)pIVar2;
            if (puVar12 == *(ulong **)(param_1 + 0x95a8)) {
              puVar12 = (ulong *)v8::internal::HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar2 = puVar12 + 1;
            *puVar12 = uVar18;
          }
          else {
            puVar12 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
          }
          lVar13 = FUN_0147f444(param_1,lVar9,puVar10,puVar12,uVar6 >> 4 & 7);
joined_r0x0147e050:
          iVar20 = iVar20 + 4;
        }
        if (lVar13 == 0) {
          lVar8 = 0;
          break;
        }
        if (*(int *)(*param_2 + 0xb) >> 1 <= iVar21) break;
        uVar18 = *puVar7;
        iVar21 = iVar21 + 1;
      } while( true );
    }
  }
  FUN_0147f87c(auStack_78);
  *(long *)pIVar2 = lVar16;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(long *)(param_1 + 0x95a8) != lVar17) {
    *(long *)(param_1 + 0x95a8) = lVar17;
    v8::internal::HandleScope::DeleteExtensions(param_1);
  }
  if (lVar8 == 0) {
    return 0;
  }
  if ((*(byte *)(*param_2 + 0x1b) >> 1 & 1) != 0) {
    v8::internal::JSObject::SetImmutableProto(lVar9);
  }
  if ((param_4 & 1) != 0) {
    return lVar8;
  }
  v8::internal::JSObject::MigrateSlowToFast(lVar8,0,"ApiNatives::InstantiateObject");
  if (!bVar5) {
    return lVar8;
  }
  uVar18 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar18 = uVar18 | *(uint *)((uVar18 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar2;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar7 + 1;
    *puVar7 = uVar18;
  }
  else {
    puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar18);
  }
  FUN_0147f18c(param_1,puVar7,iVar22,0,lVar8);
LAB_0147e280:
  lVar8 = v8::internal::Factory::CopyJSObject((Factory *)param_1,lVar8);
  return lVar8;
}

