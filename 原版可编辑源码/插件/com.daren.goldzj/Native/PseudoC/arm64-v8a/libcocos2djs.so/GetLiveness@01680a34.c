
/* v8::internal::compiler::BytecodeLivenessMap::GetLiveness(int) const */

long __thiscall
v8::internal::compiler::BytecodeLivenessMap::GetLiveness(BytecodeLivenessMap *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)this;
  uVar4 = (ulong)(*(int *)(this + 8) - 1U & param_1);
  lVar3 = lVar2 + uVar4 * 0x20;
  if (*(char *)(lVar3 + 0x1c) != '\0') {
    iVar1 = *(int *)(lVar2 + uVar4 * 0x20);
    while (iVar1 != param_1) {
      uVar4 = (ulong)((int)uVar4 + 1U & *(int *)(this + 8) - 1U);
      lVar3 = lVar2 + uVar4 * 0x20;
      if (*(char *)(lVar3 + 0x1c) == '\0') break;
      iVar1 = *(int *)(lVar2 + uVar4 * 0x20);
    }
  }
  lVar2 = 0;
  if (*(char *)(lVar3 + 0x1c) != '\0') {
    lVar2 = lVar3;
  }
  return lVar2 + 8;
}

