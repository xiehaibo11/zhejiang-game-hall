
/* v8::internal::compiler::BytecodeGraphBuilder::VisitBytecodes() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitBytecodes(BytecodeGraphBuilder *this)

{
  BytecodeArrayIterator *this_00;
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(long *)(*(long *)(this + 0xa0) + 0x88) != *(long *)(*(long *)(this + 0xa0) + 0x90)) {
    lVar5 = *(long *)(this + 0xa8);
    uVar3 = JSGraph::Constant(*(JSGraph **)(this + 0x10),-2.0);
    *(undefined8 *)(lVar5 + 0x50) = uVar3;
  }
  if (this[0xb0] != (BytecodeGraphBuilder)0x0) {
    AdvanceToOsrEntryAndPeelLoops(this);
  }
  this_00 = (BytecodeArrayIterator *)(this + 0x88);
  uVar4 = interpreter::BytecodeArrayIterator::done(this_00);
  if ((uVar4 & 1) == 0) {
    bVar1 = 0;
    do {
      uVar2 = interpreter::BytecodeArrayAccessor::current_bytecode((BytecodeArrayAccessor *)this_00)
      ;
      uVar2 = (uVar2 & 0xff) - 0x29;
      if ((uVar2 < 0x37) && ((1L << ((ulong)uVar2 & 0x3f) & 0x40000000000021U) != 0)) {
        bVar1 = 1;
      }
      VisitSingleBytecode(this);
      interpreter::BytecodeArrayIterator::Advance(this_00);
      uVar4 = interpreter::BytecodeArrayIterator::done(this_00);
    } while ((uVar4 & 1) == 0);
    if ((FLAG_concurrent_inlining == '\0') && (!(bool)(bVar1 ^ 1))) {
      Isolate::CountUsage(*(undefined8 *)(*(long *)(this + 0x10) + 0x168),0x47);
      return;
    }
  }
  return;
}

