
/* v8::internal::interpreter::BytecodeArrayAccessor::ApplyDebugBreak() */

void __thiscall
v8::internal::interpreter::BytecodeArrayAccessor::ApplyDebugBreak(BytecodeArrayAccessor *this)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar1 = (**(code **)(**(long **)this + 0x10))(*(long **)this,*(undefined4 *)(this + 8));
  uVar2 = Bytecodes::IsDebugBreak();
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar1 = Bytecodes::GetDebugBreak(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0103de40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)this + 0x18))(*(long **)this,*(undefined4 *)(this + 8),uVar1);
  return;
}

