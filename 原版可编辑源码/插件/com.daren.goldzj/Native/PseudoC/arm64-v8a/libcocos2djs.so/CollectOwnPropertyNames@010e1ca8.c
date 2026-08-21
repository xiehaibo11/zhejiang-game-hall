
/* v8::internal::KeyAccumulator::CollectOwnPropertyNames(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::JSObject>) */

undefined2 __thiscall
v8::internal::KeyAccumulator::CollectOwnPropertyNames
          (KeyAccumulator *this,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  Isolate *pIVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  ulong local_68;
  
  uVar13 = *param_3;
  uVar14 = uVar13 & 0xffffffff00000000;
  uVar3 = *(uint *)((uVar14 | 0xb) + (ulong)*(uint *)(uVar13 - 1));
  if (*(int *)(this + 0x24) == 0x12) {
    if ((uVar3 >> 0x15 & 1) == 0) {
      uVar8 = *(undefined8 *)this;
      if ((*(uint *)((uVar14 | 0xb) + (ulong)*(uint *)(uVar13 - 1)) >> 0x15 & 1) == 0) {
        puVar9 = (ulong *)FUN_010e13f8(uVar8,param_3);
      }
      else {
        uVar19 = uVar14 | *(uint *)(uVar13 + 3);
        if (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0xaa) {
          puVar9 = (ulong *)FUN_010e2394(uVar8,0,0);
        }
        else {
          if ((*(uint *)(uVar13 + 3) & 1) == 0) {
            uVar19 = *(ulong *)(uVar14 + 0x410);
          }
          puVar9 = (ulong *)FUN_010e2470(uVar8,0,0,uVar19);
        }
      }
      uVar14 = *param_3 & 0xffffffff00000000;
      uVar13 = uVar14 | *(uint *)(*param_3 - 1);
      uVar19 = (ulong)(*(uint *)(uVar13 + 0xb) >> 10) & 0x3ff;
      iVar18 = (int)uVar19;
      if ((iVar18 != *(int *)(*puVar9 + 3) >> 1) &&
         (pIVar10 = *(Isolate **)this,
         *(int *)(uVar13 + 0xf) + (int)pIVar10 != *(int *)(pIVar10 + 0xb0))) {
        uVar14 = uVar14 | *(uint *)(uVar13 + 0x17);
        if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar11 = *(ulong **)(pIVar10 + 0x95a0);
          if (puVar11 == *(ulong **)(pIVar10 + 0x95a8)) {
            puVar11 = (ulong *)HandleScope::Extend(pIVar10);
          }
          *(ulong **)(pIVar10 + 0x95a0) = puVar11 + 1;
          *puVar11 = uVar14;
        }
        else {
          puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar14);
        }
        if (iVar18 != 0) {
          lVar12 = 0;
          do {
            lVar16 = lVar12 + *puVar11;
            if ((*(uint *)(lVar16 + 0x13) >> 5 & 1) != 0) {
              AddShadowingKey(this,*puVar11 & 0xffffffff00000000 | (ulong)*(uint *)(lVar16 + 0xf));
            }
            lVar12 = lVar12 + 0xc;
          } while (uVar19 * 0xc - lVar12 != 0);
        }
      }
    }
    else {
      uVar19 = uVar14 | *(uint *)(uVar13 + 3);
      if (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0xaa) {
        puVar9 = (ulong *)FUN_010e2394(*(undefined8 *)this,*(undefined4 *)(this + 0x20),this);
      }
      else {
        if ((*(uint *)(uVar13 + 3) & 1) == 0) {
          uVar19 = *(ulong *)(uVar14 + 0x410);
        }
        puVar9 = (ulong *)FUN_010e2470(*(undefined8 *)this,*(undefined4 *)(this + 0x20),this,uVar19)
        ;
      }
    }
    if (*(short *)((*param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_3 - 1)) == 0xac) {
      uVar13 = *puVar9;
      uVar3 = *(uint *)(uVar13 + 3);
      if (1 < (int)uVar3) {
        iVar18 = 0;
        uVar14 = 1;
        while( true ) {
          pIVar10 = *(Isolate **)this;
          uVar13 = uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + (long)iVar18 + 7);
          if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar11 = *(ulong **)(pIVar10 + 0x95a0);
            if (puVar11 == *(ulong **)(pIVar10 + 0x95a8)) {
              puVar11 = (ulong *)HandleScope::Extend(pIVar10);
            }
            *(ulong **)(pIVar10 + 0x95a0) = puVar11 + 1;
            *puVar11 = uVar13;
          }
          else {
            puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar13);
          }
          local_68 = *param_3;
          lVar12 = JSModuleNamespace::GetExport
                             ((JSModuleNamespace *)&local_68,*(undefined8 *)this,puVar11);
          if (lVar12 == 0) {
            return 0;
          }
          if (uVar3 >> 1 <= uVar14) break;
          uVar13 = *puVar9;
          iVar18 = iVar18 + 4;
          uVar14 = uVar14 + 1;
        }
      }
    }
    uVar13 = *puVar9;
    uVar3 = *(uint *)(uVar13 + 3);
    if (1 < (int)uVar3) {
      iVar18 = 0;
      uVar14 = 1;
      while( true ) {
        pIVar10 = *(Isolate **)this;
        uVar13 = uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + (long)iVar18 + 7);
        if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar11 = *(ulong **)(pIVar10 + 0x95a0);
          if (puVar11 == *(ulong **)(pIVar10 + 0x95a8)) {
            puVar11 = (ulong *)HandleScope::Extend(pIVar10);
          }
          *(ulong **)(pIVar10 + 0x95a0) = puVar11 + 1;
          *puVar11 = uVar13;
        }
        else {
          puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar13);
        }
        uVar13 = AddKey(this,puVar11,0);
        if ((uVar13 & 1) == 0) goto LAB_010e2314;
        if (uVar3 >> 1 <= uVar14) break;
        uVar13 = *puVar9;
        uVar14 = uVar14 + 1;
        iVar18 = iVar18 + 4;
      }
    }
