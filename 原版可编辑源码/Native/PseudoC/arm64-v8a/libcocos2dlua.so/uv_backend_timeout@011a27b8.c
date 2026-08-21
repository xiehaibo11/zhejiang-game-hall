
undefined8 uv_backend_timeout(long param_1)

{
  undefined8 uVar1;
  
  if (((*(int *)(param_1 + 0x30) == 0) &&
      (((*(int *)(param_1 + 8) != 0 || (*(int *)(param_1 + 0x20) != 0)) &&
       (param_1 + 0x1a0 == *(long *)(param_1 + 0x1a0))))) &&
     (((long *)(param_1 + 0x48) == *(long **)(param_1 + 0x48) && (*(long *)(param_1 + 0x168) == 0)))
     ) {
    uVar1 = FUN_0119f0f8();
    return uVar1;
  }
  return 0;
}

