
undefined8 uv_pipe_pending_type(long param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xec) != -1)) {
    uVar1 = uv__handle_type();
    return uVar1;
  }
  return 0;
}

