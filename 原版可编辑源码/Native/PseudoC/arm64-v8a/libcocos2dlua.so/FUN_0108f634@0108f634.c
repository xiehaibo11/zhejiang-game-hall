
undefined8 FUN_0108f634(long param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
                    /* try { // try from 0108f640 to 0118f64f has its CatchHandler @ 0108f904 */
  ft_mem_strcpyn(param_3,*(undefined8 *)(*(long *)(param_1 + 0x280) + (param_2 & 0xffffffff) * 8),
                 param_4);
  return 0;
}

