
/* v8::internal::compiler::CodeGenerator::AssembleTailCallAfterGap(v8::internal::compiler::Instruction*,
   int) */

void __thiscall
v8::internal::compiler::CodeGenerator::AssembleTailCallAfterGap
          (CodeGenerator *this,Instruction *param_1,int param_2)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong local_90;
  ulong uStack_88;
  ulong local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar9 = *(long **)(this + 0x18);
  iVar5 = 2;
  if ((char)plVar9[2] != '\0') {
    iVar5 = 2 - *(int *)(*plVar9 + 4);
  }
  uVar1 = ((param_2 + iVar5) - *(int *)((long)plVar9 + 0xc)) - 2;
  if ((int)uVar1 < 1) {
    if (uVar1 != 0) {
      local_70 = -(ulong)(-uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)-uVar1 << 3;
      uVar4 = 0;
      goto LAB_01606070;
    }
  }
  else {
    local_70 = (ulong)uVar1 << 3;
    uVar4 = 0x40000000;
LAB_01606070:
    local_58 = 2;
    local_60 = 0xffffffff;
    local_68 = 0x13;
    uStack_88 = uStack_88 & 0xffffffffffffff00;
    local_90 = local_90 & 0xffffffffffffff00;
    TurboAssembler::AddSubMacro
              ((TurboAssembler *)(this + 0xd0),&DAT_01a56370,&DAT_01a56370,&local_90,0,uVar4);
    *(uint *)((long)plVar9 + 0xc) = *(int *)((long)plVar9 + 0xc) + uVar1;
  }
  uVar6 = *(ulong *)(param_1 +
                    (((ulong)*(uint *)(param_1 + 4) & 0xff) +
                    (ulong)(ushort)(*(uint *)(param_1 + 4) >> 8)) * 8 + 0x18);
  if ((uVar6 & 7) == 3) {
    if (((uint)uVar6 >> 3 & 1) == 0) {
      Constant::Constant((Constant *)&local_90,(int)(uVar6 >> 0x20));
      iVar5 = (int)uStack_88;
      uVar6 = uStack_88;
    }
    else {
      puVar2 = (ulong *)(*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar6 >> 0x20) * 0x10);
      uStack_88 = puVar2[1];
      local_90 = *puVar2;
      iVar5 = (int)uStack_88;
      uVar6 = uStack_88;
    }
    goto joined_r0x01606190;
  }
  plVar9 = (long *)(*(long *)(this + 0x28) + 0x48);
  plVar8 = (long *)*plVar9;
  if (plVar8 == (long *)0x0) {
LAB_01606100:
    plVar7 = plVar9;
  }
  else {
    plVar7 = plVar9;
    do {
      iVar5 = (int)(uVar6 >> 3);
      if (iVar5 <= (int)plVar8[4]) {
        plVar7 = plVar8;
      }
      plVar8 = (long *)plVar8[(int)plVar8[4] < iVar5];
    } while (plVar8 != (long *)0x0);
    if ((plVar7 == plVar9) || (iVar5 < (int)plVar7[4])) goto LAB_01606100;
  }
  iVar5 = (int)plVar7[6];
  uVar6 = plVar7[6];
joined_r0x01606190:
  if ((uVar6 & 1) != 0) {
    local_70 = (ulong)(iVar5 << 3);
    local_90 = local_90 & 0xffffffffffffff00;
    uStack_88 = uStack_88 & 0xffffffffffffff00;
    local_68 = 0x13;
    local_60 = 0xffffffff;
    local_58 = 2;
    TurboAssembler::Poke
              ((TurboAssembler *)(this + 0xd0),(CPURegister *)&DAT_01a563a0,(Operand *)&local_90);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

