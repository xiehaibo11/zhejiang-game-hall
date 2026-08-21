
/* std::__ndk1::__tree_node_base<void*>*&
   std::__ndk1::__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::Assessment*>,
   std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,
   std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::Assessment*>, v8::internal::compiler::OperandAsKeyLess, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::Assessment*> >
   >::__find_equal<v8::internal::compiler::InstructionOperand>(std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::Assessment*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::Assessment*>, void*>*, long>,
   std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&,
   std::__ndk1::__tree_node_base<void*>*&, v8::internal::compiler::InstructionOperand const&) */

__tree_node_base ** __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
::__find_equal<v8::internal::compiler::InstructionOperand>
          (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
           *this,__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                 *param_2,long *param_3,__tree_node_base **param_4,ulong *param_5)

{
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
  *p_Var1;
  bool bVar2;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
  *p_Var3;
  uint uVar4;
  ulong uVar5;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
  *p_Var6;
  uint uVar7;
  ulong uVar8;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
  *p_Var9;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
  *p_Var10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  p_Var3 = this + 8;
  if (p_Var3 != param_2) {
    uVar5 = *param_5;
    uVar4 = (uint)uVar5;
    uVar11 = uVar5;
    if ((uVar4 >> 2 & 1) != 0) {
      uVar11 = 0x180;
      if ((uVar4 >> 5 & 0xff) < 0xb || (uVar5 & 0x1c) != 4) {
        uVar11 = 0;
      }
      uVar11 = uVar5 & 0xffffffffffffe018 | uVar11 | 4;
    }
    uVar8 = *(ulong *)(param_2 + 0x20);
    uVar7 = (uint)uVar8;
    uVar12 = uVar8;
    if ((uVar7 >> 2 & 1) != 0) {
      uVar12 = 0x180;
      if ((uVar7 >> 5 & 0xff) < 0xb || (uVar8 & 0x1c) != 4) {
        uVar12 = 0;
      }
      uVar12 = uVar8 & 0xffffffffffffe018 | uVar12 | 4;
    }
    if (uVar12 <= uVar11) {
      if ((uVar7 >> 2 & 1) == 0) {
        if ((uVar4 >> 2 & 1) == 0) goto LAB_016531e8;
LAB_016533ac:
        uVar11 = 0x180;
        if ((uVar4 >> 5 & 0xff) < 0xb || (uVar5 & 0x1c) != 4) {
          uVar11 = 0;
        }
        if ((uVar5 & 0xffffffffffffe018 | uVar11 | 4) <= uVar8) goto LAB_016533dc;
      }
      else {
        uVar11 = 0x180;
        if ((uVar7 >> 5 & 0xff) < 0xb || (uVar8 & 0x1c) != 4) {
          uVar11 = 0;
        }
        uVar8 = uVar8 & 0xffffffffffffe018 | uVar11 | 4;
        if ((uVar4 >> 2 & 1) != 0) goto LAB_016533ac;
LAB_016531e8:
        if (uVar5 <= uVar8) {
LAB_016533dc:
          *param_3 = (long)param_2;
          *param_4 = (__tree_node_base *)param_2;
          return param_4;
        }
      }
      p_Var6 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                 **)(param_2 + 8);
      if (p_Var6 == (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                     *)0x0) {
        p_Var6 = param_2 + 0x10;
        p_Var10 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                    **)p_Var6;
        if (*(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
              **)p_Var10 != param_2) {
          do {
            lVar13 = *(long *)p_Var6;
            p_Var6 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                      *)(lVar13 + 0x10);
            p_Var10 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                        **)p_Var6;
          } while (*(long *)p_Var10 != lVar13);
        }
      }
      else {
        do {
          p_Var10 = p_Var6;
          p_Var6 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                     **)p_Var10;
        } while (*(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                   **)p_Var10 !=
                 (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                  *)0x0);
      }
      if (p_Var10 == p_Var3) goto LAB_01653438;
      if ((uVar4 >> 2 & 1) == 0) {
        uVar12 = *(ulong *)(p_Var10 + 0x20);
        uVar11 = uVar5;
        if (((uint)uVar12 >> 2 & 1) == 0) goto LAB_01653430;
LAB_0165347c:
        uVar8 = 0x180;
        if (((uint)uVar12 >> 5 & 0xff) < 0xb || (uVar12 & 0x1c) != 4) {
          uVar8 = 0;
        }
        if (uVar11 < (uVar12 & 0xffffffffffffe018 | uVar8 | 4)) goto LAB_01653438;
      }
      else {
        uVar11 = 0x180;
        if ((uVar4 >> 5 & 0xff) < 0xb || (uVar5 & 0x1c) != 4) {
          uVar11 = 0;
        }
        uVar11 = uVar5 & 0xffffffffffffe018 | uVar11 | 4;
        uVar12 = *(ulong *)(p_Var10 + 0x20);
        if (((uint)uVar12 >> 2 & 1) != 0) goto LAB_0165347c;
LAB_01653430:
        if (uVar11 < uVar12) {
LAB_01653438:
          if (*(long *)(param_2 + 8) == 0) {
            *param_3 = (long)param_2;
            return (__tree_node_base **)(param_2 + 8);
          }
LAB_01653440:
          *param_3 = (long)p_Var10;
          return (__tree_node_base **)p_Var10;
        }
      }
      p_Var6 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                 **)p_Var3;
      if (p_Var6 == (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                     *)0x0) goto LAB_01653570;
      uVar11 = 0x180;
      if ((uVar4 >> 5 & 0xff) < 0xb || (uVar5 & 0x1c) != 4) {
        uVar11 = 0;
      }
      p_Var3 = this + 8;
      if ((uVar5 & 4) != 0) {
        uVar5 = uVar5 & 0xffffffffffffe018 | uVar11 | 4;
      }
      do {
        while( true ) {
          p_Var10 = p_Var6;
          uVar12 = *(ulong *)(p_Var10 + 0x20);
          uVar4 = (uint)uVar12;
          uVar11 = uVar12;
          if ((uVar4 >> 2 & 1) != 0) {
            uVar11 = 0x180;
            if ((uVar4 >> 5 & 0xff) < 0xb || (uVar12 & 0x1c) != 4) {
              uVar11 = 0;
            }
            uVar11 = uVar12 & 0xffffffffffffe018 | uVar11 | 4;
          }
          if (uVar11 <= uVar5) break;
          p_Var3 = p_Var10;
          p_Var6 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                     **)p_Var10;
          if (*(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                **)p_Var10 ==
              (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
               *)0x0) goto LAB_01653440;
        }
        if ((uVar4 >> 2 & 1) != 0) {
          uVar11 = 0x180;
          if ((uVar4 >> 5 & 0xff) < 0xb || (uVar12 & 0x1c) != 4) {
            uVar11 = 0;
          }
          uVar12 = uVar12 & 0xffffffffffffe018 | uVar11 | 4;
        }
        if (uVar5 <= uVar12) break;
        p_Var3 = p_Var10 + 8;
        p_Var6 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                   **)p_Var3;
      } while (*(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                 **)p_Var3 !=
               (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                *)0x0);
      goto LAB_01653298;
    }
  }
  p_Var6 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
             **)param_2;
  p_Var10 = param_2;
  if (*(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
        **)this != param_2) {
    p_Var9 = param_2;
    p_Var1 = p_Var6;
    if (p_Var6 == (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                   *)0x0) {
      do {
        p_Var10 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                    **)(p_Var9 + 0x10);
        bVar2 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                  **)p_Var10 == p_Var9;
        p_Var9 = p_Var10;
      } while (bVar2);
    }
    else {
      do {
        p_Var10 = p_Var1;
        p_Var1 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                   **)(p_Var10 + 8);
      } while (*(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                 **)(p_Var10 + 8) !=
               (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                *)0x0);
    }
    uVar5 = *(ulong *)(p_Var10 + 0x20);
    if (((uint)uVar5 >> 2 & 1) != 0) {
      uVar11 = 0x180;
      if (((uint)uVar5 >> 5 & 0xff) < 0xb || (uVar5 & 0x1c) != 4) {
        uVar11 = 0;
      }
      uVar5 = uVar5 & 0xffffffffffffe018 | uVar11 | 4;
    }
    uVar11 = *param_5;
    uVar4 = (uint)uVar11;
    uVar12 = uVar11;
    if ((uVar4 >> 2 & 1) != 0) {
      uVar12 = 0x180;
      if ((uVar4 >> 5 & 0xff) < 0xb || (uVar11 & 0x1c) != 4) {
        uVar12 = 0;
      }
      uVar12 = uVar11 & 0xffffffffffffe018 | uVar12 | 4;
    }
    if (uVar12 <= uVar5) {
      p_Var6 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                 **)p_Var3;
      if (p_Var6 != (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                     *)0x0) {
        uVar5 = 0x180;
        if ((uVar4 >> 5 & 0xff) < 0xb || (uVar11 & 0x1c) != 4) {
          uVar5 = 0;
        }
        p_Var3 = this + 8;
        if ((uVar11 & 4) != 0) {
          uVar11 = uVar11 & 0xffffffffffffe018 | uVar5 | 4;
        }
        do {
          while( true ) {
            p_Var10 = p_Var6;
            uVar12 = *(ulong *)(p_Var10 + 0x20);
            uVar4 = (uint)uVar12;
            uVar5 = uVar12;
            if ((uVar4 >> 2 & 1) != 0) {
              uVar5 = 0x180;
              if ((uVar4 >> 5 & 0xff) < 0xb || (uVar12 & 0x1c) != 4) {
                uVar5 = 0;
              }
              uVar5 = uVar12 & 0xffffffffffffe018 | uVar5 | 4;
            }
            if (uVar5 <= uVar11) break;
            p_Var3 = p_Var10;
            p_Var6 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                       **)p_Var10;
            if (*(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                  **)p_Var10 ==
                (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                 *)0x0) {
              *param_3 = (long)p_Var10;
              return (__tree_node_base **)p_Var10;
            }
          }
          if ((uVar4 >> 2 & 1) != 0) {
            uVar5 = 0x180;
            if ((uVar4 >> 5 & 0xff) < 0xb || (uVar12 & 0x1c) != 4) {
              uVar5 = 0;
            }
            uVar12 = uVar12 & 0xffffffffffffe018 | uVar5 | 4;
          }
          if (uVar11 <= uVar12) break;
          p_Var3 = p_Var10 + 8;
          p_Var6 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                     **)p_Var3;
        } while (*(__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                   **)p_Var3 !=
                 (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                  *)0x0);
        *param_3 = (long)p_Var10;
        return (__tree_node_base **)p_Var3;
      }
LAB_01653570:
      *param_3 = (long)p_Var3;
      return (__tree_node_base **)p_Var3;
    }
  }
  if (p_Var6 == (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                 *)0x0) {
    *param_3 = (long)param_2;
    return (__tree_node_base **)param_2;
  }
  p_Var3 = p_Var10 + 8;
LAB_01653298:
  *param_3 = (long)p_Var10;
  return (__tree_node_base **)p_Var3;
}

