
long * FUN_01587370(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (*(int *)(*plVar1 + 7) != *(int *)(**(long **)(param_1 + 0x18) + 0x13) >> 1) {
    plVar1 = (long *)v8::internal::Factory::NewProperSubString(*(Factory **)(param_1 + 8),plVar1,0);
  }
  return plVar1;
}

