
/* v8::internal::SharedFunctionInfo::UpdateAndFinalizeExpectedNofPropertiesFromEstimate(v8::internal::FunctionLiteral*)
    */

void __thiscall
v8::internal::SharedFunctionInfo::UpdateAndFinalizeExpectedNofPropertiesFromEstimate
          (SharedFunctionInfo *this,FunctionLiteral *param_1)

{
  undefined2 uVar1;
  long lVar3;
  uint uVar4;
  uint uVar2;
  
  lVar3 = *(long *)this;
  if (((*(uint *)(lVar3 + 0x1b) >> 0x1d & 1) == 0) || ((*(uint *)(lVar3 + 0x1b) >> 10 & 1) == 0)) {
    uVar4 = *(uint *)(param_1 + 8);
    if ((*(uint *)(lVar3 + 0x1b) >> 10 & 1) != 0) {
      uVar4 = uVar4 + *(ushort *)(lVar3 + 0x17);
    }
    uVar2 = 2;
    if ((uVar4 & 0xffff) != 0) {
      uVar2 = uVar4 & 0xffff;
    }
    uVar1 = (undefined2)uVar2;
    if (0xfe < uVar2) {
      uVar1 = 0xff;
    }
    *(undefined2 *)(lVar3 + 0x17) = uVar1;
    lVar3 = *(long *)this;
    if ((*(uint *)(lVar3 + 0x1b) >> 10 & 1) != 0) {
      *(uint *)(lVar3 + 0x1b) = *(uint *)(lVar3 + 0x1b) | 0x20000000;
    }
  }
  return;
}

