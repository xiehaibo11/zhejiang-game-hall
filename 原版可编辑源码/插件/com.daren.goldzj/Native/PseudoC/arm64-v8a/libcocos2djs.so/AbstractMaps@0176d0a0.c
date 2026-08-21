
/* v8::internal::compiler::LoadElimination::AbstractMaps::AbstractMaps(v8::internal::compiler::Node*,
   v8::internal::ZoneHandleSet<v8::internal::Map>, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::LoadElimination::AbstractMaps::AbstractMaps
          (AbstractMaps *this,Node *param_1,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  Node *pNVar2;
  uint uVar3;
  Node *pNVar4;
  Node *local_20;
  undefined8 uStack_18;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = param_4;
  *(undefined8 *)(this + 0x18) = 0;
  *(AbstractMaps **)this = this + 8;
  while( true ) {
    sVar1 = *(short *)(*(long *)param_1 + 0x10);
    if (((sVar1 != 0x28) && (sVar1 != 0xde)) && (sVar1 != 0x3a)) break;
    pNVar2 = param_1 + 0x20;
    uVar3 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
    pNVar4 = pNVar2;
    if (uVar3 == 0xf) {
      uVar3 = *(uint *)(*(long *)pNVar2 + 8);
      pNVar4 = (Node *)(*(long *)pNVar2 + 0x10);
    }
    if ((0 < (int)uVar3) && (*(long *)pNVar4 == 0)) break;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
    }
    param_1 = *(Node **)pNVar2;
  }
  local_20 = param_1;
  uStack_18 = param_3;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
  ::
  __emplace_unique_key_args<v8::internal::compiler::Node*,std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>
            ((__tree<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::__map_value_compare<v8::internal::compiler::Node*,std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>,std::__ndk1::less<v8::internal::compiler::Node*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::Node*,v8::internal::ZoneHandleSet<v8::internal::Map>>>>
              *)this,&local_20,(pair *)&local_20);
  return;
}

