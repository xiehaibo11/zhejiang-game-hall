
/* v8::internal::Factory::CreateSloppyFunctionMap(v8::internal::FunctionMode,
   v8::internal::MaybeHandle<v8::internal::JSFunction>) */

ulong * __thiscall
v8::internal::Factory::CreateSloppyFunctionMap(Factory *this,uint param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined4 uVar6;
  int iVar7;
  Logger *this_00;
  ulong local_90;
  Descriptor aDStack_88 [32];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  bVar2 = (param_2 & 0xc) == 0;
  iVar7 = 0x20;
  if (bVar2) {
    iVar7 = 0x1c;
  }
  uVar6 = 4;
  if (!bVar2) {
    uVar6 = 5;
  }
  lVar3 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0x28,3,1,0);
  *(undefined4 *)(lVar3 + -1) = *(undefined4 *)(this + 0xd0);
  uVar4 = InitializeMap(this,lVar3,0x439,iVar7 + (param_2 & 1) * 4,3,param_2 & 1);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(this + 0x95a0);
    if (puVar5 == *(ulong **)(this + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar4;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
  }
  bVar2 = (param_2 & 0xc) != 0;
  *(byte *)(*puVar5 + 9) = *(byte *)(*puVar5 + 9) & 0x7f | bVar2 << 7;
  *(byte *)(*puVar5 + 9) = *(byte *)(*puVar5 + 9) & 0xbf | bVar2 << 6;
  *(byte *)(*puVar5 + 9) = *(byte *)(*puVar5 + 9) | 2;
  if (param_3 != 0) {
    Map::SetPrototype(this,puVar5,param_3,1);
  }
  Map::EnsureDescriptorSlack(this,puVar5,uVar6);
  Descriptor::AccessorConstant(aDStack_88,this + 0x7b8,this + 0xe58,3);
  local_90 = *puVar5;
  Map::AppendDescriptor((Map *)&local_90,(Isolate *)this,aDStack_88);
  if ((param_2 & 1) == 0) {
    Descriptor::AccessorConstant(aDStack_88,this + 0x820,this + 0xe50,3);
  }
  else {
    Descriptor::DataField(aDStack_88,this,this + 0x820,0,3,4);
  }
  local_90 = *puVar5;
  Map::AppendDescriptor((Map *)&local_90,(Isolate *)this,aDStack_88);
  Descriptor::AccessorConstant(aDStack_88,this + 0x4c8,this + 0xe40,7);
  local_90 = *puVar5;
  Map::AppendDescriptor((Map *)&local_90,(Isolate *)this,aDStack_88);
  Descriptor::AccessorConstant(aDStack_88,this + 0x588,this + 0xe48,7);
  local_90 = *puVar5;
  Map::AppendDescriptor((Map *)&local_90,(Isolate *)this,aDStack_88);
  if ((param_2 & 0xc) != 0) {
    uVar6 = 6;
    if ((param_2 & 4) == 0) {
      uVar6 = 7;
    }
    Descriptor::AccessorConstant(aDStack_88,this + 0x908,this + 0xe60,uVar6);
    local_90 = *puVar5;
    Map::AppendDescriptor((Map *)&local_90,(Isolate *)this,aDStack_88);
  }
  this_00 = *(Logger **)(this + 0x9558);
  uVar4 = Logger::is_logging(this_00);
  if ((uVar4 & 1) != 0) {
    Logger::MapDetails(this_00,*puVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

