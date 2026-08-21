
/* v8::internal::ParserBase<v8::internal::Parser>::ParseBlock(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*) */

Block * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseBlock
          (ParserBase<v8::internal::Parser> *this,ZoneList *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  Zone *pZVar3;
  ulong uVar4;
  Block *pBVar5;
  undefined8 uVar6;
  Scope *pSVar7;
  Block *pBVar8;
  long lVar9;
  long lVar10;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_00;
  undefined8 uVar11;
  ParserBase<v8::internal::Parser> *local_78;
  Block *pBStack_70;
  undefined8 local_68;
  ParserBase<v8::internal::Parser> *local_60;
  ulong local_58;
  ulong local_50;
  BlockSourceRanges *local_48;
  Block *local_28;
  
  pZVar3 = *(Zone **)(this + 0x68);
  pBVar8 = *(Block **)(pZVar3 + 0x10);
  if (param_1 == (ZoneList *)0x0) {
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pBVar8) < 0x20) {
      pBVar8 = (Block *)Zone::NewExpand(pZVar3,0x20);
    }
    else {
      *(Block **)(pZVar3 + 0x10) = pBVar8 + 0x20;
    }
    *(undefined8 *)pBVar8 = 0x47ffffffff;
    *(undefined8 *)(pBVar8 + 8) = 0;
    *(undefined8 *)(pBVar8 + 0x10) = 0;
    *(undefined8 *)(pBVar8 + 0x18) = 0;
  }
  else {
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pBVar8) < 0x28) {
      pBVar8 = (Block *)Zone::NewExpand(pZVar3,0x28);
    }
    else {
      *(Block **)(pZVar3 + 0x10) = pBVar8 + 0x28;
    }
    *(undefined8 *)(pBVar8 + 0x10) = 0;
    *(undefined8 *)(pBVar8 + 0x18) = 0;
    *(undefined8 *)pBVar8 = 0x147ffffffff;
    *(undefined8 *)(pBVar8 + 8) = 0;
    *(ZoneList **)(pBVar8 + 0x20) = param_1;
  }
  local_60 = this + 200;
  local_58 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  local_50 = local_58;
  uVar4 = GetCurrentStackPosition();
  if (uVar4 < *(ulong *)(this + 0xa8)) {
    lVar9 = *(long *)(this + 0xf8);
    lVar10 = *(long *)(lVar9 + 0x18);
    if (*(char *)(lVar10 + 0x30) == '\0') {
      *(undefined4 *)(lVar9 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar10 + 0x30) = 1;
      *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined1 *)(lVar9 + 0x60) = 0x6d;
      *(undefined1 *)(lVar9 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar9 + 0x100) = 0x6d;
    }
    **(undefined2 **)(this + 0xb0) = 0x101;
  }
  pZVar3 = *(Zone **)(this + 0xb8);
  pSVar7 = *(Scope **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pSVar7) < 0x88) {
    pSVar7 = (Scope *)Zone::NewExpand(pZVar3,0x88);
  }
  else {
    *(Scope **)(pZVar3 + 0x10) = pSVar7 + 0x88;
  }
  Scope::Scope(pSVar7,pZVar3,*(undefined8 *)this,6);
  uVar11 = *(undefined8 *)this;
  *(Scope **)this = pSVar7;
  local_78 = this + 0x300;
  *(undefined4 *)(pSVar7 + 0x70) = **(undefined4 **)(*(long *)(this + 0xf8) + 8);
  local_68 = *(undefined8 *)(this + 0x300);
  *(ParserBase<v8::internal::Parser> ***)(this + 0x300) = &local_78;
  pBStack_70 = pBVar8;
  uVar2 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((uVar2 & 0xff) != 8) {
    ReportUnexpectedToken(this,uVar2);
  }
  do {
    if (*(char *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38) == '\r') {
      uVar2 = Scanner::Next(*(Scanner **)(this + 0xf8));
      if ((uVar2 & 0xff) != 0xd) {
        ReportUnexpectedToken(this,uVar2);
      }
      uVar1 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
      *(undefined4 *)(*(long *)this + 0x74) = uVar1;
      this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                  **)(this + 0x2f8);
      if (this_00 !=
          (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
           *)0x0) {
        pZVar3 = *(Zone **)(this + 0xb8);
        local_48 = *(BlockSourceRanges **)(pZVar3 + 0x10);
        if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)local_48) < 0x10) {
          local_48 = (BlockSourceRanges *)Zone::NewExpand(pZVar3,0x10);
        }
        else {
          *(BlockSourceRanges **)(pZVar3 + 0x10) = local_48 + 0x10;
        }
        *(undefined4 *)(local_48 + 8) = uVar1;
        *(undefined ***)local_48 = &PTR__AstNodeSourceRanges_01cb5248;
        local_28 = pBVar8;
        std::__ndk1::
        __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
        ::__emplace_unique_impl<v8::internal::Block*&,v8::internal::BlockSourceRanges*&>
                  (this_00,&local_28,&local_48);
      }
      uVar6 = Scope::FinalizeBlockScope(*(Scope **)this);
      *(undefined8 *)(pBVar8 + 0x18) = uVar6;
      *(undefined8 *)local_78 = local_68;
      *(undefined8 *)this = uVar11;
      ScopedList<v8::internal::Statement*,void*>::CopyTo
                ((ScopedList<v8::internal::Statement*,void*> *)&local_60,(ZoneList *)(pBVar8 + 8),
                 *(Zone **)(this + 0xb8));
LAB_01169b20:
      uVar4 = *(long *)(local_60 + 8) - *(long *)local_60 >> 3;
      if (local_58 < uVar4 || local_58 - uVar4 == 0) {
        if (local_58 < uVar4) {
          *(ulong *)(local_60 + 8) = *(long *)local_60 + local_58 * 8;
        }
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
                  ((vector<void*,std::__ndk1::allocator<void*>> *)local_60,local_58 - uVar4);
      }
      return pBVar8;
    }
    pBVar5 = (Block *)ParseStatementListItem(this);
    if (pBVar5 == (Block *)0x0) {
      *(undefined8 *)local_78 = local_68;
      *(undefined8 *)this = uVar11;
      goto LAB_01169b20;
    }
    if ((*(uint *)(pBVar5 + 4) & 0x3f) != 10) {
      local_28 = pBVar5;
      if (*(undefined8 **)(local_60 + 8) < *(undefined8 **)(local_60 + 0x10)) {
        **(undefined8 **)(local_60 + 8) = pBVar5;
        *(long *)(local_60 + 8) = *(long *)(local_60 + 8) + 8;
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                  ((vector<void*,std::__ndk1::allocator<void*>> *)local_60,&local_28);
      }
      local_50 = local_50 + 1;
    }
  } while( true );
}

