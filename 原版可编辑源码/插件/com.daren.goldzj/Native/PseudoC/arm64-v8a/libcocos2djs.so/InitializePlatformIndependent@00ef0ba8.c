
/* v8::internal::TorqueInterfaceDescriptor<8>::InitializePlatformIndependent(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::TorqueInterfaceDescriptor<8>::InitializePlatformIndependent
          (TorqueInterfaceDescriptor<8> *this,CallInterfaceDescriptorData *param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined1 local_58 [16];
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *puStack_38;
  
  uVar1 = (**(code **)(*(long *)this + 0x20))();
  local_48 = operator_new(2);
  puVar2 = local_48 + 1;
  puStack_38 = local_48 + 1;
  *local_48 = uVar1;
  local_40 = puVar2;
  local_58 = (**(code **)(*(long *)this + 0x28))(this);
  std::__ndk1::vector<v8::internal::MachineType,std::__ndk1::allocator<v8::internal::MachineType>>::
  insert<v8::internal::MachineType*>
            ((vector<v8::internal::MachineType,std::__ndk1::allocator<v8::internal::MachineType>> *)
             &local_48,puVar2,local_58,&local_48);
  CallInterfaceDescriptorData::InitializePlatformIndependent(param_1,0,1,8,local_48);
  if (local_48 != (undefined2 *)0x0) {
    local_40 = local_48;
    operator_delete(local_48);
  }
  return;
}

