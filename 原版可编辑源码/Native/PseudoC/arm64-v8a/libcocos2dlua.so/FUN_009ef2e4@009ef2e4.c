
void FUN_009ef2e4(void *param_1,size_t param_2,size_t param_3,long param_4)

{
                    /* catch() { ... } // from try @ 009ef1c4 with catch @ 009ef2ec */
  *(size_t *)(param_4 + 0x110) = *(long *)(param_4 + 0x110) + param_3 * param_2;
  fwrite(param_1,param_2,param_3,*(FILE **)(param_4 + 0xe8));
  return;
}

