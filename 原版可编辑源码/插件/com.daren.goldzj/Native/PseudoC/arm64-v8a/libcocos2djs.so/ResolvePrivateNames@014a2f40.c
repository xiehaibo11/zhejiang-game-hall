
/* v8::internal::ClassScope::ResolvePrivateNames(v8::internal::ParseInfo*) */

undefined8 __thiscall
v8::internal::ClassScope::ResolvePrivateNames(ClassScope *this,ParseInfo *param_1)

{
  int iVar1;
  int iVar2;
  Variable *pVVar3;
  VariableProxy *pVVar4;
  VariableProxy *this_00;
  VariableProxy *pVVar5;
  VariableProxy *pVVar6;
  
  pVVar4 = (VariableProxy *)(*(ulong *)(this + 0x88) & 0xfffffffffffffff8);
  if ((pVVar4 != (VariableProxy *)0x0) &&
     (this_00 = *(VariableProxy **)pVVar4, this_00 != (VariableProxy *)0x0)) {
    pVVar6 = pVVar4;
    if (((byte)this_00[5] >> 1 & 1) != 0) {
      do {
        pVVar6 = this_00;
        this_00 = *(VariableProxy **)(pVVar6 + 0x10);
        if (this_00 == (VariableProxy *)0x0) break;
      } while (((byte)this_00[5] >> 1 & 1) != 0);
      pVVar6 = pVVar6 + 0x10;
    }
    pVVar5 = *(VariableProxy **)(pVVar4 + 8);
    while (pVVar6 != pVVar5) {
      pVVar3 = (Variable *)LookupPrivateName(this,this_00);
      if (pVVar3 == (Variable *)0x0) {
        pVVar4 = this_00 + 8;
        pVVar6 = pVVar4;
        if ((*(uint *)(this_00 + 4) >> 8 & 1) != 0) {
          pVVar6 = (VariableProxy *)(*(long *)pVVar4 + 8);
        }
        iVar2 = *(int *)(*(long *)pVVar6 + 0x10);
        iVar1 = iVar2;
        if (iVar2 < 0) {
          iVar1 = iVar2 + 1;
        }
        iVar1 = iVar1 >> 1;
        if (*(char *)(*(long *)pVVar6 + 0x1c) != '\0') {
          iVar1 = iVar2;
        }
        if ((*(uint *)(this_00 + 4) >> 8 & 1) != 0) {
          pVVar4 = (VariableProxy *)(*(long *)pVVar4 + 8);
        }
        PendingCompilationErrorHandler::ReportMessageAt
                  ((PendingCompilationErrorHandler *)(param_1 + 0xb0),*(int *)this_00,
                   iVar1 + *(int *)this_00,0x103,*(undefined8 *)pVVar4);
        return 0;
      }
      VariableProxy::BindTo(this_00,pVVar3);
      pVVar6 = (VariableProxy *)(*(long *)pVVar6 + 0x10);
      this_00 = *(VariableProxy **)pVVar6;
      if ((this_00 != (VariableProxy *)0x0) && (((byte)this_00[5] >> 1 & 1) != 0)) {
        do {
          pVVar6 = this_00;
          this_00 = *(VariableProxy **)(pVVar6 + 0x10);
          if (this_00 == (VariableProxy *)0x0) break;
        } while (((byte)this_00[5] >> 1 & 1) != 0);
        pVVar6 = pVVar6 + 0x10;
      }
    }
    *(undefined8 *)pVVar4 = 0;
    *(VariableProxy **)(pVVar4 + 8) = pVVar4;
  }
  return 1;
}

