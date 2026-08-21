
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   int>, 
   std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   int>, void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand, int>,
   std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,
   std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand, int>,
   v8::internal::compiler::OperandAsKeyLess, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   int> > >::__emplace_unique_key_args<v8::internal::compiler::InstructionOperand,
   std::__ndk1::pair<v8::internal::compiler::InstructionOperand, int>
   >(v8::internal::compiler::InstructionOperand const&,
   std::__ndk1::pair<v8::internal::compiler::InstructionOperand, int>&&) */

undefined1  [16] __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>>>
::
__emplace_unique_key_args<v8::internal::compiler::InstructionOperand,std::__ndk1::pair<v8::internal::compiler::InstructionOperand,int>>
          (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>>>
           *this,InstructionOperand *param_1,pair *param_2)

{
  undefined4 uVar1;
  Zone *this_00;
  __tree_node_base *p_Var2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  __tree_node_base *p_Var8;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>>>
  *p_Var9;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>>>
  *p_Var10;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>>>
  *p_Var11;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>>>
  *p_Var12;
  undefined1 auVar13 [16];
  
  p_Var9 = this + 8;
  p_Var10 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>>>
              **)p_Var9;
  p_Var12 = p_Var9;
  if (p_Var10 !=
      (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>>>
       *)0x0) {
    uVar4 = *(ulong *)param_1;
    uVar7 = 0x180;
    if (((uint)uVar4 >> 5 & 0xff) < 0xb || (uVar4 & 0x1c) != 4) {
      uVar7 = 0;
    }
    p_Var9 = this + 8;
    if ((uVar4 & 4) != 0) {
      uVar4 = uVar4 & 0xffffffffffffe018 | uVar7 | 4;
    }
    do {
      while( true ) {
        p_Var11 = p_Var10;
        uVar6 = *(ulong *)(p_Var11 + 0x20);
        uVar5 = (uint)uVar6;
        uVar7 = uVar6;
        if ((uVar5 >> 2 & 1) != 0) {
          uVar7 = 0x180;
          if ((uVar5 >> 5 & 0xff) < 0xb || (uVar6 & 0x1c) != 4) {
            uVar7 = 0;
          }
          uVar7 = uVar6 & 0xffffffffffffe018 | uVar7 | 4;
        }
        p_Var12 = p_Var11;
        if (uVar7 <= uVar4) break;
        p_Var9 = p_Var11;
        p_Var10 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>>>
                    **)p_Var11;
        if (*(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>>>
              **)p_Var11 ==
            (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>>>
             *)0x0) {
          p_Var8 = *(__tree_node_base **)p_Var11;
          goto joined_r0x01653684;
        }
      }
      if ((uVar5 >> 2 & 1) != 0) {
        uVar7 = 0x180;
        if ((uVar5 >> 5 & 0xff) < 0xb || (uVar6 & 0x1c) != 4) {
          uVar7 = 0;
        }
        uVar6 = uVar6 & 0xffffffffffffe018 | uVar7 | 4;
      }
      if (uVar4 <= uVar6) break;
      p_Var9 = p_Var11 + 8;
      p_Var10 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>>>
                  **)p_Var9;
    } while (*(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>>>
               **)p_Var9 !=
             (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>>>
              *)0x0);
  }
  p_Var8 = *(__tree_node_base **)p_Var9;
  p_Var11 = p_Var9;
joined_r0x01653684:
  if (p_Var8 == (__tree_node_base *)0x0) {
    this_00 = *(Zone **)(this + 0x10);
    p_Var8 = *(__tree_node_base **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)p_Var8) < 0x30) {
      p_Var8 = (__tree_node_base *)v8::internal::Zone::NewExpand(this_00,0x30);
    }
    else {
      *(__tree_node_base **)(this_00 + 0x10) = p_Var8 + 0x30;
    }
    *(undefined8 *)(p_Var8 + 0x20) = *(undefined8 *)param_2;
    uVar1 = *(undefined4 *)(param_2 + 8);
    *(undefined8 *)p_Var8 = 0;
    *(undefined8 *)(p_Var8 + 8) = 0;
    *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,int>>>
      **)(p_Var8 + 0x10) = p_Var12;
    *(undefined4 *)(p_Var8 + 0x28) = uVar1;
    *(__tree_node_base **)p_Var11 = p_Var8;
    p_Var2 = p_Var8;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      p_Var2 = *(__tree_node_base **)p_Var11;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),p_Var2);
    uVar3 = 1;
    *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  }
  else {
    uVar3 = 0;
  }
  auVar13._8_8_ = uVar3;
  auVar13._0_8_ = p_Var8;
  return auVar13;
}

