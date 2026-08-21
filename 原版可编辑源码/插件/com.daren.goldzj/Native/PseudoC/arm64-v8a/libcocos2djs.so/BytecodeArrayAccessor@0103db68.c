
/* v8::internal::interpreter::BytecodeArrayAccessor::BytecodeArrayAccessor(std::__ndk1::unique_ptr<v8::internal::interpreter::AbstractBytecodeArray,
   std::__ndk1::default_delete<v8::internal::interpreter::AbstractBytecodeArray> >, int) */

void __thiscall
v8::internal::interpreter::BytecodeArrayAccessor::BytecodeArrayAccessor
          (BytecodeArrayAccessor *this,undefined8 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_2;
  *param_2 = 0;
  *(int *)(this + 8) = param_3;
  this[0xc] = (BytecodeArrayAccessor)0x1;
  *(undefined8 **)this = puVar3;
  *(undefined4 *)(this + 0x10) = 0;
  if ((-1 < param_3) && (iVar1 = (**(code **)*puVar3)(), param_3 < iVar1)) {
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

