
/* v8::internal::compiler::BlockAssessments::PerformParallelMoves(v8::internal::compiler::ParallelMove
   const*) */

void __thiscall
v8::internal::compiler::BlockAssessments::PerformParallelMoves
          (BlockAssessments *this,ParallelMove *param_1)

{
  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
  *this_00;
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  BlockAssessments *pBVar4;
  BlockAssessments *pBVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  InstructionOperand *pIVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  InstructionOperand *local_80;
  undefined8 uStack_78;
  undefined1 *local_68;
  
  if (param_1 != (ParallelMove *)0x0) {
    if (*(long *)(this + 0x38) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","map_for_moves_.empty()");
    }
    puVar11 = *(undefined8 **)param_1;
    puVar2 = *(undefined8 **)(param_1 + 8);
    this_00 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
               *)(this + 0x20);
    if (puVar11 != puVar2) {
      do {
        pIVar9 = (InstructionOperand *)*puVar11;
        uVar7 = *(ulong *)pIVar9;
        if ((uVar7 & 7) != 0) {
          if (((uint)uVar7 >> 2 & 1) == 0) {
            uVar8 = *(ulong *)(pIVar9 + 8);
            if (((uint)uVar8 >> 2 & 1) != 0) goto LAB_01651584;
LAB_01651550:
            if (uVar7 == uVar8) goto LAB_01651528;
          }
          else {
            uVar8 = 0x180;
            if (((uint)uVar7 >> 5 & 0xff) < 0xb || (uVar7 & 0x1c) != 4) {
              uVar8 = 0;
            }
            uVar7 = uVar7 & 0xffffffffffffe018 | uVar8 | 4;
            uVar8 = *(ulong *)(pIVar9 + 8);
            if (((uint)uVar8 >> 2 & 1) == 0) goto LAB_01651550;
LAB_01651584:
            uVar1 = 0x180;
            if (((uint)uVar8 >> 5 & 0xff) < 0xb || (uVar8 & 0x1c) != 4) {
              uVar1 = 0;
            }
            if (uVar7 == (uVar8 & 0xffffffffffffe018 | uVar1 | 4)) goto LAB_01651528;
          }
          pBVar4 = (BlockAssessments *)
                   std::__ndk1::
                   __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                   ::find<v8::internal::compiler::InstructionOperand>
                             ((__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                               *)this,pIVar9);
          if (this + 8 == pBVar4) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","it != map_.end()");
          }
          pIVar9 = pIVar9 + 8;
          pBVar5 = (BlockAssessments *)
                   std::__ndk1::
                   __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                   ::find<v8::internal::compiler::InstructionOperand>(this_00,pIVar9);
          if (this + 0x28 != pBVar5) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.",
                     "map_for_moves_.find(move->destination()) == map_for_moves_.end()");
          }
          uVar10 = *(undefined8 *)(pBVar4 + 0x28);
          local_80 = pIVar9;
          lVar6 = std::__ndk1::
                  __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
                  ::
                  __emplace_unique_key_args<v8::internal::compiler::InstructionOperand,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::compiler::InstructionOperand_const&>,std::__ndk1::tuple<>>
                            ((InstructionOperand *)this_00,(piecewise_construct_t *)pIVar9,
                             (tuple *)&DAT_01a5a609,(tuple *)&local_80);
          *(undefined8 *)(lVar6 + 0x28) = uVar10;
        }
LAB_01651528:
        puVar11 = puVar11 + 1;
      } while (puVar2 != puVar11);
    }
    pBVar4 = *(BlockAssessments **)(this + 0x20);
    while (pBVar4 != this + 0x28) {
      uVar10 = *(undefined8 *)(pBVar4 + 0x28);
      local_80 = *(InstructionOperand **)(pBVar4 + 0x20);
      uStack_78 = uVar10;
      local_68 = (undefined1 *)&local_80;
      lVar6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
              ::
              __emplace_unique_key_args<v8::internal::compiler::InstructionOperand,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::compiler::InstructionOperand_const&>,std::__ndk1::tuple<>>
                        ((InstructionOperand *)this,(piecewise_construct_t *)&local_80,
                         (tuple *)&DAT_01a5a609,(tuple *)&local_68);
      *(undefined8 *)(lVar6 + 0x28) = uVar10;
      pBVar5 = *(BlockAssessments **)(pBVar4 + 8);
      if (*(BlockAssessments **)(pBVar4 + 8) == (BlockAssessments *)0x0) {
        pBVar5 = pBVar4 + 0x10;
        bVar3 = *(BlockAssessments **)*(BlockAssessments **)pBVar5 != pBVar4;
        pBVar4 = *(BlockAssessments **)pBVar5;
        if (bVar3) {
          do {
            lVar6 = *(long *)pBVar5;
            pBVar5 = (BlockAssessments *)(lVar6 + 0x10);
            pBVar4 = *(BlockAssessments **)pBVar5;
          } while (*(long *)pBVar4 != lVar6);
        }
      }
      else {
        do {
          pBVar4 = pBVar5;
          pBVar5 = *(BlockAssessments **)pBVar4;
        } while (*(BlockAssessments **)pBVar4 != (BlockAssessments *)0x0);
      }
    }
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>,v8::internal::compiler::OperandAsKeyLess,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand,v8::internal::compiler::Assessment*>>>
    ::destroy(this_00,*(__tree_node **)(this + 0x28));
    *(undefined8 *)(this + 0x38) = 0;
    *(BlockAssessments **)(this + 0x20) = this + 0x28;
    *(undefined8 *)(this + 0x28) = 0;
  }
  return;
}

