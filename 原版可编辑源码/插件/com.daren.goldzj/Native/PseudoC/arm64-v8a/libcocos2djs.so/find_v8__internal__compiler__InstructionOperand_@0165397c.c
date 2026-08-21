
/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::Assessment*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::Assessment*>, void*>*, long>
   std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::Assessment*>,
   std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,
   std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::Assessment*>, v8::internal::compiler::OperandAsKeyLess, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::Assessment*> >
   >::find<v8::internal::compiler::InstructionOperand>(v8::internal::compiler::InstructionOperand
   const&) */

__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
* __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
::find<v8::internal::compiler::InstructionOperand>
          (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
           *this,InstructionOperand *param_1)

{
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
  *p_Var1;
  ulong uVar2;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
  *p_Var3;
  ulong uVar4;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
  *p_Var5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  
  p_Var3 = this + 8;
  p_Var5 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
             **)p_Var3;
  if (p_Var5 != (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                 *)0x0) {
    uVar4 = *(ulong *)param_1;
    uVar6 = 0x180;
    if (((uint)uVar4 >> 5 & 0xff) < 0xb || (uVar4 & 0x1c) != 4) {
      uVar6 = 0;
    }
    uVar7 = uVar4 & 0xffffffffffffe018 | uVar6 | 4;
    uVar6 = uVar4;
    if ((uVar4 & 4) != 0) {
      uVar6 = uVar7;
    }
    uVar9 = *(ulong *)(p_Var5 + 0x20);
    uVar8 = (uint)uVar9;
    p_Var1 = p_Var3;
    while( true ) {
      if ((uVar8 >> 2 & 1) != 0) {
        uVar2 = 0x180;
        if (((uint)uVar9 >> 5 & 0xff) < 0xb || (uVar9 & 0x1c) != 4) {
          uVar2 = 0;
        }
        uVar9 = uVar9 & 0xffffffffffffe018 | uVar2 | 4;
      }
      if (uVar9 >= uVar6) {
        p_Var1 = p_Var5;
      }
      p_Var5 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                 **)(p_Var5 + (ulong)(uVar9 < uVar6) * 8);
      if (p_Var5 == (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                     *)0x0) break;
      uVar9 = *(ulong *)(p_Var5 + 0x20);
      uVar8 = (uint)uVar9;
    }
    if (p_Var1 != p_Var3) {
      uVar6 = *(ulong *)(p_Var1 + 0x20);
      if ((uVar4 & 4) != 0) {
        uVar4 = uVar7;
      }
      if (((uint)uVar6 >> 2 & 1) != 0) {
        uVar7 = 0x180;
        if (((uint)uVar6 >> 5 & 0xff) < 0xb || (uVar6 & 0x1c) != 4) {
          uVar7 = 0;
        }
        uVar6 = uVar6 & 0xffffffffffffe018 | uVar7 | 4;
      }
      if (uVar6 <= uVar4) {
        return p_Var1;
      }
    }
  }
  return p_Var3;
}