LAB_010e22f8:
    uVar7 = FUN_010e1ac0(param_2,param_3,this,1);
  }
  else {
    if ((uVar3 >> 0x15 & 1) == 0) {
      pIVar10 = *(Isolate **)this;
      uVar19 = (ulong)(*(uint *)((uVar14 | *(uint *)(uVar13 - 1)) + 0xb) >> 10) & 0x3ff;
      uVar14 = uVar14 | *(uint *)((uVar14 | *(uint *)(uVar13 - 1)) + 0x17);
      if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)(pIVar10 + 0x95a0);
        if (puVar9 == *(ulong **)(pIVar10 + 0x95a8)) {
          puVar9 = (ulong *)HandleScope::Extend(pIVar10);
        }
        *(ulong **)(pIVar10 + 0x95a0) = puVar9 + 1;
        *puVar9 = uVar14;
        if ((int)uVar19 != 0) goto LAB_010e1d68;
LAB_010e2004:
        iVar20 = -1;
      }
      else {
        puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar14);
        if ((int)uVar19 == 0) goto LAB_010e2004;
LAB_010e1d68:
        iVar18 = *(int *)(this + 0x20);
        uVar3 = *(uint *)(this + 0x24);
        uVar13 = 0;
        iVar20 = -1;
        lVar12 = 0x17;
        do {
          uVar14 = *puVar9;
          uVar2 = *(uint *)(lVar12 + uVar14 + -4);
          uVar1 = uVar3 & 7 & uVar2 >> 4;
          iVar4 = iVar20;
          if ((iVar18 == 1) || (uVar1 == 0)) {
            if ((uVar3 >> 5 & 1) == 0) {
              lVar16 = (uVar13 * 0xc00000000 + 0x1000000000 >> 0x20) + uVar14;
              uVar15 = uVar14 & 0xffffffff00000000 | 7;
LAB_010e1dd4:
              uVar14 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(lVar16 + -1);
              if (*(short *)(uVar15 + *(uint *)(uVar14 - 1)) == 0x40) {
                iVar4 = (int)uVar13;
                if (iVar20 != -1) {
                  iVar4 = iVar20;
                }
              }
              else {
                uVar2 = *(uint *)(this + 0x24);
                if ((*(uint *)(lVar16 + -1) & 1) == 0) {
                  bVar5 = false;
                  if (uVar2 == 0x40) goto LAB_010e1e80;
LAB_010e1e00:
                  if (!bVar5) {
                    if ((uVar2 >> 3 & 1) == 0) goto LAB_010e1e10;
                    goto LAB_010e1d90;
                  }
                  if (((uVar2 >> 4 & 1) != 0) || ((*(byte *)(uVar14 + 7) & 1) != 0))
                  goto LAB_010e1d90;
                }
                else {
                  bVar5 = *(short *)(uVar15 + *(uint *)(uVar14 - 1)) == 0x40;
                  if (uVar2 != 0x40) goto LAB_010e1e00;
LAB_010e1e80:
                  if ((!bVar5) || ((*(byte *)(uVar14 + 7) >> 4 & 1) == 0)) goto LAB_010e1d90;
                }
LAB_010e1e10:
                if (uVar1 == 0) {
                  pIVar10 = *(Isolate **)this;
                  if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                    puVar11 = *(ulong **)(pIVar10 + 0x95a0);
                    if (puVar11 == *(ulong **)(pIVar10 + 0x95a8)) {
                      puVar11 = (ulong *)HandleScope::Extend(pIVar10);
                    }
                    *(ulong **)(pIVar10 + 0x95a0) = puVar11 + 1;
                    *puVar11 = uVar14;
                  }
                  else {
                    puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                                 (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),
                                                  uVar14);
                  }
                  uVar14 = AddKey(this,puVar11,0);
                  if ((uVar14 & 1) == 0) goto LAB_010e2314;
                }
                else {
                  AddShadowingKey(this,uVar14);
                }
              }
            }
            else if ((uVar2 >> 1 & 1) != 0) {
              uVar2 = *(uint *)(lVar12 + uVar14);
              if ((uVar2 & 1) != 0) {
                uVar17 = uVar14 & 0xffffffff00000000 | (ulong)uVar2;
                uVar15 = uVar14 & 0xffffffff00000000 | 7;
                if ((*(short *)(uVar15 + *(uint *)(uVar17 - 1)) == 0x51) &&
                   ((*(byte *)(uVar17 + 7) >> 1 & 1) != 0)) {
                  lVar16 = (long)(lVar12 + uVar14) + -7;
                  goto LAB_010e1dd4;
                }
              }
            }
          }
