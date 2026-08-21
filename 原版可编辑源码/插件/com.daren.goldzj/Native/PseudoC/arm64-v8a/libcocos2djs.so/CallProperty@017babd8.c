
/* v8::internal::interpreter::BytecodeArrayBuilder::CallProperty(v8::internal::interpreter::Register,
   v8::internal::interpreter::RegisterList, int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::CallProperty
          (BytecodeArrayBuilder *this,int param_2,ulong param_3,uint param_4)

{
  byte bVar1;
  BytecodeArrayBuilder BVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BytecodeRegisterOptimizer *pBVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  BytecodeNode local_88 [4];
  int local_84;
  int iStack_80;
  uint local_7c;
  uint uStack_78;
  undefined8 local_74;
  byte local_6c;
  ulong local_68;
  
  uVar11 = (uint)(param_3 >> 0x20);
  iVar3 = (int)param_3;
  if (uVar11 == 3) {
    pBVar6 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar6 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar6,*(undefined4 *)(pBVar6 + 8));
    }
    iVar5 = iVar3 + 2;
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar10 = 0;
      uVar8 = 0;
      uVar7 = 0xffffffff00000000;
    }
    else {
      uVar8 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar7 = uVar8 & 0xffffffff00000000;
      uVar10 = uVar8 & 0xffffff00;
      uVar8 = uVar8 & 0xff;
    }
    uVar7 = uVar7 | uVar10;
    iVar4 = (int)(param_3 + 1);
    if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) == (BytecodeRegisterOptimizer *)0x0) {
      param_2 = -5 - param_2;
      iVar3 = -5 - iVar3;
LAB_017baf50:
      local_7c = -iVar4 - 5;
    }
    else {
      param_2 = BytecodeRegisterOptimizer::GetInputRegister
                          (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_2);
      param_2 = -5 - param_2;
      if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) == (BytecodeRegisterOptimizer *)0x0) {
        iVar3 = -5 - iVar3;
        local_7c = -iVar4 - 5;
      }
      else {
        iVar3 = BytecodeRegisterOptimizer::GetInputRegister
                          (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_3 & 0xffffffff);
        iVar3 = -5 - iVar3;
        if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) == (BytecodeRegisterOptimizer *)0x0)
        goto LAB_017baf50;
        iVar4 = BytecodeRegisterOptimizer::GetInputRegister
                          (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_3 + 1 & 0xffffffff);
        local_7c = -iVar4 - 5;
        if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
          iVar5 = BytecodeRegisterOptimizer::GetInputRegister
                            (*(BytecodeRegisterOptimizer **)(this + 0x1a0),iVar5);
        }
      }
    }
    bVar9 = 2;
    bVar1 = bVar9;
    if (param_2 != (short)param_2) {
      bVar1 = 4;
    }
    local_88[0] = (BytecodeNode)0x5a;
    if (param_2 == (char)param_2) {
      bVar1 = 1;
    }
    uStack_78 = -iVar5 - 5;
    if (bVar1 < 2) {
      bVar1 = 1;
    }
    if (iVar3 != (short)iVar3) {
      bVar9 = 4;
    }
    if (iVar3 == (char)iVar3) {
      bVar9 = 1;
    }
    if (bVar9 <= bVar1) {
      bVar9 = bVar1;
    }
    local_6c = 2;
    bVar1 = local_6c;
    if (local_7c != (int)(short)local_7c) {
      bVar1 = 4;
    }
    if (local_7c == (int)(char)local_7c) {
      bVar1 = 1;
    }
    if (bVar1 <= bVar9) {
      bVar1 = bVar9;
    }
    bVar9 = local_6c;
    if (0xffff < 0x7ffbU - iVar5) {
      bVar9 = 4;
    }
    if (0x7bU - iVar5 < 0x100) {
      bVar9 = 1;
    }
    if (bVar9 <= bVar1) {
      bVar9 = bVar1;
    }
    if (0xffff < param_4) {
      local_6c = 4;
    }
    if (param_4 < 0x100) {
      local_6c = 1;
    }
    if (local_6c <= bVar9) {
      local_6c = bVar9;
    }
    local_74 = CONCAT44(5,param_4);
    BVar2 = this[0x1b0];
    local_68 = uVar7 | uVar8;
    local_84 = param_2;
    iStack_80 = iVar3;
joined_r0x017bb0e4:
    if (BVar2 == (BytecodeArrayBuilder)0x0) goto LAB_017bb1cc;
    if ((int)uVar8 == 0) {
LAB_017bb104:
      local_68 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar8 == 1) && (BVar2 == (BytecodeArrayBuilder)0x2)) {
      local_68 = uVar7 | 2;
    }
  }
  else {
    if (uVar11 == 2) {
      pBVar6 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar6 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar6,*(undefined4 *)(pBVar6 + 8));
      }
      iVar5 = iVar3 + 1;
      if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
        uVar10 = 0;
        uVar8 = 0;
        uVar7 = 0xffffffff00000000;
      }
      else {
        uVar8 = *(ulong *)(this + 0x1a8);
        this[0x1a8] = (BytecodeArrayBuilder)0x0;
        *(undefined4 *)(this + 0x1ac) = 0xffffffff;
        uVar7 = uVar8 & 0xffffffff00000000;
        uVar10 = uVar8 & 0xffffff00;
        uVar8 = uVar8 & 0xff;
      }
      uVar7 = uVar7 | uVar10;
      if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) == (BytecodeRegisterOptimizer *)0x0) {
        param_2 = -5 - param_2;
        iStack_80 = -5 - iVar3;
      }
      else {
        param_2 = BytecodeRegisterOptimizer::GetInputRegister
                            (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_2);
        param_2 = -5 - param_2;
        if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) == (BytecodeRegisterOptimizer *)0x0) {
          iStack_80 = -5 - iVar3;
        }
        else {
          iStack_80 = BytecodeRegisterOptimizer::GetInputRegister
                                (*(BytecodeRegisterOptimizer **)(this + 0x1a0),param_3 & 0xffffffff)
          ;
          iStack_80 = -5 - iStack_80;
          if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
            iVar5 = BytecodeRegisterOptimizer::GetInputRegister
                              (*(BytecodeRegisterOptimizer **)(this + 0x1a0),iVar5);
          }
        }
      }
      bVar9 = 2;
      bVar1 = bVar9;
      if (param_2 != (short)param_2) {
        bVar1 = 4;
      }
      local_88[0] = (BytecodeNode)0x59;
      if (param_2 == (char)param_2) {
        bVar1 = 1;
      }
      if (bVar1 < 2) {
        bVar1 = 1;
      }
      if (iStack_80 != (short)iStack_80) {
        bVar9 = 4;
      }
      if (iStack_80 == (char)iStack_80) {
        bVar9 = 1;
      }
      if (bVar9 <= bVar1) {
        bVar9 = bVar1;
      }
      local_6c = 2;
      bVar1 = local_6c;
      if (0xffff < 0x7ffbU - iVar5) {
        bVar1 = 4;
      }
      if (0x7bU - iVar5 < 0x100) {
        bVar1 = 1;
      }
      if (bVar1 <= bVar9) {
        bVar1 = bVar9;
      }
      if (0xffff < param_4) {
        local_6c = 4;
      }
      if (param_4 < 0x100) {
        local_6c = 1;
      }
      local_84 = param_2;
      local_7c = -iVar5 - 5;
      local_68 = uVar7 | uVar8;
      if (local_6c <= bVar1) {
        local_6c = bVar1;
      }
LAB_017bb1bc:
      local_74 = 0x400000000;
      BVar2 = this[0x1b0];
      uStack_78 = param_4;
      goto joined_r0x017bb0e4;
    }
    if (uVar11 != 1) {
      pBVar6 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar6 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar6,*(undefined4 *)(pBVar6 + 8));
      }
      if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
        uVar10 = 0;
        uVar8 = 0;
        uVar7 = 0xffffffff00000000;
      }
      else {
        uVar8 = *(ulong *)(this + 0x1a8);
        this[0x1a8] = (BytecodeArrayBuilder)0x0;
        *(undefined4 *)(this + 0x1ac) = 0xffffffff;
        uVar7 = uVar8 & 0xffffffff00000000;
        uVar10 = uVar8 & 0xffffff00;
        uVar8 = uVar8 & 0xff;
      }
      uVar7 = uVar7 | uVar10;
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
      local_88[0] = (BytecodeNode)0x57;
      bVar9 = 2;
      bVar1 = bVar9;
      if (local_84 != (short)local_84) {
        bVar1 = 4;
      }
      iStack_80 = -5 - iVar3;
      if (local_84 == (char)local_84) {
        bVar1 = 1;
      }
      if (bVar1 < 2) {
        bVar1 = 1;
      }
      if (0xffff < 0x7ffbU - iVar3) {
        bVar9 = 4;
      }
      if (0x7bU - iVar3 < 0x100) {
        bVar9 = 1;
      }
      if (bVar9 <= bVar1) {
        bVar9 = bVar1;
      }
      local_6c = 2;
      bVar1 = local_6c;
      if (0xffff < uVar11) {
        bVar1 = 4;
      }
      if (uVar11 < 0x100) {
        bVar1 = 1;
      }
      if (bVar1 <= bVar9) {
        bVar1 = bVar9;
      }
      if (0xffff < param_4) {
        local_6c = 4;
      }
      if (param_4 < 0x100) {
        local_6c = 1;
      }
      local_7c = uVar11;
      local_68 = uVar7 | uVar8;
      if (local_6c <= bVar1) {
        local_6c = bVar1;
      }
      goto LAB_017bb1bc;
    }
    pBVar6 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar6 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar6,*(undefined4 *)(pBVar6 + 8));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar8 = 0;
      uVar10 = 0;
      uVar7 = 0xffffffff00000000;
    }
    else {
      uVar10 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar7 = uVar10 & 0xffffffff00000000;
      uVar8 = uVar10 & 0xffffff00;
      uVar10 = uVar10 & 0xff;
    }
    uVar12 = uVar7 | uVar8 | uVar10;
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
    bVar9 = 2;
    bVar1 = bVar9;
    if (local_84 != (short)local_84) {
      bVar1 = 4;
    }
    local_88[0] = (BytecodeNode)0x58;
    if (local_84 == (char)local_84) {
      bVar1 = 1;
    }
    iStack_80 = -5 - iVar3;
    if (bVar1 < 2) {
      bVar1 = 1;
    }
    if (0xffff < 0x7ffbU - iVar3) {
      bVar9 = 4;
    }
    if (0x7bU - iVar3 < 0x100) {
      bVar9 = 1;
    }
    if (bVar9 <= bVar1) {
      bVar9 = bVar1;
    }
    local_6c = 2;
    if (0xffff < param_4) {
      local_6c = 4;
    }
    if (param_4 < 0x100) {
      local_6c = 1;
    }
    if (local_6c <= bVar9) {
      local_6c = bVar9;
    }
    uStack_78 = 0;
    local_74 = 0x300000000;
    local_7c = param_4;
    local_68 = uVar12;
    if (this[0x1b0] == (BytecodeArrayBuilder)0x0) goto LAB_017bb1cc;
    if ((int)uVar10 == 0) goto LAB_017bb104;
    if (((int)uVar10 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_68 = uVar7 | uVar8 | 2;
    }
  }
  this[0x1b0] = (BytecodeArrayBuilder)0x0;
  *(undefined4 *)(this + 0x1b4) = 0xffffffff;
LAB_017bb1cc:
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_88);
  return this;
}

