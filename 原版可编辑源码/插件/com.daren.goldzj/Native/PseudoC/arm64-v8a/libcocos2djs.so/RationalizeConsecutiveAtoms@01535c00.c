
/* v8::internal::RegExpDisjunction::RationalizeConsecutiveAtoms(v8::internal::RegExpCompiler*) */

void __thiscall
v8::internal::RegExpDisjunction::RationalizeConsecutiveAtoms
          (RegExpDisjunction *this,RegExpCompiler *param_1)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ZoneList *pZVar9;
  ZoneList *pZVar10;
  RegExpDisjunction *this_00;
  RegExpAlternative *this_01;
  uint uVar11;
  int iVar12;
  Zone *this_02;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  void *pvVar19;
  int iVar20;
  long lVar21;
  undefined4 uVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long *plVar27;
  long lVar28;
  uint local_74;
  bool local_68 [4];
  bool local_64 [4];
  
  plVar27 = *(long **)(this + 8);
  iVar2 = *(int *)((long)plVar27 + 0xc);
  if (iVar2 < 1) {
    uVar22 = 0;
  }
  else {
    this_02 = *(Zone **)(param_1 + 0x448);
    uVar24 = 0;
    uVar18 = 0;
    do {
      iVar16 = (int)uVar18;
      lVar21 = (long)iVar16;
      plVar14 = *(long **)(*plVar27 + (long)iVar16 * 8);
      uVar5 = (**(code **)(*plVar14 + 0xa0))(plVar14);
      iVar23 = (int)uVar24;
      if ((uVar5 & 1) == 0) {
        uVar18 = (ulong)(iVar16 + 1);
        *(undefined8 *)(*plVar27 + (long)iVar23 * 8) = *(undefined8 *)(*plVar27 + lVar21 * 8);
        uVar24 = (ulong)(iVar23 + 1);
      }
      else {
        lVar6 = (**(code **)(*plVar14 + 0x98))(plVar14);
        uVar11 = *(uint *)(lVar6 + 0x18);
        uVar26 = (ulong)*(uint *)(lVar6 + 0x10);
        uVar13 = iVar16 + 1;
        uVar5 = (ulong)uVar13;
        iVar12 = iVar16;
        if ((int)uVar13 < iVar2) {
          uVar25 = -(ulong)(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3;
          uVar15 = (ulong)**(ushort **)(lVar6 + 8);
          do {
            iVar12 = (int)uVar18;
            uVar13 = (uint)uVar15;
            iVar20 = (int)uVar5;
            plVar14 = *(long **)(*plVar27 + uVar25);
            uVar18 = (**(code **)(*plVar14 + 0xa0))(plVar14);
            if (((uVar18 & 1) == 0) ||
               (lVar6 = (**(code **)(*plVar14 + 0x98))(plVar14), *(uint *)(lVar6 + 0x18) != uVar11))
            goto LAB_01535f34;
            uVar3 = **(ushort **)(lVar6 + 8);
            uVar18 = (ulong)uVar3;
            if (uVar13 != uVar3) {
              if ((uVar11 >> 1 & 1) == 0) goto LAB_01535f34;
              lVar28 = *(long *)(param_1 + 0x440);
              lVar7 = lVar28 + (ulong)(byte)uVar3 * 8;
              uVar17 = (uint)uVar3;
              if (*(uint *)(lVar7 + 0xae18) == uVar17) {
                iVar4 = *(int *)(lVar7 + 0xae1c);
                if (iVar4 != 0) {
                  local_74 = iVar4 + uVar17;
                  uVar18 = (ulong)local_74;
                }
              }
              else {
                local_68[0] = true;
                iVar4 = unibrow::Ecma262Canonicalize::Convert(uVar17,0,&local_74,local_68);
                if (local_68[0] == false) {
                  if (iVar4 == 1) {
                    uVar18 = (ulong)local_74;
                  }
                }
                else if (iVar4 == 1) {
                  *(ulong *)(lVar28 + (uVar18 & 0xff) * 8 + 0xae18) =
                       uVar18 | (ulong)(local_74 - uVar17) << 0x20;
                  uVar18 = (ulong)local_74;
                }
                else {
                  *(ulong *)(lVar28 + (uVar18 & 0xff) * 8 + 0xae18) = uVar18;
                }
              }
              uVar5 = (ulong)(uVar13 & 0xff);
              lVar7 = lVar28 + uVar5 * 8;
              if (*(uint *)(lVar7 + 0xae18) == uVar13) {
                iVar4 = *(int *)(lVar7 + 0xae1c);
                if (iVar4 != 0) {
                  local_74 = iVar4 + uVar13;
                  uVar13 = local_74;
                }
              }
              else {
                local_64[0] = true;
                iVar4 = unibrow::Ecma262Canonicalize::Convert(uVar13,0,&local_74,local_64);
                if (local_64[0] == false) {
                  if (iVar4 == 1) {
                    uVar13 = local_74;
                  }
                }
                else if (iVar4 == 1) {
                  *(ulong *)(lVar28 + uVar5 * 8 + 0xae18) =
                       uVar15 | (ulong)(local_74 - uVar13) << 0x20;
                  uVar13 = local_74;
                }
                else {
                  *(ulong *)(lVar28 + uVar5 * 8 + 0xae18) = uVar15;
                }
              }
              uVar15 = uVar18;
              if ((uint)uVar18 != uVar13) {
                uVar5 = (ulong)(iVar12 + 1);
                goto LAB_01535f34;
              }
            }
            uVar5 = (ulong)(iVar20 + 1);
            uVar13 = (uint)uVar26;
            if ((int)*(uint *)(lVar6 + 0x10) <= (int)(uint)uVar26) {
              uVar13 = *(uint *)(lVar6 + 0x10);
            }
            uVar26 = (ulong)uVar13;
            uVar25 = uVar25 + 8;
            uVar18 = (ulong)(iVar12 + 1);
          } while (iVar12 + 2 < iVar2);
          uVar5 = (ulong)(iVar12 + 2);
          iVar12 = iVar20;
        }
LAB_01535f34:
        uVar18 = uVar5;
        iVar20 = (int)uVar26;
        if (iVar12 < iVar16 + 2) {
          if (iVar16 <= iVar12) {
            uVar5 = -(uVar24 >> 0x1f) & 0xfffffff800000000 | uVar24 << 3;
            do {
              uVar24 = (ulong)((int)uVar24 + 1);
              lVar6 = lVar21 * 8;
              lVar21 = lVar21 + 1;
              *(undefined8 *)(*plVar27 + uVar5) = *(undefined8 *)(*plVar27 + lVar6);
              uVar5 = uVar5 + 8;
            } while ((int)uVar18 != lVar21);
          }
        }
        else {
          uVar13 = (int)uVar18 - iVar16;
          lVar6 = (**(code **)(**(long **)(*plVar27 + lVar21 * 8) + 0x98))();
          if ((1 < (int)uVar13) && (1 < iVar20)) {
            uVar24 = 1;
            do {
              uVar25 = uVar26 & 0xffffffff;
              lVar7 = (**(code **)(**(long **)(*plVar27 + (uVar24 + lVar21) * 8) + 0x98))();
              uVar5 = 1;
              do {
                uVar26 = uVar5;
                if (*(short *)(*(long *)(lVar6 + 8) + uVar5 * 2) !=
                    *(short *)(*(long *)(lVar7 + 8) + uVar5 * 2)) break;
                uVar5 = uVar5 + 1;
                uVar26 = uVar25;
              } while (uVar25 != uVar5);
              iVar20 = (int)uVar26;
              uVar24 = uVar24 + 1;
            } while ((uVar24 < uVar13) && (1 < iVar20));
          }
          puVar8 = *(undefined8 **)(this_02 + 0x10);
          if ((ulong)(*(long *)(this_02 + 0x18) - (long)puVar8) < 0x20) {
            puVar8 = (undefined8 *)Zone::NewExpand(this_02,0x20);
          }
          else {
            *(undefined8 **)(this_02 + 0x10) = puVar8 + 4;
          }
          lVar7 = (long)iVar20;
          puVar8[1] = *(undefined8 *)(lVar6 + 8);
          puVar8[2] = lVar7;
          *(uint *)(puVar8 + 3) = uVar11;
          *puVar8 = &PTR__RegExpTree_01cc7678;
          pZVar9 = *(ZoneList **)(this_02 + 0x10);
          lVar6 = *(long *)(this_02 + 0x18);
          if ((ulong)(lVar6 - (long)pZVar9) < 0x10) {
            pZVar9 = (ZoneList *)Zone::NewExpand(this_02,0x10);
            pZVar10 = *(ZoneList **)(this_02 + 0x10);
            lVar6 = *(long *)(this_02 + 0x18);
          }
          else {
            pZVar10 = pZVar9 + 0x10;
            *(ZoneList **)(this_02 + 0x10) = pZVar10;
          }
          if ((ulong)(lVar6 - (long)pZVar10) < 0x10) {
            pZVar10 = (ZoneList *)Zone::NewExpand(this_02,0x10);
          }
          else {
            *(ZoneList **)(this_02 + 0x10) = pZVar10 + 0x10;
          }
          *(ZoneList **)pZVar9 = pZVar10;
          *(undefined8 *)(pZVar9 + 8) = 0x100000002;
          *(undefined8 **)pZVar10 = puVar8;
          pZVar10 = *(ZoneList **)(this_02 + 0x10);
          if ((ulong)(*(long *)(this_02 + 0x18) - (long)pZVar10) < 0x10) {
            pZVar10 = (ZoneList *)Zone::NewExpand(this_02,0x10);
          }
          else {
            *(ZoneList **)(this_02 + 0x10) = pZVar10 + 0x10;
          }
          if ((int)uVar13 < 1) {
            *(undefined8 *)pZVar10 = 0;
            *(uint *)(pZVar10 + 8) = uVar13;
            *(undefined4 *)(pZVar10 + 0xc) = 0;
          }
          else {
            lVar6 = *(long *)(this_02 + 0x10);
            uVar24 = (ulong)uVar13;
            uVar5 = uVar24 * 8;
            if (uVar5 < (ulong)(*(long *)(this_02 + 0x18) - lVar6) ||
                uVar5 - (*(long *)(this_02 + 0x18) - lVar6) == 0) {
              *(ulong *)(this_02 + 0x10) = lVar6 + uVar5;
            }
            else {
              lVar6 = Zone::NewExpand(this_02,uVar5);
            }
            *(uint *)(pZVar10 + 8) = uVar13;
            *(undefined4 *)(pZVar10 + 0xc) = 0;
            lVar21 = lVar21 << 3;
            *(long *)pZVar10 = lVar6;
            do {
              lVar6 = (**(code **)(**(long **)(*plVar27 + lVar21) + 0x98))();
              puVar8 = *(undefined8 **)(this_02 + 0x10);
              if (iVar20 == *(int *)(lVar6 + 0x10)) {
                if ((ulong)(*(long *)(this_02 + 0x18) - (long)puVar8) < 8) {
                  puVar8 = (undefined8 *)Zone::NewExpand(this_02,8);
                }
                else {
                  *(undefined8 **)(this_02 + 0x10) = puVar8 + 1;
                }
                *puVar8 = &PTR__RegExpTree_01cc7e90;
              }
              else {
                if ((ulong)(*(long *)(this_02 + 0x18) - (long)puVar8) < 0x20) {
                  puVar8 = (undefined8 *)Zone::NewExpand(this_02,0x20);
                }
                else {
                  *(undefined8 **)(this_02 + 0x10) = puVar8 + 4;
                }
                lVar28 = *(long *)(lVar6 + 8);
                iVar16 = *(int *)(lVar6 + 0x10);
                *(uint *)(puVar8 + 3) = uVar11;
                *puVar8 = &PTR__RegExpTree_01cc7678;
                puVar8[1] = lVar28 + lVar7 * 2;
                puVar8[2] = iVar16 - lVar7;
              }
              uVar13 = *(uint *)(pZVar10 + 8);
              uVar17 = *(uint *)(pZVar10 + 0xc);
              if ((int)uVar17 < (int)uVar13) {
                pvVar19 = *(void **)pZVar10;
              }
              else {
                pvVar19 = *(void **)(this_02 + 0x10);
                uVar1 = uVar13 << 1 | 1;
                uVar5 = -(ulong)((uVar13 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                        (ulong)uVar1 << 3;
                if ((ulong)(*(long *)(this_02 + 0x18) - (long)pvVar19) < uVar5) {
                  pvVar19 = (void *)Zone::NewExpand(this_02,uVar5);
                }
                else {
                  *(ulong *)(this_02 + 0x10) = (long)pvVar19 + uVar5;
                }
                uVar17 = *(uint *)(pZVar10 + 0xc);
                if (0 < (int)uVar17) {
                  MemCopy(pvVar19,*(void **)pZVar10,(ulong)uVar17 << 3);
                  uVar17 = *(uint *)(pZVar10 + 0xc);
                }
                *(void **)pZVar10 = pvVar19;
                *(uint *)(pZVar10 + 8) = uVar1;
              }
              uVar24 = uVar24 - 1;
              lVar21 = lVar21 + 8;
              *(uint *)(pZVar10 + 0xc) = uVar17 + 1;
              *(undefined8 **)((long)pvVar19 + (long)(int)uVar17 * 8) = puVar8;
            } while (uVar24 != 0);
          }
          this_00 = *(RegExpDisjunction **)(this_02 + 0x10);
          if ((ulong)(*(long *)(this_02 + 0x18) - (long)this_00) < 0x18) {
            this_00 = (RegExpDisjunction *)Zone::NewExpand(this_02,0x18);
          }
          else {
            *(RegExpDisjunction **)(this_02 + 0x10) = this_00 + 0x18;
          }
          RegExpDisjunction(this_00,pZVar10);
          uVar13 = *(uint *)(pZVar9 + 8);
          uVar11 = *(uint *)(pZVar9 + 0xc);
          if ((int)uVar11 < (int)uVar13) {
            pvVar19 = *(void **)pZVar9;
          }
          else {
            pvVar19 = *(void **)(this_02 + 0x10);
            uVar17 = uVar13 << 1 | 1;
            uVar24 = -(ulong)((uVar13 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 |
                     (ulong)uVar17 << 3;
            if ((ulong)(*(long *)(this_02 + 0x18) - (long)pvVar19) < uVar24) {
              pvVar19 = (void *)Zone::NewExpand(this_02,uVar24);
            }
            else {
              *(ulong *)(this_02 + 0x10) = (long)pvVar19 + uVar24;
            }
            uVar11 = *(uint *)(pZVar9 + 0xc);
            if (0 < (int)uVar11) {
              MemCopy(pvVar19,*(void **)pZVar9,(ulong)uVar11 << 3);
              uVar11 = *(uint *)(pZVar9 + 0xc);
            }
            *(void **)pZVar9 = pvVar19;
            *(uint *)(pZVar9 + 8) = uVar17;
          }
          *(uint *)(pZVar9 + 0xc) = uVar11 + 1;
          *(RegExpDisjunction **)((long)pvVar19 + (long)(int)uVar11 * 8) = this_00;
          this_01 = *(RegExpAlternative **)(this_02 + 0x10);
          if ((ulong)(*(long *)(this_02 + 0x18) - (long)this_01) < 0x18) {
            this_01 = (RegExpAlternative *)Zone::NewExpand(this_02,0x18);
          }
          else {
            *(RegExpAlternative **)(this_02 + 0x10) = this_01 + 0x18;
          }
          RegExpAlternative::RegExpAlternative(this_01,pZVar9);
          uVar24 = (ulong)(iVar23 + 1);
          *(RegExpAlternative **)(*plVar27 + (long)iVar23 * 8) = this_01;
        }
      }
      uVar22 = (undefined4)uVar24;
    } while ((int)uVar18 < iVar2);
  }
  *(undefined4 *)((long)plVar27 + 0xc) = uVar22;
  return;
}

