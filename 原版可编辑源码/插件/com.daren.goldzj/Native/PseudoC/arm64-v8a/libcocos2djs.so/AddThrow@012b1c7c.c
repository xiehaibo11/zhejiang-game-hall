
/* v8::internal::compiler::Schedule::AddThrow(v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::Schedule::AddThrow(Schedule *this,BasicBlock *param_1,Node *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  BasicBlock *this_00;
  vector<v8::internal::compiler::BasicBlock*,v8::internal::ZoneAllocator<v8::internal::compiler::BasicBlock*>>
  *this_01;
  
  *(undefined4 *)(param_1 + 0x34) = 8;
  if ((*(long *)(param_1 + 0x40) != *(long *)(param_1 + 0x48)) &&
     (puVar1 = (undefined8 *)(*(long *)(param_1 + 0x48) + -8), (Node *)*puVar1 == param_2)) {
    *(undefined8 **)(param_1 + 0x48) = puVar1;
  }
  *(Node **)(param_1 + 0x38) = param_2;
  this_01 = (vector<v8::internal::compiler::BasicBlock*,v8::internal::ZoneAllocator<v8::internal::compiler::BasicBlock*>>
             *)(this + 0x28);
  lVar2 = *(long *)this_01;
  uVar4 = *(long *)(this + 0x30) - lVar2 >> 3;
  if (uVar4 <= ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff)) {
    uVar3 = (ulong)((int)((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) + 1);
    if (uVar4 < uVar3) {
      std::__ndk1::
      vector<v8::internal::compiler::BasicBlock*,v8::internal::ZoneAllocator<v8::internal::compiler::BasicBlock*>>
      ::__append(this_01,uVar3 - uVar4);
      lVar2 = *(long *)this_01;
    }
    else if (uVar4 != uVar3) {
      *(ulong *)(this + 0x30) = lVar2 + uVar3 * 8;
    }
  }
  *(BasicBlock **)(lVar2 + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 8) = param_1;
  this_00 = *(BasicBlock **)(this + 0x70);
  if (this_00 != param_1) {
    BasicBlock::AddSuccessor(param_1,this_00);
    BasicBlock::AddPredecessor(this_00,param_1);
    return;
  }
  return;
}

