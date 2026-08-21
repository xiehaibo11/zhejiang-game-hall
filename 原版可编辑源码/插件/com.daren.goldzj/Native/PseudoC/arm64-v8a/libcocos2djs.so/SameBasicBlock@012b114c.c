
/* v8::internal::compiler::Schedule::SameBasicBlock(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) const */

bool __thiscall
v8::internal::compiler::Schedule::SameBasicBlock(Schedule *this,Node *param_1,Node *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = *(long *)(this + 0x28);
  uVar3 = (uint)((ulong)(*(long *)(this + 0x30) - lVar2) >> 3);
  if (((uint)((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) < uVar3) &&
     (lVar1 = *(long *)(lVar2 + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 8), lVar1 != 0)) {
    if ((uint)((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) < uVar3) {
      lVar2 = *(long *)(lVar2 + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 8);
    }
    else {
      lVar2 = 0;
    }
    return lVar1 == lVar2;
  }
  return false;
}

