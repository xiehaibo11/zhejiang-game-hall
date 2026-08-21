
/* v8::internal::Debug::EnsureBreakInfo(v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

undefined8 __thiscall v8::internal::Debug::EnsureBreakInfo(Debug *this,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_50;
  ulong uStack_48;
  
  local_50 = *param_2;
  uVar1 = SharedFunctionInfo::HasBreakInfo((SharedFunctionInfo *)&local_50);
  if ((uVar1 & 1) == 0) {
    uVar4 = *param_2;
    uVar3 = uVar4 & 0xffffffff00000000;
    uVar1 = uVar3 | *(uint *)(uVar4 + 0xf);
    if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x5b) {
      uVar1 = uVar3 | *(uint *)(uVar1 + 0xb);
    }
    if (((uVar1 & 1) == 0) || ((int)uVar1 != *(int *)((uVar1 & 0xffffffff00000000) + 0xa0))) {
      local_50 = uVar1;
      uVar1 = Script::IsUserJavaScript((Script *)&local_50);
      if (((uVar1 & 1) == 0) ||
         (((*(uint *)(uVar4 + 3) & 1) != 0 &&
          (*(short *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | *(uint *)(uVar4 + 3)) - 1)) == 0x57)))
         ) goto LAB_00f07438;
LAB_00f0746c:
      IsCompiledScope::IsCompiledScope
                ((IsCompiledScope *)&local_50,*param_2,*param_2 & 0xffffffff00000000);
      if (((uStack_48 & 0xff) != 0) ||
         (uVar1 = Compiler::Compile(param_2,1,&local_50), (uVar1 & 1) != 0)) {
        CreateBreakInfo(this,param_2);
        goto LAB_00f074ac;
      }
    }
    else {
LAB_00f07438:
      uVar1 = *param_2;
      if (((*(uint *)(uVar1 + 0x1b) >> 5 & 1) != 0) ||
         (((*(uint *)(uVar1 + 3) & 1) != 0 &&
          (*(short *)((uVar1 & 0xffffffff00000000 | 7) +
                     (ulong)*(uint *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 3)) - 1
                                     )) == 0x4e)))) goto LAB_00f0746c;
    }
    uVar2 = 0;
  }
  else {
LAB_00f074ac:
    uVar2 = 1;
  }
  return uVar2;
}

