
/* v8::internal::Factory::CreateStrictFunctionMap(v8::internal::FunctionMode,
   v8::internal::Handle<v8::internal::JSFunction>) */

ulong * __thiscall
v8::internal::Factory::CreateStrictFunctionMap(Factory *this,uint param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  Logger *this_00;
  ulong local_90;
  Descriptor aDStack_88 [32];
  long local_68;
  
  lVar2 = tpidr_el0;
  bVar3 = (param_2 & 0xc) == 0;
  iVar8 = 0x20;
  if (bVar3) {
    iVar8 = 0x1c;
  }
  local_68 = *(long *)(lVar2 + 0x28);
  iVar9 = 1;
  if (!bVar3) {
    iVar9 = 2;
  }
  iVar1 = (param_2 & 1) + ((param_2 & 2) >> 1);
  if ((param_2 & 1) == 0) {
    iVar9 = iVar9 + 1;
  }
  lVar4 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0x28,3,1,0);
  *(undefined4 *)(lVar4 + -1) = *(undefined4 *)(this + 0xd0);
  uVar5 = InitializeMap(this,lVar4,0x439,iVar8 + iVar1 * 4,3,iVar1);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(this + 0x95a0);
    if (puVar6 == *(ulong **)(this + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar5;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
  }
  bVar3 = (param_2 & 0xc) != 0;
  *(byte *)(*puVar6 + 9) = *(byte *)(*puVar6 + 9) & 0x7f | bVar3 << 7;
  *(byte *)(*puVar6 + 9) = *(byte *)(*puVar6 + 9) & 0xbf | bVar3 << 6;
  *(byte *)(*puVar6 + 9) = *(byte *)(*puVar6 + 9) | 2;
  Map::SetPrototype(this,puVar6,param_3,1);
  Map::EnsureDescriptorSlack(this,puVar6,iVar9 + iVar1);
  Descriptor::AccessorConstant(aDStack_88,this + 0x7b8,this + 0xe58,3);
  local_90 = *puVar6;
  Map::AppendDescriptor((Map *)&local_90,(Isolate *)this,aDStack_88);
  bVar3 = (param_2 & 1) == 0;
  if (bVar3) {
    Descriptor::AccessorConstant(aDStack_88,this + 0x820,this + 0xe50,3);
    local_90 = *puVar6;
    Map::AppendDescriptor((Map *)&local_90,(Isolate *)this,aDStack_88);
  }
  else {
    Descriptor::DataField(aDStack_88,this,this + 0x820,0,3,4);
    local_90 = *puVar6;
    Map::AppendDescriptor((Map *)&local_90,(Isolate *)this,aDStack_88);
  }
  if ((param_2 & 2) != 0) {
    Descriptor::DataField(aDStack_88,this,this + 0xb78,!bVar3,2,4);
    local_90 = *puVar6;
    Map::AppendDescriptor((Map *)&local_90,(Isolate *)this,aDStack_88);
  }
  if ((param_2 & 0xc) != 0) {
    uVar7 = 6;
    if ((param_2 & 4) == 0) {
      uVar7 = 7;
    }
    Descriptor::AccessorConstant(aDStack_88,this + 0x908,this + 0xe60,uVar7);
    local_90 = *puVar6;
    Map::AppendDescriptor((Map *)&local_90,(Isolate *)this,aDStack_88);
  }
  this_00 = *(Logger **)(this + 0x9558);
  uVar5 = Logger::is_logging(this_00);
  if ((uVar5 & 1) != 0) {
    Logger::MapDetails(this_00,*puVar6);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

