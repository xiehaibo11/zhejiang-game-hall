
/* v8::internal::compiler::CodeGenerator::AssembleArchLookupSwitch(v8::internal::compiler::Instruction*)
    */

void __thiscall
v8::internal::compiler::CodeGenerator::AssembleArchLookupSwitch
          (CodeGenerator *this,Instruction *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_108 [8];
  undefined1 local_100;
  long local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ulong local_c0;
  ulong uStack_b8;
  long local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined4 local_88;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar5 = *(uint *)(param_1 + 4);
  local_110 = 0;
  local_118 = 0x200000003f;
  if ((int)(*(long *)(param_1 + (ulong)(byte)uVar5 * 8 + 0x28) >> 0x23) != 0x3f) {
    local_118 = *(long *)(param_1 + (ulong)(byte)uVar5 * 8 + 0x28) >> 0x23 & 0xffffffffU |
                0x2000000000;
  }
  if (0x200 < (uVar5 & 0xffff00)) {
    uVar11 = 2;
    do {
      uVar7 = *(ulong *)(param_1 + (uVar11 + (uVar5 & 0xff)) * 8 + 0x28);
      if ((uVar7 & 7) == 3) {
        if (((uint)uVar7 >> 3 & 1) == 0) {
          Constant::Constant((Constant *)&local_c0,(int)(uVar7 >> 0x20));
        }
        else {
          puVar3 = (ulong *)(*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar7 >> 0x20) * 0x10
                            );
          uStack_b8 = puVar3[1];
          local_c0 = *puVar3;
        }
        iVar9 = (int)uStack_b8;
      }
      else {
        plVar6 = (long *)(*(long *)(this + 0x28) + 0x48);
        plVar10 = (long *)*plVar6;
        if (plVar10 == (long *)0x0) {
LAB_01617664:
          plVar8 = plVar6;
        }
        else {
          plVar8 = plVar6;
          do {
            iVar9 = (int)(uVar7 >> 3);
            if (iVar9 <= (int)plVar10[4]) {
              plVar8 = plVar10;
            }
            plVar10 = (long *)plVar10[(int)plVar10[4] < iVar9];
          } while (plVar10 != (long *)0x0);
          if ((plVar8 == plVar6) || (iVar9 < (int)plVar8[4])) goto LAB_01617664;
        }
        iVar9 = (int)plVar8[6];
      }
      local_e8 = (long)iVar9;
      local_108[0] = 0;
      local_100 = 0;
      puVar1 = &DAT_01a5640c;
      if (local_118._4_4_ != 0x40) {
        puVar1 = &DAT_01a56424;
      }
      local_e0 = 0x13;
      local_d0 = 2;
      local_d8 = 0xffffffff;
      if ((iVar9 < 0) && (uVar7 = Assembler::IsImmAddSub(-local_e8), (uVar7 & 1) != 0)) {
        local_c0 = local_c0 & 0xffffffffffffff00;
        uStack_b8 = uStack_b8 & 0xffffffffffffff00;
        local_98 = 0x13;
        local_a0 = -local_e8;
        puVar3 = &local_c0;
        local_88 = 2;
        local_90 = 0xffffffff;
        uVar4 = 0;
      }
      else {
        puVar3 = (ulong *)local_108;
        uVar4 = 0x40000000;
      }
      TurboAssembler::AddSubMacro((TurboAssembler *)(this + 0xd0),puVar1,&local_118,puVar3,1,uVar4);
      uVar7 = *(ulong *)(param_1 + ((uVar11 | 1) + (ulong)(byte)param_1[4]) * 8 + 0x28);
      if ((uVar7 & 7) == 3) {
        if (((uint)uVar7 >> 3 & 1) == 0) {
          Constant::Constant((Constant *)&local_c0,(int)(uVar7 >> 0x20));
          uVar7 = uStack_b8;
        }
        else {
          puVar3 = (ulong *)(*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar7 >> 0x20) * 0x10
                            );
          uStack_b8 = puVar3[1];
          local_c0 = *puVar3;
          uVar7 = uStack_b8;
        }
      }
      else {
        plVar6 = (long *)(*(long *)(this + 0x28) + 0x48);
        plVar10 = (long *)*plVar6;
        if (plVar10 == (long *)0x0) {
LAB_01617798:
          plVar8 = plVar6;
        }
        else {
          plVar8 = plVar6;
          do {
            iVar9 = (int)(uVar7 >> 3);
            if (iVar9 <= (int)plVar10[4]) {
              plVar8 = plVar10;
            }
            plVar10 = (long *)plVar10[(int)plVar10[4] < iVar9];
          } while (plVar10 != (long *)0x0);
          if ((plVar8 == plVar6) || (iVar9 < (int)plVar8[4])) goto LAB_01617798;
        }
        uVar7 = plVar8[6];
      }
      TurboAssembler::B((TurboAssembler *)(this + 0xd0),
                        *(long *)(this + 0xa8) + ((long)(uVar7 << 0x20) >> 0x1d),0);
      uVar5 = *(uint *)(param_1 + 4);
      uVar11 = uVar11 + 2;
    } while (uVar11 < (ushort)(uVar5 >> 8));
  }
  uVar11 = *(ulong *)(param_1 + (ulong)((uVar5 & 0xff) + 1) * 8 + 0x28);
  if ((uVar11 & 7) == 3) {
    if (((uint)uVar11 >> 3 & 1) == 0) {
      Constant::Constant((Constant *)&local_c0,(int)(uVar11 >> 0x20));
    }
    else {
      puVar3 = (ulong *)(*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar11 >> 0x20) * 0x10);
      uStack_b8 = puVar3[1];
      local_c0 = *puVar3;
    }
    uVar5 = (uint)uStack_b8;
    goto LAB_01617840;
  }
  plVar6 = (long *)(*(long *)(this + 0x28) + 0x48);
  plVar10 = (long *)*plVar6;
  if (plVar10 == (long *)0x0) {
LAB_01617820:
    plVar8 = plVar6;
  }
  else {
    plVar8 = plVar6;
    do {
      iVar9 = (int)(uVar11 >> 3);
      if (iVar9 <= (int)plVar10[4]) {
        plVar8 = plVar10;
      }
      plVar10 = (long *)plVar10[(int)plVar10[4] < iVar9];
    } while (plVar10 != (long *)0x0);
    if ((plVar8 == plVar6) || (iVar9 < (int)plVar8[4])) goto LAB_01617820;
  }
  uVar5 = *(uint *)(plVar8 + 6);
LAB_01617840:
  uVar11 = IsNextInAssemblyOrder(this,uVar5);
  if ((uVar11 & 1) == 0) {
    Assembler::b((Assembler *)(this + 0xd0),
                 (Label *)(*(long *)(this + 0xa8) + ((long)((ulong)uVar5 << 0x20) >> 0x1d)));
    Assembler::CheckVeneerPool((Assembler *)(this + 0xd0),false,false,0x400);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

