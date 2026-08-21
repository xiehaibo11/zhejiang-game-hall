
/* dragonBones::CCSlot::_replaceDisplay(void*, bool) */

void dragonBones::CCSlot::_replaceDisplay(void *param_1,bool param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  
  plVar2 = (long *)(ulong)param_2;
                    /* try { // try from 00d9f420 to 00e9f443 has its CatchHandler @ 00d9f6f4 */
  uVar3 = *(undefined8 *)((long)param_1 + 400);
  plVar4 = *(long **)(*(long *)((long)param_1 + 0x68) + 0xb8);
                    /* try { // try from 00d9f444 to 00e9f463 has its CatchHandler @ 00d9f738 */
  uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
  (**(code **)(*plVar4 + 0x210))(plVar4,uVar3,uVar1);
                    /* try { // try from 00d9f464 to 00e9f46b has its CatchHandler @ 00d9f6cc */
                    /* try { // try from 00d9f46c to 00e9f477 has its CatchHandler @ 00d9f6bc */
  (**(code **)(*plVar4 + 0x280))(plVar4,plVar2,1);
  *(undefined4 *)((long)param_1 + 0x188) = 0x3f800000;
                    /* try { // try from 00d9f488 to 00e9f4ab has its CatchHandler @ 00d9f738 */
  return;
}

