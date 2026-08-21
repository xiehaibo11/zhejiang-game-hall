
/* v8::internal::DeclarationScope::RewriteReplGlobalVariables() */

void __thiscall v8::internal::DeclarationScope::RewriteReplGlobalVariables(DeclarationScope *this)

{
  long *plVar1;
  long *plVar2;
  
  if (((byte)this[0x82] >> 3 & 1) != 0) {
    plVar1 = *(long **)(this + 0x20);
    while (plVar2 = plVar1, plVar2 < *(long **)(this + 0x20) + (ulong)*(uint *)(this + 0x28) * 3) {
      plVar1 = plVar2 + 3;
      if (*plVar2 != 0) {
        do {
          Variable::RewriteLocationForRepl((Variable *)plVar2[1]);
          do {
            plVar2 = plVar2 + 3;
            if ((long *)(*(long *)(this + 0x20) + (ulong)*(uint *)(this + 0x28) * 0x18) <= plVar2) {
              return;
            }
          } while (*plVar2 == 0);
        } while( true );
      }
    }
  }
  return;
}

