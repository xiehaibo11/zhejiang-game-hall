
/* v8::internal::interpreter::BytecodeArrayAccessor::UpdateOperandScale() */

void __thiscall
v8::internal::interpreter::BytecodeArrayAccessor::UpdateOperandScale(BytecodeArrayAccessor *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(this + 8);
  if ((-1 < iVar1) && (iVar2 = (**(code **)**(undefined8 **)this)(), iVar1 < iVar2)) {
    uVar3 = (**(code **)(**(long **)this + 0x10))(*(long **)this,*(undefined4 *)(this + 8));
    if ((uVar3 & 0xff) < 4) {
      this[0xc] = SUB41(0x4020402 >> (ulong)((uVar3 & 3) << 3),0);
      *(undefined4 *)(this + 0x10) = 1;
    }
    else {
      this[0xc] = (BytecodeArrayAccessor)0x1;
      *(undefined4 *)(this + 0x10) = 0;
    }
  }
  return;
}

