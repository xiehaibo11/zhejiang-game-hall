
/* v8::internal::TorqueInterfaceDescriptor<7>::InitializePlatformIndependent(v8::internal::CallInterfaceDescriptorData*)
    */

void __thiscall
v8::internal::TorqueInterfaceDescriptor<7>::InitializePlatformIndependent
          (TorqueInterfaceDescriptor<7> *this,CallInterfaceDescriptorData *param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined1 auVar3 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 auStack_4a [2];
  undefined2 *local_48;
  undefined2 *local_40;
  undefined2 *puStack_38;
  
  uVar1 = (**(code **)(*(long *)this + 0x20))();
  local_48 = operator_new(2);
  puVar2 = local_48 + 1;
  puStack_38 = local_48 + 1;
  *local_48 = uVar1;
  local_40 = puVar2;
  auVar3 = (**(code **)(*(long *)this + 0x28))(this);
  local_58 = auVar3._0_8_;
  local_50 = auVar3._8_4_;
  local_4c = auVar3._12_2_;
  std::__ndk1::vector<v8::internal::MachineType,std::__ndk1::allocator<v8::internal::MachineType>>::
  insert<v8::internal::MachineType*>
            ((vector<v8::internal::MachineType,std::__ndk1::allocator<v8::internal::MachineType>> *)
             &local_48,puVar2,&local_58,auStack_4a);
  CallInterfaceDescriptorData::InitializePlatformIndependent(param_1,0,1,7,local_48);
  if (local_48 != (undefined2 *)0x0) {
    local_40 = local_48;
    operator_delete(local_48);
  }
  return;
}

