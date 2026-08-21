
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::Assessment*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::Assessment*>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::Assessment*>,
   std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,
   std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::Assessment*>, v8::internal::compiler::OperandAsKeyLess, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::Assessment*> >
   >::__emplace_unique_key_args<v8::internal::compiler::InstructionOperand,
   std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<v8::internal::compiler::InstructionOperand const&>, std::__ndk1::tuple<>
   >(v8::internal::compiler::InstructionOperand const&, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<v8::internal::compiler::InstructionOperand const&>&&, std::__ndk1::tuple<>&&)
    */

undefined1  [16]
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
::
__emplace_unique_key_args<v8::internal::compiler::InstructionOperand,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::compiler::InstructionOperand_const&>,std::__ndk1::tuple<>>
          (InstructionOperand *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  Zone *this;
  __tree_node_base *p_Var1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  __tree_node_base *p_Var7;
  InstructionOperand *pIVar8;
  InstructionOperand *pIVar9;
  InstructionOperand *pIVar10;
  InstructionOperand *pIVar11;
  undefined1 auVar12 [16];
  
  pIVar8 = param_1 + 8;
  pIVar9 = *(InstructionOperand **)pIVar8;
  pIVar11 = pIVar8;
  if (pIVar9 != (InstructionOperand *)0x0) {
    uVar3 = *(ulong *)param_2;
    uVar6 = 0x180;
    if (((uint)uVar3 >> 5 & 0xff) < 0xb || (uVar3 & 0x1c) != 4) {
      uVar6 = 0;
    }
    pIVar8 = param_1 + 8;
    if ((uVar3 & 4) != 0) {
      uVar3 = uVar3 & 0xffffffffffffe018 | uVar6 | 4;
    }
    do {
      while( true ) {
        pIVar10 = pIVar9;
        uVar5 = *(ulong *)(pIVar10 + 0x20);
        uVar4 = (uint)uVar5;
        uVar6 = uVar5;
        if ((uVar4 >> 2 & 1) != 0) {
          uVar6 = 0x180;
          if ((uVar4 >> 5 & 0xff) < 0xb || (uVar5 & 0x1c) != 4) {
            uVar6 = 0;
          }
          uVar6 = uVar5 & 0xffffffffffffe018 | uVar6 | 4;
        }
        pIVar11 = pIVar10;
        if (uVar6 <= uVar3) break;
        pIVar8 = pIVar10;
        pIVar9 = *(InstructionOperand **)pIVar10;
        if (*(InstructionOperand **)pIVar10 == (InstructionOperand *)0x0) {
          p_Var7 = *(__tree_node_base **)pIVar10;
          goto joined_r0x01653e18;
        }
      }
      if ((uVar4 >> 2 & 1) != 0) {
        uVar6 = 0x180;
        if ((uVar4 >> 5 & 0xff) < 0xb || (uVar5 & 0x1c) != 4) {
          uVar6 = 0;
        }
        uVar5 = uVar5 & 0xffffffffffffe018 | uVar6 | 4;
      }
      if (uVar3 <= uVar5) break;
      pIVar8 = pIVar10 + 8;
      pIVar9 = *(InstructionOperand **)pIVar8;
    } while (*(InstructionOperand **)pIVar8 != (InstructionOperand *)0x0);
  }
  p_Var7 = *(__tree_node_base **)pIVar8;
  pIVar10 = pIVar8;
joined_r0x01653e18:
  if (p_Var7 == (__tree_node_base *)0x0) {
    this = *(Zone **)(param_1 + 0x10);
    p_Var7 = *(__tree_node_base **)(this + 0x10);
    if ((ulong)(*(long *)(this + 0x18) - (long)p_Var7) < 0x30) {
      p_Var7 = (__tree_node_base *)v8::internal::Zone::NewExpand(this,0x30);
    }
    else {
      *(__tree_node_base **)(this + 0x10) = p_Var7 + 0x30;
    }
    uVar2 = **(undefined8 **)param_4;
    *(undefined8 *)p_Var7 = 0;
    *(undefined8 *)(p_Var7 + 8) = 0;
    *(InstructionOperand **)(p_Var7 + 0x10) = pIVar11;
    *(undefined8 *)(p_Var7 + 0x20) = uVar2;
    *(undefined8 *)(p_Var7 + 0x28) = 0;
    *(__tree_node_base **)pIVar10 = p_Var7;
    p_Var1 = p_Var7;
    if (**(long **)param_1 != 0) {
      *(long *)param_1 = **(long **)param_1;
      p_Var1 = *(__tree_node_base **)pIVar10;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 8),p_Var1);
    uVar2 = 1;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  }
  else {
    uVar2 = 0;
  }
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = p_Var7;
  return auVar12;
}

