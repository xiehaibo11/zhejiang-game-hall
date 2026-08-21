
/* v8::internal::interpreter::BytecodeGenerator::VisitProperty(v8::internal::Property*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitProperty
          (BytecodeGenerator *this,Property *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Property::GetAssignType(param_1);
  if (iVar1 - 3U < 2) {
    uVar2 = 0x7fffffff;
  }
  else {
    uVar2 = VisitForRegisterValue(this,*(Expression **)(param_1 + 8));
  }
  VisitPropertyLoad(this,uVar2,param_1);
  return;
}

