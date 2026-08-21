
/* cocos2d::unzGoToFirstFile(void*) */

undefined8 cocos2d::unzGoToFirstFile(void *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (void *)0x0) {
                    /* try { // try from 010296ec to 0112975b has its CatchHandler @ 010296ec
                       catch() { ... } // from try @ 010296ec with catch @ 010296ec
                       catch() { ... } // from try @ 01029768 with catch @ 010296ec */
    *(undefined8 *)((long)param_1 + 0x80) = 0;
    *(undefined8 *)((long)param_1 + 0x88) = *(undefined8 *)((long)param_1 + 0xa8);
    uVar1 = FUN_01028a58(param_1,(long)param_1 + 0xb0,(long)param_1 + 0x138,0,0,0,0,0,0);
    *(ulong *)((long)param_1 + 0x90) = (ulong)((int)uVar1 == 0);
    return uVar1;
  }
  return 0xffffff9a;
}

