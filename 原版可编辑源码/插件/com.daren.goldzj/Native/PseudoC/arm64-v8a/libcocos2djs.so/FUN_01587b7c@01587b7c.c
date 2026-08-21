
long * FUN_01587b7c(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  iVar1 = *(int *)(**(long **)(param_1 + 0x18) + 7) + *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    plVar2 = (long *)v8::internal::Factory::NewProperSubString
                               (*(Factory **)(param_1 + 8),plVar2,iVar1,*(undefined4 *)(*plVar2 + 7)
                               );
  }
  return plVar2;
}

