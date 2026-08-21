
void bn_set_static_words(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | 2;
  bn_correct_top();
  return;
}