LAB_010e1d90:
          iVar20 = iVar4;
          uVar13 = uVar13 + 1;
          lVar12 = lVar12 + 0xc;
        } while (uVar19 != uVar13);
      }
      if ((iVar20 == -1) || (cVar6 = FUN_010e254c(this,puVar9,iVar20,uVar19), cVar6 != '\0'))
      goto LAB_010e22f8;
    }
    else {
      uVar19 = uVar14 | *(uint *)(uVar13 + 3);
      if (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0xaa) {
        pIVar10 = *(Isolate **)this;
        if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)(pIVar10 + 0x95a0);
          if (puVar9 == *(ulong **)(pIVar10 + 0x95a8)) {
            puVar9 = (ulong *)HandleScope::Extend(pIVar10);
          }
          *(ulong **)(pIVar10 + 0x95a0) = puVar9 + 1;
          *puVar9 = uVar19;
        }
        else {
          puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar19);
        }
        uVar13 = BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>
                 ::CollectKeysTo(puVar9,this);
      }
      else {
        if ((*(uint *)(uVar13 + 3) & 1) == 0) {
          uVar19 = *(ulong *)(uVar14 + 0x410);
        }
        pIVar10 = *(Isolate **)this;
        if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)(pIVar10 + 0x95a0);
          if (puVar9 == *(ulong **)(pIVar10 + 0x95a8)) {
            puVar9 = (ulong *)HandleScope::Extend(pIVar10);
          }
          *(ulong **)(pIVar10 + 0x95a0) = puVar9 + 1;
          *puVar9 = uVar19;
        }
        else {
          puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar19);
        }
        uVar13 = BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>
                 ::CollectKeysTo(puVar9,this);
      }
      if ((uVar13 & 1) != 0) goto LAB_010e22f8;
    }
LAB_010e2314:
    uVar7 = 0;
  }
  return uVar7;
}

