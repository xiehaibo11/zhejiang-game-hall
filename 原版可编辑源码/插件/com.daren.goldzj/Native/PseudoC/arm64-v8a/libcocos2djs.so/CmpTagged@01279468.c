
/* v8::internal::TurboAssembler::CmpTagged(v8::internal::Register const&, v8::internal::Operand
   const&) */

void __thiscall
v8::internal::TurboAssembler::CmpTagged(TurboAssembler *this,Register *param_1,Operand *param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  ulong local_e0;
  undefined4 local_d8;
  ulong local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined1 local_80 [8];
  undefined1 local_78;
  long local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_a0 = 0x200000003f;
  local_d8 = 0;
  local_e0 = local_a0;
  if (*(uint *)param_1 != 0x3f) {
    local_e0 = (ulong)*(uint *)param_1 | 0x2000000000;
  }
  uVar2 = *(uint *)(param_2 + 0x30);
  if (uVar2 == 0xffffffff) {
LAB_012795bc:
    uStack_a8 = *(undefined8 *)(param_2 + 0x28);
    local_b0 = *(long *)(param_2 + 0x20);
    lStack_98 = *(long *)(param_2 + 0x38);
    local_a0 = *(ulong *)(param_2 + 0x30);
    local_90 = *(undefined8 *)(param_2 + 0x40);
    uStack_c8 = *(ulong *)(param_2 + 8);
    local_d0 = *(ulong *)param_2;
    uStack_b8 = *(undefined8 *)(param_2 + 0x18);
    uStack_c0 = *(undefined8 *)(param_2 + 0x10);
  }
  else {
    if (*(uint *)(param_2 + 0x3c) == 0xffffffff) {
      iVar8 = *(int *)(param_2 + 0x40);
      if (iVar8 == -1) goto LAB_012795bc;
      uVar7 = *(undefined4 *)(param_2 + 0x44);
      if (uVar2 != 0x3f) {
        local_a0 = (ulong)uVar2 | 0x2000000000;
      }
      lStack_98 = -0x100000000;
    }
    else {
      uVar7 = *(undefined4 *)(param_2 + 0x44);
      lStack_98 = (ulong)*(uint *)(param_2 + 0x3c) << 0x20;
      iVar8 = -1;
      if (uVar2 != 0x3f) {
        local_a0 = (ulong)uVar2 | 0x2000000000;
      }
    }
    uStack_a8 = CONCAT71(uStack_a8._1_7_,0x13);
    local_b0 = 0;
    uStack_c8 = uStack_c8 & 0xffffffffffffff00;
    local_d0 = local_d0 & 0xffffffffffffff00;
    local_90 = CONCAT44(uVar7,iVar8);
  }
  if (((((int)local_a0 == -1) &&
       (local_a0._4_4_ = (int)(local_a0 >> 0x20), bVar1 = local_a0._4_4_ == 0, bVar1)) &&
      ((int)lStack_98 == 2)) && (((char)local_d0 == '\0' && (local_b0 < 0)))) {
    lVar9 = -local_b0;
    uVar4 = Assembler::IsImmAddSub(lVar9);
    if ((uVar4 & 1) != 0) {
      local_80[0] = 0;
      local_78 = 0;
      local_58 = 0x13;
      local_50 = 0xffffffff;
      local_48 = 2;
      puVar5 = (ulong *)local_80;
      uVar6 = 0;
      local_60 = lVar9;
      goto LAB_01279600;
    }
  }
  puVar5 = &local_d0;
  uVar6 = 0x40000000;
LAB_01279600:
  AddSubMacro(this,&DAT_019f4000,&local_e0,puVar5,1,uVar6);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

