
/* v8::internal::SourceTextModuleDescriptor::MakeIndirectExportsExplicit(v8::internal::Zone*) */

void v8::internal::SourceTextModuleDescriptor::MakeIndirectExportsExplicit(Zone *param_1)

{
  Zone *pZVar1;
  ulong uVar2;
  Zone *pZVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  __tree_node_base *p_Var7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  Zone *pZVar12;
  undefined8 *puVar13;
  Zone *pZVar14;
  
  pZVar1 = param_1 + 0x68;
  if (pZVar1 != *(Zone **)(param_1 + 0x60)) {
    pZVar12 = *(Zone **)(param_1 + 0x60);
    do {
      while( true ) {
        puVar13 = *(undefined8 **)(pZVar12 + 0x28);
        pZVar3 = (Zone *)std::__ndk1::
                         __tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
                         ::find<v8::internal::AstRawString_const*>
                                   ((__tree<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,std::__ndk1::__map_value_compare<v8::internal::AstRawString_const*,std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>,v8::internal::SourceTextModuleDescriptor::AstRawStringComparer,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::AstRawString_const*,v8::internal::SourceTextModuleDescriptor::Entry*>>>
                                     *)(param_1 + 0x80),(AstRawString **)(puVar13 + 2));
        if (param_1 + 0x88 == pZVar3) break;
        puVar13[3] = *(undefined8 *)(*(long *)(pZVar3 + 0x28) + 0x18);
        *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(*(long *)(pZVar3 + 0x28) + 0x20);
        uVar4 = **(undefined8 **)(pZVar3 + 0x28);
        puVar13[2] = 0;
        *puVar13 = uVar4;
        puVar6 = *(undefined8 **)(param_1 + 0x28);
        if (puVar6 == *(undefined8 **)(param_1 + 0x30)) {
          lVar9 = (long)puVar6 - *(long *)(param_1 + 0x20) >> 3;
          uVar2 = lVar9 + 1;
          if (uVar2 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar5 = (long)*(undefined8 **)(param_1 + 0x30) - *(long *)(param_1 + 0x20);
          uVar10 = lVar5 >> 2;
          if (uVar2 <= uVar10) {
            uVar2 = uVar10;
          }
          if (0x7fffffe < (ulong)(lVar5 >> 3)) {
            uVar2 = 0xfffffff;
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            pZVar3 = *(Zone **)(param_1 + 0x38);
            uVar10 = uVar2 * 8;
            lVar5 = *(long *)(pZVar3 + 0x10);
            if (uVar10 < (ulong)(*(long *)(pZVar3 + 0x18) - lVar5) ||
                uVar10 - (*(long *)(pZVar3 + 0x18) - lVar5) == 0) {
              *(ulong *)(pZVar3 + 0x10) = lVar5 + uVar10;
            }
            else {
              lVar5 = Zone::NewExpand(pZVar3,uVar10);
            }
          }
          puVar6 = (undefined8 *)(lVar5 + lVar9 * 8);
          puVar8 = puVar6 + 1;
          *puVar6 = puVar13;
          puVar13 = *(undefined8 **)(param_1 + 0x20);
          puVar11 = *(undefined8 **)(param_1 + 0x28);
          while (puVar11 != puVar13) {
            puVar11 = puVar11 + -1;
            puVar6 = puVar6 + -1;
            *puVar6 = *puVar11;
          }
          *(undefined8 **)(param_1 + 0x20) = puVar6;
          *(undefined8 **)(param_1 + 0x28) = puVar8;
          *(ulong *)(param_1 + 0x30) = lVar5 + uVar2 * 8;
          pZVar3 = *(Zone **)(pZVar12 + 8);
          if (*(Zone **)(pZVar12 + 8) == (Zone *)0x0) goto LAB_014998e4;
LAB_014998d4:
          do {
            pZVar14 = pZVar3;
            pZVar3 = *(Zone **)pZVar14;
          } while (*(Zone **)pZVar14 != (Zone *)0x0);
        }
        else {
          *puVar6 = puVar13;
          *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 8;
          pZVar3 = *(Zone **)(pZVar12 + 8);
          if (*(Zone **)(pZVar12 + 8) != (Zone *)0x0) goto LAB_014998d4;
LAB_014998e4:
          p_Var7 = (__tree_node_base *)(pZVar12 + 0x10);
          pZVar14 = *(Zone **)p_Var7;
          if (*(__tree_node_base **)pZVar14 != (__tree_node_base *)pZVar12) {
            do {
              lVar9 = *(long *)p_Var7;
              p_Var7 = (__tree_node_base *)(lVar9 + 0x10);
              pZVar14 = *(Zone **)p_Var7;
            } while (*(long *)pZVar14 != lVar9);
          }
        }
        if (*(__tree_node_base **)(param_1 + 0x60) == (__tree_node_base *)pZVar12) {
          *(Zone **)(param_1 + 0x60) = pZVar14;
        }
        *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(param_1 + 0x68),(__tree_node_base *)pZVar12);
LAB_01499784:
        pZVar12 = pZVar14;
        if (pZVar1 == pZVar14) {
          return;
        }
      }
      pZVar3 = *(Zone **)(pZVar12 + 8);
      if (*(Zone **)(pZVar12 + 8) != (Zone *)0x0) {
        do {
          pZVar14 = pZVar3;
          pZVar3 = *(Zone **)pZVar14;
        } while (*(Zone **)pZVar14 != (Zone *)0x0);
        goto LAB_01499784;
      }
      p_Var7 = (__tree_node_base *)(pZVar12 + 0x10);
      pZVar3 = *(Zone **)p_Var7;
      if (*(__tree_node_base **)pZVar3 != (__tree_node_base *)pZVar12) {
        do {
          lVar9 = *(long *)p_Var7;
          p_Var7 = (__tree_node_base *)(lVar9 + 0x10);
          pZVar14 = *(Zone **)p_Var7;
        } while (*(long *)pZVar14 != lVar9);
        goto LAB_01499784;
      }
      pZVar12 = pZVar3;
    } while (pZVar1 != pZVar3);
  }
  return;
}

