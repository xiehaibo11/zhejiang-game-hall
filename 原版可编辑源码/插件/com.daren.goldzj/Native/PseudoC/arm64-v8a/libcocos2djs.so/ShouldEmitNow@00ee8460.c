
/* v8::internal::ConstantPool::ShouldEmitNow(v8::internal::Jump, unsigned long) const */

bool __thiscall
v8::internal::ConstantPool::ShouldEmitNow(ConstantPool *this,int param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  
  if (*(long *)(this + 0x20) == 0) {
LAB_00ee85bc:
    bVar3 = false;
  }
  else {
    if ((ulong)(*(long *)(this + 0x30) + *(long *)(this + 0x28)) < 0x201) {
      iVar4 = PrologueSize(this,1);
      lVar2 = *(long *)(this + 0x28);
      lVar1 = param_3 + ((int)lVar2 * 4 + (int)*(long *)(this + 0x30) * 8 + iVar4 + 4) +
              (long)(*(int *)(*(long *)this + 0x20) - *(int *)(*(long *)this + 0x10));
      if (*(long *)(this + 0x30) != 0) {
        uVar5 = (lVar1 + lVar2 * -4) - (long)*(int *)(this + 0xc);
        if (0xfffff < uVar5 + 0x400) goto LAB_00ee85b4;
        if (0xffff < uVar5) {
          return true;
        }
        if (param_2 == 0 && 0xffff < uVar5) {
          return true;
        }
      }
      if (lVar2 == 0) goto LAB_00ee85bc;
      uVar5 = lVar1 - *(int *)(this + 8);
      if (uVar5 + 0x400 < 0x100000) {
        return 0xffff < uVar5 || param_2 == 0 && 0xffff < uVar5;
      }
    }
LAB_00ee85b4:
    bVar3 = true;
  }
  return bVar3;
}

