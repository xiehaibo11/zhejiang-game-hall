
/* v8::internal::compiler::BytecodeGraphBuilder::Environment::Environment(v8::internal::compiler::BytecodeGraphBuilder::Environment
   const*) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::Environment::Environment
          (Environment *this,Environment *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(*(long *)param_1 + 8);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = uVar1;
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  if (this != param_1) {
    std::__ndk1::
    vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
    ::assign<v8::internal::compiler::Node**>
              ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                *)(this + 0x28),*(Node ***)(param_1 + 0x28),*(Node ***)(param_1 + 0x30));
    return;
  }
  return;
}

