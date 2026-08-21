
/* v8::internal::interpreter::BytecodeArrayBuilder::CallUndefinedReceiver(v8::internal::interpreter::Register,
   v8::internal::interpreter::RegisterList, int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::CallUndefinedReceiver
          (BytecodeArrayBuilder *this,int param_2,ulong param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  BytecodeRegisterOptimizer *pBVar4;
  BytecodeArrayBuilder BVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  BytecodeNode local_88 [4];
  int local_84;
  uint uStack_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  byte local_6c;
  ulong local_68;
  
  uVar10 = (uint)(param_3 >> 0x20);
  iVar3 = (int)param_3;
  if (uVar10 == 2) {
    pBVar4 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar4 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar4,*(undefined4 *)(pBVar4 + 8));
    }
    iVar2 = iVar3 + 1;
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar7 = 0;
      uVar9 = 0;
      uVar6 = 0xffffffff00000000;
    }
    else {
      uVar9 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar6 = uVar9 & 0xffffffff00000000;
      uVar7 = uVar9 & 0xffffff00;
      uVar9 = uVar9 & 0xff;
    }
    uVar6 = uVar6 | uVar7;
    if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) == (BytecodeRegisterOptimizer *)0x0) {
      param_2 = -5 - param_2;
      uStack_80 = -iVar3 - 5;
    }
    else {
      param_2 = BytecodeRegisterOptimizer::GetInputRegister
                          (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_2);
      param_2 = -5 - param_2;
      if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) == (BytecodeRegisterOptimizer *)0x0) {
        uStack_80 = -iVar3 - 5;
      }
      else {
        iVar3 = BytecodeRegisterOptimizer::GetInputRegister
                          (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_3 & 0xffffffff);
        uStack_80 = -iVar3 - 5;
        if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
          iVar2 = BytecodeRegisterOptimizer::GetInputRegister
                            (*(BytecodeRegisterOptimizer **)(this + 0x1a0),iVar2);
        }
      }
    }
    bVar8 = 2;
    bVar1 = bVar8;
    if (param_2 != (short)param_2) {
      bVar1 = 4;
    }
    local_88[0] = (BytecodeNode)0x5e;
    if (param_2 == (char)param_2) {
      bVar1 = 1;
    }
    local_7c = CONCAT44(param_4,-5 - iVar2);
    if (bVar1 < 2) {
      bVar1 = 1;
    }
    if (uStack_80 != (int)(short)uStack_80) {
      bVar8 = 4;
    }
    if (uStack_80 == (int)(char)uStack_80) {
      bVar8 = 1;
    }
    if (bVar8 <= bVar1) {
      bVar8 = bVar1;
    }
    local_6c = 2;
    bVar1 = local_6c;
    if (0xffff < 0x7ffbU - iVar2) {
      bVar1 = 4;
    }
    if (0x7bU - iVar2 < 0x100) {
      bVar1 = 1;
    }
    if (bVar1 <= bVar8) {
      bVar1 = bVar8;
    }
    if (0xffff < param_4) {
      local_6c = 4;
    }
    if (param_4 < 0x100) {
      local_6c = 1;
    }
    if (local_6c <= bVar1) {
      local_6c = bVar1;
    }
    uStack_74 = 0x400000000;
    BVar5 = this[0x1b0];
    local_84 = param_2;
    local_68 = uVar6 | uVar9;
    if (BVar5 == (BytecodeArrayBuilder)0x0) goto LAB_017bb750;
    if ((int)uVar9 == 0) goto LAB_017bb73c;
LAB_017bb670:
    uStack_74 = 0x400000000;
    if (((int)uVar9 == 1) && (BVar5 == (BytecodeArrayBuilder)0x2)) {
      local_68 = uVar6 | 2;
    }
  }
  else {
    if (uVar10 == 1) {
      pBVar4 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar4 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar4,*(undefined4 *)(pBVar4 + 8));
      }
      if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
        uVar7 = 0;
        uVar9 = 0;
        uVar6 = 0xffffffff00000000;
      }
      else {
        uVar9 = *(ulong *)(this + 0x1a8);
        this[0x1a8] = (BytecodeArrayBuilder)0x0;
        *(undefined4 *)(this + 0x1ac) = 0xffffffff;
        uVar6 = uVar9 & 0xffffffff00000000;
        uVar7 = uVar9 & 0xffffff00;
        uVar9 = uVar9 & 0xff;
      }
      uVar11 = uVar6 | uVar7 | uVar9;
      if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) == (BytecodeRegisterOptimizer *)0x0) {
        local_84 = -5 - param_2;
      }
      else {
        local_84 = BytecodeRegisterOptimizer::GetInputRegister
                             (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_2);
        local_84 = -5 - local_84;
        if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
          iVar3 = BytecodeRegisterOptimizer::GetInputRegister
                            (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_3 & 0xffffffff);
        }
      }
      bVar8 = 2;
      bVar1 = bVar8;
      if (local_84 != (short)local_84) {
        bVar1 = 4;
      }
      local_88[0] = (BytecodeNode)0x5d;
      if (local_84 == (char)local_84) {
        bVar1 = 1;
      }
      uStack_80 = -iVar3 - 5;
      if (bVar1 < 2) {
        bVar1 = 1;
      }
      if (0xffff < 0x7ffbU - iVar3) {
        bVar8 = 4;
      }
      if (0x7bU - iVar3 < 0x100) {
        bVar8 = 1;
      }
      if (bVar8 <= bVar1) {
        bVar8 = bVar1;
      }
      local_6c = 2;
      if (0xffff < param_4) {
        local_6c = 4;
      }
      if (param_4 < 0x100) {
        local_6c = 1;
      }
      if (local_6c <= bVar8) {
        local_6c = bVar8;
      }
      local_7c = (ulong)param_4;
      uStack_74 = 0x300000000;
      local_68 = uVar11;
      if (this[0x1b0] == (BytecodeArrayBuilder)0x0) goto LAB_017bb750;
      if ((int)uVar9 != 0) {
        if (((int)uVar9 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
          local_68 = uVar6 | uVar7 | 2;
        }
        goto LAB_017bb744;
      }
    }
    else if (uVar10 == 0) {
      pBVar4 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar4 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar4,*(undefined4 *)(pBVar4 + 8));
      }
      if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
        uVar7 = 0;
        uVar9 = 0;
        uVar6 = 0xffffffff00000000;
      }
      else {
        uVar9 = *(ulong *)(this + 0x1a8);
        this[0x1a8] = (BytecodeArrayBuilder)0x0;
        *(undefined4 *)(this + 0x1ac) = 0xffffffff;
        uVar6 = uVar9 & 0xffffffff00000000;
        uVar7 = uVar9 & 0xffffff00;
        uVar9 = uVar9 & 0xff;
      }
      uVar11 = uVar6 | uVar7 | uVar9;
      if (*(long *)(this + 0x1a0) != 0) {
        param_2 = BytecodeRegisterOptimizer::GetInputRegister();
      }
      local_84 = -5 - param_2;
      local_6c = 2;
      bVar1 = local_6c;
      if (0xffff < 0x7ffbU - param_2) {
        bVar1 = 4;
      }
      if (0x7bU - param_2 < 0x100) {
        bVar1 = 1;
      }
      local_88[0] = (BytecodeNode)0x5c;
      if (bVar1 < 2) {
        bVar1 = 1;
      }
      if (0xffff < param_4) {
        local_6c = 4;
      }
      if (param_4 < 0x100) {
        local_6c = 1;
      }
      if (local_6c <= bVar1) {
        local_6c = bVar1;
      }
      uStack_74 = 0x200000000;
      local_7c = 0;
      uStack_80 = param_4;
      local_68 = uVar11;
      if (this[0x1b0] == (BytecodeArrayBuilder)0x0) goto LAB_017bb750;
      if ((int)uVar9 != 0) {
        if (((int)uVar9 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
          local_68 = uVar6 | uVar7 | 2;
        }
        goto LAB_017bb744;
      }
    }
    else {
      pBVar4 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar4 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar4,*(undefined4 *)(pBVar4 + 8));
      }
      if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
        uVar7 = 0;
        uVar9 = 0;
        uVar6 = 0xffffffff00000000;
      }
      else {
        uVar9 = *(ulong *)(this + 0x1a8);
        this[0x1a8] = (BytecodeArrayBuilder)0x0;
        *(undefined4 *)(this + 0x1ac) = 0xffffffff;
        uVar6 = uVar9 & 0xffffffff00000000;
        uVar7 = uVar9 & 0xffffff00;
        uVar9 = uVar9 & 0xff;
      }
      uVar6 = uVar6 | uVar7;
      if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) == (BytecodeRegisterOptimizer *)0x0) {
        local_84 = -5 - param_2;
      }
      else {
        local_84 = BytecodeRegisterOptimizer::GetInputRegister
                             (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_2);
        local_84 = -5 - local_84;
        if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
          param_3 = BytecodeRegisterOptimizer::GetInputRegisterList
                              (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_3);
        }
      }
      iVar3 = 0;
      if (param_3 >> 0x20 != 0) {
        iVar3 = (int)param_3;
      }
      local_88[0] = (BytecodeNode)0x5b;
      bVar8 = 2;
      bVar1 = bVar8;
      if (local_84 != (short)local_84) {
        bVar1 = 4;
      }
      uStack_80 = -iVar3 - 5;
      if (local_84 == (char)local_84) {
        bVar1 = 1;
      }
      if (bVar1 < 2) {
        bVar1 = 1;
      }
      if (0xffff < 0x7ffbU - iVar3) {
        bVar8 = 4;
      }
      if (0x7bU - iVar3 < 0x100) {
        bVar8 = 1;
      }
      if (bVar8 <= bVar1) {
        bVar8 = bVar1;
      }
      local_6c = 2;
      bVar1 = local_6c;
      if (0xffff < uVar10) {
        bVar1 = 4;
      }
      if (uVar10 < 0x100) {
        bVar1 = 1;
      }
      if (bVar1 <= bVar8) {
        bVar1 = bVar8;
      }
      if (0xffff < param_4) {
        local_6c = 4;
      }
      if (param_4 < 0x100) {
        local_6c = 1;
      }
      if (local_6c <= bVar1) {
        local_6c = bVar1;
      }
      local_7c = CONCAT44(param_4,uVar10);
      uStack_74 = 0x400000000;
      BVar5 = this[0x1b0];
      local_68 = uVar6 | uVar9;
      if (BVar5 == (BytecodeArrayBuilder)0x0) goto LAB_017bb750;
      if ((int)uVar9 != 0) goto LAB_017bb670;
    }
LAB_017bb73c:
    local_68 = *(ulong *)(this + 0x1b0);
  }
LAB_017bb744:
  this[0x1b0] = (BytecodeArrayBuilder)0x0;
  *(undefined4 *)(this + 0x1b4) = 0xffffffff;
LAB_017bb750:
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_88);
  return this;
}

