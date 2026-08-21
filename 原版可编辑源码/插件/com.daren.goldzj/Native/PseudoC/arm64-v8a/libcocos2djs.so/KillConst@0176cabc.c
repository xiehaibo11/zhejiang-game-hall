
/* v8::internal::compiler::LoadElimination::AbstractField::KillConst(v8::internal::compiler::Node*,
   v8::internal::Zone*) const */

AbstractField * __thiscall
v8::internal::compiler::LoadElimination::AbstractField::KillConst
          (AbstractField *this,Node *param_1,Zone *param_2)

{
  bool bVar1;
  ulong uVar2;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
  *this_00;
  long *plVar3;
  AbstractField *pAVar4;
  uint uVar5;
  long lVar6;
  AbstractField *pAVar7;
  Node *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  pAVar7 = *(AbstractField **)this;
joined_r0x0176cae4:
  this_00 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
             *)this;
  if (pAVar7 != this + 8) {
    uVar5 = *(byte *)(*(long *)(pAVar7 + 0x20) + 0x17) & 0xf;
    plVar3 = (long *)(*(long *)(pAVar7 + 0x20) + 0x20);
    if (uVar5 == 0xf) {
      uVar5 = *(uint *)(*plVar3 + 8);
      plVar3 = (long *)(*plVar3 + 0x10);
    }
    if (((0 < (int)uVar5) && (*plVar3 == 0)) ||
       (uVar2 = thunk_FUN_0176bf74(param_1), (uVar2 & 1) == 0)) {
      pAVar4 = *(AbstractField **)(pAVar7 + 8);
      if (*(AbstractField **)(pAVar7 + 8) == (AbstractField *)0x0) {
        pAVar4 = pAVar7 + 0x10;
        bVar1 = *(AbstractField **)*(AbstractField **)pAVar4 != pAVar7;
        pAVar7 = *(AbstractField **)pAVar4;
        if (bVar1) {
          do {
            lVar6 = *(long *)pAVar4;
            pAVar4 = (AbstractField *)(lVar6 + 0x10);
            pAVar7 = *(AbstractField **)pAVar4;
          } while (*(long *)pAVar7 != lVar6);
        }
      }
      else {
        do {
          pAVar7 = pAVar4;
          pAVar4 = *(AbstractField **)pAVar7;
        } while (*(AbstractField **)pAVar7 != (AbstractField *)0x0);
      }
      goto joined_r0x0176cae4;
    }
    this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                **)(param_2 + 0x10);
    if ((ulong)(*(long *)(param_2 + 0x18) - (long)this_00) < 0x20) {
      this_00 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                 *)Zone::NewExpand(param_2,0x20);
    }
    else {
      *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
        **)(param_2 + 0x10) = this_00 + 0x20;
    }
    *(undefined8 *)(this_00 + 8) = 0;
    *(Zone **)(this_00 + 0x10) = param_2;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
      **)this_00 = this_00 + 8;
    pAVar7 = *(AbstractField **)this;
    while (pAVar7 != this + 8) {
      uStack_68 = *(undefined8 *)(pAVar7 + 0x28);
      local_70 = *(Node **)(pAVar7 + 0x20);
      uStack_58 = *(undefined8 *)(pAVar7 + 0x38);
      uStack_60 = *(undefined8 *)(pAVar7 + 0x30);
      local_50 = *(undefined8 *)(pAVar7 + 0x40);
      uVar2 = thunk_FUN_0176bf74(param_1,local_70);
      if ((uVar2 & 1) == 0) {
        std::__ndk1::
        __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
        ::
        __emplace_unique_key_args<v8::internal::compiler::Node*,std::__ndk1::pair<v8::internal::compiler::Node*const,v8::internal::compiler::LoadElimination::FieldInfo>const&>
                  (this_00,&local_70,(pair *)&local_70);
      }
      pAVar4 = *(AbstractField **)(pAVar7 + 8);
      if (*(AbstractField **)(pAVar7 + 8) == (AbstractField *)0x0) {
        pAVar4 = pAVar7 + 0x10;
        bVar1 = *(AbstractField **)*(AbstractField **)pAVar4 != pAVar7;
        pAVar7 = *(AbstractField **)pAVar4;
        if (bVar1) {
          do {
            lVar6 = *(long *)pAVar4;
            pAVar4 = (AbstractField *)(lVar6 + 0x10);
            pAVar7 = *(AbstractField **)pAVar4;
          } while (*(long *)pAVar7 != lVar6);
        }
      }
      else {
        do {
          pAVar7 = pAVar4;
          pAVar4 = *(AbstractField **)pAVar7;
        } while (*(AbstractField **)pAVar7 != (AbstractField *)0x0);
      }
    }
  }
  return (AbstractField *)this_00;
}

