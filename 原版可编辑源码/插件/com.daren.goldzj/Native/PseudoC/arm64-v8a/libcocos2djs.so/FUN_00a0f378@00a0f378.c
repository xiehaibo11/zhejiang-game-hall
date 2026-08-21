
/* WARNING: Removing unreachable block (ram,0x00a0f3e0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa0 : 0x00a0f3ec */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a0f378(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_60;
  
                    /* try { // try from 00a0f380 to 00b0f3d3 has its CatchHandler @ 00a0f380
                       catch() { ... } // from try @ 00a0f380 with catch @ 00a0f380
                       catch() { ... } // from try @ 00a0f4bc with catch @ 00a0f380 */
                    /* try { // try from 00a0f3d4 to 00b0f3df has its CatchHandler @ 00a0f5b0 */
  FUN_00a31374(param_1,param_2,local_60);
                    /* try { // try from 00a0f3f4 to 00b0f41b has its CatchHandler @ 00a0f5c0 */
  return;
}

