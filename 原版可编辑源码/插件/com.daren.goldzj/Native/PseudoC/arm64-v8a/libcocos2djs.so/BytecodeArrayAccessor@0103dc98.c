
/* v8::internal::interpreter::BytecodeArrayAccessor::BytecodeArrayAccessor(v8::internal::Handle<v8::internal::BytecodeArray>,
   int) */

void __thiscall
v8::internal::interpreter::BytecodeArrayAccessor::BytecodeArrayAccessor
          (BytecodeArrayAccessor *this,long *param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x10);
  *plVar2 = (long)&PTR_FUN_01caa638;
  plVar2[1] = (long)param_2;
  *(long **)this = plVar2;
  *(int *)(this + 8) = param_3;
  this[0xc] = (BytecodeArrayAccessor)0x1;
  *(undefined4 *)(this + 0x10) = 0;
  if ((-1 < param_3) && (param_3 < *(int *)(*param_2 + 3) >> 1)) {
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,param_3);
    if ((uVar1 & 0xff) < 4) {
      this[0xc] = SUB41(0x4020402 >> (ulong)((uVar1 & 3) << 3),0);
      *(undefined4 *)(this + 0x10) = 1;
    }
    else {
      this[0xc] = (BytecodeArrayAccessor)0x1;
      *(undefined4 *)(this + 0x10) = 0;
    }
  }
  return;
}

