
/* v8::internal::ExpressionScope<v8::internal::ParserTypes<v8::internal::PreParser>
   >::NewVariable(v8::internal::AstRawString const*, int) */

VariableProxy * __thiscall
v8::internal::ExpressionScope<v8::internal::ParserTypes<v8::internal::PreParser>>::NewVariable
          (ExpressionScope<v8::internal::ParserTypes<v8::internal::PreParser>> *this,
          AstRawString *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  ExpressionScope<v8::internal::ParserTypes<v8::internal::PreParser>> EVar4;
  long lVar5;
  Zone *this_00;
  vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
  *this_01;
  Variable *pVVar6;
  VariableProxy *this_02;
  VariableProxy *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  this_00 = *(Zone **)(*(long *)this + 0x30);
  this_02 = *(VariableProxy **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_02) < 0x18) {
    this_02 = (VariableProxy *)Zone::NewExpand(this_00,0x18);
  }
  else {
    *(VariableProxy **)(this_00 + 0x10) = this_02 + 0x18;
  }
  *(AstRawString **)(this_02 + 8) = param_1;
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(int *)this_02 = param_2;
  *(undefined4 *)(this_02 + 4) = 0x835;
  EVar4 = this[0x10];
  if ((byte)EVar4 < 3) {
    if (4 < (byte)EVar4 - 1) {
      Scope::AddUnresolved((Scope *)**(undefined8 **)this,this_02);
    }
    uStack_50 = 0xffffffff;
    this_01 = *(vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                **)(this + 0x18);
    puVar2 = *(undefined8 **)(this_01 + 8);
    local_58 = this_02;
    if (puVar2 == *(undefined8 **)(this_01 + 0x10)) {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
      ::__push_back_slow_path<std::__ndk1::pair<v8::internal::VariableProxy*,int>const&>
                (this_01,(pair *)&local_58);
    }
    else {
      puVar2[1] = CONCAT44(uStack_4c,0xffffffff);
      *puVar2 = this_02;
      *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 0x10;
    }
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  else {
    if ((byte)EVar4 == 3) {
      pVVar6 = (Variable *)
               PreParser::DeclareVariableName
                         (*(PreParser **)this,param_1,2,*(undefined8 *)*(PreParser **)this,&local_58
                          ,param_2,1);
      if ((*(uint *)(this + 0x18) < *(uint *)(this + 0x14)) && (local_58._0_1_ == (pair)0x0)) {
        iVar3 = *(int *)(param_1 + 0x10);
        iVar1 = iVar3;
        if (iVar3 < 0) {
          iVar1 = iVar3 + 1;
        }
        iVar1 = iVar1 >> 1;
        if (param_1[0x1c] != (AstRawString)0x0) {
          iVar1 = iVar3;
        }
        *(ulong *)(this + 0x14) = CONCAT44(iVar1 + param_2,param_2);
      }
    }
    else {
      pVVar6 = (Variable *)
               VariableDeclarationParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>::
               Declare((VariableDeclarationParsingScope<v8::internal::ParserTypes<v8::internal::PreParser>>
                        *)this,param_1,param_2);
    }
    if ((this[0x10] == (ExpressionScope<v8::internal::ParserTypes<v8::internal::PreParser>>)0x4) &&
       (((byte)((Scope *)**(undefined8 **)this)[0x82] & 1) == 0)) {
      Scope::AddUnresolved((Scope *)**(undefined8 **)this,this_02);
    }
    else {
      VariableProxy::BindTo(this_02,pVVar6);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return this_02;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

