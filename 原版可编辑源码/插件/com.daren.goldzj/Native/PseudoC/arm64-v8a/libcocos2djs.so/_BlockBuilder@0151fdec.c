
/* v8::internal::interpreter::BlockBuilder::~BlockBuilder() */

void __thiscall v8::internal::interpreter::BlockBuilder::~BlockBuilder(BlockBuilder *this)

{
  BreakableControlFlowBuilder::~BreakableControlFlowBuilder((BreakableControlFlowBuilder *)this);
  operator_delete(this);
  return;
}

