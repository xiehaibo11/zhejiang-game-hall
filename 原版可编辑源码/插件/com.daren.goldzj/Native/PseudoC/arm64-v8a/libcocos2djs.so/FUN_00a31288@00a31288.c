
undefined8 FUN_00a31288(long param_1)

{
                    /* try { // try from 00a31288 to 00b3136b has its CatchHandler @ 00a310d0 */
  *(undefined8 *)(param_1 + 0x980) = 0;
  *(undefined4 *)(param_1 + 0x8d68) = 0;
  *(undefined8 *)(param_1 + 0x8d6c) = 0;
  *(undefined8 *)(param_1 + 0x9a0) = 0;
  *(undefined8 *)(param_1 + 0x998) = 0;
  *(undefined8 *)(param_1 + 0x9c0) = 0;
  *(undefined8 *)(param_1 + 0x9b8) = 0;
  *(undefined8 *)(param_1 + 0x9b0) = 0;
  *(undefined8 *)(param_1 + 0x9a8) = 0;
  *(undefined8 *)(param_1 + 0x8d78) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x8d80) = 0;
  *(undefined8 *)(param_1 + 0x8da8) = 0;
                    /* catch() { ... } // from try @ 00a31150 with catch @ 00a312fc */
  *(undefined8 *)(param_1 + 0x8da0) = 0;
  *(undefined8 *)(param_1 + 0x8d98) = 0;
                    /* catch() { ... } // from try @ 00a31144 with catch @ 00a31300 */
  *(undefined8 *)(param_1 + 0x8d90) = 0;
  *(undefined8 *)(param_1 + 0x8d88) = 0;
                    /* catch() { ... } // from try @ 00a31124 with catch @ 00a31304 */
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x8db0));
  *(undefined8 *)(param_1 + 0x8db0) = 0;
                    /* catch() { ... } // from try @ 00a3115c with catch @ 00a31314 */
  (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x8db8));
  *(undefined8 *)(param_1 + 0x8db8) = 0;
  *(undefined1 *)(param_1 + 0x8dc0) = 0;
  *(undefined1 *)(param_1 + 0x8df8) = 0;
  *(undefined8 *)(param_1 + 0x8df0) = 0;
  *(undefined4 *)(param_1 + 0x8e38) = 0;
  *(undefined8 *)(param_1 + 0x8e30) = 0;
  *(undefined8 *)(param_1 + 0x8e28) = 0;
  FUN_00a18660(param_1);
                    /* try { // try from 00a3136c to 00b313bf has its CatchHandler @ 00a3136c
                       catch() { ... } // from try @ 00a3136c with catch @ 00a3136c
                       catch() { ... } // from try @ 00a314cc with catch @ 00a3136c */
  return 0;
}

