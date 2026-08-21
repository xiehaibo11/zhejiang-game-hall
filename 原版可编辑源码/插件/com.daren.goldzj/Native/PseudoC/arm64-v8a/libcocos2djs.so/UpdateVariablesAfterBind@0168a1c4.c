
/* v8::internal::compiler::CodeAssemblerLabel::UpdateVariablesAfterBind() */

void __thiscall
v8::internal::compiler::CodeAssemblerLabel::UpdateVariablesAfterBind(CodeAssemblerLabel *this)

{
  long *plVar1;
  CodeAssemblerLabel *pCVar2;
  CodeAssemblerLabel *pCVar3;
  uint uVar4;
  CodeAssemblerLabel *pCVar5;
  bool bVar6;
  undefined8 uVar7;
  __tree_node_base *p_Var8;
  long lVar9;
  CodeAssemblerLabel *pCVar10;
  CodeAssemblerLabel *pCVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  __tree_node_base *p_Var15;
  CodeAssemblerLabel *pCVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  
  plVar17 = *(long **)(*(long *)(this + 0x10) + 0x20);
  plVar1 = (long *)(*(long *)(this + 0x10) + 0x28);
  if (plVar17 != plVar1) {
    pCVar2 = this + 0x40;
    pCVar3 = this + 0x28;
    pCVar11 = *(CodeAssemblerLabel **)pCVar2;
    do {
      if (pCVar11 != (CodeAssemblerLabel *)0x0) {
        lVar9 = plVar17[4];
        uVar4 = *(uint *)(lVar9 + 0xc);
        pCVar16 = pCVar2;
        do {
          bVar6 = *(uint *)(*(long *)(pCVar11 + 0x20) + 0xc) < uVar4;
          if (!bVar6) {
            pCVar16 = pCVar11;
          }
          pCVar11 = *(CodeAssemblerLabel **)(pCVar11 + (ulong)bVar6 * 8);
        } while (pCVar11 != (CodeAssemblerLabel *)0x0);
        if ((pCVar16 != pCVar2) && (*(uint *)(*(long *)(pCVar16 + 0x20) + 0xc) <= uVar4)) {
          plVar13 = *(long **)(pCVar16 + 0x28);
          plVar14 = *(long **)(pCVar16 + 0x30);
          if (plVar13 != plVar14) {
            lVar19 = 0;
            do {
              lVar18 = lVar19;
              if ((*plVar13 != lVar19) && (lVar18 = *plVar13, lVar19 != 0)) {
                pCVar11 = pCVar3;
                pCVar16 = pCVar3;
                if (*(CodeAssemblerLabel **)pCVar3 != (CodeAssemblerLabel *)0x0) {
                  pCVar10 = *(CodeAssemblerLabel **)pCVar3;
                  do {
                    while (pCVar11 = pCVar10,
                          *(uint *)(lVar9 + 0xc) < *(uint *)(*(long *)(pCVar11 + 0x20) + 0xc)) {
                      pCVar10 = *(CodeAssemblerLabel **)pCVar11;
                      pCVar16 = pCVar11;
                      if (*(CodeAssemblerLabel **)pCVar11 == (CodeAssemblerLabel *)0x0) {
                        p_Var15 = *(__tree_node_base **)pCVar11;
                        if (p_Var15 != (__tree_node_base *)0x0) goto LAB_0168a2a0;
                        goto LAB_0168a32c;
                      }
                    }
                    if (*(uint *)(lVar9 + 0xc) <= *(uint *)(*(long *)(pCVar11 + 0x20) + 0xc)) break;
                    pCVar16 = pCVar11 + 8;
                    pCVar10 = *(CodeAssemblerLabel **)pCVar16;
                  } while (*(CodeAssemblerLabel **)pCVar16 != (CodeAssemblerLabel *)0x0);
                }
                p_Var15 = *(__tree_node_base **)pCVar16;
                if (p_Var15 == (__tree_node_base *)0x0) {
LAB_0168a32c:
                  p_Var15 = operator_new(0x30);
                  *(undefined8 *)p_Var15 = 0;
                  *(undefined8 *)(p_Var15 + 8) = 0;
                  *(CodeAssemblerLabel **)(p_Var15 + 0x10) = pCVar11;
                  *(long *)(p_Var15 + 0x20) = lVar9;
                  *(undefined8 *)(p_Var15 + 0x28) = 0;
                  *(__tree_node_base **)pCVar16 = p_Var15;
                  p_Var8 = p_Var15;
                  if (**(long **)(this + 0x20) != 0) {
                    *(long *)(this + 0x20) = **(long **)(this + 0x20);
                    p_Var8 = *(__tree_node_base **)pCVar16;
                  }
                  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                            (*(__tree_node_base **)(this + 0x28),p_Var8);
                  *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
                }
LAB_0168a2a0:
                *(undefined8 *)(p_Var15 + 0x28) = 0;
                lVar18 = lVar19;
              }
              plVar13 = plVar13 + 1;
              lVar19 = lVar18;
            } while (plVar13 != plVar14);
          }
        }
      }
      plVar13 = (long *)plVar17[1];
      if ((long *)plVar17[1] == (long *)0x0) {
        plVar13 = plVar17 + 2;
        plVar14 = (long *)*plVar13;
        if ((long *)*plVar14 != plVar17) {
          do {
            lVar9 = *plVar13;
            plVar13 = (long *)(lVar9 + 0x10);
            plVar14 = (long *)*plVar13;
          } while (*plVar14 != lVar9);
        }
      }
      else {
        do {
          plVar14 = plVar13;
          plVar13 = (long *)*plVar14;
        } while ((long *)*plVar14 != (long *)0x0);
      }
      if (plVar14 == plVar1) break;
      pCVar11 = *(CodeAssemblerLabel **)pCVar2;
      plVar17 = plVar14;
    } while( true );
  }
  pCVar2 = this + 0x28;
  if (*(CodeAssemblerLabel **)(this + 0x20) != pCVar2) {
    pCVar3 = this + 0x40;
    pCVar11 = *(CodeAssemblerLabel **)(this + 0x20);
    do {
      pCVar16 = *(CodeAssemblerLabel **)pCVar3;
      lVar9 = *(long *)(pCVar11 + 0x20);
      if (pCVar16 == (CodeAssemblerLabel *)0x0) {
LAB_0168a424:
        pCVar10 = pCVar3;
      }
      else {
        uVar4 = *(uint *)(lVar9 + 0xc);
        pCVar10 = pCVar3;
        do {
          bVar6 = *(uint *)(*(long *)(pCVar16 + 0x20) + 0xc) < uVar4;
          if (!bVar6) {
            pCVar10 = pCVar16;
          }
          pCVar16 = *(CodeAssemblerLabel **)(pCVar16 + (ulong)bVar6 * 8);
        } while (pCVar16 != (CodeAssemblerLabel *)0x0);
        if ((pCVar10 == pCVar3) || (uVar4 < *(uint *)(*(long *)(pCVar10 + 0x20) + 0xc)))
        goto LAB_0168a424;
      }
      uVar7 = RawMachineAssembler::Phi
                        ((RawMachineAssembler *)**(undefined8 **)(this + 0x10),
                         *(undefined1 *)(lVar9 + 8),*(undefined4 *)(this + 8),
                         *(undefined8 *)(pCVar10 + 0x28));
      pCVar16 = pCVar2;
      pCVar10 = pCVar2;
      if (*(CodeAssemblerLabel **)(this + 0x28) != (CodeAssemblerLabel *)0x0) {
        pCVar5 = *(CodeAssemblerLabel **)(this + 0x28);
        do {
          while (pCVar16 = pCVar5,
                *(uint *)(lVar9 + 0xc) < *(uint *)(*(long *)(pCVar16 + 0x20) + 0xc)) {
            pCVar5 = *(CodeAssemblerLabel **)pCVar16;
            pCVar10 = pCVar16;
            if (*(CodeAssemblerLabel **)pCVar16 == (CodeAssemblerLabel *)0x0) {
              p_Var15 = *(__tree_node_base **)pCVar16;
              if (p_Var15 != (__tree_node_base *)0x0) goto LAB_0168a500;
              goto LAB_0168a4a4;
            }
          }
          if (*(uint *)(lVar9 + 0xc) <= *(uint *)(*(long *)(pCVar16 + 0x20) + 0xc)) break;
          pCVar10 = pCVar16 + 8;
          pCVar5 = *(CodeAssemblerLabel **)pCVar10;
        } while (*(CodeAssemblerLabel **)pCVar10 != (CodeAssemblerLabel *)0x0);
      }
      p_Var15 = *(__tree_node_base **)pCVar10;
      if (p_Var15 == (__tree_node_base *)0x0) {
LAB_0168a4a4:
        p_Var15 = operator_new(0x30);
        *(long *)(p_Var15 + 0x20) = lVar9;
        *(undefined8 *)(p_Var15 + 0x28) = 0;
        *(undefined8 *)p_Var15 = 0;
        *(undefined8 *)(p_Var15 + 8) = 0;
        *(CodeAssemblerLabel **)(p_Var15 + 0x10) = pCVar16;
        *(__tree_node_base **)pCVar10 = p_Var15;
        p_Var8 = p_Var15;
        if (**(long **)(this + 0x20) != 0) {
          *(long *)(this + 0x20) = **(long **)(this + 0x20);
          p_Var8 = *(__tree_node_base **)pCVar10;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x28),p_Var8);
        *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
      }
LAB_0168a500:
      *(undefined8 *)(p_Var15 + 0x28) = uVar7;
      pCVar16 = *(CodeAssemblerLabel **)(pCVar11 + 8);
      if (*(CodeAssemblerLabel **)(pCVar11 + 8) == (CodeAssemblerLabel *)0x0) {
        pCVar16 = pCVar11 + 0x10;
        pCVar10 = *(CodeAssemblerLabel **)pCVar16;
        if (*(CodeAssemblerLabel **)pCVar10 != pCVar11) {
          do {
            lVar9 = *(long *)pCVar16;
            pCVar16 = (CodeAssemblerLabel *)(lVar9 + 0x10);
            pCVar10 = *(CodeAssemblerLabel **)pCVar16;
          } while (*(long *)pCVar10 != lVar9);
        }
      }
      else {
        do {
          pCVar10 = pCVar16;
          pCVar16 = *(CodeAssemblerLabel **)pCVar10;
        } while (*(CodeAssemblerLabel **)pCVar10 != (CodeAssemblerLabel *)0x0);
      }
      pCVar11 = pCVar10;
    } while (pCVar10 != pCVar2);
  }
  plVar17 = *(long **)(*(long *)(this + 0x10) + 0x20);
  plVar1 = (long *)(*(long *)(this + 0x10) + 0x28);
  if (plVar17 != plVar1) {
    pCVar3 = this + 0x40;
    do {
      pCVar11 = *(CodeAssemblerLabel **)pCVar2;
      puVar12 = (undefined8 *)plVar17[4];
      if (pCVar11 == (CodeAssemblerLabel *)0x0) {
LAB_0168a5bc:
        pCVar11 = *(CodeAssemblerLabel **)pCVar3;
        if (pCVar11 != (CodeAssemblerLabel *)0x0) {
          uVar4 = *(uint *)((long)puVar12 + 0xc);
          pCVar16 = pCVar3;
          do {
            bVar6 = *(uint *)(*(long *)(pCVar11 + 0x20) + 0xc) < uVar4;
            if (!bVar6) {
              pCVar16 = pCVar11;
            }
            pCVar11 = *(CodeAssemblerLabel **)(pCVar11 + (ulong)bVar6 * 8);
          } while (pCVar11 != (CodeAssemblerLabel *)0x0);
          if (((pCVar16 != pCVar3) && (*(uint *)(*(long *)(pCVar16 + 0x20) + 0xc) <= uVar4)) &&
             (*(long *)(this + 8) == *(long *)(pCVar16 + 0x30) - *(long *)(pCVar16 + 0x28) >> 3)) {
            uVar7 = *(undefined8 *)(*(long *)(pCVar16 + 0x30) + -8);
            goto LAB_0168a630;
          }
        }
        *puVar12 = 0;
        plVar13 = (long *)plVar17[1];
        if ((long *)plVar17[1] == (long *)0x0) goto LAB_0168a64c;
LAB_0168a63c:
        do {
          plVar14 = plVar13;
          plVar13 = (long *)*plVar14;
        } while ((long *)*plVar14 != (long *)0x0);
      }
      else {
        uVar4 = *(uint *)((long)puVar12 + 0xc);
        pCVar16 = pCVar2;
        do {
          bVar6 = *(uint *)(*(long *)(pCVar11 + 0x20) + 0xc) < uVar4;
          if (!bVar6) {
            pCVar16 = pCVar11;
          }
          pCVar11 = *(CodeAssemblerLabel **)(pCVar11 + (ulong)bVar6 * 8);
        } while (pCVar11 != (CodeAssemblerLabel *)0x0);
        if ((pCVar16 == pCVar2) || (uVar4 < *(uint *)(*(long *)(pCVar16 + 0x20) + 0xc)))
        goto LAB_0168a5bc;
        uVar7 = *(undefined8 *)(pCVar16 + 0x28);
LAB_0168a630:
        *puVar12 = uVar7;
        plVar13 = (long *)plVar17[1];
        if ((long *)plVar17[1] != (long *)0x0) goto LAB_0168a63c;
LAB_0168a64c:
        plVar13 = plVar17 + 2;
        plVar14 = (long *)*plVar13;
        if ((long *)*plVar14 != plVar17) {
          do {
            lVar9 = *plVar13;
            plVar13 = (long *)(lVar9 + 0x10);
            plVar14 = (long *)*plVar13;
          } while (*plVar14 != lVar9);
        }
      }
      plVar17 = plVar14;
    } while (plVar14 != plVar1);
  }
  *this = (CodeAssemblerLabel)0x1;
  return;
}

