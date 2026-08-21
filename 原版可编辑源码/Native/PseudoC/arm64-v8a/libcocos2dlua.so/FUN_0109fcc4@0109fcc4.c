
void FUN_0109fcc4(undefined8 *param_1)

{
                    /* catch() { ... } // from try @ 0109fd10 with catch @ 0109fcd4
                       catch() { ... } // from try @ 0109fd5c with catch @ 0109fcd4 */
  ft_mem_free(param_1[7],*param_1);
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

