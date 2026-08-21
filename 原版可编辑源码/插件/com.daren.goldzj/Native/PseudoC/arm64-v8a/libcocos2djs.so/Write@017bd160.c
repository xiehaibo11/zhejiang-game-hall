
/* v8::internal::interpreter::BytecodeArrayWriter::Write(v8::internal::interpreter::BytecodeNode*)
    */

void __thiscall
v8::internal::interpreter::BytecodeArrayWriter::Write
          (BytecodeArrayWriter *this,BytecodeNode *param_1)

{
  BytecodeNode BVar1;
  uint uVar2;
  BytecodeArrayWriter BVar3;
  long lVar4;
  BytecodeArrayWriter BVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (this[0x8a] != (BytecodeArrayWriter)0x0) {
    return;
  }
  uVar8 = (ulong)(byte)*param_1;
  uVar2 = (byte)*param_1 - 0x8b;
  if ((uVar2 < 0x2b) && ((1L << ((ulong)uVar2 & 0x3f) & 0x421c0000003U) != 0)) {
    this[0x8a] = (BytecodeArrayWriter)0x1;
    uVar8 = (ulong)(byte)*param_1;
  }
  BVar1 = param_1[0x20];
  BVar3 = (BytecodeArrayWriter)(BVar1 != (BytecodeNode)0x0);
  if (this[0x89] != (BytecodeArrayWriter)0x0) {
    if (((((byte)this[0x78] < 0x26) &&
         ((1L << ((ulong)(byte)this[0x78] & 0x3f) & 0x200f07f800U) != 0)) &&
        (Bytecodes::kAccumulatorUse[uVar8] == '\x02')) &&
       ((BVar5 = this[0x88], BVar5 == (BytecodeArrayWriter)0x0 || (BVar1 == (BytecodeNode)0x0)))) {
      lVar4 = *(long *)(this + 0x10);
      uVar6 = *(ulong *)(this + 0x80);
      uVar7 = *(long *)(this + 0x18) - lVar4;
      if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
        if (uVar6 < uVar7) {
          *(ulong *)(this + 0x18) = lVar4 + uVar6;
        }
      }
      else {
        std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::__append
                  ((vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *)(this + 0x10)
                   ,uVar6 - uVar7);
        BVar5 = this[0x88];
      }
      BVar3 = (BytecodeArrayWriter)(BVar5 != (BytecodeArrayWriter)0x0 || BVar1 != (BytecodeNode)0x0)
      ;
    }
    this[0x88] = BVar3;
    this[0x78] = SUB81(uVar8,0);
    *(long *)(this + 0x80) = *(long *)(this + 0x18) - *(long *)(this + 0x10);
    BVar1 = param_1[0x20];
  }
  if (BVar1 != (BytecodeNode)0x0) {
    SourcePositionTableBuilder::AddPosition
              ((SourcePositionTableBuilder *)(this + 0x38),
               (long)(*(int *)(this + 0x18) - *(int *)(this + 0x10)),
               (long)*(int *)(param_1 + 0x24) * 2 + 2U & 0xffff80007fffffff,
               BVar1 == (BytecodeNode)0x2);
  }
  EmitBytecode(this,param_1);
  return;
}

