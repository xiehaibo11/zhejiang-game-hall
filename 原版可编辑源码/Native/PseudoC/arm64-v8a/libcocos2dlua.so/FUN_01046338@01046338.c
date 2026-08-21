
void FUN_01046338(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x250) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x250) = *(undefined8 *)(param_1 + 600);
  }
                    /* try { // try from 01046348 to 01146353 has its CatchHandler @ 01046544 */
  if (*(long *)(param_1 + 600) != 0) {
                    /* try { // try from 01046354 to 0114635f has its CatchHandler @ 01046528 */
    *(undefined8 *)(*(long *)(param_1 + 600) + 0x250) = *(undefined8 *)(param_1 + 0x250);
  }
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
                    /* catch() { ... } // from try @ 01046200 with catch @ 01046360
                       try { // try from 01046360 to 0114658b has its CatchHandler @ 01045eb0 */
  return;
}

