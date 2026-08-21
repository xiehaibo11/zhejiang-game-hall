
/* WARNING: Removing unreachable block (ram,0x0125f808) */
/* v8::internal::Assembler::bind(v8::internal::Label*) */

void v8::internal::Assembler::bind(Label *param_1)

{
  Instruction *this;
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  Label *in_x1;
  Instruction *in_x2;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *local_208;
  long *local_200;
  undefined **local_1f8;
  long *local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1d8;
  int local_128;
  long local_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  long local_d0;
  int local_c8;
  ConstantPool aCStack_c0 [64];
  Assembler *local_80;
  BlockScope aBStack_78 [8];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0x128) != 0) {
    if ((*(int *)in_x1 < 1) ||
       (DeleteUnresolvedBranchInfoForLabelTraverse((Assembler *)param_1,in_x1),
       *(long *)(param_1 + 0x128) != 0)) {
      iVar7 = *(int *)(*(long *)(param_1 + 0x118) + 0x20) + -0x800;
    }
    else {
      iVar7 = 0x7fffffff;
    }
    *(int *)(param_1 + 0x130) = iVar7;
  }
  iVar7 = *(int *)in_x1;
  if (0 < iVar7) {
    do {
      iVar6 = (int)in_x2;
      this = (Instruction *)(*(long *)(param_1 + 0x10) + (long)iVar7 + -1);
      iVar5 = Instruction::ImmPCOffset(this);
      if (((*(uint *)this & 0xffe0001f) == 0xd4200000) &&
         ((*(uint *)(this + 4) & 0xffe0001f) == 0xd4200000)) {
        lVar8 = *(long *)(param_1 + 0xf0);
        uVar1 = 0;
        if (*(long *)(param_1 + 0xf8) - lVar8 != 0) {
          uVar1 = (*(long *)(param_1 + 0xf8) - lVar8) * 0x80 - 1;
        }
        uVar9 = *(long *)(param_1 + 0x110) + *(long *)(param_1 + 0x108);
        if (uVar1 == uVar9) {
          std::__ndk1::deque<int,std::__ndk1::allocator<int>>::__add_back_capacity
                    ((deque<int,std::__ndk1::allocator<int>> *)(param_1 + 0xe8));
          lVar8 = *(long *)(param_1 + 0xf0);
          uVar9 = *(long *)(param_1 + 0x108) + *(long *)(param_1 + 0x110);
        }
        *(int *)(*(long *)(lVar8 + (uVar9 >> 7 & 0x1fffffffffffff8)) + (uVar9 & 0x3ff) * 4) =
             (int)((long)iVar7 + -1);
        *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + 1;
        ExternalAssemblerBuffer((internal *)this,(void *)0x48,iVar6);
        local_200 = local_208;
        AssemblerBase::AssemblerBase
                  ((AssemblerBase *)&local_1f8,(AssemblerOptions *)(param_1 + 0xa0),&local_200);
        plVar3 = local_200;
        local_200 = (long *)0x0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        local_1f8 = &PTR__Assembler_01cbcf10;
        local_d8 = 0;
        local_d0 = 0;
        uStack_f8 = 0;
        local_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        puStack_118 = (undefined8 *)0x0;
        local_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        local_e0 = &local_d8;
        ConstantPool::ConstantPool(aCStack_c0,(Assembler *)&local_1f8);
        puVar4 = local_1e8;
        local_128 = 0;
        local_1d8 = local_1e8;
        iVar6 = (**(code **)(*local_1f0 + 0x18))();
        local_120 = (long)puVar4 + (long)iVar6;
        puStack_118 = local_1d8;
        ConstantPool::Clear(aCStack_c0);
        local_208 = (long *)0x0;
        local_c8 = 0x7fffffff;
        local_80 = (Assembler *)&local_1f8;
        in_x2 = (Instruction *)0x0;
        local_1f8 = &PTR__PatchingAssembler_01cbcf38;
        ConstantPool::BlockScope::BlockScope(aBStack_78,(Assembler *)&local_1f8,0);
        if ((*(long *)(local_80 + 0x128) != 0) && (*(int *)(local_80 + 0xd0) < 1)) {
          if (*(long *)(local_80 + 0x128) * 4 +
              (long)(*(int *)(local_80 + 0x20) - *(int *)(local_80 + 0x10)) + 8 <
              (long)*(int *)(*(long *)(local_80 + 0x118) + 0x20)) {
            *(int *)(local_80 + 0x130) = *(int *)(*(long *)(local_80 + 0x118) + 0x20) + -0x800;
          }
          else {
            in_x2 = (Instruction *)0x1;
            EmitVeneers(local_80,false,true,0);
          }
        }
        *(int *)(local_80 + 0xd0) = *(int *)(local_80 + 0xd0) + 1;
        *local_1d8 = *(undefined8 *)(param_1 + 0x20);
        local_1d8 = local_1d8 + 1;
        if ((int)local_120 - (int)local_1d8 < 0x40) {
          GrowBuffer((Assembler *)&local_1f8);
        }
        if (((local_c8 <= (int)local_1d8 - (int)local_1e8) && (local_d0 != 0)) && (local_128 < 1)) {
          if (local_d0 * 4 + (long)((int)local_1d8 - (int)local_1e8) + 0x408 <
              (long)*(int *)(local_e0 + 4)) {
            local_c8 = *(int *)(local_e0 + 4) + -0x800;
          }
          else {
            in_x2 = (Instruction *)0x1;
            EmitVeneers((Assembler *)&local_1f8,false,true,0x400);
          }
        }
        ConstantPool::MaybeCheck(aCStack_c0);
        local_1f8 = &PTR__PatchingAssembler_01cbcf38;
        *(int *)(local_80 + 0xd0) = *(int *)(local_80 + 0xd0) + -1;
        ConstantPool::BlockScope::~BlockScope(aBStack_78);
        ~Assembler((Assembler *)&local_1f8);
      }
      else {
        in_x2 = *(Instruction **)(param_1 + 0x20);
        Instruction::SetImmPCOffsetTarget(this,(AssemblerOptions *)(param_1 + 0xa0),in_x2);
      }
      iVar6 = iVar7 + iVar5;
      iVar7 = 0;
      if (iVar5 != 0) {
        iVar7 = iVar6;
      }
      *(int *)in_x1 = iVar7;
    } while (0 < iVar7);
  }
  *(int *)in_x1 = ~(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x10));
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

