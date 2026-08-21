
undefined8 uv_backend_timeout(long param_1)

{
  undefined8 uVar1;
  
  if (((*(int *)(param_1 + 0x30) == 0) &&
      (((*(int *)(param_1 + 8) != 0 || (*(long *)(param_1 + 0x20) != param_1 + 0x20)) &&
       (*(long *)(param_1 + 0x1a0) == param_1 + 0x1a0)))) &&
     ((*(long *)(param_1 + 0x48) == param_1 + 0x48 && (*(long *)(param_1 + 0x168) == 0)))) {
    uVar1 = uv__next_timeout();
    return uVar1;
  }
  return 0;
}

