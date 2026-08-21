
/* v8::internal::compiler::CodeAssembler::IsUndefinedConstant(v8::internal::TNode<v8::internal::Object>)
    */

bool __thiscall
v8::internal::compiler::CodeAssembler::IsUndefinedConstant(CodeAssembler *this,long *param_2)

{
  short sVar1;
  long lVar2;
  
  sVar1 = *(short *)(*param_2 + 0x10);
  if (sVar1 == 0x1e) {
    lVar2 = *(long *)(*param_2 + 0x30);
  }
  else {
    lVar2 = 0;
  }
  return sVar1 == 0x1e && lVar2 == *(long *)**(undefined8 **)this + 0xa0;
}

