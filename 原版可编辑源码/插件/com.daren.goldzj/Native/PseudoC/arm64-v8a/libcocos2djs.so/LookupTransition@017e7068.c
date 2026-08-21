
/* v8::internal::compiler::AccessInfoFactory::LookupTransition(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::MaybeHandle<v8::internal::JSObject>)
   const */

void v8::internal::compiler::AccessInfoFactory::LookupTransition
               (PropertyAccessInfo *param_1,undefined8 *param_2,undefined8 *param_3,
               undefined8 *param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  CompilationDependencies *this;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  Isolate *pIVar10;
  ulong *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong *local_e8;
  ulong local_b8;
  ulong local_b0 [2];
  ObjectRef aOStack_a0 [16];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  Zone *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_90 = *(undefined8 **)*param_2;
  local_80 = (undefined8 *)*param_3;
  local_78 = (Zone *)((ulong)*(uint *)((long)local_80 + 0x23) + (long)local_90);
  local_88 = param_3;
  if ((((ulong)local_78 & 1) == 0) || ((int)local_78 == 3)) {
    local_70 = 1;
  }
  else if (((ulong)local_78 & 3) == 1) {
    uVar9 = (ulong)local_78 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar9 + *(uint *)(local_78 + -1)) == 0x98) {
      local_70 = 4;
    }
    else if (*(short *)(uVar9 + *(uint *)(local_78 + -1)) == 100) {
      local_70 = 0;
    }
    else {
      local_70 = 2;
    }
  }
  else {
    if (((ulong)local_78 & 3) != 3) goto LAB_017e7a50;
    local_70 = 3;
  }
  uVar9 = TransitionsAccessor::SearchTransition((TransitionsAccessor *)&local_90,*param_4,0,0);
  if ((int)uVar9 != 0) {
    pIVar10 = *(Isolate **)*param_2;
    if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar11 = *(ulong **)(pIVar10 + 0x95a0);
      if (puVar11 == *(ulong **)(pIVar10 + 0x95a8)) {
        puVar11 = (ulong *)HandleScope::Extend(pIVar10);
      }
      *(ulong **)(pIVar10 + 0x95a0) = puVar11 + 1;
      *puVar11 = uVar9;
    }
    else {
      puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar9);
      uVar9 = *puVar11;
    }
    lVar18 = (long)(int)((*(uint *)(uVar9 + 0xb) >> 10 & 0x3ff) - 1);
    uVar19 = lVar18 * 0xc00000000 + 0x1000000000 >> 0x20;
    uVar2 = *(uint *)((uVar19 | 3) + (uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0x17)));
    if (((uVar2 >> 4 & 1) == 0) && ((uVar2 >> 2 & 1) == 0)) {
      uVar5 = (uint)((int)uVar2 >> 1) >> 0x13 & 0x3ff;
      iVar4 = (uint)*(byte *)(uVar9 + 3) - (uint)*(byte *)(uVar9 + 4);
      uVar7 = (uint)((int)uVar2 >> 1) >> 6 & 7;
      uVar16 = (ulong)uVar7;
      if ((int)uVar5 < iVar4) {
        uVar17 = (ulong)*(byte *)(uVar9 + 4) << 0x1c;
        iVar3 = (uVar5 + *(byte *)(uVar9 + 4)) * 4;
      }
      else {
        iVar3 = (uVar5 - iVar4) * 4 + 8;
        uVar17 = 0x20000000;
      }
      local_90 = (undefined8 *)CONCAT71(local_90._1_7_,(char)uVar7);
      if (4 < uVar7) {
        uVar12 = Representation::Mnemonic((Representation *)&local_90);
        PrintF("%s\n",uVar12);
LAB_017e7a50:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      ObjectRef::ObjectRef(aOStack_a0,*param_2,puVar11,0);
      uVar9 = ObjectRef::IsMap(aOStack_a0);
      if ((uVar9 & 1) == 0) goto LAB_017e7a24;
      local_78 = (Zone *)param_2[3];
      local_90 = (undefined8 *)0x0;
      local_88 = (undefined8 *)0x0;
      local_80 = (undefined8 *)0x0;
      if (uVar7 == 3) {
        local_b8 = 0xc7f7fff;
        uVar9 = *puVar11 & 0xffffffff00000000;
        uVar9 = Map::UnwrapFieldType
                          (uVar9 | *(uint *)(uVar19 + (uVar9 | *(uint *)(*puVar11 + 0x17)) + 7));
        pIVar10 = *(Isolate **)*param_2;
        if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          local_e8 = *(ulong **)(pIVar10 + 0x95a0);
          if (local_e8 == *(ulong **)(pIVar10 + 0x95a8)) {
            local_e8 = (ulong *)HandleScope::Extend(pIVar10);
          }
          *(ulong **)(pIVar10 + 0x95a0) = local_e8 + 1;
          *local_e8 = uVar9;
        }
        else {
          local_e8 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar9);
          uVar9 = *local_e8;
        }
        iVar8 = FieldType::None();
        if ((int)uVar9 != iVar8) {
          MapRef::SerializeOwnDescriptor((MapRef *)aOStack_a0,lVar18);
          uVar12 = CompilationDependencies::FieldRepresentationDependencyOffTheRecord
                             ((CompilationDependencies *)param_2[1],aOStack_a0,lVar18);
          if (local_88 < local_80) {
            *local_88 = uVar12;
            puVar15 = local_90;
            puVar1 = local_88;
          }
          else {
            lVar13 = (long)local_88 - (long)local_90 >> 3;
            uVar9 = lVar13 + 1;
            if (uVar9 >> 0x1c != 0) goto LAB_017e7a5c;
            uVar19 = (long)local_80 - (long)local_90 >> 2;
            if (uVar9 <= uVar19) {
              uVar9 = uVar19;
            }
            if (0x7fffffe < (ulong)((long)local_80 - (long)local_90 >> 3)) {
              uVar9 = 0xfffffff;
            }
            if (uVar9 == 0) {
              lVar14 = 0;
            }
            else {
              uVar19 = uVar9 * 8;
              lVar14 = *(long *)(local_78 + 0x10);
              if (uVar19 < (ulong)(*(long *)(local_78 + 0x18) - lVar14) ||
                  uVar19 - (*(long *)(local_78 + 0x18) - lVar14) == 0) {
                *(ulong *)(local_78 + 0x10) = lVar14 + uVar19;
              }
              else {
                lVar14 = Zone::NewExpand(local_78,uVar19);
              }
            }
            puVar1 = (undefined8 *)(lVar14 + lVar13 * 8);
            *puVar1 = uVar12;
            local_80 = (undefined8 *)(lVar14 + uVar9 * 8);
            puVar15 = puVar1;
            while (local_88 != local_90) {
              local_88 = local_88 + -1;
              puVar15 = puVar15 + -1;
              *puVar15 = *local_88;
            }
          }
          local_90 = puVar15;
          local_88 = puVar1 + 1;
          local_b0[0] = *local_e8;
          uVar9 = FieldType::IsClass((FieldType *)local_b0);
          if ((uVar9 & 1) == 0) {
            puVar20 = (ulong *)0x0;
          }
          else {
            uVar12 = CompilationDependencies::FieldTypeDependencyOffTheRecord
                               ((CompilationDependencies *)param_2[1],aOStack_a0,lVar18);
            if (local_88 < local_80) {
              *local_88 = uVar12;
              puVar15 = local_90;
              puVar1 = local_88;
            }
            else {
              lVar18 = (long)local_88 - (long)local_90 >> 3;
              uVar9 = lVar18 + 1;
              if (uVar9 >> 0x1c != 0) goto LAB_017e7a5c;
              uVar19 = (long)local_80 - (long)local_90 >> 2;
              if (uVar9 <= uVar19) {
                uVar9 = uVar19;
              }
              if (0x7fffffe < (ulong)((long)local_80 - (long)local_90 >> 3)) {
                uVar9 = 0xfffffff;
              }
              if (uVar9 == 0) {
                lVar13 = 0;
              }
              else {
                uVar19 = uVar9 * 8;
                lVar13 = *(long *)(local_78 + 0x10);
                if (uVar19 < (ulong)(*(long *)(local_78 + 0x18) - lVar13) ||
                    uVar19 - (*(long *)(local_78 + 0x18) - lVar13) == 0) {
                  *(ulong *)(local_78 + 0x10) = lVar13 + uVar19;
                }
                else {
                  lVar13 = Zone::NewExpand(local_78,uVar19);
                }
              }
              puVar1 = (undefined8 *)(lVar13 + lVar18 * 8);
              *puVar1 = uVar12;
              local_80 = (undefined8 *)(lVar13 + uVar9 * 8);
              puVar15 = puVar1;
              while (local_88 != local_90) {
                local_88 = local_88 + -1;
                puVar15 = puVar15 + -1;
                *puVar15 = *local_88;
              }
            }
            local_90 = puVar15;
            local_88 = puVar1 + 1;
            local_b0[0] = *local_e8;
            uVar9 = FieldType::AsClass((FieldType *)local_b0);
            pIVar10 = *(Isolate **)*param_2;
            if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar20 = *(ulong **)(pIVar10 + 0x95a0);
              if (puVar20 == *(ulong **)(pIVar10 + 0x95a8)) {
                puVar20 = (ulong *)HandleScope::Extend(pIVar10);
              }
              *(ulong **)(pIVar10 + 0x95a0) = puVar20 + 1;
              *puVar20 = uVar9;
            }
            else {
              puVar20 = (ulong *)CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar9);
            }
            ObjectRef::ObjectRef((ObjectRef *)local_b0,*param_2,puVar20,0);
            uVar9 = ObjectRef::IsMap((ObjectRef *)local_b0);
            if ((uVar9 & 1) == 0) goto LAB_017e7a24;
            uVar7 = BitsetType::Lub<v8::internal::compiler::MapRef>((MapRef *)local_b0);
            uVar7 = BitsetType::ExpandInternals(uVar7);
            local_b8 = (ulong)(uVar7 | 1);
          }
          goto LAB_017e7658;
        }
        uVar12 = param_2[3];
        *(undefined4 *)param_1 = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x20) = uVar12;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined8 *)(param_1 + 0x40) = uVar12;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        param_1[0x68] = (PropertyAccessInfo)0x0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0x70) = 1;
      }
      else {
        if (uVar7 == 2) {
          local_b8 = *(ulong *)(param_2[2] + 0xc0);
          MapRef::SerializeOwnDescriptor((MapRef *)aOStack_a0,lVar18);
          uVar12 = CompilationDependencies::FieldRepresentationDependencyOffTheRecord
                             ((CompilationDependencies *)param_2[1],aOStack_a0,lVar18);
          if (local_80 <= local_88) {
            lVar18 = (long)local_88 - (long)local_90 >> 3;
            uVar9 = lVar18 + 1;
            if (uVar9 >> 0x1c != 0) goto LAB_017e7a5c;
            uVar19 = (long)local_80 - (long)local_90 >> 2;
            if (uVar9 <= uVar19) {
              uVar9 = uVar19;
            }
            if (0x7fffffe < (ulong)((long)local_80 - (long)local_90 >> 3)) {
              uVar9 = 0xfffffff;
            }
            if (uVar9 == 0) {
              lVar13 = 0;
            }
            else {
              uVar19 = uVar9 * 8;
              lVar13 = *(long *)(local_78 + 0x10);
              if (uVar19 < (ulong)(*(long *)(local_78 + 0x18) - lVar13) ||
                  uVar19 - (*(long *)(local_78 + 0x18) - lVar13) == 0) {
                *(ulong *)(local_78 + 0x10) = lVar13 + uVar19;
              }
              else {
                lVar13 = Zone::NewExpand(local_78,uVar19);
              }
            }
            puVar1 = (undefined8 *)(lVar13 + lVar18 * 8);
            *puVar1 = uVar12;
            local_80 = (undefined8 *)(lVar13 + uVar9 * 8);
            puVar15 = puVar1;
            while (local_88 != local_90) {
              local_88 = local_88 + -1;
              puVar15 = puVar15 + -1;
              *puVar15 = *local_88;
            }
            goto LAB_017e764c;
          }
LAB_017e73e4:
          *local_88 = uVar12;
          puVar20 = (ulong *)0x0;
          local_88 = local_88 + 1;
        }
        else {
          puVar20 = (ulong *)0x0;
          local_b8 = 0xc7f7fff;
          if (uVar7 == 1) {
            uVar7 = BitsetType::SignedSmall();
            local_b8 = (ulong)(uVar7 | 1);
            MapRef::SerializeOwnDescriptor((MapRef *)aOStack_a0,lVar18);
            uVar12 = CompilationDependencies::FieldRepresentationDependencyOffTheRecord
                               ((CompilationDependencies *)param_2[1],aOStack_a0,lVar18);
            if (local_88 < local_80) goto LAB_017e73e4;
            lVar18 = (long)local_88 - (long)local_90 >> 3;
            uVar9 = lVar18 + 1;
            if (uVar9 >> 0x1c != 0) goto LAB_017e7a5c;
            uVar19 = (long)local_80 - (long)local_90 >> 2;
            if (uVar9 <= uVar19) {
              uVar9 = uVar19;
            }
            if (0x7fffffe < (ulong)((long)local_80 - (long)local_90 >> 3)) {
              uVar9 = 0xfffffff;
            }
            if (uVar9 == 0) {
              lVar13 = 0;
            }
            else {
              uVar19 = uVar9 * 8;
              lVar13 = *(long *)(local_78 + 0x10);
              if (uVar19 < (ulong)(*(long *)(local_78 + 0x18) - lVar13) ||
                  uVar19 - (*(long *)(local_78 + 0x18) - lVar13) == 0) {
                *(ulong *)(local_78 + 0x10) = lVar13 + uVar19;
              }
              else {
                lVar13 = Zone::NewExpand(local_78,uVar19);
              }
            }
            puVar1 = (undefined8 *)(lVar13 + lVar18 * 8);
            *puVar1 = uVar12;
            local_80 = (undefined8 *)(lVar13 + uVar9 * 8);
            puVar15 = puVar1;
            while (local_88 != local_90) {
              local_88 = local_88 + -1;
              puVar15 = puVar15 + -1;
              *puVar15 = *local_88;
            }
LAB_017e764c:
            puVar20 = (ulong *)0x0;
            local_90 = puVar15;
            local_88 = puVar1 + 1;
          }
        }
LAB_017e7658:
        this = (CompilationDependencies *)param_2[1];
        ObjectRef::ObjectRef((ObjectRef *)local_b0,*param_2,puVar11,0);
        uVar9 = ObjectRef::IsMap((ObjectRef *)local_b0);
        if ((uVar9 & 1) == 0) {
LAB_017e7a24:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsMap()");
        }
        uVar12 = CompilationDependencies::TransitionDependencyOffTheRecord(this,(MapRef *)local_b0);
        if (local_88 < local_80) {
          *local_88 = uVar12;
          puVar15 = local_90;
          puVar1 = local_88;
        }
        else {
          lVar18 = (long)local_88 - (long)local_90 >> 3;
          uVar9 = lVar18 + 1;
          if (uVar9 >> 0x1c != 0) {
LAB_017e7a5c:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar19 = (long)local_80 - (long)local_90 >> 2;
          if (uVar9 <= uVar19) {
            uVar9 = uVar19;
          }
          if (0x7fffffe < (ulong)((long)local_80 - (long)local_90 >> 3)) {
            uVar9 = 0xfffffff;
          }
          if (uVar9 == 0) {
            lVar13 = 0;
          }
          else {
            uVar19 = uVar9 * 8;
            lVar13 = *(long *)(local_78 + 0x10);
            if (uVar19 < (ulong)(*(long *)(local_78 + 0x18) - lVar13) ||
                uVar19 - (*(long *)(local_78 + 0x18) - lVar13) == 0) {
              *(ulong *)(local_78 + 0x10) = lVar13 + uVar19;
            }
            else {
              lVar13 = Zone::NewExpand(local_78,uVar19);
            }
          }
          puVar1 = (undefined8 *)(lVar13 + lVar18 * 8);
          *puVar1 = uVar12;
          local_80 = (undefined8 *)(lVar13 + uVar9 * 8);
          puVar15 = puVar1;
          while (local_88 != local_90) {
            local_88 = local_88 + -1;
            puVar15 = puVar15 + -1;
            *puVar15 = *local_88;
          }
        }
        local_90 = puVar15;
        local_88 = puVar1 + 1;
        uVar9 = (ulong)((int)uVar5 < iVar4) << 0xd | (long)iVar4 << 0x10 | (long)iVar3 | uVar17 |
                *(ulong *)(&DAT_01a641c8 + uVar16 * 8);
        MapRef::SerializeBackPointer((MapRef *)aOStack_a0);
        if ((uVar2 >> 3 & 1) == 0) {
          PropertyAccessInfo::DataField
                    (param_1,param_2[3],param_3,&local_90,uVar9,uVar16,local_b8,puVar11,puVar20,
                     param_5,puVar11);
        }
        else {
          PropertyAccessInfo::DataConstant
                    (param_1,param_2[3],param_3,&local_90,uVar9,uVar16,local_b8,puVar11,puVar20,
                     param_5,puVar11);
        }
      }
      if (local_90 != (undefined8 *)0x0) {
        local_88 = local_90;
      }
      goto LAB_017e7240;
    }
  }
  uVar12 = param_2[3];
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = uVar12;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = uVar12;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  param_1[0x68] = (PropertyAccessInfo)0x0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 1;
LAB_017e7240:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

