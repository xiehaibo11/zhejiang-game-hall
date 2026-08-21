
undefined8
uv_replace_allocator(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined8 uVar1;
  
  if ((((param_1 == (undefined *)0x0) || (param_2 == (undefined *)0x0)) ||
      (param_3 == (undefined *)0x0)) || (param_4 == (undefined *)0x0)) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = 0;
    PTR_malloc_01d289a0 = param_1;
    PTR_realloc_01d289a8 = param_2;
    PTR_calloc_01d289b0 = param_3;
    PTR_free_01d289b8 = param_4;
  }
  return uVar1;
}

