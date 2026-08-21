
/* v8::internal::compiler::GraphAssembler::BasicBlockUpdater::BasicBlockUpdater(v8::internal::compiler::Schedule*,
   v8::internal::compiler::Graph*, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::GraphAssembler::BasicBlockUpdater::BasicBlockUpdater
          (BasicBlockUpdater *this,Schedule *param_1,Graph *param_2,Zone *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  *(Zone **)this = param_3;
  *(Schedule **)(this + 0x28) = param_1;
  *(Graph **)(this + 0x30) = param_2;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = uVar2;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  this[0x88] = (BasicBlockUpdater)0x0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = uVar2;
  uVar1 = *(uint *)(param_2 + 0x1c);
  *(undefined4 *)(this + 0x98) = 0;
  *(ulong *)(this + 0x90) = (ulong)uVar1;
  return;
}

