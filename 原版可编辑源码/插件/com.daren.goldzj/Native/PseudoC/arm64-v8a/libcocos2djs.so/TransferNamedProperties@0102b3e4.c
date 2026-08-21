
/* v8::internal::Genesis::TransferNamedProperties(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::JSObject>) */

void __thiscall
v8::internal::Genesis::TransferNamedProperties(Genesis *this,ulong *param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  undefined4 local_c8;
  int local_c4;
  undefined8 local_bc;
  ulong local_b0;
  ulong *local_a8;
  undefined8 uStack_a0;
  ulong *local_98;
  undefined8 uStack_90;
  ulong *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar13 = *param_2;
  uVar16 = uVar13 & 0xffffffff00000000;
  if ((*(uint *)((uVar16 | 0xb) + (ulong)*(uint *)(uVar13 - 1)) >> 0x15 & 1) == 0) {
    pIVar4 = *(Isolate **)this;
    uVar16 = uVar16 | *(uint *)((uVar16 | *(uint *)(uVar13 - 1)) + 0x17);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar16;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar16);
    }
    uVar13 = (ulong)(*(uint *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1)) +
                              0xb) >> 10) & 0x3ff;
    if ((int)uVar13 != 0) {
      lVar20 = 0;
      do {
        lVar15 = lVar20 + *puVar5;
        uVar2 = *(uint *)(lVar15 + 0x13);
        uVar1 = (int)uVar2 >> 1;
        if ((uVar2 >> 2 & 1) == 0) {
          if ((uVar2 >> 1 & 1) != 0) {
LAB_0102bec8:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          pIVar4 = *(Isolate **)this;
          *(int *)(pIVar4 + 0x95b0) = *(int *)(pIVar4 + 0x95b0) + 1;
          uVar14 = *(undefined8 *)(pIVar4 + 0x95a0);
          lVar15 = *(long *)(pIVar4 + 0x95a8);
          pIVar6 = *(Isolate **)this;
          uVar16 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(lVar20 + *puVar5 + 0xf);
          if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)(pIVar6 + 0x95a0);
            if (puVar7 == *(ulong **)(pIVar6 + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(pIVar6);
            }
            *(ulong **)(pIVar6 + 0x95a0) = puVar7 + 1;
            *puVar7 = uVar16;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar16);
          }
          uVar16 = *(ulong *)this;
          if (((*param_3 & 1) == 0) ||
             (puVar8 = param_3, *(ushort *)((uVar16 | 7) + (ulong)*(uint *)(*param_3 - 1)) < 0xa9))
          {
            puVar8 = (ulong *)LookupIterator::GetRootForNonJSReceiver
                                        (uVar16,param_3,0xffffffffffffffff);
          }
          local_c8 = 0;
          local_bc = 0xc000000000;
          puVar9 = puVar7;
          local_b0 = uVar16;
          if ((*(ushort *)((*puVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar7 - 1)) &
              0xffe0) == 0x20) {
            puVar9 = (ulong *)StringTable::LookupString(uVar16,puVar7);
          }
          uStack_a0 = 0;
          uStack_90 = 0;
          local_80 = 0xffffffffffffffff;
          uStack_78 = 0xffffffffffffffff;
          local_a8 = puVar9;
          local_98 = param_3;
          local_88 = puVar8;
          LookupIterator::Start<false>((LookupIterator *)&local_c8);
          if (local_c4 == 0) {
LAB_0102be9c:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","LookupIterator::ACCESS_CHECK != it.state()");
          }
          if (local_c4 == 4) {
            uVar16 = *param_2 & 0xffffffff00000000;
            uVar17 = uVar16 | *(uint *)(*param_2 - 1);
            uVar2 = *(int *)((uVar16 | lVar20 + 0x13U) + (ulong)*(uint *)(uVar17 + 0x17)) >> 1;
            uVar3 = uVar2 >> 0x13 & 0x3ff;
            iVar19 = (uint)*(byte *)(uVar17 + 3) - (uint)*(byte *)(uVar17 + 4);
            if ((int)uVar3 < iVar19) {
              uVar16 = (ulong)*(byte *)(uVar17 + 4) << 0x1c;
              iVar18 = (uVar3 + *(byte *)(uVar17 + 4)) * 4;
            }
            else {
              iVar18 = (uVar3 - iVar19) * 4 + 8;
              uVar16 = 0x20000000;
            }
            uVar2 = uVar2 >> 6 & 7;
            local_c8 = CONCAT31(local_c8._1_3_,(char)uVar2);
            if (4 < uVar2) {
              uVar14 = Representation::Mnemonic((Representation *)&local_c8);
              PrintF("%s\n",uVar14);
              goto LAB_0102bec8;
            }
            uVar10 = JSObject::FastPropertyAt
                               (param_2,uVar1 >> 6 & 7,
                                (ulong)((int)uVar3 < iVar19) << 0xd | (long)iVar19 << 0x10 |
                                (long)iVar18 | uVar16 | *(ulong *)(&DAT_019c80a8 + (ulong)uVar2 * 8)
                               );
            JSObject::AddProperty(*(undefined8 *)this,param_3,puVar7,uVar10,uVar1 >> 3 & 7);
          }
          if (pIVar4 != (Isolate *)0x0) {
            *(undefined8 *)(pIVar4 + 0x95a0) = uVar14;
            *(int *)(pIVar4 + 0x95b0) = *(int *)(pIVar4 + 0x95b0) + -1;
            if (*(long *)(pIVar4 + 0x95a8) != lVar15) {
              *(long *)(pIVar4 + 0x95a8) = lVar15;
LAB_0102b544:
              HandleScope::DeleteExtensions(pIVar4);
            }
          }
        }
        else {
          pIVar4 = *(Isolate **)this;
          uVar16 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(lVar15 + 0xf);
          if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)(pIVar4 + 0x95a0);
            if (puVar7 == *(ulong **)(pIVar4 + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(pIVar4);
            }
            *(ulong **)(pIVar4 + 0x95a0) = puVar7 + 1;
            *puVar7 = uVar16;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar16);
          }
          uVar16 = *(ulong *)this;
          if (((*param_3 & 1) == 0) ||
             (puVar8 = param_3, *(ushort *)((uVar16 | 7) + (ulong)*(uint *)(*param_3 - 1)) < 0xa9))
          {
            puVar8 = (ulong *)LookupIterator::GetRootForNonJSReceiver
                                        (uVar16,param_3,0xffffffffffffffff);
          }
          local_c8 = 0;
          local_bc = 0xc000000000;
          puVar9 = puVar7;
          local_b0 = uVar16;
          if ((*(ushort *)((*puVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar7 - 1)) &
              0xffe0) == 0x20) {
            puVar9 = (ulong *)StringTable::LookupString(uVar16,puVar7);
          }
          uStack_a0 = 0;
          uStack_90 = 0;
          local_80 = 0xffffffffffffffff;
          uStack_78 = 0xffffffffffffffff;
          local_a8 = puVar9;
          local_98 = param_3;
          local_88 = puVar8;
          LookupIterator::Start<false>((LookupIterator *)&local_c8);
          if (local_c4 == 0) goto LAB_0102be9c;
          if (local_c4 == 4) {
            pIVar4 = *(Isolate **)this;
            uVar14 = *(undefined8 *)(pIVar4 + 0x95a0);
            lVar15 = *(long *)(pIVar4 + 0x95a8);
            *(int *)(pIVar4 + 0x95b0) = *(int *)(pIVar4 + 0x95b0) + 1;
            pIVar6 = *(Isolate **)this;
            uVar16 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(lVar20 + *puVar5 + 0x17);
            if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar8 = *(ulong **)(pIVar6 + 0x95a0);
              if (puVar8 == *(ulong **)(pIVar6 + 0x95a8)) {
                puVar8 = (ulong *)HandleScope::Extend(pIVar6);
              }
              *(ulong **)(pIVar6 + 0x95a0) = puVar8 + 1;
              *puVar8 = uVar16;
            }
            else {
              puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar16);
            }
            JSObject::SetNormalizedProperty(param_3,puVar7,puVar8,uVar1 & 0x38 | 0xc1);
            if (pIVar4 != (Isolate *)0x0) {
              *(undefined8 *)(pIVar4 + 0x95a0) = uVar14;
              *(int *)(pIVar4 + 0x95b0) = *(int *)(pIVar4 + 0x95b0) + -1;
              if (*(long *)(pIVar4 + 0x95a8) != lVar15) {
                *(long *)(pIVar4 + 0x95a8) = lVar15;
                goto LAB_0102b544;
              }
            }
          }
        }
        lVar20 = lVar20 + 0xc;
      } while (uVar13 * 0xc != lVar20);
    }
  }
  else {
    uVar17 = uVar16 | *(uint *)(uVar13 + 3);
    if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0xaa) {
      pIVar4 = *(Isolate **)this;
      if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)(pIVar4 + 0x95a0);
        if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(pIVar4);
        }
        *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
        *puVar5 = uVar17;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar17);
      }
      plVar11 = (long *)BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>
                        ::IterationIndices(*(undefined8 *)this,puVar5);
      lVar20 = *plVar11;
      if (1 < *(int *)(lVar20 + 3)) {
        iVar19 = 0;
        lVar15 = 0;
        do {
          pIVar4 = *(Isolate **)this;
          uVar13 = *puVar5 & 0xffffffff00000000 |
                   (ulong)*(uint *)(*puVar5 + (long)(int)((*(uint *)(lVar20 + iVar19 + 7) &
                                                          0x7ffffffe) * 2 + 0x14) + 7);
          if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)(pIVar4 + 0x95a0);
            if (puVar7 == *(ulong **)(pIVar4 + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(pIVar4);
            }
            *(ulong **)(pIVar4 + 0x95a0) = puVar7 + 1;
            *puVar7 = uVar13;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar13);
            uVar13 = *puVar7;
          }
          pIVar4 = *(Isolate **)this;
          uVar13 = uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 3);
          if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)(pIVar4 + 0x95a0);
            if (puVar8 == *(ulong **)(pIVar4 + 0x95a8)) {
              puVar8 = (ulong *)HandleScope::Extend(pIVar4);
            }
            *(ulong **)(pIVar4 + 0x95a0) = puVar8 + 1;
            *puVar8 = uVar13;
          }
          else {
            puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar13);
          }
          uVar13 = *(ulong *)this;
          if (((*param_3 & 1) == 0) ||
             (puVar9 = param_3, *(ushort *)((uVar13 | 7) + (ulong)*(uint *)(*param_3 - 1)) < 0xa9))
          {
            puVar9 = (ulong *)LookupIterator::GetRootForNonJSReceiver
                                        (uVar13,param_3,0xffffffffffffffff);
          }
          local_c8 = 0;
          local_bc = 0xc000000000;
          puVar12 = puVar8;
          local_b0 = uVar13;
          if ((*(ushort *)((*puVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar8 - 1)) &
              0xffe0) == 0x20) {
            puVar12 = (ulong *)StringTable::LookupString(uVar13,puVar8);
          }
          uStack_a0 = 0;
          uStack_90 = 0;
          local_80 = 0xffffffffffffffff;
          uStack_78 = 0xffffffffffffffff;
          local_a8 = puVar12;
          local_98 = param_3;
          local_88 = puVar9;
          LookupIterator::Start<false>((LookupIterator *)&local_c8);
          if (local_c4 == 0) goto LAB_0102be9c;
          if (local_c4 == 4) {
            pIVar4 = *(Isolate **)this;
            uVar1 = *(uint *)(*puVar7 + 0xb);
            uVar13 = *puVar7 & 0xffffffff00000000 | (ulong)uVar1;
            if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar9 = *(ulong **)(pIVar4 + 0x95a0);
              if (puVar9 == *(ulong **)(pIVar4 + 0x95a8)) {
                puVar9 = (ulong *)HandleScope::Extend(pIVar4);
              }
              *(ulong **)(pIVar4 + 0x95a0) = puVar9 + 1;
              *puVar9 = uVar13;
              lVar20 = *(long *)this;
              if ((uVar1 & 1) != 0) goto LAB_0102bbfc;
            }
            else {
              puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar13);
              uVar13 = *puVar9;
              lVar20 = *(long *)this;
              if ((uVar13 & 1) != 0) {
LAB_0102bbfc:
                if ((int)uVar13 == *(int *)(lVar20 + 0xa8)) goto LAB_0102b9e8;
              }
            }
            if ((*(uint *)(*puVar7 + 7) >> 1 & 1) == 0) {
              JSObject::AddProperty(lVar20,param_3,puVar8,puVar9,*(uint *)(*puVar7 + 7) >> 4 & 7);
            }
          }
