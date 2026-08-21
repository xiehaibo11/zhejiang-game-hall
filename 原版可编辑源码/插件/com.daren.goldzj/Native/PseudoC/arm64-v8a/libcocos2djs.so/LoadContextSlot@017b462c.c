
/* v8::internal::interpreter::BytecodeArrayBuilder::LoadContextSlot(v8::internal::interpreter::Register,
   int, int, v8::internal::interpreter::BytecodeArrayBuilder::ContextSlotMutability) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::LoadContextSlot
          (BytecodeArrayBuilder *this,int param_2,uint param_3,uint param_4,int param_5)

{
  byte bVar1;
  BytecodeArrayBuilder BVar2;
  int iVar3;
  ulong uVar4;
  BytecodeRegisterOptimizer *pBVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  BytecodeNode local_78 [4];
  uint local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  byte local_5c;
  ulong local_58;
  int local_38 [2];
  
  local_38[0] = param_2;
  uVar4 = Register::is_current_context((Register *)local_38);
  iVar3 = local_38[0];
  if ((param_4 == 0) && ((uVar4 & 1) != 0)) {
    if (param_5 == 0) {
      pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
      }
      if ((this[0x1a8] == (BytecodeArrayBuilder)0x0) ||
         ((this[0x1a8] != (BytecodeArrayBuilder)0x2 &&
          (FLAG_ignition_filter_expression_positions != '\0')))) {
        uVar7 = 0;
        uVar4 = 0;
        uVar6 = 0xffffffff00000000;
      }
      else {
        uVar4 = *(ulong *)(this + 0x1a8);
        this[0x1a8] = (BytecodeArrayBuilder)0x0;
        *(undefined4 *)(this + 0x1ac) = 0xffffffff;
        uVar6 = uVar4 & 0xffffffff00000000;
        uVar7 = uVar4 & 0xffffff00;
        uVar4 = uVar4 & 0xff;
      }
      uVar6 = uVar6 | uVar7;
      local_5c = 2;
      if (0xffff < param_3) {
        local_5c = 4;
      }
      if (param_3 < 0x100) {
        local_5c = 1;
      }
      local_78[0] = (BytecodeNode)0x1b;
    }
    else {
      pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
      }
      if ((this[0x1a8] == (BytecodeArrayBuilder)0x0) ||
         ((this[0x1a8] != (BytecodeArrayBuilder)0x2 &&
          (FLAG_ignition_filter_expression_positions != '\0')))) {
        uVar7 = 0;
        uVar4 = 0;
        uVar6 = 0xffffffff00000000;
      }
      else {
        uVar4 = *(ulong *)(this + 0x1a8);
        this[0x1a8] = (BytecodeArrayBuilder)0x0;
        *(undefined4 *)(this + 0x1ac) = 0xffffffff;
        uVar6 = uVar4 & 0xffffffff00000000;
        uVar7 = uVar4 & 0xffffff00;
        uVar4 = uVar4 & 0xff;
      }
      uVar6 = uVar6 | uVar7;
      local_5c = 2;
      if (0xffff < param_3) {
        local_5c = 4;
      }
      if (param_3 < 0x100) {
        local_5c = 1;
      }
      local_78[0] = (BytecodeNode)0x1a;
    }
    local_58 = uVar6 | uVar4;
    if (local_5c < 2) {
      local_5c = 1;
    }
    local_60 = 1;
    local_70 = 0;
    local_74 = param_3;
    if (this[0x1b0] == (BytecodeArrayBuilder)0x0) goto LAB_017b4a18;
    if ((int)uVar4 == 0) goto LAB_017b4a04;
    if (((int)uVar4 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_58 = uVar6 | 2;
    }
  }
  else {
    if (param_5 == 0) {
      pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
      }
      if ((this[0x1a8] == (BytecodeArrayBuilder)0x0) ||
         ((this[0x1a8] != (BytecodeArrayBuilder)0x2 &&
          (FLAG_ignition_filter_expression_positions != '\0')))) {
        uVar7 = 0;
        uVar6 = 0;
        uVar4 = 0xffffffff00000000;
      }
      else {
        uVar6 = *(ulong *)(this + 0x1a8);
        this[0x1a8] = (BytecodeArrayBuilder)0x0;
        *(undefined4 *)(this + 0x1ac) = 0xffffffff;
        uVar4 = uVar6 & 0xffffffff00000000;
        uVar7 = uVar6 & 0xffffff00;
        uVar6 = uVar6 & 0xff;
      }
      uVar4 = uVar4 | uVar7;
      if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
        iVar3 = BytecodeRegisterOptimizer::GetInputRegister
                          (*(BytecodeRegisterOptimizer **)(this + 0x1a0),iVar3);
      }
      local_74 = -iVar3 - 5;
      bVar8 = 2;
      bVar1 = bVar8;
      if (0xffff < 0x7ffbU - iVar3) {
        bVar1 = 4;
      }
      if (0x7bU - iVar3 < 0x100) {
        bVar1 = 1;
      }
      if (bVar1 < 2) {
        bVar1 = 1;
      }
      if (0xffff < param_3) {
        bVar8 = 4;
      }
      if (param_3 < 0x100) {
        bVar8 = 1;
      }
      if (bVar8 <= bVar1) {
        bVar8 = bVar1;
      }
      local_5c = 2;
      if (0xffff < param_4) {
        local_5c = 4;
      }
      if (param_4 < 0x100) {
        local_5c = 1;
      }
      local_78[0] = (BytecodeNode)0x19;
      if (local_5c <= bVar8) {
        local_5c = bVar8;
      }
      local_70 = CONCAT44(param_4,param_3);
      local_60 = 3;
      BVar2 = this[0x1b0];
      local_58 = uVar4 | uVar6;
      if (BVar2 == (BytecodeArrayBuilder)0x0) goto LAB_017b4a18;
      iVar3 = (int)uVar6;
    }
    else {
      pBVar5 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
      if (pBVar5 != (BytecodeRegisterOptimizer *)0x0) {
        BytecodeRegisterOptimizer::PrepareOutputRegister(pBVar5,*(undefined4 *)(pBVar5 + 8));
      }
      if ((this[0x1a8] == (BytecodeArrayBuilder)0x0) ||
         ((this[0x1a8] != (BytecodeArrayBuilder)0x2 &&
          (FLAG_ignition_filter_expression_positions != '\0')))) {
        uVar7 = 0;
        uVar6 = 0;
        uVar4 = 0xffffffff00000000;
      }
      else {
        uVar6 = *(ulong *)(this + 0x1a8);
        this[0x1a8] = (BytecodeArrayBuilder)0x0;
        *(undefined4 *)(this + 0x1ac) = 0xffffffff;
        uVar4 = uVar6 & 0xffffffff00000000;
        uVar7 = uVar6 & 0xffffff00;
        uVar6 = uVar6 & 0xff;
      }
      uVar4 = uVar4 | uVar7;
      if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
        iVar3 = BytecodeRegisterOptimizer::GetInputRegister
                          (*(BytecodeRegisterOptimizer **)(this + 0x1a0),iVar3);
      }
      local_74 = -iVar3 - 5;
      bVar8 = 2;
      bVar1 = bVar8;
      if (0xffff < 0x7ffbU - iVar3) {
        bVar1 = 4;
      }
      if (0x7bU - iVar3 < 0x100) {
        bVar1 = 1;
      }
      if (bVar1 < 2) {
        bVar1 = 1;
      }
      if (0xffff < param_3) {
        bVar8 = 4;
      }
      if (param_3 < 0x100) {
        bVar8 = 1;
      }
      if (bVar8 <= bVar1) {
        bVar8 = bVar1;
      }
      local_5c = 2;
      if (0xffff < param_4) {
        local_5c = 4;
      }
      if (param_4 < 0x100) {
        local_5c = 1;
      }
      local_78[0] = (BytecodeNode)0x18;
      if (local_5c <= bVar8) {
        local_5c = bVar8;
      }
      local_70 = CONCAT44(param_4,param_3);
      local_60 = 3;
      BVar2 = this[0x1b0];
      local_58 = uVar4 | uVar6;
      if (BVar2 == (BytecodeArrayBuilder)0x0) goto LAB_017b4a18;
      iVar3 = (int)uVar6;
    }
    local_70 = CONCAT44(param_4,param_3);
    local_60 = 3;
    if (iVar3 == 0) {
LAB_017b4a04:
      local_58 = *(ulong *)(this + 0x1b0);
    }
    else {
      local_70 = CONCAT44(param_4,param_3);
      local_60 = 3;
      if (((int)uVar6 == 1) && (BVar2 == (BytecodeArrayBuilder)0x2)) {
        local_58 = uVar4 | 2;
      }
    }
  }
  this[0x1b0] = (BytecodeArrayBuilder)0x0;
  *(undefined4 *)(this + 0x1b4) = 0xffffffff;
LAB_017b4a18:
  uStack_68 = 0;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_78);
  return this;
}

