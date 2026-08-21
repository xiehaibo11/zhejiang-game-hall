
/* v8::internal::TurboAssembler::LogicalMacro(v8::internal::Register const&, v8::internal::Register
   const&, v8::internal::Operand const&, v8::internal::LogicalOp) */

void __thiscall
v8::internal::TurboAssembler::LogicalMacro
          (TurboAssembler *this,Register *param_1,ulong *param_2,Operand *param_3,uint param_5)

{
  CPURegList *this_00;
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong local_118;
  undefined4 local_110;
  uint local_10c;
  uint local_108;
  uint uStack_104;
  ulong local_100;
  uint local_f8;
  undefined8 local_e0;
  undefined1 local_d8;
  ulong local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  ulong local_b8;
  uint local_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  uint local_80;
  undefined8 local_7c;
  undefined4 local_74;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  this_00 = (CPURegList *)(this + 0x198);
  uVar9 = *(undefined8 *)(this + 0x198);
  uVar10 = *(undefined8 *)(this + 0x1a8);
  uVar4 = Operand::NeedsRelocation(param_3,(Assembler *)this);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(param_3 + 0x30) == -1) {
      if (((*(int *)(param_3 + 0x34) == 0) && (*(int *)(param_3 + 0x38) == 2)) &&
         (*param_3 == (Operand)0x0)) {
        uVar3 = *(uint *)(param_1 + 4);
        uVar8 = *(ulong *)(param_3 + 0x20) ^ -(ulong)((param_5 & 0x3fffff) >> 0x15);
        uVar4 = uVar8 & 0xffffffff;
        if (uVar3 != 0x20) {
          uVar4 = uVar8;
        }
        uVar1 = param_5 & 0xffdfffff;
        if (uVar4 == 0) {
          iVar6 = (int)((CONCAT44(param_5,param_5) & 0xffdfffffffffffff) >> 0x1d);
          if (1 < iVar6 - 1U) {
            if (iVar6 != 3) {
              if (iVar6 != 0) goto switchD_0126dc04_default;
              Mov(this,param_1,0);
              goto LAB_0126db54;
            }
            goto switchD_0126dc04_caseD_3;
          }
switchD_0126dc04_caseD_0:
          local_88 = *param_2;
          local_80 = (uint)param_2[1];
          puVar5 = &local_b8;
          local_b8 = (ulong)local_b8._1_7_ << 8;
          local_b0 = (uint)local_b0._1_3_ << 8;
          local_98 = 0;
          uStack_90 = CONCAT71(uStack_90._1_7_,0x13);
          local_7c = 0xffffffff00000000;
          local_74 = 0;
        }
        else {
          if ((uVar3 == 0x40 && uVar4 == 0xffffffffffffffff) ||
             (uVar3 == 0x20 && uVar4 == 0xffffffff)) {
            switch((CONCAT44(param_5,param_5) & 0xffdfffffffffffff) >> 0x1d & 0xffffffff) {
            case 0:
              goto switchD_0126dc04_caseD_0;
            case 1:
              Mov(this,param_1,uVar4);
              break;
            case 2:
              local_88 = *param_2;
              local_80 = (uint)param_2[1];
              local_b8 = (ulong)local_b8._1_7_ << 8;
              local_b0 = (uint)local_b0._1_3_ << 8;
              local_98 = 0;
              uStack_90 = CONCAT71(uStack_90._1_7_,0x13);
              local_7c = 0xffffffff00000000;
              local_74 = 0;
              Mvn(this,param_1,(Operand *)&local_b8);
              break;
            case 3:
              goto switchD_0126dc04_caseD_3;
            default:
switchD_0126dc04_default:
                    /* WARNING: Subroutine does not return */
              V8_Fatal("unreachable code");
            }
            goto LAB_0126db54;
          }
switchD_0126dc04_caseD_3:
          uVar8 = Assembler::IsImmLogical(uVar4,uVar3,&uStack_104,&local_108,&local_10c);
          if ((uVar8 & 1) != 0) {
            Assembler::LogicalImmediate
                      ((Assembler *)this,param_1,param_2,uStack_104,local_108,local_10c,uVar1);
            goto LAB_0126db54;
          }
          if (*(long *)this_00 == 0) {
LAB_0126dddc:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","!available->IsEmpty()");
          }
          uVar8 = CPURegList::PopLowestIndex(this_00);
          local_110 = 0;
          local_118 = uVar8 & 0xffffffff | (ulong)*(uint *)((long)param_2 + 4) << 0x20;
          uVar7 = 0;
          if (((int)param_2[1] != 0 || *(uint *)((long)param_2 + 4) != 0x40) ||
              (int)*param_2 != 0x3f) {
            uVar7 = 2;
          }
          MoveImmediateForShiftedOp(&local_b8,this,&local_118,uVar4,uVar7);
          param_5 = uVar1;
          if ((*(int *)(param_1 + 8) != 0) || (*(int *)param_1 != 0x3f)) goto LAB_0126db0c;
          Assembler::Logical((Assembler *)this,&local_118,param_2,&local_b8,uVar1);
          local_d0 = local_118;
          local_c8 = local_110;
          local_100 = local_100 & 0xffffffffffffff00;
          local_f8 = local_f8 & 0xffffff00;
          local_e0 = 0;
          local_d8 = 0x13;
          local_c4 = 0xffffffff00000000;
          local_bc = 0;
          param_1 = (Register *)&DAT_019f3ff4;
          puVar5 = &local_100;
        }
        Mov(this,param_1,puVar5,0);
        goto LAB_0126db54;
      }
    }
    else if (*(int *)(param_3 + 0x40) != -1) {
      if (*(long *)this_00 == 0) goto LAB_0126dddc;
      uVar4 = CPURegList::PopLowestIndex(this_00);
      local_f8 = 0;
      local_100 = uVar4 & 0xffffffff | (ulong)*(uint *)((long)param_2 + 4) << 0x20;
      local_b8 = *(ulong *)(param_3 + 0x30);
      local_b0 = *(uint *)(param_3 + 0x38);
      Assembler::EmitExtendShift
                ((Assembler *)this,&local_100,&local_b8,*(undefined4 *)(param_3 + 0x40),
                 *(undefined4 *)(param_3 + 0x44));
      goto LAB_0126dadc;
    }
  }
  else {
    if (*(long *)this_00 == 0) goto LAB_0126dddc;
    uVar3 = CPURegList::PopLowestIndex(this_00);
    local_100 = 0x400000003f;
    if (uVar3 != 0x3f) {
      local_100 = (ulong)uVar3 | 0x4000000000;
    }
    local_f8 = 0;
    uStack_90 = *(undefined8 *)(param_3 + 0x28);
    local_98 = *(undefined8 *)(param_3 + 0x20);
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_b0 = local_b0 & 0xffffff00;
    local_88 = 0xffffffff;
    local_80 = 2;
    Assembler::ldr((Assembler *)this,(CPURegister *)&local_100,(Operand *)&local_b8);
LAB_0126dadc:
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_b0 = local_b0 & 0xffffff00;
    local_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,0x13);
    local_88 = local_100;
    local_80 = local_f8;
    local_7c = 0xffffffff00000000;
    local_74 = 0;
LAB_0126db0c:
    param_3 = (Operand *)&local_b8;
  }
  Assembler::Logical((Assembler *)this,param_1,param_2,param_3,param_5);
LAB_0126db54:
  *(undefined8 *)(this + 0x198) = uVar9;
  *(undefined8 *)(this + 0x1a8) = uVar10;
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

