
/* v8::internal::AstNodeFactory::NewFunctionLiteral(v8::internal::AstRawString const*,
   v8::internal::DeclarationScope*, v8::internal::ScopedList<v8::internal::Statement*, void*>
   const&, int, int, int, v8::internal::FunctionLiteral::ParameterFlag,
   v8::internal::FunctionSyntaxKind, v8::internal::FunctionLiteral::EagerCompileHint, int, bool,
   int, v8::internal::ProducedPreparseData*) */

FunctionLiteral * __thiscall
v8::internal::AstNodeFactory::NewFunctionLiteral
          (AstNodeFactory *this,AstRawString *param_1,undefined8 param_2,
          ScopedList<v8::internal::Statement*,void*> *param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,char param_8,byte param_9,char param_10,undefined4 param_11,
          byte param_12,undefined4 param_13,undefined8 param_14)

{
  AstValueFactory *this_00;
  Zone *pZVar1;
  undefined8 uVar2;
  FunctionLiteral *this_01;
  uint uVar3;
  uint uVar4;
  
  pZVar1 = *(Zone **)this;
  this_01 = *(FunctionLiteral **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)this_01) < 0x58) {
    this_01 = (FunctionLiteral *)Zone::NewExpand(pZVar1,0x58);
  }
  else {
    *(FunctionLiteral **)(pZVar1 + 0x10) = this_01 + 0x58;
  }
  pZVar1 = *(Zone **)this;
  this_00 = *(AstValueFactory **)(this + 8);
  uVar3 = 0x26;
  *(undefined4 *)(this_01 + 8) = param_4;
  *(undefined4 *)(this_01 + 0xc) = param_5;
  *(undefined4 *)(this_01 + 0x10) = param_6;
  *(undefined4 *)this_01 = param_11;
  *(undefined4 *)(this_01 + 4) = 0x26;
  *(undefined8 *)(this_01 + 0x14) = 0xffffffff;
  *(undefined4 *)(this_01 + 0x1c) = param_13;
  if (param_1 == (AstRawString *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = AstValueFactory::NewConsString(this_00,param_1);
    uVar3 = *(uint *)(this_01 + 4);
  }
  *(undefined8 *)(this_01 + 0x30) = 0;
  *(undefined8 *)(this_01 + 0x20) = uVar2;
  *(undefined8 *)(this_01 + 0x28) = param_2;
  *(undefined8 *)(this_01 + 0x38) = 0;
  uVar2 = *(undefined8 *)(this_00 + 0x40);
  uVar4 = 0x200000;
  if ((param_12 & 1) == 0) {
    uVar4 = 0;
  }
  *(undefined8 *)(this_01 + 0x48) = 0;
  *(undefined8 *)(this_01 + 0x50) = param_14;
  *(undefined8 *)(this_01 + 0x40) = uVar2;
  *(uint *)(this_01 + 4) = (uint)param_9 << 7 | (uint)(param_8 == '\x01') << 0xb | uVar4 | uVar3;
  if (param_10 == '\0') {
    FunctionLiteral::SetShouldEagerCompile(this_01);
  }
  ScopedList<v8::internal::Statement*,void*>::CopyTo(param_3,(ZoneList *)(this_01 + 0x30),pZVar1);
  return this_01;
}

