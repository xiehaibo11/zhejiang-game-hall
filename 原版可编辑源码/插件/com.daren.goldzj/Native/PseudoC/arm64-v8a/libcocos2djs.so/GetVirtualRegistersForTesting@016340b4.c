
/* v8::internal::compiler::InstructionSelector::GetVirtualRegistersForTesting() const */

void v8::internal::compiler::InstructionSelector::GetVirtualRegistersForTesting(void)

{
  int iVar1;
  long in_x0;
  __tree_node_base *p_Var2;
  long *in_x8;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  plVar5 = in_x8 + 1;
  *plVar5 = 0;
  in_x8[2] = 0;
  *in_x8 = (long)plVar5;
  lVar3 = *(long *)(in_x0 + 0x118);
  lVar4 = *(long *)(in_x0 + 0x120);
  if (lVar4 != lVar3) {
    uVar7 = 0;
    do {
      iVar1 = *(int *)(lVar3 + uVar7 * 4);
      if (iVar1 != -1) {
        uVar6 = (uint)uVar7;
        plVar10 = (long *)*plVar5;
        plVar8 = plVar5;
        plVar11 = plVar5;
        while (plVar10 != (long *)0x0) {
          while (plVar9 = plVar10, plVar11 = plVar9, uVar6 < *(uint *)((long)plVar9 + 0x1c)) {
            plVar8 = plVar9;
            plVar10 = (long *)*plVar9;
            if ((long *)*plVar9 == (long *)0x0) {
              if (*plVar9 != 0) goto LAB_01634118;
              goto LAB_01634188;
            }
          }
          if (uVar6 <= *(uint *)((long)plVar9 + 0x1c)) break;
          plVar8 = plVar9 + 1;
          plVar10 = (long *)*plVar8;
        }
        plVar9 = plVar8;
        if (*plVar9 == 0) {
LAB_01634188:
          p_Var2 = operator_new(0x28);
          *(uint *)(p_Var2 + 0x1c) = uVar6;
          *(int *)(p_Var2 + 0x20) = iVar1;
          *(undefined8 *)p_Var2 = 0;
          *(undefined8 *)(p_Var2 + 8) = 0;
          *(long **)(p_Var2 + 0x10) = plVar11;
          *plVar9 = (long)p_Var2;
          if (*(long *)*in_x8 != 0) {
            *in_x8 = *(long *)*in_x8;
            p_Var2 = (__tree_node_base *)*plVar9;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    ((__tree_node_base *)in_x8[1],p_Var2);
          in_x8[2] = in_x8[2] + 1;
          lVar3 = *(long *)(in_x0 + 0x118);
          lVar4 = *(long *)(in_x0 + 0x120);
        }
      }
LAB_01634118:
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulong)(lVar4 - lVar3 >> 2));
  }
  return;
}