LAB_0102b9e8:
          lVar15 = lVar15 + 1;
          iVar19 = iVar19 + 4;
          lVar20 = *plVar11;
        } while (lVar15 < *(int *)(lVar20 + 3) >> 1);
      }
    }
    else {
      if ((*(uint *)(uVar13 + 3) & 1) == 0) {
        uVar17 = *(ulong *)(uVar16 + 0x410);
      }
      pIVar4 = *(Isolate **)this;
      if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)(pIVar4 + 0x95a0);
        if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(pIVar4);
        }
        *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
        *puVar5 = uVar17;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar17);
      }
      plVar11 = (long *)BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>
                        ::IterationIndices(*(undefined8 *)this,puVar5);
      lVar20 = *plVar11;
      if (1 < *(int *)(lVar20 + 3)) {
        iVar19 = 0;
        lVar15 = 0;
        do {
          lVar20 = ((long)((ulong)*(uint *)(lVar20 + iVar19 + 7) << 0x20) >> 0x21) * 0xc00000000;
          pIVar4 = *(Isolate **)this;
          uVar13 = *puVar5 & 0xffffffff00000000 |
                   (ulong)*(uint *)(*puVar5 + (lVar20 + 0x1400000000 >> 0x20) + 7);
          if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)(pIVar4 + 0x95a0);
            if (puVar7 == *(ulong **)(pIVar4 + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(pIVar4);
            }
            *(ulong **)(pIVar4 + 0x95a0) = puVar7 + 1;
            *puVar7 = uVar13;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar13);
          }
          uVar13 = *(ulong *)this;
          if (((*param_3 & 1) == 0) ||
             (puVar8 = param_3, *(ushort *)((uVar13 | 7) + (ulong)*(uint *)(*param_3 - 1)) < 0xa9))
          {
            puVar8 = (ulong *)LookupIterator::GetRootForNonJSReceiver
                                        (uVar13,param_3,0xffffffffffffffff);
          }
          local_c8 = 0;
          local_bc = 0xc000000000;
          puVar9 = puVar7;
          local_b0 = uVar13;
          if ((*(ushort *)((*puVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar7 - 1)) &
              0xffe0) == 0x20) {
            puVar9 = (ulong *)StringTable::LookupString(uVar13,puVar7);
          }
          uStack_a0 = 0;
          uStack_90 = 0;
          local_80 = 0xffffffffffffffff;
          uStack_78 = 0xffffffffffffffff;
          local_a8 = puVar9;
          local_98 = param_3;
          local_88 = puVar8;
          LookupIterator::Start<false>((LookupIterator *)&local_c8);
          if (local_c4 == 0) goto LAB_0102be9c;
          if (local_c4 == 4) {
            pIVar4 = *(Isolate **)this;
            uVar13 = *puVar5 & 0xffffffff00000000 |
                     (ulong)*(uint *)(*puVar5 + (lVar20 + 0x1800000000 >> 0x20) + 7);
            if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar8 = *(ulong **)(pIVar4 + 0x95a0);
              if (puVar8 == *(ulong **)(pIVar4 + 0x95a8)) {
                puVar8 = (ulong *)HandleScope::Extend(pIVar4);
              }
              *(ulong **)(pIVar4 + 0x95a0) = puVar8 + 1;
              *puVar8 = uVar13;
            }
            else {
              puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar13);
            }
            JSObject::AddProperty
                      (*(undefined8 *)this,param_3,puVar7,puVar8,
                       *(uint *)(*puVar5 + (lVar20 + 0x1c00000000 >> 0x20) + 7) >> 4 & 7);
          }
          lVar15 = lVar15 + 1;
          iVar19 = iVar19 + 4;
          lVar20 = *plVar11;
        } while (lVar15 < *(int *)(lVar20 + 3) >> 1);
      }
    }
  }
  return;
}

