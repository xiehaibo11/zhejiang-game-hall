
/* v8::internal::interpreter::BytecodeArrayAccessor::SetOffset(int) */

void __thiscall
v8::internal::interpreter::BytecodeArrayAccessor::SetOffset(BytecodeArrayAccessor *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(int *)(this + 8) = param_1;
  if ((-1 < param_1) && (iVar1 = (**(code **)**(undefined8 **)this)(), param_1 < iVar1)) {
    uVar2 = (**(code **)(**(long **)this + 0x10))(*(long **)this,*(undefined4 *)(this + 8));
    if ((uVar2 & 0xff) < 4) {
      this[0xc] = SUB41(0x4020402 >> (ulong)((uVar2 & 3) << 3),0);
      *(undefined4 *)(this + 0x10) = 1;
    }
    else {
      this[0xc] = (BytecodeArrayAccessor)0x1;
      *(undefined4 *)(this + 0x10) = 0;
    }
  }
  return;
}

