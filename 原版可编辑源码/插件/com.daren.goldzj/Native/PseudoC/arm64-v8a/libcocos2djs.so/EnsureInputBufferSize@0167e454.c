
/* v8::internal::compiler::BytecodeGraphBuilder::EnsureInputBufferSize(int) */

long __thiscall
v8::internal::compiler::BytecodeGraphBuilder::EnsureInputBufferSize
          (BytecodeGraphBuilder *this,int param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  Zone *this_00;
  
  if (*(int *)(this + 0x154) < param_1) {
    this_00 = *(Zone **)(this + 8);
    uVar1 = param_1 + *(int *)(this + 0x154) + 0x40;
    uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    lVar2 = *(long *)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - lVar2) < uVar3) {
      lVar2 = Zone::NewExpand(this_00,uVar3);
    }
    else {
      *(ulong *)(this_00 + 0x10) = lVar2 + uVar3;
    }
    *(long *)(this + 0x158) = lVar2;
    *(uint *)(this + 0x154) = uVar1;
  }
  else {
    lVar2 = *(long *)(this + 0x158);
  }
  return lVar2;
}

