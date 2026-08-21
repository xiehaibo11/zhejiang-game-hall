
/* v8::internal::Parser::DeclareClassVariable(v8::internal::ClassScope*, v8::internal::AstRawString
   const*, v8::internal::ParserBase<v8::internal::Parser>::ClassInfo*, int) */

void __thiscall
v8::internal::Parser::DeclareClassVariable
          (Parser *this,ClassScope *param_1,AstRawString *param_2,ClassInfo *param_3,int param_4)

{
  undefined8 uVar1;
  int *piVar2;
  Zone *this_00;
  int *piVar3;
  
  uVar1 = ClassScope::DeclareClassVariable
                    (param_1,*(AstValueFactory **)(this + 0x60),param_2,param_4);
  this_00 = *(Zone **)(this + 0x68);
  piVar2 = *(int **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)piVar2) < 0x18) {
    piVar2 = (int *)Zone::NewExpand(this_00,0x18);
  }
  else {
    *(int **)(this_00 + 0x10) = piVar2 + 6;
  }
  *piVar2 = param_4;
  piVar2[1] = 0;
  piVar3 = piVar2 + 4;
  piVar3[0] = 0;
  piVar3[1] = 0;
  **(undefined8 **)(param_1 + 0x60) = piVar2;
  *(int **)(param_1 + 0x60) = piVar3;
  *(undefined8 *)(piVar2 + 2) = uVar1;
  return;
}

