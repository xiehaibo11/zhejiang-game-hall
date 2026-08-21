
/* v8::internal::ConstantPool::Check(v8::internal::Emission, v8::internal::Jump, unsigned long) */

void __thiscall
v8::internal::ConstantPool::Check(ConstantPool *this,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  Assembler *pAVar4;
  int iVar5;
  
  uVar2 = IsBlocked(this);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if ((*(long *)(this + 0x20) != 0) &&
     ((param_2 == 1 || (uVar2 = ShouldEmitNow(this,param_3,param_4), (uVar2 & 1) != 0)))) {
    iVar1 = ComputeSize(this,1,1);
    pAVar4 = *(Assembler **)this;
    if ((*(long *)(pAVar4 + 0x128) != 0) && (*(int *)(pAVar4 + 0xd0) < 1)) {
      uVar2 = (long)((int)param_4 + iVar1 + 0x400) << (param_3 != 1);
      if ((long)(uVar2 + *(long *)(pAVar4 + 0x128) * 4 +
                 (long)(*(int *)(pAVar4 + 0x20) - *(int *)(pAVar4 + 0x10)) + 8) <
          (long)*(int *)(*(long *)(pAVar4 + 0x118) + 0x20)) {
        *(int *)(pAVar4 + 0x130) = *(int *)(*(long *)(pAVar4 + 0x118) + 0x20) + -0x800;
      }
      else {
        Assembler::EmitVeneers(pAVar4,false,param_3 == 1,uVar2);
      }
    }
    pAVar4 = *(Assembler **)this;
    iVar5 = *(int *)(pAVar4 + 0x20);
    iVar3 = *(int *)(pAVar4 + 0xd8);
    while (iVar3 - iVar5 <= iVar1 + 0x40) {
      Assembler::GrowBuffer(pAVar4);
      pAVar4 = *(Assembler **)this;
      iVar5 = *(int *)(pAVar4 + 0x20);
      iVar3 = *(int *)(pAVar4 + 0xd8);
    }
    EmitAndClear(this,param_3);
  }
  SetNextCheckIn(this,0x200);
  return;
}

