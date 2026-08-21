
/* v8::internal::compiler::LoadElimination::AbstractState::AddField(v8::internal::compiler::Node*,
   v8::internal::compiler::LoadElimination::IndexRange,
   v8::internal::compiler::LoadElimination::FieldInfo, v8::internal::Zone*) const */

void * __thiscall
v8::internal::compiler::LoadElimination::AbstractState::AddField
          (AbstractState *this,Node *param_1,undefined8 param_3,undefined8 *param_4,Zone *param_5)

{
  long lVar1;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
  *this_00;
  void *__dest;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
  *p_Var6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Node *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  Node *local_70 [2];
  
  __dest = *(void **)(param_5 + 0x10);
  if ((ulong)(*(long *)(param_5 + 0x18) - (long)__dest) < 0x210) {
    __dest = (void *)Zone::NewExpand(param_5,0x210);
  }
  else {
    *(long *)(param_5 + 0x10) = (long)__dest + 0x210;
  }
  memcpy(__dest,this,0x210);
  lVar1 = 8;
  if (param_4[3] != 0) {
    lVar1 = 0x108;
  }
  iVar2 = (int)((ulong)param_3 >> 0x20);
  iVar5 = (int)param_3;
  if (iVar5 != iVar2) {
    iVar2 = iVar2 - iVar5;
    puVar4 = (undefined8 *)((long)__dest + lVar1 + (long)iVar5 * 8);
    p_Var6 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
              *)*puVar4;
    if (p_Var6 != (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                   *)0x0) goto LAB_0176e770;
    do {
      this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                  **)(param_5 + 0x10);
      if ((ulong)(*(long *)(param_5 + 0x18) - (long)this_00) < 0x20) {
        this_00 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                   *)Zone::NewExpand(param_5,0x20);
      }
      else {
        *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
          **)(param_5 + 0x10) = this_00 + 0x20;
      }
      uStack_88 = param_4[1];
      local_90 = *param_4;
      uStack_78 = param_4[3];
      uStack_80 = param_4[2];
      *(undefined8 *)(this_00 + 8) = 0;
      *(Zone **)(this_00 + 0x10) = param_5;
      *(undefined8 *)(this_00 + 0x18) = 0;
      *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
        **)this_00 = this_00 + 8;
      local_98 = param_1;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
      ::
      __emplace_unique_key_args<v8::internal::compiler::Node*,std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>
                (this_00,&local_98,(pair *)&local_98);
      puVar3 = puVar4;
      while( true ) {
        puVar4 = puVar3 + 1;
        *puVar3 = this_00;
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) {
          return __dest;
        }
        p_Var6 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                  *)*puVar4;
        if (p_Var6 == (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                       *)0x0) break;
LAB_0176e770:
        uVar10 = param_4[1];
        uVar9 = *param_4;
        uVar8 = param_4[3];
        uVar7 = param_4[2];
        this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                    **)(param_5 + 0x10);
        local_70[0] = param_1;
        if ((ulong)(*(long *)(param_5 + 0x18) - (long)this_00) < 0x20) {
          this_00 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                     *)Zone::NewExpand(param_5,0x20);
        }
        else {
          *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
            **)(param_5 + 0x10) = this_00 + 0x20;
        }
        *(undefined8 *)(this_00 + 8) = 0;
        *(Zone **)(this_00 + 0x10) = param_5;
        *(undefined8 *)(this_00 + 0x18) = 0;
        *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
          **)this_00 = this_00 + 8;
        if (p_Var6 != this_00) {
          std::__ndk1::
          __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
          ::
          __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,void*>*,long>>
                    (this_00,*(undefined8 *)p_Var6,p_Var6 + 8);
        }
        local_98 = (Node *)local_70;
        lVar1 = std::__ndk1::
                __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::compiler::LoadElimination::FieldInfo>>>
                ::
                __emplace_unique_key_args<v8::internal::compiler::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::compiler::Node*const&>,std::__ndk1::tuple<>>
                          ((Node **)this_00,(piecewise_construct_t *)local_70,(tuple *)&DAT_01a5fd60
                           ,(tuple *)&local_98);
        *(undefined8 *)(lVar1 + 0x40) = uVar8;
        *(undefined8 *)(lVar1 + 0x38) = uVar7;
        *(undefined8 *)(lVar1 + 0x30) = uVar10;
        *(undefined8 *)(lVar1 + 0x28) = uVar9;
        puVar3 = puVar4;
      }
    } while( true );
  }
  return __dest;
}

