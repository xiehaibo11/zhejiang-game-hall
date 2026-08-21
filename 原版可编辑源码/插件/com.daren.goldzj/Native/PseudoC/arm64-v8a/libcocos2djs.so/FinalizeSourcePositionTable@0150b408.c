
/* v8::internal::interpreter::BytecodeGenerator::FinalizeSourcePositionTable(v8::internal::Isolate*)
    */

undefined8 * __thiscall
v8::internal::interpreter::BytecodeGenerator::FinalizeSourcePositionTable
          (BytecodeGenerator *this,Isolate *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  Logger *pLVar3;
  
  puVar1 = (undefined8 *)
           BytecodeArrayBuilder::ToSourcePositionTable
                     ((BytecodeArrayBuilder *)(this + 0x18),param_1);
  pLVar3 = *(Logger **)(param_1 + 0x9558);
  uVar2 = (**(code **)(*(long *)pLVar3 + 0x88))(pLVar3);
  if ((uVar2 & 1) != 0) {
    Logger::CodeLinePosInfoRecordEvent
              (pLVar3,**(long **)(*(long *)(this + 0x1d0) + 0x28) + 0x21,*puVar1);
  }
  return puVar1;
}

