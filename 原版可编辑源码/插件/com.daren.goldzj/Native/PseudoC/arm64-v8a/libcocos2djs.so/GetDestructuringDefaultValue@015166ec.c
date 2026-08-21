
/* v8::internal::interpreter::BytecodeGenerator::GetDestructuringDefaultValue(v8::internal::Expression**)
    */

undefined8 __thiscall
v8::internal::interpreter::BytecodeGenerator::GetDestructuringDefaultValue
          (BytecodeGenerator *this,Expression **param_1)

{
  undefined8 uVar1;
  Expression *pEVar2;
  
  pEVar2 = *param_1;
  if ((*(uint *)(pEVar2 + 4) & 0x3f) == 0x18) {
    uVar1 = *(undefined8 *)(pEVar2 + 0x10);
    *param_1 = *(Expression **)(pEVar2 + 8);
    return uVar1;
  }
  return 0;
}

