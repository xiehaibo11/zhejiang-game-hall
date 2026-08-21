
/* v8::internal::compiler::BytecodeGraphBuilder::Environment::Copy() */

Environment * __thiscall
v8::internal::compiler::BytecodeGraphBuilder::Environment::Copy(Environment *this)

{
  Zone *this_00;
  Environment *pEVar1;
  undefined8 uVar2;
  
  this_00 = *(Zone **)(*(long *)this + 8);
  pEVar1 = *(Environment **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pEVar1) < 0x60) {
    pEVar1 = (Environment *)Zone::NewExpand(this_00,0x60);
  }
  else {
    *(Environment **)(this_00 + 0x10) = pEVar1 + 0x60;
  }
  *(undefined8 *)pEVar1 = *(undefined8 *)this;
  *(undefined4 *)(pEVar1 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)(pEVar1 + 0xc) = *(undefined4 *)(this + 0xc);
  *(undefined8 *)(pEVar1 + 0x10) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(pEVar1 + 0x18) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(pEVar1 + 0x20) = *(undefined8 *)(this + 0x20);
  uVar2 = *(undefined8 *)(*(long *)this + 8);
  *(undefined8 *)(pEVar1 + 0x28) = 0;
  *(undefined8 *)(pEVar1 + 0x30) = 0;
  *(undefined8 *)(pEVar1 + 0x38) = 0;
  *(undefined8 *)(pEVar1 + 0x40) = uVar2;
  *(undefined8 *)(pEVar1 + 0x48) = *(undefined8 *)(this + 0x48);
  *(undefined8 *)(pEVar1 + 0x50) = *(undefined8 *)(this + 0x50);
  *(undefined4 *)(pEVar1 + 0x58) = *(undefined4 *)(this + 0x58);
  *(undefined4 *)(pEVar1 + 0x5c) = *(undefined4 *)(this + 0x5c);
  if (pEVar1 != this) {
    std::__ndk1::
    vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
    ::assign<v8::internal::compiler::Node**>
              ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                *)(pEVar1 + 0x28),*(Node ***)(this + 0x28),*(Node ***)(this + 0x30));
  }
  return pEVar1;
}

