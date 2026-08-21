
/* v8::internal::ClassScope::LookupLocalPrivateName(v8::internal::AstRawString const*) */

long __thiscall
v8::internal::ClassScope::LookupLocalPrivateName(ClassScope *this,AstRawString *param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  AstRawString *pAVar6;
  
  uVar1 = *(ulong *)(this + 0x88) & 0xfffffffffffffff8;
  if (uVar1 != 0) {
    uVar2 = *(int *)(uVar1 + 0x18) - 1;
    uVar5 = (ulong)(uVar2 & *(uint *)(param_1 + 0x18) >> 3);
    plVar4 = (long *)(*(long *)(uVar1 + 0x10) + uVar5 * 0x18);
    pAVar6 = (AstRawString *)*plVar4;
    while (pAVar6 != (AstRawString *)0x0) {
      if (pAVar6 == param_1) {
        lVar3 = 0;
        if ((param_1 != (AstRawString *)0x0) && (plVar4 != (long *)0x0)) {
          lVar3 = plVar4[1];
        }
        return lVar3;
      }
      uVar5 = (ulong)((int)uVar5 + 1U & uVar2);
      plVar4 = (long *)(*(long *)(uVar1 + 0x10) + uVar5 * 0x18);
      pAVar6 = (AstRawString *)*plVar4;
    }
  }
  return 0;
}

