
/* v8::internal::compiler::RegisterAllocationData::InitializePhiMap(v8::internal::compiler::InstructionBlock
   const*, v8::internal::compiler::PhiInstruction*) */

undefined8 * __thiscall
v8::internal::compiler::RegisterAllocationData::InitializePhiMap
          (RegisterAllocationData *this,InstructionBlock *param_1,PhiInstruction *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  Zone *pZVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong local_40;
  undefined8 *puStack_38;
  
  pZVar3 = *(Zone **)this;
  puVar4 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar4) < 0x38) {
    puVar4 = (undefined8 *)Zone::NewExpand(pZVar3,0x38);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar4 + 7;
  }
  pZVar3 = *(Zone **)this;
  *puVar4 = param_2;
  puVar4[1] = param_1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 6) = 0x20;
  puVar4[4] = 0;
  puVar4[5] = pZVar3;
  lVar2 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
  if (lVar2 != 0) {
    puVar5 = *(undefined8 **)(pZVar3 + 0x10);
    uVar6 = lVar2 * 2;
    if (uVar6 < (ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar5) ||
        uVar6 - (*(long *)(pZVar3 + 0x18) - (long)puVar5) == 0) {
      *(ulong *)(pZVar3 + 0x10) = (long)puVar5 + uVar6;
    }
    else {
      puVar5 = (undefined8 *)Zone::NewExpand(pZVar3,uVar6);
    }
    puVar1 = (undefined8 *)puVar4[2];
    puVar7 = (undefined8 *)puVar4[3];
    puVar8 = puVar5;
    while (puVar7 != puVar1) {
      puVar7 = puVar7 + -1;
      puVar8 = puVar8 + -1;
      *puVar8 = *puVar7;
    }
    puVar4[2] = puVar8;
    puVar4[3] = puVar5;
    puVar4[4] = puVar5 + (lVar2 >> 2);
  }
  local_40 = (ulong)*(uint *)param_2;
  puStack_38 = puVar4;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,v8::internal::compiler::RegisterAllocationData::PhiMapValue*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::RegisterAllocationData::PhiMapValue*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::RegisterAllocationData::PhiMapValue*>>>
  ::
  __emplace_unique_key_args<int,std::__ndk1::pair<int,v8::internal::compiler::RegisterAllocationData::PhiMapValue*>>
            ((__tree<std::__ndk1::__value_type<int,v8::internal::compiler::RegisterAllocationData::PhiMapValue*>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::compiler::RegisterAllocationData::PhiMapValue*>,std::__ndk1::less<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<int,v8::internal::compiler::RegisterAllocationData::PhiMapValue*>>>
              *)(this + 0x28),(int *)&local_40,(pair *)&local_40);
  return puVar4;
}

