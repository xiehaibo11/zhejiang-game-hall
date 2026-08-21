
/* v8::internal::Scope::FindVariableDeclaredIn(v8::internal::Scope*, v8::internal::VariableMode) */

long __thiscall v8::internal::Scope::FindVariableDeclaredIn(Scope *this,long param_1,byte param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = *(long **)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 3;
  plVar5 = *(long **)(param_1 + 0x20);
  do {
    plVar4 = plVar5;
    if (plVar3 <= plVar4) {
      return 0;
    }
    plVar5 = plVar4 + 3;
  } while (*plVar4 == 0);
  do {
    lVar2 = *plVar4;
    uVar1 = *(uint *)(lVar2 + 0x18) >> 3;
    while( true ) {
      uVar1 = *(int *)(this + 0x28) - 1U & uVar1;
      plVar5 = (long *)(*(long *)(this + 0x20) + (ulong)uVar1 * 0x18);
      if (*plVar5 == 0) break;
      if (*plVar5 == lVar2) {
        if ((((lVar2 != 0) && (plVar5 != (long *)0x0)) && (plVar5[1] != 0)) &&
           ((*(byte *)(plVar5[1] + 0x28) & 0xf) <= param_3)) {
          return lVar2;
        }
        break;
      }
      uVar1 = uVar1 + 1;
    }
    do {
      plVar4 = plVar4 + 3;
      if (plVar3 <= plVar4) {
        return 0;
      }
    } while (*plVar4 == 0);
  } while( true );
}

