
/* v8::internal::compiler::CodeGenerator::AssembleArchBranch(v8::internal::compiler::Instruction*,
   v8::internal::compiler::BranchInfo*) */

void __thiscall
v8::internal::compiler::CodeGenerator::AssembleArchBranch
          (CodeGenerator *this,Instruction *param_1,BranchInfo *param_2)

{
  Label *pLVar1;
  Label *pLVar2;
  BranchInfo BVar3;
  ulong *puVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  ulong local_60;
  undefined4 local_58;
  ulong local_50;
  undefined8 uStack_48;
  
  pLVar1 = *(Label **)(param_2 + 8);
  pLVar2 = *(Label **)(param_2 + 0x10);
  uVar5 = *(uint *)param_2;
  switch(*(uint *)param_1 & 0x1ff) {
  case 0xa4:
    if (uVar5 == 1) {
      local_58 = 0;
      local_60 = 0x200000003f;
      if ((int)(*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23) != 0x3f) {
        local_60 = *(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                   0x2000000000;
      }
      uVar7 = *(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x30);
      if ((uVar7 & 7) == 3) {
        if (((uint)uVar7 >> 3 & 1) == 0) {
          Constant::Constant((Constant *)&local_50,(int)(uVar7 >> 0x20));
        }
        else {
          puVar4 = (ulong *)(*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar7 >> 0x20) * 0x10
                            );
          uStack_48 = puVar4[1];
          local_50 = *puVar4;
        }
        uVar5 = (uint)uStack_48;
      }
      else {
        plVar6 = (long *)(*(long *)(this + 0x28) + 0x48);
        plVar10 = (long *)*plVar6;
        if (plVar10 == (long *)0x0) {
LAB_0161904c:
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
          if ((plVar8 == plVar6) || (iVar9 < (int)plVar8[4])) goto LAB_0161904c;
        }
        uVar5 = (uint)plVar8[6];
      }
      uVar5 = uVar5 & 0x1f;
      goto LAB_01619160;
    }
    if (uVar5 != 0) goto LAB_0161917c;
    local_58 = 0;
    local_60 = 0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23) != 0x3f) {
      local_60 = *(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                 0x2000000000;
    }
    uVar7 = *(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x30);
    if ((uVar7 & 7) == 3) {
      if (((uint)uVar7 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_50,(int)(uVar7 >> 0x20));
      }
      else {
        puVar4 = (ulong *)(*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar7 >> 0x20) * 0x10);
        uStack_48 = puVar4[1];
        local_50 = *puVar4;
      }
      uVar5 = (uint)uStack_48;
    }
    else {
      plVar6 = (long *)(*(long *)(this + 0x28) + 0x48);
      plVar10 = (long *)*plVar6;
      if (plVar10 == (long *)0x0) {
LAB_01618fb8:
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
        if ((plVar8 == plVar6) || (iVar9 < (int)plVar8[4])) goto LAB_01618fb8;
      }
      uVar5 = (uint)plVar8[6];
    }
    uVar5 = uVar5 & 0x1f;
