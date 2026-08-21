
/* v8::internal::ParseInfo::FromParent(v8::internal::ParseInfo const*,
   v8::internal::AccountingAllocator*, v8::internal::FunctionLiteral const*,
   v8::internal::AstRawString const*) */

void __thiscall
v8::internal::ParseInfo::FromParent
          (ParseInfo *this,ParseInfo *param_1,AccountingAllocator *param_2,FunctionLiteral *param_3,
          AstRawString *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ParseInfo PVar4;
  undefined4 uVar5;
  ParseInfo *this_00;
  Zone *this_01;
  AstValueFactory *this_02;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *in_x8;
  
  this_00 = operator_new(0xe0);
  this_01 = operator_new(0x40);
  Zone::Zone(this_01,(AccountingAllocator *)param_1,"../../src/parsing/parse-info.cc:23");
  *(undefined2 *)(this_00 + 0x30) = 0x200;
  *(Zone **)this_00 = this_01;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined4 *)(this_00 + 0xaf) = 0;
  *(undefined4 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0xffffffffffffffff;
  *(undefined4 *)(this_00 + 0x48) = 0xffffffff;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0xffffffffffffffff;
  *in_x8 = this_00;
  *(undefined4 *)(this_00 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)(this_00 + 0x34) = *(undefined4 *)(this + 0x34);
  *(undefined8 *)(this_00 + 0x90) = *(undefined8 *)(this + 0x90);
  *(undefined8 *)(this_00 + 0x78) = *(undefined8 *)(this + 0x78);
  *(undefined8 *)(this_00 + 0x28) = *(undefined8 *)(this + 0x28);
  this_02 = (AstValueFactory *)GetOrCreateAstValueFactory(this_00);
  uVar6 = AstValueFactory::CloneFromOtherFactory(this_02,(AstRawString *)param_3);
  *(undefined8 *)(this_00 + 0x80) = uVar6;
  uVar5 = FunctionLiteral::start_position((FunctionLiteral *)param_2);
  *(undefined4 *)(this_00 + 0x38) = uVar5;
  uVar5 = FunctionLiteral::end_position((FunctionLiteral *)param_2);
  *(undefined4 *)(this_00 + 0x3c) = uVar5;
  *(undefined4 *)(this_00 + 0x44) = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = FunctionLiteral::language_mode((FunctionLiteral *)param_2);
  uVar2 = *(uint *)(this_00 + 8) | 8;
  if ((uVar7 & 1) == 0) {
    uVar2 = *(uint *)(this_00 + 8) & 0xfffffff7;
  }
  *(uint *)(this_00 + 8) = uVar2;
  PVar4 = (ParseInfo)FunctionLiteral::kind((FunctionLiteral *)param_2);
  this_00[0x30] = PVar4;
  uVar3 = *(uint *)(param_2 + 4);
  this_00[0x31] = (ParseInfo)((byte)(uVar3 >> 7) & 7);
  uVar2 = *(uint *)(this_00 + 8) & 0xffffbfff;
  if ((uVar3 & 0x100000) != 0) {
    uVar2 = *(uint *)(this_00 + 8) | 0x4000;
  }
  uVar1 = uVar2 | 1;
  if (*(int *)(param_2 + 0x1c) != 0) {
    uVar1 = uVar2 & 0xfffffffe;
  }
  uVar2 = uVar1 & 0xfbffffff;
  if ((uVar3 & 0x400000) != 0) {
    uVar2 = uVar1 | 0x4000000;
  }
  *(uint *)(this_00 + 8) = uVar2;
  return;
}

