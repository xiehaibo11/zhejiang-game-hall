
/* v8::internal::Assembler::DeleteUnresolvedBranchInfoForLabelTraverse(v8::internal::Label*) */

void __thiscall
v8::internal::Assembler::DeleteUnresolvedBranchInfoForLabelTraverse(Assembler *this,Label *param_1)

{
  Instruction *this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  __tree_node_base *p_Var8;
  Assembler *pAVar9;
  long *plVar10;
  __tree_node_base *p_Var11;
  Assembler *pAVar12;
  long lVar13;
  Assembler *pAVar14;
  Assembler *pAVar15;
  uint uVar16;
  uint uVar17;
  
  uVar16 = *(uint *)param_1;
  if ((int)uVar16 < 0) {
    uVar16 = ~uVar16;
  }
  else {
    if (uVar16 == 0) {
LAB_0125fdf0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar16 = uVar16 - 1;
  }
  do {
    this_00 = (Instruction *)(*(long *)(this + 0x10) + (long)(int)uVar16);
    iVar7 = Instruction::ImmPCOffset(this_00);
    uVar3 = *(uint *)this_00;
    uVar1 = uVar3 & 0xfe000000;
    uVar2 = uVar3 & 0x7c000000;
    if ((uVar1 == 0x54000000 || uVar2 == 0x14000000) || ((uVar2 | 0x2000000) == 0x36000000)) {
      uVar17 = 0x15;
      if (uVar1 != 0x54000000) {
        uVar17 = 0x1c;
      }
      if (uVar1 != 0x54000000 && uVar2 != 0x14000000) {
        if ((uVar3 & 0x7e000000) == 0x34000000) {
          uVar17 = 0x15;
        }
        else {
          if ((uVar3 & 0x7e000000) != 0x36000000) goto LAB_0125fdf0;
          uVar17 = 0x10;
        }
      }
      p_Var8 = *(__tree_node_base **)(this + 0x120);
      if (p_Var8 != (__tree_node_base *)0x0) {
        iVar4 = ((int)this_00 - (int)*(undefined8 *)(this + 0x10)) +
                ((uint)(1 << (ulong)uVar17) >> 1) + -4;
        pAVar9 = this + 0x120;
        pAVar12 = (Assembler *)p_Var8;
        while (iVar4 < *(int *)(pAVar12 + 0x20)) {
          pAVar15 = *(Assembler **)pAVar12;
          pAVar9 = pAVar12;
joined_r0x0125fcb0:
          pAVar12 = pAVar15;
          if (pAVar12 == (Assembler *)0x0) goto LAB_0125fbdc;
        }
        if (*(int *)(pAVar12 + 0x20) < iVar4) {
          pAVar15 = *(Assembler **)(pAVar12 + 8);
          goto joined_r0x0125fcb0;
        }
        pAVar14 = *(Assembler **)pAVar12;
        pAVar15 = pAVar12;
        if (pAVar14 == (Assembler *)0x0) {
          pAVar12 = *(Assembler **)(pAVar12 + 8);
        }
        else {
          do {
            if (iVar4 <= *(int *)(pAVar14 + 0x20)) {
              pAVar15 = pAVar14;
            }
            pAVar14 = *(Assembler **)(pAVar14 + (ulong)(*(int *)(pAVar14 + 0x20) < iVar4) * 8);
          } while (pAVar14 != (Assembler *)0x0);
          pAVar12 = *(Assembler **)(pAVar12 + 8);
        }
        for (; pAVar12 != (Assembler *)0x0;
            pAVar12 = *(Assembler **)(pAVar12 + (ulong)(*(int *)(pAVar12 + 0x20) <= iVar4) * 8)) {
          pAVar14 = pAVar12;
          if (*(int *)(pAVar12 + 0x20) <= iVar4) {
            pAVar14 = pAVar9;
          }
          pAVar9 = pAVar14;
        }
        while( true ) {
          if (pAVar15 == pAVar9) goto LAB_0125fbdc;
          if (*(uint *)(pAVar15 + 0x28) == uVar16) break;
          p_Var11 = *(__tree_node_base **)(pAVar15 + 8);
          if (*(__tree_node_base **)(pAVar15 + 8) == (__tree_node_base *)0x0) {
            p_Var11 = (__tree_node_base *)(pAVar15 + 0x10);
            bVar6 = *(__tree_node_base **)*(__tree_node_base **)p_Var11 !=
                    (__tree_node_base *)pAVar15;
            pAVar15 = (Assembler *)*(__tree_node_base **)p_Var11;
            if (bVar6) {
              do {
                lVar13 = *(long *)p_Var11;
                p_Var11 = (__tree_node_base *)(lVar13 + 0x10);
                pAVar15 = *(Assembler **)p_Var11;
              } while (*(long *)pAVar15 != lVar13);
            }
          }
          else {
            do {
              pAVar15 = (Assembler *)p_Var11;
              p_Var11 = *(__tree_node_base **)pAVar15;
            } while (*(__tree_node_base **)pAVar15 != (__tree_node_base *)0x0);
          }
        }
        plVar5 = *(long **)(pAVar15 + 8);
        if (*(long **)(pAVar15 + 8) == (long *)0x0) {
          p_Var11 = (__tree_node_base *)(pAVar15 + 0x10);
          plVar10 = *(long **)p_Var11;
          if ((__tree_node_base *)*plVar10 != (__tree_node_base *)pAVar15) {
            do {
              lVar13 = *(long *)p_Var11;
              p_Var11 = (__tree_node_base *)(lVar13 + 0x10);
              plVar10 = *(long **)p_Var11;
            } while (*plVar10 != lVar13);
          }
        }
        else {
          do {
            plVar10 = plVar5;
            plVar5 = (long *)*plVar10;
          } while ((long *)*plVar10 != (long *)0x0);
        }
        if (*(__tree_node_base **)(this + 0x118) == (__tree_node_base *)pAVar15) {
          *(long **)(this + 0x118) = plVar10;
        }
        *(long *)(this + 0x128) = *(long *)(this + 0x128) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  (p_Var8,(__tree_node_base *)pAVar15);
        operator_delete(pAVar15);
      }
    }
LAB_0125fbdc:
    uVar16 = uVar16 + iVar7;
    if (iVar7 == 0) {
      return;
    }
  } while( true );
}

