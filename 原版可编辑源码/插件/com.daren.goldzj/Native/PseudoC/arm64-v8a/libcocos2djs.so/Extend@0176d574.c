
/* v8::internal::compiler::LoadElimination::AbstractMaps::Extend(v8::internal::compiler::Node*,
   v8::internal::ZoneHandleSet<v8::internal::Map>, v8::internal::Zone*) const */

__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
* __thiscall
v8::internal::compiler::LoadElimination::AbstractMaps::Extend
          (AbstractMaps *this,long *param_1,undefined8 param_3,Zone *param_4)

{
  short sVar1;
  long lVar2;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
  *p_Var3;
  long **pplVar4;
  uint uVar5;
  long **pplVar6;
  long *local_48 [2];
  long **local_38;
  
  local_48[0] = param_1;
  p_Var3 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
             **)(param_4 + 0x10);
  if ((ulong)(*(long *)(param_4 + 0x18) - (long)p_Var3) < 0x20) {
    p_Var3 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
              *)Zone::NewExpand(param_4,0x20);
  }
  else {
    *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
      **)(param_4 + 0x10) = p_Var3 + 0x20;
  }
  *(undefined8 *)(p_Var3 + 8) = 0;
  *(Zone **)(p_Var3 + 0x10) = param_4;
  *(undefined8 *)(p_Var3 + 0x18) = 0;
  *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
    **)p_Var3 = p_Var3 + 8;
  if (this != (AbstractMaps *)p_Var3) {
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
    ::
    __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__tree_node<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,void*>*,long>>
              (p_Var3,*(undefined8 *)this,this + 8);
  }
  pplVar4 = local_48;
  while( true ) {
    local_48[0] = *pplVar4;
    sVar1 = *(short *)(*local_48[0] + 0x10);
    if (((sVar1 != 0x28) && (sVar1 != 0xde)) && (sVar1 != 0x3a)) break;
    pplVar4 = (long **)(local_48[0] + 4);
    uVar5 = *(uint *)((long)local_48[0] + 0x14) >> 0x18 & 0xf;
    pplVar6 = pplVar4;
    if (uVar5 == 0xf) {
      uVar5 = *(uint *)(*pplVar4 + 1);
      pplVar6 = (long **)(*pplVar4 + 2);
    }
    if ((0 < (int)uVar5) && (*pplVar6 == (long *)0x0)) break;
    if ((~*(uint *)((long)local_48[0] + 0x14) & 0xf000000) == 0) {
      pplVar4 = (long **)(*pplVar4 + 2);
    }
  }
  local_38 = local_48;
  lVar2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
          ::
          __emplace_unique_key_args<v8::internal::compiler::Node*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::compiler::Node*const&>,std::__ndk1::tuple<>>
                    ((Node **)p_Var3,(piecewise_construct_t *)local_48,(tuple *)&DAT_01a5fd60,
                     (tuple *)&local_38);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
  return p_Var3;
}

