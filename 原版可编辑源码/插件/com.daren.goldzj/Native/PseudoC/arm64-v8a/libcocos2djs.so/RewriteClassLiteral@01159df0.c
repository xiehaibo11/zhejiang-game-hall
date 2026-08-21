
/* v8::internal::Parser::RewriteClassLiteral(v8::internal::ClassScope*, v8::internal::AstRawString
   const*, v8::internal::ParserBase<v8::internal::Parser>::ClassInfo*, int, int) */

int * __thiscall
v8::internal::Parser::RewriteClassLiteral
          (Parser *this,ClassScope *param_1,AstRawString *param_2,ClassInfo *param_3,int param_4,
          int param_5)

{
  ClassInfo CVar1;
  ClassInfo CVar2;
  ClassInfo CVar3;
  ClassInfo CVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Zone *this_00;
  int *piVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  FunctionLiteral *local_68;
  
  if (*(long *)(param_3 + 0x28) == 0) {
    uVar5 = DefaultConstructor((AstRawString *)this,SUB81(param_2,0),(uint)(*(long *)param_3 != 0),
                               param_4);
    *(undefined8 *)(param_3 + 0x28) = uVar5;
  }
  if (param_2 != (AstRawString *)0x0) {
    *(int *)(*(long *)(param_1 + 0x90) + 0x24) = param_5;
  }
  if (param_3[0x33] == (ClassInfo)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = CreateInitializerFunction
                      (this,"<static_fields_initializer>",*(DeclarationScope **)(param_3 + 0x38),
                       *(ZoneList **)(param_3 + 0x18));
  }
  if (param_3[0x34] == (ClassInfo)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = CreateInitializerFunction
                      (this,"<instance_members_initializer>",*(DeclarationScope **)(param_3 + 0x40),
                       *(ZoneList **)(param_3 + 0x20));
    *(uint *)(*(long *)(param_3 + 0x28) + 4) = *(uint *)(*(long *)(param_3 + 0x28) + 4) | 0x100000;
    *(int *)(*(long *)(param_3 + 0x28) + 8) =
         *(int *)(*(long *)(param_3 + 0x28) + 8) + *(int *)(*(long *)(param_3 + 0x20) + 0xc);
  }
  this_00 = *(Zone **)(this + 0x68);
  uVar10 = *(undefined8 *)param_3;
  uVar9 = *(undefined8 *)(param_3 + 0x28);
  uVar12 = *(undefined8 *)(param_3 + 0x10);
  uVar11 = *(undefined8 *)(param_3 + 8);
  piVar7 = *(int **)(this_00 + 0x10);
  CVar1 = param_3[0x31];
  CVar2 = param_3[0x32];
  CVar3 = param_3[0x36];
  CVar4 = param_3[0x37];
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)piVar7) < 0x48) {
    piVar7 = (int *)Zone::NewExpand(this_00,0x48);
  }
  else {
    *(int **)(this_00 + 0x10) = piVar7 + 0x12;
  }
  piVar7[2] = param_5;
  *(undefined8 *)(piVar7 + 0xe) = uVar5;
  *(undefined8 *)(piVar7 + 0x10) = uVar6;
  *(ClassScope **)(piVar7 + 4) = param_1;
  *(undefined8 *)(piVar7 + 6) = uVar10;
  uVar8 = 0x1f;
  if (CVar1 != (ClassInfo)0x0) {
    uVar8 = 0x9f;
  }
  *(undefined8 *)(piVar7 + 8) = uVar9;
  *(undefined8 *)(piVar7 + 0xc) = uVar12;
  *(undefined8 *)(piVar7 + 10) = uVar11;
  *piVar7 = param_4;
  piVar7[1] = uVar8 | (uint)(CVar2 != (ClassInfo)0x0) << 8 | (uint)(CVar3 != (ClassInfo)0x0) << 9 |
              (uint)(CVar4 != (ClassInfo)0x0) << 10;
  local_68 = *(FunctionLiteral **)(param_3 + 0x28);
  if (*(long *)(this + 0x58) != 0) {
    if (*(undefined8 **)(this + 0x48) == *(undefined8 **)(this + 0x50)) {
      std::__ndk1::
      vector<v8::internal::FunctionLiteral*,std::__ndk1::allocator<v8::internal::FunctionLiteral*>>
      ::__push_back_slow_path<v8::internal::FunctionLiteral*const&>
                ((vector<v8::internal::FunctionLiteral*,std::__ndk1::allocator<v8::internal::FunctionLiteral*>>
                  *)(this + 0x40),&local_68);
    }
    else {
      **(undefined8 **)(this + 0x48) = local_68;
      *(long *)(this + 0x48) = *(long *)(this + 0x48) + 8;
    }
  }
  return piVar7;
}

