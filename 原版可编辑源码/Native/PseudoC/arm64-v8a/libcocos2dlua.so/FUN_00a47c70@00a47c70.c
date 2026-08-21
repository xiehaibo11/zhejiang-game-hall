
undefined8 FUN_00a47c70(long param_1)

{
                    /* try { // try from 00a47c78 to 00b47ccf has its CatchHandler @ 00a47c78
                       catch() { ... } // from try @ 00a47c78 with catch @ 00a47c78
                       catch() { ... } // from try @ 00a47d04 with catch @ 00a47c78
                       catch() { ... } // from try @ 00a47db8 with catch @ 00a47c78
                       catch() { ... } // from try @ 00a47e14 with catch @ 00a47c78
                       catch() { ... } // from try @ 00a47e60 with catch @ 00a47c78 */
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
                    /* try { // try from 00a47cd0 to 00b47d03 has its CatchHandler @ 00a47e90 */
  *(undefined8 *)(param_1 + 0x8da8) = 0;
  *(undefined8 *)(param_1 + 0x8da0) = 0;
  *(undefined8 *)(param_1 + 0x8d98) = 0;
  *(undefined8 *)(param_1 + 0x8d90) = 0;
  *(undefined8 *)(param_1 + 0x8d88) = 0;
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x8db0));
  *(undefined8 *)(param_1 + 0x8db0) = 0;
                    /* try { // try from 00a47d04 to 00b47d53 has its CatchHandler @ 00a47c78 */
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x8db8));
  *(undefined8 *)(param_1 + 0x8db8) = 0;
  *(undefined1 *)(param_1 + 0x8dc0) = 0;
  *(undefined1 *)(param_1 + 0x8df8) = 0;
  *(undefined8 *)(param_1 + 0x8df0) = 0;
  *(undefined4 *)(param_1 + 0x8e38) = 0;
  *(undefined8 *)(param_1 + 0x8e30) = 0;
  *(undefined8 *)(param_1 + 0x8e28) = 0;
  FUN_00a2e048(param_1);
                    /* try { // try from 00a47d54 to 00b47db7 has its CatchHandler @ 00a47e90 */
  return 0;
}

