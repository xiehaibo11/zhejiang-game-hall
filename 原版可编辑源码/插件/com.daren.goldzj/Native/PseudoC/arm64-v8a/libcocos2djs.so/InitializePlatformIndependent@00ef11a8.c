
/* v8::internal::TorqueInterfaceDescriptor<3>::InitializePlatformIndependent(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::TorqueInterfaceDescriptor<3>::InitializePlatformIndependent
          (TorqueInterfaceDescriptor<3> *this,CallInterfaceDescriptorData *param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *puStack_38;
  
  uVar1 = (**(code **)(*(long *)this + 0x20))();
  local_48 = operator_new(2);
  puVar3 = local_48 + 1;
  puStack_38 = local_48 + 1;
  *local_48 = uVar1;
  local_40 = puVar3;
  uVar2 = (**(code **)(*(long *)this + 0x28))(this);
  local_50 = (undefined4)uVar2;
  local_4c = (undefined2)((ulong)uVar2 >> 0x20);
  std::__ndk1::vector<v8::internal::MachineType,std::__ndk1::allocator<v8::internal::MachineType>>::
  insert<v8::internal::MachineType*>
            ((vector<v8::internal::MachineType,std::__ndk1::allocator<v8::internal::MachineType>> *)
             &local_48,puVar3,&local_50,(ulong)&local_50 | 6);
  CallInterfaceDescriptorData::InitializePlatformIndependent(param_1,0,1,3,local_48);
  if (local_48 != (undefined2 *)0x0) {
    local_40 = local_48;
    operator_delete(local_48);
  }
  return;
}

