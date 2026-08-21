
/* v8::internal::Factory::CreateClassFunctionMap(v8::internal::Handle<v8::internal::JSFunction>) */

ulong * __thiscall v8::internal::Factory::CreateClassFunctionMap(Factory *this,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  Logger *this_00;
  ulong local_70;
  Descriptor aDStack_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0x28,3,1,0);
  *(undefined4 *)(lVar2 + -1) = *(undefined4 *)(this + 0xd0);
  uVar3 = InitializeMap(this,lVar2,0x439,0x20,3,0);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(this + 0x95a0);
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar3);
  }
  *(byte *)(*puVar4 + 9) = *(byte *)(*puVar4 + 9) | 0x80;
  *(byte *)(*puVar4 + 9) = *(byte *)(*puVar4 + 9) | 0x40;
  *(uint *)(*puVar4 + 0xb) = *(uint *)(*puVar4 + 0xb) | 0x100000;
  *(byte *)(*puVar4 + 9) = *(byte *)(*puVar4 + 9) | 2;
  Map::SetPrototype(this,puVar4,param_2,1);
  Map::EnsureDescriptorSlack(this,puVar4,2);
  Descriptor::AccessorConstant(aDStack_68,this + 0x7b8,this + 0xe58,3);
  local_70 = *puVar4;
  Map::AppendDescriptor((Map *)&local_70,(Isolate *)this,aDStack_68);
  Descriptor::AccessorConstant(aDStack_68,this + 0x908,this + 0xe60,7);
  local_70 = *puVar4;
  Map::AppendDescriptor((Map *)&local_70,(Isolate *)this,aDStack_68);
  this_00 = *(Logger **)(this + 0x9558);
  uVar3 = Logger::is_logging(this_00);
  if ((uVar3 & 1) != 0) {
    Logger::MapDetails(this_00,*puVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

