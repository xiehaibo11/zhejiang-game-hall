
/* v8::internal::compiler::LoadElimination::AbstractField::Kill(v8::internal::compiler::LoadElimination::AliasStateInfo
   const&, v8::internal::MaybeHandle<v8::internal::Name>, v8::internal::Zone*) const */

AbstractField * __thiscall
v8::internal::compiler::LoadElimination::AbstractField::Kill
          (AbstractField *this,AliasStateInfo *param_1,long param_3,Zone *param_4)

{
  bool bVar1;
  ulong uVar2;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
  *this_00;
  Node *pNVar3;
  Node *pNVar4;
  AbstractField *pAVar5;
  uint uVar6;
  long lVar7;
  AbstractField *pAVar8;
  Node *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_50;
  
  pAVar8 = *(AbstractField **)this;
joined_r0x0176cca0:
  this_00 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
             *)this;
  if (pAVar8 != this + 8) {
    pNVar3 = *(Node **)(pAVar8 + 0x20);
    uVar6 = (byte)pNVar3[0x17] & 0xf;
    pNVar4 = pNVar3 + 0x20;
    if (uVar6 == 0xf) {
      uVar6 = *(uint *)(*(long *)pNVar4 + 8);
      pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
    }
    if (((0 < (int)uVar6) && (*(long *)pNVar4 == 0)) ||
       (uVar2 = AliasStateInfo::MayAlias(param_1,pNVar3), (uVar2 & 1) == 0)) {
      pAVar5 = *(AbstractField **)(pAVar8 + 8);
      if (*(AbstractField **)(pAVar8 + 8) == (AbstractField *)0x0) {
        pAVar5 = pAVar8 + 0x10;
        bVar1 = *(AbstractField **)*(AbstractField **)pAVar5 != pAVar8;
        pAVar8 = *(AbstractField **)pAVar5;
        if (bVar1) {
          do {
            lVar7 = *(long *)pAVar5;
            pAVar5 = (AbstractField *)(lVar7 + 0x10);
            pAVar8 = *(AbstractField **)pAVar5;
          } while (*(long *)pAVar8 != lVar7);
        }
      }
      else {
        do {
          pAVar8 = pAVar5;
          pAVar5 = *(AbstractField **)pAVar8;
        } while (*(AbstractField **)pAVar8 != (AbstractField *)0x0);
      }
      goto joined_r0x0176cca0;
    }
    this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                **)(param_4 + 0x10);
    if ((ulong)(*(long *)(param_4 + 0x18) - (long)this_00) < 0x20) {
      this_00 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                 *)Zone::NewExpand(param_4,0x20);
    }
    else {
      *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
        **)(param_4 + 0x10) = this_00 + 0x20;
    }
    *(undefined8 *)(this_00 + 8) = 0;
    *(Zone **)(this_00 + 0x10) = param_4;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
      **)this_00 = this_00 + 8;
    pAVar8 = *(AbstractField **)this;
    while (pAVar8 != this + 8) {
      uStack_68 = *(undefined8 *)(pAVar8 + 0x28);
      local_70 = *(Node **)(pAVar8 + 0x20);
      local_58 = *(long *)(pAVar8 + 0x38);
      uStack_60 = *(undefined8 *)(pAVar8 + 0x30);
      local_50 = *(undefined8 *)(pAVar8 + 0x40);
      uVar2 = AliasStateInfo::MayAlias(param_1,local_70);
      if (((uVar2 & 1) == 0) || (((local_58 != param_3 && (param_3 != 0)) && (local_58 != 0)))) {
        std::__ndk1::
        __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
        ::
        __emplace_unique_key_args<v8::internal::compiler::Node*,std::__ndk1::pair<v8::internal::compiler::Node*const,v8::internal::compiler::LoadElimination::FieldInfo>const&>
                  (this_00,&local_70,(pair *)&local_70);
      }
      pAVar5 = *(AbstractField **)(pAVar8 + 8);
      if (*(AbstractField **)(pAVar8 + 8) == (AbstractField *)0x0) {
        pAVar5 = pAVar8 + 0x10;
        bVar1 = *(AbstractField **)*(AbstractField **)pAVar5 != pAVar8;
        pAVar8 = *(AbstractField **)pAVar5;
        if (bVar1) {
          do {
            lVar7 = *(long *)pAVar5;
            pAVar5 = (AbstractField *)(lVar7 + 0x10);
            pAVar8 = *(AbstractField **)pAVar5;
          } while (*(long *)pAVar8 != lVar7);
        }
      }
      else {
        do {
          pAVar8 = pAVar5;
          pAVar5 = *(AbstractField **)pAVar8;
        } while (*(AbstractField **)pAVar8 != (AbstractField *)0x0);
      }
    }
  }
  return (AbstractField *)this_00;
}

