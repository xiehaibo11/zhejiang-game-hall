
/* v8::internal::compiler::LoadElimination::AbstractMaps::Kill(v8::internal::compiler::LoadElimination::AliasStateInfo
   const&, v8::internal::Zone*) const */

AbstractMaps * __thiscall
v8::internal::compiler::LoadElimination::AbstractMaps::Kill
          (AbstractMaps *this,AliasStateInfo *param_1,Zone *param_2)

{
  bool bVar1;
  ulong uVar2;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
  *this_00;
  AbstractMaps *pAVar3;
  long lVar4;
  AbstractMaps *pAVar5;
  Node *local_50;
  undefined8 uStack_48;
  
  pAVar5 = *(AbstractMaps **)this;
joined_r0x0176d238:
  this_00 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
             *)this;
  if (pAVar5 != this + 8) {
    uVar2 = AliasStateInfo::MayAlias(param_1,*(Node **)(pAVar5 + 0x20));
    if ((uVar2 & 1) == 0) {
      pAVar3 = *(AbstractMaps **)(pAVar5 + 8);
      if (*(AbstractMaps **)(pAVar5 + 8) == (AbstractMaps *)0x0) {
        pAVar3 = pAVar5 + 0x10;
        bVar1 = *(AbstractMaps **)*(AbstractMaps **)pAVar3 != pAVar5;
        pAVar5 = *(AbstractMaps **)pAVar3;
        if (bVar1) {
          do {
            lVar4 = *(long *)pAVar3;
            pAVar3 = (AbstractMaps *)(lVar4 + 0x10);
            pAVar5 = *(AbstractMaps **)pAVar3;
          } while (*(long *)pAVar5 != lVar4);
        }
      }
      else {
        do {
          pAVar5 = pAVar3;
          pAVar3 = *(AbstractMaps **)pAVar5;
        } while (*(AbstractMaps **)pAVar5 != (AbstractMaps *)0x0);
      }
      goto joined_r0x0176d238;
    }
    this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
                **)(param_2 + 0x10);
    if ((ulong)(*(long *)(param_2 + 0x18) - (long)this_00) < 0x20) {
      this_00 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
                 *)Zone::NewExpand(param_2,0x20);
    }
    else {
      *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
        **)(param_2 + 0x10) = this_00 + 0x20;
    }
    *(undefined8 *)(this_00 + 8) = 0;
    *(Zone **)(this_00 + 0x10) = param_2;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
      **)this_00 = this_00 + 8;
    pAVar5 = *(AbstractMaps **)this;
    while (pAVar5 != this + 8) {
      uStack_48 = *(undefined8 *)(pAVar5 + 0x28);
      local_50 = *(Node **)(pAVar5 + 0x20);
      uVar2 = AliasStateInfo::MayAlias(param_1,local_50);
      if ((uVar2 & 1) == 0) {
        std::__ndk1::
        __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
        ::
        __emplace_unique_key_args<v8::internal::compiler::Node*,std::__ndk1::pair<v8::internal::compiler::Node*const,v8::internal::ZoneHandleSet<v8::internal::Map>>const&>
                  (this_00,&local_50,(pair *)&local_50);
      }
      pAVar3 = *(AbstractMaps **)(pAVar5 + 8);
      if (*(AbstractMaps **)(pAVar5 + 8) == (AbstractMaps *)0x0) {
        pAVar3 = pAVar5 + 0x10;
        bVar1 = *(AbstractMaps **)*(AbstractMaps **)pAVar3 != pAVar5;
        pAVar5 = *(AbstractMaps **)pAVar3;
        if (bVar1) {
          do {
            lVar4 = *(long *)pAVar3;
            pAVar3 = (AbstractMaps *)(lVar4 + 0x10);
            pAVar5 = *(AbstractMaps **)pAVar3;
          } while (*(long *)pAVar5 != lVar4);
        }
      }
      else {
        do {
          pAVar5 = pAVar3;
          pAVar3 = *(AbstractMaps **)pAVar5;
        } while (*(AbstractMaps **)pAVar5 != (AbstractMaps *)0x0);
      }
    }
  }
  return (AbstractMaps *)this_00;
}

