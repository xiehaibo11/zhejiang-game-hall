
undefined8
uv_replace_allocator(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffea;
  if ((((param_1 != (undefined *)0x0) && (param_2 != (undefined *)0x0)) &&
      (param_3 != (undefined *)0x0)) && (param_4 != (undefined *)0x0)) {
    uVar1 = 0;
    PTR_malloc_01781850 = param_1;
    PTR_realloc_01781858 = param_2;
    PTR_calloc_01781860 = param_3;
    PTR_free_01781868 = param_4;
  }
  return uVar1;
}

