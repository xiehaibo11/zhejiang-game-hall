
/* v8::internal::BuiltinContinuationFrameInfo::BuiltinContinuationFrameInfo(int,
   v8::internal::CallInterfaceDescriptor const&, v8::internal::RegisterConfiguration const*, bool,
   v8::internal::DeoptimizeKind, v8::internal::BuiltinContinuationMode, v8::internal::FrameInfoKind)
    */

void __thiscall
v8::internal::BuiltinContinuationFrameInfo::BuiltinContinuationFrameInfo
          (BuiltinContinuationFrameInfo *this,int param_1,long param_2,long param_3,uint param_5,
          char param_6,uint param_7,int param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  *this = (BuiltinContinuationFrameInfo)(param_6 == '\x02' | (byte)(param_5 ^ 1) & 1);
  if (param_7 < 4) {
    iVar1 = *(int *)(param_3 + 0x18);
    uVar3 = (uint)(param_8 == 1);
    iVar2 = BuiltinContinuationFrameConstants::PaddingSlotCount(iVar1);
    param_1 = param_1 - **(int **)(param_2 + 8);
    iVar4 = (uVar3 | 0xcU >> ((ulong)param_7 & 0xf) & 1) +
            ((uint)(param_6 == '\x02') | (param_5 ^ 1) & 1 | uVar3) + param_1;
    *(int *)(this + 4) = param_1;
    *(int *)(this + 8) = iVar4;
    uVar3 = ShouldPadArguments(iVar4);
    iVar4 = 2;
    if (param_8 != 1 && (param_5 & 1) == 0) {
      iVar4 = 0;
    }
    iVar2 = iVar1 + iVar4 + iVar2;
    *(uint *)(this + 0xc) = (iVar2 + (uVar3 & 1) + *(int *)(this + 8)) * 8 + 0x38;
    *(int *)(this + 0x10) = iVar2 * 8 + 0x28;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

