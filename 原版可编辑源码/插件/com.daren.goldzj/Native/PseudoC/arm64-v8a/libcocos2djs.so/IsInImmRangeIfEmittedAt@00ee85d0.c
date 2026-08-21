
/* v8::internal::ConstantPool::IsInImmRangeIfEmittedAt(int) */

byte __thiscall v8::internal::ConstantPool::IsInImmRangeIfEmittedAt(ConstantPool *this,int param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  
  bVar7 = true;
  iVar3 = PrologueSize(this,1);
  lVar8 = *(long *)(this + 0x30);
  iVar4 = PrologueSize(this,1);
  lVar1 = *(long *)(this + 0x28);
  iVar5 = 0;
  if ((iVar3 + param_1 & 7U) != 0 && lVar8 != 0) {
    iVar5 = 4;
  }
  uVar6 = (ulong)(iVar4 + param_1 + (int)lVar1 * 4 + iVar5 + (int)*(long *)(this + 0x30) * 8);
  if (lVar1 != 0) {
    bVar7 = uVar6 < (long)*(int *)(this + 8) + 0x100000U;
  }
  if (*(long *)(this + 0x30) == 0) {
    bVar2 = true;
  }
  else {
    bVar2 = uVar6 + lVar1 * -4 < (long)*(int *)(this + 0xc) + 0x100000U;
  }
  return bVar7 & bVar2;
}

