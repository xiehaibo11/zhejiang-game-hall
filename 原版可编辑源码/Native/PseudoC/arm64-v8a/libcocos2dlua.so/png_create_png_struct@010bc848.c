
void * png_create_png_struct
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  void *__dest;
  __jmp_buf_tag _Stack_6c8;
  undefined1 auStack_5c8 [256];
  code *local_4c8;
  __jmp_buf_tag *local_4c0;
  undefined8 local_4b8;
  code *local_410;
  code *local_408;
  void *local_400;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  memset(auStack_5c8,0,0x560);
  local_134 = 0x7fffffff7fffffff;
  local_12c = 0;
  local_128 = 0;
  png_set_mem_fn(auStack_5c8,param_5,param_6,param_7);
  png_set_error_fn(auStack_5c8,param_2,param_3,param_4);
  iVar2 = setjmp(&_Stack_6c8);
  __dest = (void *)0x0;
  if (iVar2 == 0) {
    local_4b8 = 0;
    local_4c8 = longjmp;
    local_4c0 = &_Stack_6c8;
    iVar2 = png_user_version_check(auStack_5c8,param_1);
    if (iVar2 == 0) {
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)png_malloc_warn(auStack_5c8,0x560);
      if (__dest != (void *)0x0) {
        local_410 = png_zalloc;
        local_408 = png_zfree;
        local_4c0 = (__jmp_buf_tag *)0x0;
        local_4b8 = 0;
        local_4c8 = (code *)0x0;
        local_400 = __dest;
        memcpy(__dest,auStack_5c8,0x560);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return __dest;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

