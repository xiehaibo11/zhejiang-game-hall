
uint png_safe_execute(long *param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  __jmp_buf_tag _Stack_148;
  undefined8 local_48;
  uint local_3c;
  long *local_38;
  
  local_48 = *(undefined8 *)(*param_1 + 0x10);
  local_38 = param_1;
  iVar1 = setjmp(&_Stack_148);
  local_3c = (uint)(iVar1 == 0);
  if (local_3c != 0) {
    *(__jmp_buf_tag **)(*local_38 + 0x10) = &_Stack_148;
    local_3c = (*param_2)(param_3);
  }
  *(undefined8 *)(*local_38 + 0x10) = local_48;
  if (local_3c == 0) {
    png_image_free(local_38);
  }
  return local_3c;
}

