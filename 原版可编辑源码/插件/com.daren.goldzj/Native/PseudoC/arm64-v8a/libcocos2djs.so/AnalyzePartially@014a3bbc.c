
/* v8::internal::Scope::AnalyzePartially(v8::internal::DeclarationScope*,
   v8::internal::AstNodeFactory*, v8::base::ThreadedListBase<v8::internal::VariableProxy,
   v8::base::EmptyBase, v8::internal::VariableProxy::UnresolvedNext>*, bool) */

void __thiscall
v8::internal::Scope::AnalyzePartially
          (Scope *this,DeclarationScope *param_1,AstNodeFactory *param_2,ThreadedListBase *param_3,
          bool param_4)

{
  Scope *pSVar1;
  Variable *this_00;
  Zone *this_01;
  long lVar2;
  long lVar3;
  Scope *pSVar4;
  VariableProxy *pVVar5;
  VariableProxy *pVVar6;
  
  pSVar1 = this;
  do {
    pSVar4 = pSVar1;
    pVVar5 = *(VariableProxy **)(pSVar4 + 0x48);
joined_r0x014a3c04:
    if (pVVar5 != (VariableProxy *)0x0) {
      do {
        if (((byte)pVVar5[5] >> 1 & 1) == 0) {
          this_00 = Lookup<(v8::internal::Scope::ScopeLookupMode)0>
                              (pVVar5,pSVar4,*(Scope **)(param_1 + 8),(Scope *)0x0,false);
          if (this_00 == (Variable *)0x0) {
            if (*(char *)(*(long *)(param_1 + 8) + 0x80) != '\x04' || param_4) {
              this_01 = *(Zone **)param_2;
              pVVar6 = *(VariableProxy **)(this_01 + 0x10);
              if ((ulong)(*(long *)(this_01 + 0x18) - (long)pVVar6) < 0x18) {
                pVVar6 = (VariableProxy *)Zone::NewExpand(this_01,0x18);
              }
              else {
                *(VariableProxy **)(this_01 + 0x10) = pVVar6 + 0x18;
              }
              VariableProxy::VariableProxy(pVVar6,pVVar5);
              **(undefined8 **)(param_3 + 8) = pVVar6;
              pVVar6 = pVVar6 + 0x10;
              lVar2 = *(long *)pVVar6;
              if ((lVar2 != 0) && ((*(byte *)(lVar2 + 5) >> 1 & 1) != 0)) {
                do {
                  lVar3 = lVar2;
                  lVar2 = *(long *)(lVar3 + 0x10);
                  if (lVar2 == 0) break;
                } while ((*(byte *)(lVar2 + 5) >> 1 & 1) != 0);
                pVVar6 = (VariableProxy *)(lVar3 + 0x10);
              }
              *(VariableProxy **)(param_3 + 8) = pVVar6;
            }
          }
          else {
            *(ushort *)(this_00 + 0x28) = *(ushort *)(this_00 + 0x28) | 0x800;
            if ((char)pVVar5[4] < '\0') goto code_r0x014a3c54;
          }
        }
        pVVar5 = *(VariableProxy **)(pVVar5 + 0x10);
        if (pVVar5 == (VariableProxy *)0x0) break;
      } while( true );
    }
    *(undefined8 *)(pSVar4 + 0x48) = 0;
    *(Scope **)(pSVar4 + 0x50) = pSVar4 + 0x48;
    pSVar1 = *(Scope **)(pSVar4 + 0x10);
    if (*(Scope **)(pSVar4 + 0x10) == (Scope *)0x0) {
      while( true ) {
        if (*(Scope **)(pSVar4 + 0x18) != (Scope *)0x0) break;
        if (pSVar4 == this) {
          return;
        }
        pSVar4 = *(Scope **)(pSVar4 + 8);
      }
      pSVar1 = *(Scope **)(pSVar4 + 0x18);
      if (pSVar4 == this) {
        return;
      }
    }
  } while( true );
code_r0x014a3c54:
  Variable::SetMaybeAssigned(this_00);
  pVVar5 = *(VariableProxy **)(pVVar5 + 0x10);
  goto joined_r0x014a3c04;
}

