
void FUN_00a24f6c(long param_1)

{
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x8cb8));
  *(undefined8 *)(param_1 + 0x8cc0) = 0;
  *(undefined8 *)(param_1 + 0x8cb8) = 0;
  FUN_00a3992c(param_1);
  FUN_00a3953c(param_1);
  memset((void *)(param_1 + 0x220),0,0x6e8);
  FUN_00a39970((void *)(param_1 + 0x220));
  memset((void *)(param_1 + 0x940),0,400);
  FUN_00a47c70(param_1);
  *(uint *)(param_1 + 0x978) = *(uint *)(param_1 + 0x978) | 0x10;
  *(undefined8 *)(param_1 + 0x8b10) = 0xffffffffffffffff;
  return;
}

