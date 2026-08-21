
/* v8::internal::compiler::CodeAssemblerLabel::CodeAssemblerLabel(v8::internal::compiler::CodeAssembler*,
   unsigned long, v8::internal::compiler::CodeAssemblerVariable* const*,
   v8::internal::compiler::CodeAssemblerLabel::Type) */

void __thiscall
v8::internal::compiler::CodeAssemblerLabel::CodeAssemblerLabel
          (CodeAssemblerLabel *this,undefined8 *param_1,long param_2,long param_3,int param_5)

{
  uint uVar1;
  CodeAssemblerLabel *pCVar2;
  undefined8 *puVar3;
  __tree_node_base *p_Var4;
  Zone *this_00;
  long lVar5;
  undefined8 uVar6;
  __tree_node_base *p_Var7;
  CodeAssemblerLabel *pCVar8;
  long lVar9;
  long *plVar10;
  CodeAssemblerLabel *pCVar11;
  CodeAssemblerLabel *pCVar12;
  
  *this = (CodeAssemblerLabel)0x0;
  *(undefined8 *)(this + 8) = 0;
  uVar6 = *param_1;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(CodeAssemblerLabel **)(this + 0x38) = this + 0x40;
  *(undefined8 *)(this + 0x10) = uVar6;
  *(undefined8 *)(this + 0x18) = 0;
  pCVar8 = this + 0x28;
  *(undefined8 *)pCVar8 = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(CodeAssemblerLabel **)(this + 0x20) = pCVar8;
  this_00 = (Zone *)**(undefined8 **)(*(long *)*param_1 + 8);
  puVar3 = *(undefined8 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar3) < 0x10) {
    puVar3 = (undefined8 *)Zone::NewExpand(this_00,0x10);
  }
  else {
    *(undefined8 **)(this_00 + 0x10) = puVar3 + 2;
  }
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 1) = 0;
  *(bool *)((long)puVar3 + 10) = param_5 == 0;
  *(undefined8 **)(this + 0x18) = puVar3;
  if (param_2 != 0) {
    lVar9 = 0;
    do {
      plVar10 = *(long **)(param_3 + lVar9 * 8);
      pCVar11 = pCVar8;
      pCVar12 = pCVar8;
      if (*(CodeAssemblerLabel **)pCVar8 != (CodeAssemblerLabel *)0x0) {
        uVar1 = *(uint *)(*plVar10 + 0xc);
        pCVar2 = *(CodeAssemblerLabel **)pCVar8;
        do {
          while (pCVar11 = pCVar2, uVar1 < *(uint *)(*(long *)(pCVar11 + 0x20) + 0xc)) {
            pCVar2 = *(CodeAssemblerLabel **)pCVar11;
            pCVar12 = pCVar11;
            if (*(CodeAssemblerLabel **)pCVar11 == (CodeAssemblerLabel *)0x0) {
              p_Var7 = *(__tree_node_base **)pCVar11;
              goto joined_r0x0168a158;
            }
          }
          if (uVar1 <= *(uint *)(*(long *)(pCVar11 + 0x20) + 0xc)) break;
          pCVar12 = pCVar11 + 8;
          pCVar2 = *(CodeAssemblerLabel **)pCVar12;
        } while (*(CodeAssemblerLabel **)pCVar12 != (CodeAssemblerLabel *)0x0);
      }
      p_Var7 = *(__tree_node_base **)pCVar12;
joined_r0x0168a158:
      if (p_Var7 == (__tree_node_base *)0x0) {
        p_Var7 = operator_new(0x30);
        lVar5 = *plVar10;
        *(undefined8 *)p_Var7 = 0;
        *(undefined8 *)(p_Var7 + 8) = 0;
        *(CodeAssemblerLabel **)(p_Var7 + 0x10) = pCVar11;
        *(long *)(p_Var7 + 0x20) = lVar5;
        *(undefined8 *)(p_Var7 + 0x28) = 0;
        *(__tree_node_base **)pCVar12 = p_Var7;
        p_Var4 = p_Var7;
        if (**(long **)(this + 0x20) != 0) {
          *(long *)(this + 0x20) = **(long **)(this + 0x20);
          p_Var4 = *(__tree_node_base **)pCVar12;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x28),p_Var4);
        *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
      }
      lVar9 = lVar9 + 1;
      *(undefined8 *)(p_Var7 + 0x28) = 0;
    } while (lVar9 != param_2);
  }
  return;
}

