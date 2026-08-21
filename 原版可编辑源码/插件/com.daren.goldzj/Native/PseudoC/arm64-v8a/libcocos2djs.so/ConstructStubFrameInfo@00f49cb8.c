
/* v8::internal::ConstructStubFrameInfo::ConstructStubFrameInfo(int, bool,
   v8::internal::FrameInfoKind) */

void __thiscall
v8::internal::ConstructStubFrameInfo::ConstructStubFrameInfo
          (ConstructStubFrameInfo *this,int param_1,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = ShouldPadArguments(param_1);
  iVar2 = ((uVar3 & 1) + param_1) * 8;
  iVar1 = iVar2 + 0x10;
  if (param_4 != 1 && (param_3 & 1) == 0) {
    iVar1 = iVar2;
  }
  *(int *)this = iVar1;
  *(int *)(this + 4) = iVar1 + 0x40;
  return;
}

