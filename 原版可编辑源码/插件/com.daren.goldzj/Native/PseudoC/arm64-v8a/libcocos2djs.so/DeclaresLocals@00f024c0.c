
/* v8::internal::ScopeIterator::DeclaresLocals(v8::internal::ScopeIterator::Mode) const */

void __thiscall v8::internal::ScopeIterator::DeclaresLocals(ScopeIterator *this,int param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  char local_74 [4];
  undefined **local_70;
  char *pcStack_68;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar3 = Type(this);
  if ((iVar3 == 0) || (iVar3 == 2)) {
    bVar2 = param_2 == 1;
    goto LAB_00f02564;
  }
  pcStack_68 = local_74;
  local_74[0] = '\0';
  local_70 = &PTR_FUN_01ca4518;
  local_50 = &local_70;
  VisitScope(this,&local_70,param_2);
  if (&local_70 == local_50) {
    pcVar4 = (code *)(*local_50)[4];
LAB_00f02554:
    (*pcVar4)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar4 = (code *)(*local_50)[5];
    goto LAB_00f02554;
  }
  bVar2 = local_74[0] != '\0';
LAB_00f02564:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}

