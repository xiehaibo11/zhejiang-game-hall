
/* v8::internal::compiler::CodeAssemblerLabel::MergeVariables() */

void __thiscall v8::internal::compiler::CodeAssemblerLabel::MergeVariables(CodeAssemblerLabel *this)

{
  long *plVar1;
  CodeAssemblerLabel *pCVar2;
  CodeAssemblerLabel *pCVar3;
  uint uVar4;
  CodeAssemblerLabel CVar5;
  bool bVar6;
  undefined8 *puVar7;
  void *pvVar8;
  __tree_node_base *p_Var9;
  CodeAssemblerLabel *pCVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  CodeAssemblerLabel *pCVar14;
  Node *pNVar15;
  __tree_node_base *p_Var16;
  long *plVar17;
  undefined8 *puVar18;
  CodeAssemblerLabel *pCVar19;
  Node *local_68;
  
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  plVar17 = *(long **)(*(long *)(this + 0x10) + 0x20);
  plVar1 = (long *)(*(long *)(this + 0x10) + 0x28);
  if (plVar17 != plVar1) {
    pCVar2 = this + 0x40;
    pCVar3 = this + 0x28;
    do {
      puVar18 = (undefined8 *)plVar17[4];
      pNVar15 = (Node *)*puVar18;
      local_68 = pNVar15;
      if (pNVar15 == (Node *)0x0) {
LAB_016888cc:
        CVar5 = *this;
      }
      else {
        pCVar19 = *(CodeAssemblerLabel **)pCVar2;
        if (pCVar19 == (CodeAssemblerLabel *)0x0) {
LAB_016887a0:
          puVar7 = operator_new(8);
          *puVar7 = pNVar15;
          pCVar10 = pCVar2;
          pCVar14 = pCVar2;
          if (pCVar19 != (CodeAssemblerLabel *)0x0) {
            do {
              while (pCVar10 = pCVar19,
                    *(uint *)(*(long *)(pCVar10 + 0x20) + 0xc) <= *(uint *)((long)puVar18 + 0xc)) {
                if (*(uint *)((long)puVar18 + 0xc) <= *(uint *)(*(long *)(pCVar10 + 0x20) + 0xc))
                goto LAB_01688834;
                pCVar14 = pCVar10 + 8;
                pCVar19 = *(CodeAssemblerLabel **)pCVar14;
                if (*(CodeAssemblerLabel **)pCVar14 == (CodeAssemblerLabel *)0x0) goto LAB_01688834;
              }
              pCVar19 = *(CodeAssemblerLabel **)pCVar10;
              pCVar14 = pCVar10;
            } while (*(CodeAssemblerLabel **)pCVar10 != (CodeAssemblerLabel *)0x0);
          }
LAB_01688834:
          p_Var16 = *(__tree_node_base **)pCVar14;
          if (p_Var16 == (__tree_node_base *)0x0) {
            p_Var16 = operator_new(0x40);
            *(undefined8 **)(p_Var16 + 0x20) = puVar18;
            *(undefined8 *)(p_Var16 + 0x28) = 0;
            *(undefined8 *)(p_Var16 + 0x30) = 0;
            *(undefined8 *)(p_Var16 + 0x38) = 0;
            *(undefined8 *)p_Var16 = 0;
            *(undefined8 *)(p_Var16 + 8) = 0;
            *(CodeAssemblerLabel **)(p_Var16 + 0x10) = pCVar10;
            *(__tree_node_base **)pCVar14 = p_Var16;
            p_Var9 = p_Var16;
            if (**(long **)(this + 0x38) != 0) {
              *(long *)(this + 0x38) = **(long **)(this + 0x38);
              p_Var9 = *(__tree_node_base **)pCVar14;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(this + 0x40),p_Var9);
            *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
          }
          pvVar8 = *(void **)(p_Var16 + 0x28);
          if (pvVar8 != (void *)0x0) {
            *(void **)(p_Var16 + 0x30) = pvVar8;
            operator_delete(pvVar8);
            *(undefined8 *)(p_Var16 + 0x28) = 0;
            *(undefined8 *)(p_Var16 + 0x30) = 0;
            *(undefined8 *)(p_Var16 + 0x38) = 0;
          }
          *(undefined8 **)(p_Var16 + 0x28) = puVar7;
          *(undefined8 **)(p_Var16 + 0x38) = puVar7 + 1;
          *(undefined8 **)(p_Var16 + 0x30) = puVar7 + 1;
          goto LAB_016888cc;
        }
        uVar4 = *(uint *)((long)puVar18 + 0xc);
        pCVar10 = pCVar2;
        pCVar14 = pCVar19;
        do {
          bVar6 = *(uint *)(*(long *)(pCVar14 + 0x20) + 0xc) < uVar4;
          if (!bVar6) {
            pCVar10 = pCVar14;
          }
          pCVar14 = *(CodeAssemblerLabel **)(pCVar14 + (ulong)bVar6 * 8);
        } while (pCVar14 != (CodeAssemblerLabel *)0x0);
        if ((pCVar10 == pCVar2) || (uVar4 < *(uint *)(*(long *)(pCVar10 + 0x20) + 0xc)))
        goto LAB_016887a0;
        if (*(undefined8 **)(pCVar10 + 0x30) == *(undefined8 **)(pCVar10 + 0x38)) {
          std::__ndk1::
          vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
          ::__push_back_slow_path<v8::internal::compiler::Node*const&>
                    ((vector<v8::internal::compiler::Node*,std::__ndk1::allocator<v8::internal::compiler::Node*>>
                      *)(pCVar10 + 0x28),&local_68);
          CVar5 = *this;
        }
        else {
          **(undefined8 **)(pCVar10 + 0x30) = pNVar15;
          *(long *)(pCVar10 + 0x30) = *(long *)(pCVar10 + 0x30) + 8;
          CVar5 = *this;
        }
      }
      if (CVar5 != (CodeAssemblerLabel)0x0) {
        pCVar19 = *(CodeAssemblerLabel **)pCVar3;
        if (pCVar19 != (CodeAssemblerLabel *)0x0) {
          uVar4 = *(uint *)((long)puVar18 + 0xc);
          pCVar10 = pCVar3;
          do {
            bVar6 = *(uint *)(*(long *)(pCVar19 + 0x20) + 0xc) < uVar4;
            if (!bVar6) {
              pCVar10 = pCVar19;
            }
            pCVar19 = *(CodeAssemblerLabel **)(pCVar19 + (ulong)bVar6 * 8);
          } while (pCVar19 != (CodeAssemblerLabel *)0x0);
          if ((pCVar10 != pCVar3) && (*(uint *)(*(long *)(pCVar10 + 0x20) + 0xc) <= uVar4)) {
            RawMachineAssembler::AppendPhiInput
                      ((RawMachineAssembler *)**(undefined8 **)(this + 0x10),
                       *(Node **)(pCVar10 + 0x28),local_68);
            goto LAB_01688954;
          }
        }
        lVar11 = *(long *)pCVar2;
        if (lVar11 != 0) {
          do {
            lVar11 = *(long *)(lVar11 + (ulong)(*(uint *)(*(long *)(lVar11 + 0x20) + 0xc) <
                                               *(uint *)((long)puVar18 + 0xc)) * 8);
          } while (lVar11 != 0);
        }
      }
LAB_01688954:
      plVar12 = (long *)plVar17[1];
      if ((long *)plVar17[1] == (long *)0x0) {
        plVar12 = plVar17 + 2;
        plVar13 = (long *)*plVar12;
        if ((long *)*plVar13 != plVar17) {
          do {
            lVar11 = *plVar12;
            plVar12 = (long *)(lVar11 + 0x10);
            plVar13 = (long *)*plVar12;
          } while (*plVar13 != lVar11);
        }
      }
      else {
        do {
          plVar13 = plVar12;
          plVar12 = (long *)*plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
      }
      plVar17 = plVar13;
    } while (plVar13 != plVar1);
  }
  return;
}