LAB_016190d8:
    TurboAssembler::Tbz((TurboAssembler *)(this + 0xd0),(Register *)&local_60,uVar5,pLVar1);
    BVar3 = param_2[0x18];
    goto joined_r0x01618e5c;
  case 0xa5:
    if (uVar5 != 1) {
      if (uVar5 != 0) goto LAB_0161917c;
      local_58 = 0;
      local_60 = *(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                 0x4000000000;
      uVar7 = *(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x30);
      if ((uVar7 & 7) == 3) {
        if (((uint)uVar7 >> 3 & 1) == 0) {
          Constant::Constant((Constant *)&local_50,(int)(uVar7 >> 0x20));
        }
        else {
          puVar4 = (ulong *)(*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar7 >> 0x20) * 0x10
                            );
          uStack_48 = puVar4[1];
          local_50 = *puVar4;
        }
        uVar5 = (uint)uStack_48 & 0x3f;
      }
      else {
        plVar6 = (long *)(*(long *)(this + 0x28) + 0x48);
        plVar10 = (long *)*plVar6;
        if (plVar10 == (long *)0x0) {
LAB_01619000:
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
          if ((plVar8 == plVar6) || (iVar9 < (int)plVar8[4])) goto LAB_01619000;
        }
        uVar5 = (uint)plVar8[6] & 0x3f;
      }
      goto LAB_016190d8;
    }
    local_58 = 0;
    local_60 = *(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000;
    uVar7 = *(ulong *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x30);
    if ((uVar7 & 7) == 3) {
      if (((uint)uVar7 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)&local_50,(int)(uVar7 >> 0x20));
      }
      else {
        puVar4 = (ulong *)(*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar7 >> 0x20) * 0x10);
        uStack_48 = puVar4[1];
        local_50 = *puVar4;
      }
      uVar5 = (uint)uStack_48 & 0x3f;
    }
    else {
      plVar6 = (long *)(*(long *)(this + 0x28) + 0x48);
      plVar10 = (long *)*plVar6;
      if (plVar10 == (long *)0x0) {
LAB_01619094:
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
        if ((plVar8 == plVar6) || (iVar9 < (int)plVar8[4])) goto LAB_01619094;
      }
      uVar5 = (uint)plVar8[6] & 0x3f;
    }
LAB_01619160:
    TurboAssembler::Tbnz((TurboAssembler *)(this + 0xd0),(Register *)&local_60,uVar5,pLVar1);
    BVar3 = param_2[0x18];
    break;
  case 0xa6:
    if (uVar5 != 1) {
      if (uVar5 != 0) goto LAB_0161917c;
      local_50 = 0x200000003f;
      if ((int)(*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23) != 0x3f) {
        local_50 = *(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                   0x2000000000;
      }
      goto LAB_01618db8;
    }
    local_50 = 0x200000003f;
    if ((int)(*(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23) != 0x3f) {
      local_50 = *(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                 0x2000000000;
    }
LAB_01618f14:
    uStack_48 = (ulong)uStack_48._4_4_ << 0x20;
    TurboAssembler::Cbnz((TurboAssembler *)(this + 0xd0),(Register *)&local_50,pLVar1);
    BVar3 = param_2[0x18];
    break;
  case 0xa7:
    if (uVar5 == 1) {
      local_50 = *(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
                 0x4000000000;
      goto LAB_01618f14;
    }
    if (uVar5 != 0) goto LAB_0161917c;
    local_50 = *(long *)(param_1 + (ulong)(byte)param_1[4] * 8 + 0x28) >> 0x23 & 0xffffffffU |
               0x4000000000;
LAB_01618db8:
    uStack_48 = (ulong)uStack_48._4_4_ << 0x20;
    TurboAssembler::Cbz((TurboAssembler *)(this + 0xd0),(Register *)&local_50,pLVar1);
    BVar3 = param_2[0x18];
    break;
  default:
    if ((0x17 < uVar5) || ((0xf3ffffU >> (ulong)(uVar5 & 0x1f) & 1) == 0)) {
LAB_0161917c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    TurboAssembler::B((TurboAssembler *)(this + 0xd0),pLVar1,
                      *(undefined4 *)(&DAT_01a56430 + (long)(int)uVar5 * 4));
    BVar3 = param_2[0x18];
joined_r0x01618e5c:
    if (BVar3 != (BranchInfo)0x0) {
      return;
    }
    goto LAB_016190f0;
  }
  if (BVar3 == (BranchInfo)0x0) {
LAB_016190f0:
    Assembler::b((Assembler *)(this + 0xd0),pLVar2);
    Assembler::CheckVeneerPool((Assembler *)(this + 0xd0),false,false,0x400);
  }
  return;
}

