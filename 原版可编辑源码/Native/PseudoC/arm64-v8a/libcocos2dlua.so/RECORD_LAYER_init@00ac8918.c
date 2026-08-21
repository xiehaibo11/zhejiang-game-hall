
void RECORD_LAYER_init(long *param_1,long param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_2 + 0x1120) = 1;
  SSL3_RECORD_clear(param_1 + 0x87,0x20);
  return;
}

