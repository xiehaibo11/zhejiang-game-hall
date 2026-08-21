
/* v8::internal::compiler::InstructionSelector::CanAddressRelativeToRootsRegister(v8::internal::ExternalReference
   const&) const */

undefined8 __thiscall
v8::internal::compiler::InstructionSelector::CanAddressRelativeToRootsRegister
          (InstructionSelector *this,ExternalReference *param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(**(long **)(this + 8) + 0x48) >> 2 & 1) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x164) == 1) {
    return 1;
  }
  uVar1 = TurboAssemblerBase::IsAddressableThroughRootRegister
                    ((Isolate *)**(undefined8 **)(this + 0x10),param_1);
  return uVar1;
}

