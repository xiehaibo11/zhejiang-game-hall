
/* v8::internal::Parser::CreateInitializerFunction(char const*, v8::internal::DeclarationScope*,
   v8::internal::ZoneList<v8::internal::ClassLiteralProperty*>*) */

FunctionLiteral * __thiscall
v8::internal::Parser::CreateInitializerFunction
          (Parser *this,char *param_1,DeclarationScope *param_2,ZoneList *param_3)

{
  AstValueFactory *this_00;
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  AstRawString *pAVar4;
  FunctionLiteral *this_01;
  uint uVar5;
  Zone *pZVar6;
  ulong uVar7;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_02;
  undefined8 uVar8;
  vector<void*,std::__ndk1::allocator<void*>> *local_78;
  ulong local_70;
  ulong local_68;
  FunctionLiteralSourceRanges *local_60;
  FunctionLiteral *local_58;
  
  local_78 = (vector<void*,std::__ndk1::allocator<void*>> *)(this + 200);
  local_70 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  pZVar6 = *(Zone **)(this + 0x68);
  local_58 = *(FunctionLiteral **)(pZVar6 + 0x10);
  local_68 = local_70;
  if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)local_58) < 0x10) {
    local_58 = (FunctionLiteral *)Zone::NewExpand(pZVar6,0x10);
  }
  else {
    *(FunctionLiteral **)(pZVar6 + 0x10) = local_58 + 0x10;
  }
  *(ZoneList **)(local_58 + 8) = param_3;
  *(undefined8 *)local_58 = 0x14ffffffff;
  if (*(undefined8 **)(local_78 + 8) < *(undefined8 **)(local_78 + 0x10)) {
    **(undefined8 **)(local_78 + 8) = local_58;
    *(long *)(local_78 + 8) = *(long *)(local_78 + 8) + 8;
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
              (local_78,&local_58);
  }
  local_68 = local_68 + 1;
  uVar8 = *(undefined8 *)(this + 0x60);
  sVar3 = strlen(param_1);
  pAVar4 = (AstRawString *)AstValueFactory::GetOneByteStringInternal(uVar8,param_1,sVar3);
  iVar1 = *(int *)(this + 0x100);
  pZVar6 = *(Zone **)(this + 0x68);
  uVar2 = *(undefined4 *)(param_2 + 0x70);
  *(int *)(this + 0x100) = iVar1 + 1;
  this_01 = *(FunctionLiteral **)(pZVar6 + 0x10);
  if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)this_01) < 0x58) {
    this_01 = (FunctionLiteral *)Zone::NewExpand(pZVar6,0x58);
  }
  else {
    *(FunctionLiteral **)(pZVar6 + 0x10) = this_01 + 0x58;
  }
  pZVar6 = *(Zone **)(this + 0x68);
  this_00 = *(AstValueFactory **)(this + 0x70);
  *(undefined4 *)this_01 = uVar2;
  *(undefined8 *)(this_01 + 0x14) = 0xffffffff;
  *(undefined8 *)(this_01 + 0xc) = 0;
  *(undefined8 *)(this_01 + 4) = 0x26;
  *(int *)(this_01 + 0x1c) = iVar1 + 1;
  if (pAVar4 == (AstRawString *)0x0) {
    uVar8 = 0;
    uVar5 = 0x1a6;
  }
  else {
    uVar8 = AstValueFactory::NewConsString(this_00,pAVar4);
    uVar5 = *(uint *)(this_01 + 4) | 0x180;
  }
  *(undefined8 *)(this_01 + 0x20) = uVar8;
  *(DeclarationScope **)(this_01 + 0x28) = param_2;
  *(undefined8 *)(this_01 + 0x38) = 0;
  *(undefined8 *)(this_01 + 0x30) = 0;
  uVar8 = *(undefined8 *)(this_00 + 0x40);
  *(undefined8 *)(this_01 + 0x48) = 0;
  *(undefined8 *)(this_01 + 0x50) = 0;
  *(uint *)(this_01 + 4) = uVar5;
  *(undefined8 *)(this_01 + 0x40) = uVar8;
  FunctionLiteral::SetShouldEagerCompile(this_01);
  ScopedList<v8::internal::Statement*,void*>::CopyTo
            ((ScopedList<v8::internal::Statement*,void*> *)&local_78,(ZoneList *)(this_01 + 0x30),
             pZVar6);
  this_02 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
              **)(this + 0x2f8);
  if (this_02 !=
      (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
       *)0x0) {
    pZVar6 = *(Zone **)(this + 0xb8);
    local_60 = *(FunctionLiteralSourceRanges **)(pZVar6 + 0x10);
    if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)local_60) < 8) {
      local_60 = (FunctionLiteralSourceRanges *)Zone::NewExpand(pZVar6,8);
    }
    else {
      *(FunctionLiteralSourceRanges **)(pZVar6 + 0x10) = local_60 + 8;
    }
    *(undefined ***)local_60 = &PTR__AstNodeSourceRanges_01cb50f8;
    local_58 = this_01;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
    ::
    __emplace_unique_impl<v8::internal::FunctionLiteral*&,v8::internal::FunctionLiteralSourceRanges*&>
              (this_02,&local_58,&local_60);
  }
  uVar7 = *(long *)(local_78 + 8) - *(long *)local_78 >> 3;
  if (local_70 < uVar7 || local_70 - uVar7 == 0) {
    if (local_70 < uVar7) {
      *(ulong *)(local_78 + 8) = *(long *)local_78 + local_70 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append(local_78,local_70 - uVar7);
  }
  return this_01;
}

