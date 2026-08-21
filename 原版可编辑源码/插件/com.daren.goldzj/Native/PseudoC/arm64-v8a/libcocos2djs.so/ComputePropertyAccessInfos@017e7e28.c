
/* v8::internal::compiler::AccessInfoFactory::ComputePropertyAccessInfos(std::__ndk1::vector<v8::internal::Handle<v8::internal::Map>,
   std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map> > > const&,
   v8::internal::Handle<v8::internal::Name>, v8::internal::compiler::AccessMode,
   v8::internal::ZoneVector<v8::internal::compiler::PropertyAccessInfo>*) const */

void __thiscall
v8::internal::compiler::AccessInfoFactory::ComputePropertyAccessInfos
          (AccessInfoFactory *this,long *param_1,undefined8 param_3,undefined4 param_4,
          vector<v8::internal::compiler::PropertyAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>>
          *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 local_e8 [2];
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = (undefined8 *)param_1[1];
  for (puVar1 = (undefined8 *)*param_1; puVar1 != puVar3; puVar1 = puVar1 + 1) {
    ComputePropertyAccessInfo(local_e8,this,*puVar1,param_3,param_4);
    puVar2 = *(undefined4 **)(param_5 + 8);
    if (puVar2 < *(undefined4 **)(param_5 + 0x10)) {
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined8 *)(puVar2 + 2) = 0;
      *puVar2 = local_e8[0];
      *(undefined8 *)(puVar2 + 8) = local_c8;
      *(undefined8 *)(puVar2 + 10) = 0;
      *(long *)(puVar2 + 2) = local_e0;
      *(long *)(puVar2 + 4) = local_d8;
      *(undefined8 *)(puVar2 + 6) = local_d0;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      *(undefined8 *)(puVar2 + 0xc) = 0;
      *(undefined8 *)(puVar2 + 0xe) = 0;
      *(undefined8 *)(puVar2 + 0x10) = local_a8;
      *(long *)(puVar2 + 10) = local_c0;
      *(long *)(puVar2 + 0xc) = local_b8;
      *(undefined8 *)(puVar2 + 0xe) = local_b0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      *(undefined8 *)(puVar2 + 0x20) = uStack_68;
      *(undefined8 *)(puVar2 + 0x1e) = uStack_70;
      *(undefined8 *)(puVar2 + 0x1c) = uStack_78;
      *(undefined8 *)(puVar2 + 0x1a) = local_80;
      *(undefined8 *)(puVar2 + 0x18) = uStack_88;
      *(undefined8 *)(puVar2 + 0x16) = uStack_90;
      *(undefined8 *)(puVar2 + 0x14) = uStack_98;
      *(undefined8 *)(puVar2 + 0x12) = local_a0;
      *(long *)(param_5 + 8) = *(long *)(param_5 + 8) + 0x88;
    }
    else {
      std::__ndk1::
      vector<v8::internal::compiler::PropertyAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>>
      ::__push_back_slow_path<v8::internal::compiler::PropertyAccessInfo>
                (param_5,(PropertyAccessInfo *)local_e8);
      if (local_c0 != 0) {
        local_b8 = local_c0;
      }
      if (local_e0 != 0) {
        local_d8 = local_e0;
      }
    }
  }
  return;
}

