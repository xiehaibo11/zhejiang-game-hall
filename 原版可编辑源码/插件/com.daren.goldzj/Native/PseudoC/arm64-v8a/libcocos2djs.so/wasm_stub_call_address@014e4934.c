
/* v8::internal::RelocInfo::wasm_stub_call_address() const */

undefined8 * __thiscall v8::internal::RelocInfo::wasm_stub_call_address(RelocInfo *this)

{
  Instruction IVar1;
  undefined8 *puVar2;
  
  IVar1 = (*(Instruction **)this)[3];
  puVar2 = (undefined8 *)Instruction::ImmPCOffsetTarget(*(Instruction **)this);
  if (IVar1 == (Instruction)0x58) {
    puVar2 = (undefined8 *)*puVar2;
  }
  return puVar2;
}

