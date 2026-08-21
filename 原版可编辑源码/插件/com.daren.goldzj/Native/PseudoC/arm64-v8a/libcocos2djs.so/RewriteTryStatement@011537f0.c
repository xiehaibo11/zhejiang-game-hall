
/* v8::internal::Parser::RewriteTryStatement(v8::internal::Block*, v8::internal::Block*,
   v8::internal::SourceRange const&, v8::internal::Block*, v8::internal::SourceRange const&,
   v8::internal::ParserBase<v8::internal::Parser>::CatchInfo const&, int) */

TryCatchStatement * __thiscall
v8::internal::Parser::RewriteTryStatement
          (Parser *this,Block *param_1,Block *param_2,SourceRange *param_3,Block *param_4,
          SourceRange *param_5,CatchInfo *param_6,int param_7)

{
  Zone *pZVar1;
  TryCatchStatement *pTVar2;
  undefined8 *puVar3;
  TryCatchStatementSourceRanges *pTVar4;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *p_Var5;
  undefined8 uVar6;
  TryCatchStatementSourceRanges *local_68;
  TryCatchStatement *local_48;
  
  if ((param_2 == (Block *)0x0) || (param_4 == (Block *)0x0)) {
    if (param_2 != (Block *)0x0) {
      pZVar1 = *(Zone **)(this + 0x68);
      uVar6 = *(undefined8 *)(param_6 + 0x10);
      pTVar2 = *(TryCatchStatement **)(pZVar1 + 0x10);
      if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)pTVar2) < 0x28) {
        pTVar2 = (TryCatchStatement *)Zone::NewExpand(pZVar1,0x28);
      }
      else {
        *(TryCatchStatement **)(pZVar1 + 0x10) = pTVar2 + 0x28;
      }
      *(Block **)(pTVar2 + 8) = param_1;
      *(undefined8 *)(pTVar2 + 0x10) = uVar6;
      *(Block **)(pTVar2 + 0x18) = param_2;
      *(int *)pTVar2 = param_7;
      *(int *)(pTVar2 + 4) = 0x11;
      *(int *)(pTVar2 + 0x20) = 1;
      p_Var5 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                 **)(this + 0x2f8);
      if (p_Var5 == (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                     *)0x0) {
        return pTVar2;
      }
      pZVar1 = *(Zone **)(this + 0xb8);
      local_68 = *(TryCatchStatementSourceRanges **)(pZVar1 + 0x10);
      if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)local_68) < 0x18) {
        local_68 = (TryCatchStatementSourceRanges *)Zone::NewExpand(pZVar1,0x18);
      }
      else {
        *(TryCatchStatementSourceRanges **)(pZVar1 + 0x10) = local_68 + 0x18;
      }
      *(undefined ***)local_68 = &PTR__AstNodeSourceRanges_01cb5130;
      uVar6 = *(undefined8 *)param_3;
      local_68[0x10] = (TryCatchStatementSourceRanges)0x1;
      *(undefined8 *)(local_68 + 8) = uVar6;
      local_48 = pTVar2;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
      ::
      __emplace_unique_impl<v8::internal::TryCatchStatement*&,v8::internal::TryCatchStatementSourceRanges*&>
                (p_Var5,&local_48,&local_68);
      return pTVar2;
    }
  }
  else {
    pZVar1 = *(Zone **)(this + 0x68);
    uVar6 = *(undefined8 *)(param_6 + 0x10);
    pTVar2 = *(TryCatchStatement **)(pZVar1 + 0x10);
    if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)pTVar2) < 0x28) {
      pTVar2 = (TryCatchStatement *)Zone::NewExpand(pZVar1,0x28);
    }
    else {
      *(TryCatchStatement **)(pZVar1 + 0x10) = pTVar2 + 0x28;
    }
    *(Block **)(pTVar2 + 8) = param_1;
    *(undefined8 *)(pTVar2 + 0x10) = uVar6;
    *(Block **)(pTVar2 + 0x18) = param_2;
    *(undefined8 *)pTVar2 = 0x11ffffffff;
    *(undefined4 *)(pTVar2 + 0x20) = 1;
    p_Var5 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
               **)(this + 0x2f8);
    if (p_Var5 != (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                   *)0x0) {
      pZVar1 = *(Zone **)(this + 0xb8);
      local_68 = *(TryCatchStatementSourceRanges **)(pZVar1 + 0x10);
      if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)local_68) < 0x18) {
        local_68 = (TryCatchStatementSourceRanges *)Zone::NewExpand(pZVar1,0x18);
      }
      else {
        *(TryCatchStatementSourceRanges **)(pZVar1 + 0x10) = local_68 + 0x18;
      }
      *(undefined ***)local_68 = &PTR__AstNodeSourceRanges_01cb5130;
      uVar6 = *(undefined8 *)param_3;
      local_68[0x10] = (TryCatchStatementSourceRanges)0x1;
      *(undefined8 *)(local_68 + 8) = uVar6;
      local_48 = pTVar2;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
      ::
      __emplace_unique_impl<v8::internal::TryCatchStatement*&,v8::internal::TryCatchStatementSourceRanges*&>
                (p_Var5,&local_48,&local_68);
    }
    pZVar1 = *(Zone **)(this + 0x68);
    param_1 = *(Block **)(pZVar1 + 0x10);
    if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)param_1) < 0x20) {
      param_1 = (Block *)Zone::NewExpand(pZVar1,0x20);
    }
    else {
      *(Block **)(pZVar1 + 0x10) = param_1 + 0x20;
    }
    pZVar1 = *(Zone **)(this + 0x68);
    *(undefined8 *)param_1 = 0x47ffffffff;
    puVar3 = *(undefined8 **)(pZVar1 + 0x10);
    if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)puVar3) < 8) {
      puVar3 = (undefined8 *)Zone::NewExpand(pZVar1,8);
    }
    else {
      *(undefined8 **)(pZVar1 + 0x10) = puVar3 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0x100000001;
    *puVar3 = pTVar2;
  }
  pZVar1 = *(Zone **)(this + 0x68);
  pTVar2 = *(TryCatchStatement **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)pTVar2) < 0x18) {
    pTVar2 = (TryCatchStatement *)Zone::NewExpand(pZVar1,0x18);
  }
  else {
    *(TryCatchStatement **)(pZVar1 + 0x10) = pTVar2 + 0x18;
  }
  *(int *)pTVar2 = param_7;
  *(int *)(pTVar2 + 4) = 0x12;
  *(Block **)(pTVar2 + 8) = param_1;
  *(Block **)(pTVar2 + 0x10) = param_4;
  p_Var5 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
             **)(this + 0x2f8);
  if (p_Var5 != (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                 *)0x0) {
    pZVar1 = *(Zone **)(this + 0xb8);
    pTVar4 = *(TryCatchStatementSourceRanges **)(pZVar1 + 0x10);
    if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)pTVar4) < 0x18) {
      pTVar4 = (TryCatchStatementSourceRanges *)Zone::NewExpand(pZVar1,0x18);
    }
    else {
      *(TryCatchStatementSourceRanges **)(pZVar1 + 0x10) = pTVar4 + 0x18;
    }
    *(undefined ***)pTVar4 = &PTR__AstNodeSourceRanges_01cb5168;
    uVar6 = *(undefined8 *)param_5;
    pTVar4[0x10] = (TryCatchStatementSourceRanges)0x1;
    *(undefined8 *)(pTVar4 + 8) = uVar6;
    local_68 = pTVar4;
    local_48 = pTVar2;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
    ::
    __emplace_unique_impl<v8::internal::TryFinallyStatement*&,v8::internal::TryFinallyStatementSourceRanges*&>
              (p_Var5,(TryFinallyStatement **)&local_48,
               (TryFinallyStatementSourceRanges **)&local_68);
  }
  return pTVar2;
}

