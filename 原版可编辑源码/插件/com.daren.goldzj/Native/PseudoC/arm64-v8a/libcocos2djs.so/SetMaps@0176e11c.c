
/* v8::internal::compiler::LoadElimination::AbstractState::SetMaps(v8::internal::compiler::Node*,
   v8::internal::ZoneHandleSet<v8::internal::Map>, v8::internal::Zone*) const */

void * __thiscall
v8::internal::compiler::LoadElimination::AbstractState::SetMaps
          (AbstractState *this,Node *param_1,undefined8 param_3,Zone *param_4)

{
  short sVar1;
  undefined8 uVar2;
  void *__dest;
  __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
  *this_00;
  Node *pNVar3;
  uint uVar4;
  Node *pNVar5;
  Node *local_50;
  undefined8 uStack_48;
  
  __dest = *(void **)(param_4 + 0x10);
  if ((ulong)(*(long *)(param_4 + 0x18) - (long)__dest) < 0x210) {
    __dest = (void *)Zone::NewExpand(param_4,0x210);
  }
  else {
    *(long *)(param_4 + 0x10) = (long)__dest + 0x210;
  }
  memcpy(__dest,this,0x210);
  if (*(AbstractMaps **)((long)__dest + 0x208) == (AbstractMaps *)0x0) {
    this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
                **)(param_4 + 0x10);
    if ((ulong)(*(long *)(param_4 + 0x18) - (long)this_00) < 0x20) {
      this_00 = (__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
                 *)Zone::NewExpand(param_4,0x20);
    }
    else {
      *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
        **)(param_4 + 0x10) = this_00 + 0x20;
    }
    *(undefined8 *)(this_00 + 8) = 0;
    *(Zone **)(this_00 + 0x10) = param_4;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
      **)this_00 = this_00 + 8;
    while( true ) {
      sVar1 = *(short *)(*(long *)param_1 + 0x10);
      if (((sVar1 != 0x28) && (sVar1 != 0xde)) && (sVar1 != 0x3a)) break;
      pNVar3 = param_1 + 0x20;
      uVar4 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
      pNVar5 = pNVar3;
      if (uVar4 == 0xf) {
        uVar4 = *(uint *)(*(long *)pNVar3 + 8);
        pNVar5 = (Node *)(*(long *)pNVar3 + 0x10);
      }
      if ((0 < (int)uVar4) && (*(long *)pNVar5 == 0)) break;
      if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
        pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
      }
      param_1 = *(Node **)pNVar3;
    }
    local_50 = param_1;
    uStack_48 = param_3;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
    ::
    __emplace_unique_key_args<v8::internal::compiler::Node*,std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>
              (this_00,&local_50,(pair *)&local_50);
    *(__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
      **)((long)__dest + 0x208) = this_00;
  }
  else {
    uVar2 = AbstractMaps::Extend(*(AbstractMaps **)((long)__dest + 0x208),param_1,param_3,param_4);
    *(undefined8 *)((long)__dest + 0x208) = uVar2;
  }
  return __dest;
}

