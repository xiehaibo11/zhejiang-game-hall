
/* v8::internal::interpreter::BytecodeArrayBuilder::StoreContextSlot(v8::internal::interpreter::Register,
   int, int) */

BytecodeArrayBuilder * __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::StoreContextSlot
          (BytecodeArrayBuilder *this,int param_2,uint param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  BytecodeRegisterOptimizer *pBVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  ulong uVar8;
  BytecodeNode local_78 [4];
  uint local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  byte local_5c;
  ulong local_58;
  int local_38 [2];
  
  local_38[0] = param_2;
  uVar3 = Register::is_current_context((Register *)local_38);
  iVar2 = local_38[0];
  if ((param_4 == 0) && ((uVar3 & 1) != 0)) {
    pBVar4 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar4 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar4,*(RegisterInfo **)(pBVar4 + 0x10));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar6 = 0;
      uVar3 = 0;
      uVar5 = 0xffffffff00000000;
    }
    else {
      uVar3 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar5 = uVar3 & 0xffffffff00000000;
      uVar6 = uVar3 & 0xffffff00;
      uVar3 = uVar3 & 0xff;
    }
    local_5c = 2;
    if (0xffff < param_3) {
      local_5c = 4;
    }
    if (param_3 < 0x100) {
      local_5c = 1;
    }
    local_58 = uVar5 | uVar6 | uVar3;
    if (local_5c < 2) {
      local_5c = 1;
    }
    local_78[0] = (BytecodeNode)0x1d;
    local_60 = 1;
    local_70 = 0;
    local_74 = param_3;
    if (this[0x1b0] == (BytecodeArrayBuilder)0x0) goto LAB_017b4c5c;
    if ((int)uVar3 == 0) {
LAB_017b4c48:
      local_58 = *(ulong *)(this + 0x1b0);
    }
    else if (((int)uVar3 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_58 = uVar5 | uVar6 | 2;
    }
  }
  else {
    pBVar4 = *(BytecodeRegisterOptimizer **)(this + 0x1a0);
    if (pBVar4 != (BytecodeRegisterOptimizer *)0x0) {
      BytecodeRegisterOptimizer::Materialize(pBVar4,*(RegisterInfo **)(pBVar4 + 0x10));
    }
    if (this[0x1a8] == (BytecodeArrayBuilder)0x0) {
      uVar5 = 0;
      uVar6 = 0;
      uVar3 = 0xffffffff00000000;
    }
    else {
      uVar6 = *(ulong *)(this + 0x1a8);
      this[0x1a8] = (BytecodeArrayBuilder)0x0;
      *(undefined4 *)(this + 0x1ac) = 0xffffffff;
      uVar3 = uVar6 & 0xffffffff00000000;
      uVar5 = uVar6 & 0xffffff00;
      uVar6 = uVar6 & 0xff;
    }
    uVar8 = uVar3 | uVar5 | uVar6;
    if (*(BytecodeRegisterOptimizer **)(this + 0x1a0) != (BytecodeRegisterOptimizer *)0x0) {
      iVar2 = BytecodeRegisterOptimizer::GetInputRegister
                        (*(BytecodeRegisterOptimizer **)(this + 0x1a0),iVar2);
    }
    local_74 = -iVar2 - 5;
    bVar7 = 2;
    bVar1 = bVar7;
    if (0xffff < 0x7ffbU - iVar2) {
      bVar1 = 4;
    }
    if (0x7bU - iVar2 < 0x100) {
      bVar1 = 1;
    }
    if (bVar1 < 2) {
      bVar1 = 1;
    }
    if (0xffff < param_3) {
      bVar7 = 4;
    }
    if (param_3 < 0x100) {
      bVar7 = 1;
    }
    if (bVar7 <= bVar1) {
      bVar7 = bVar1;
    }
    local_5c = 2;
    if (0xffff < param_4) {
      local_5c = 4;
    }
    if (param_4 < 0x100) {
      local_5c = 1;
    }
    local_78[0] = (BytecodeNode)0x1c;
    if (local_5c <= bVar7) {
      local_5c = bVar7;
    }
    local_70 = CONCAT44(param_4,param_3);
    local_60 = 3;
    local_58 = uVar8;
    if (this[0x1b0] == (BytecodeArrayBuilder)0x0) goto LAB_017b4c5c;
    if ((int)uVar6 == 0) goto LAB_017b4c48;
    if (((int)uVar6 == 1) && (this[0x1b0] == (BytecodeArrayBuilder)0x2)) {
      local_58 = uVar3 | uVar5 | 2;
    }
  }
  this[0x1b0] = (BytecodeArrayBuilder)0x0;
  *(undefined4 *)(this + 0x1b4) = 0xffffffff;
LAB_017b4c5c:
  uStack_68 = 0;
  BytecodeArrayWriter::Write((BytecodeArrayWriter *)(this + 0x110),local_78);
  return this;
}

