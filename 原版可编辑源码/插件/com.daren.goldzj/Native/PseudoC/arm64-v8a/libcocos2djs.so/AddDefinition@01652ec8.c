
/* v8::internal::compiler::BlockAssessments::AddDefinition(v8::internal::compiler::InstructionOperand,
   int) */

void __thiscall
v8::internal::compiler::BlockAssessments::AddDefinition
          (BlockAssessments *this,ulong param_2,undefined4 param_3)

{
  ulong uVar1;
  __tree_node_base *p_Var2;
  ulong uVar3;
  long *plVar4;
  __tree_node_base *p_Var5;
  long *plVar6;
  Zone *this_00;
  __tree_node_base *p_Var7;
  long lVar8;
  __tree_node_base *p_Var9;
  uint uVar10;
  ulong uVar11;
  ulong local_40;
  undefined4 *puStack_38;
  
  p_Var7 = (__tree_node_base *)(this + 8);
  p_Var5 = *(__tree_node_base **)p_Var7;
  if (p_Var5 != (__tree_node_base *)0x0) {
    uVar11 = 0x180;
    if (((uint)param_2 >> 5 & 0xff) < 0xb || (param_2 & 0x1c) != 4) {
      uVar11 = 0;
    }
    uVar1 = param_2;
    if ((param_2 & 4) != 0) {
      uVar1 = param_2 & 0xffffffffffffe018 | uVar11 | 4;
    }
    uVar11 = *(ulong *)(p_Var5 + 0x20);
    uVar10 = (uint)uVar11;
    p_Var2 = p_Var7;
    p_Var9 = p_Var5;
    while( true ) {
      if ((uVar10 >> 2 & 1) != 0) {
        uVar3 = 0x180;
        if (((uint)uVar11 >> 5 & 0xff) < 0xb || (uVar11 & 0x1c) != 4) {
          uVar3 = 0;
        }
        uVar11 = uVar11 & 0xffffffffffffe018 | uVar3 | 4;
      }
      if (uVar11 >= uVar1) {
        p_Var2 = p_Var9;
      }
      p_Var9 = *(__tree_node_base **)(p_Var9 + (ulong)(uVar11 < uVar1) * 8);
      if (p_Var9 == (__tree_node_base *)0x0) break;
      uVar11 = *(ulong *)(p_Var9 + 0x20);
      uVar10 = (uint)uVar11;
    }
    if (p_Var2 != p_Var7) {
      uVar11 = *(ulong *)(p_Var2 + 0x20);
      if (((uint)uVar11 >> 2 & 1) != 0) {
        uVar3 = 0x180;
        if (((uint)uVar11 >> 5 & 0xff) < 0xb || (uVar11 & 0x1c) != 4) {
          uVar3 = 0;
        }
        uVar11 = uVar11 & 0xffffffffffffe018 | uVar3 | 4;
      }
      if (uVar11 <= uVar1) {
        plVar4 = *(long **)(p_Var2 + 8);
        if (*(long **)(p_Var2 + 8) == (long *)0x0) {
          p_Var7 = p_Var2 + 0x10;
          plVar6 = *(long **)p_Var7;
          if ((__tree_node_base *)*plVar6 != p_Var2) {
            do {
              lVar8 = *(long *)p_Var7;
              p_Var7 = (__tree_node_base *)(lVar8 + 0x10);
              plVar6 = *(long **)p_Var7;
            } while (*plVar6 != lVar8);
          }
        }
        else {
          do {
            plVar6 = plVar4;
            plVar4 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
        if (*(__tree_node_base **)this == p_Var2) {
          *(long **)this = plVar6;
        }
        *(long *)(this + 0x18) = *(long *)(this + 0x18) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(p_Var5,p_Var2);
      }
    }
  }
  this_00 = *(Zone **)(this + 0x40);
  puStack_38 = *(undefined4 **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)puStack_38) < 8) {
    puStack_38 = (undefined4 *)Zone::NewExpand(this_00,8);
  }
  else {
    *(undefined4 **)(this_00 + 0x10) = puStack_38 + 2;
  }
  *puStack_38 = 0;
  puStack_38[1] = param_3;
  local_40 = param_2;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
  ::
  __emplace_unique_key_args<v8::internal::compiler::InstructionOperand,std::__ndk1::pair<v8::internal::compiler::InstructionOperand,v8::internal::compiler::FinalAssessment*>>
            ((__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
              *)this,(InstructionOperand *)&local_40,(pair *)&local_40);
  return;
}

