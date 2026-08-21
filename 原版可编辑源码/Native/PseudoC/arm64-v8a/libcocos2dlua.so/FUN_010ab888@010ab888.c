
void FUN_010ab888(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x67) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0x129) = 0;
    *(undefined4 *)(param_1 + 0x18a) = 0;
                    /* try { // try from 010ab8b0 to 011ab8f7 has its CatchHandler @ 010ab8b0
                       catch() { ... } // from try @ 010ab8b0 with catch @ 010ab8b0
                       catch() { ... } // from try @ 010ab900 with catch @ 010ab8b0 */
    ft_mem_free(*param_1,param_1);
    return;
  }
  return;
}

