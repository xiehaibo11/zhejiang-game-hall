
void FUN_00d958cc(long param_1)

{
  FUN_00d95788(param_1,1);
  FUN_00d95788(param_1,0);
  jpeg_free_small(param_1,*(undefined8 *)(param_1 + 8),0xa8);
  *(undefined8 *)(param_1 + 8) = 0;
  jpeg_mem_term(param_1);
  return;
}

