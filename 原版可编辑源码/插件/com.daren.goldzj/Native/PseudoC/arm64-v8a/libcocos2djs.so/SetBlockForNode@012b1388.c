
/* v8::internal::compiler::Schedule::SetBlockForNode(v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::Schedule::SetBlockForNode(Schedule *this,BasicBlock *param_1,Node *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  vector<v8::internal::compiler::BasicBlock*,v8::internal::ZoneAllocator<v8::internal::compiler::BasicBlock*>>
  *this_00;
  
  this_00 = (vector<v8::internal::compiler::BasicBlock*,v8::internal::ZoneAllocator<v8::internal::compiler::BasicBlock*>>
             *)(this + 0x28);
  lVar1 = *(long *)this_00;
  uVar3 = *(long *)(this + 0x30) - lVar1 >> 3;
  if (uVar3 <= ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff)) {
    uVar2 = (ulong)((int)((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) + 1);
    if (uVar3 < uVar2) {
      std::__ndk1::
      vector<v8::internal::compiler::BasicBlock*,v8::internal::ZoneAllocator<v8::internal::compiler::BasicBlock*>>
      ::__append(this_00,uVar2 - uVar3);
      lVar1 = *(long *)this_00;
    }
    else if (uVar3 != uVar2) {
      *(ulong *)(this + 0x30) = lVar1 + uVar2 * 8;
    }
  }
  *(BasicBlock **)(lVar1 + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 8) = param_1;
  return;
}

