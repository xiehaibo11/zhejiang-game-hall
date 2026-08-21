
void _UPT_put_unwind_info(undefined8 param_1,long param_2)

{
  if (*(void **)(param_2 + 0x38) != (void *)0x0) {
    free(*(void **)(param_2 + 0x38));
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  return;
}

