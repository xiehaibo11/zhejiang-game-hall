
/* cocos2d::IMEDelegate::IMEDelegate() */

void __thiscall cocos2d::IMEDelegate::IMEDelegate(IMEDelegate *this)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  
                    /* try { // try from 00fab4a8 to 010ab4b3 has its CatchHandler @ 00fab584 */
                    /* try { // try from 00fab4b4 to 010ab4eb has its CatchHandler @ 00fab3b0 */
  *(undefined ***)this = &PTR__IMEDelegate_01723650;
                    /* try { // try from 00fab54c to 010ab5a3 has its CatchHandler @ 00fab3b0 */
  if (((DAT_0178fd10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0178fd10), iVar1 != 0)) {
    pvVar3 = operator_new(0x20);
    *(void **)pvVar3 = pvVar3;
    *(void **)((long)pvVar3 + 8) = pvVar3;
    DAT_0178fd08 = pvVar3;
    *(undefined8 *)((long)pvVar3 + 0x10) = 0;
    *(undefined8 *)((long)pvVar3 + 0x18) = 0;
                    /* catch() { ... } // from try @ 00fab540 with catch @ 00fab57c */
                    /* catch() { ... } // from try @ 00fab4ec with catch @ 00fab580 */
                    /* catch() { ... } // from try @ 00fab4a8 with catch @ 00fab584 */
                    /* catch() { ... } // from try @ 00fab478 with catch @ 00fab588 */
    __cxa_atexit(IMEDispatcher::~IMEDispatcher,&DAT_0178fd08,&PTR_LOOP_016979c0);
                    /* catch() { ... } // from try @ 00fab448 with catch @ 00fab58c */
                    /* catch() { ... } // from try @ 00fab418 with catch @ 00fab590 */
    __cxa_guard_release(&DAT_0178fd10);
  }
  pvVar3 = DAT_0178fd08;
  if (DAT_0178fd08 != (void *)0x0) {
    pvVar4 = *(void **)((long)DAT_0178fd08 + 8);
    if (DAT_0178fd08 != pvVar4) {
      do {
        pvVar5 = pvVar4;
                    /* try { // try from 00fab4ec to 010ab4f7 has its CatchHandler @ 00fab580 */
        if (*(IMEDelegate **)((long)pvVar4 + 0x10) == this) break;
        pvVar4 = *(void **)((long)pvVar4 + 8);
        pvVar5 = DAT_0178fd08;
                    /* try { // try from 00fab4f8 to 010ab53f has its CatchHandler @ 00fab3b0 */
      } while (DAT_0178fd08 != pvVar4);
      if (DAT_0178fd08 != pvVar5) {
        return;
      }
    }
    plVar2 = operator_new(0x18);
    plVar2[2] = (long)this;
    *plVar2 = (long)pvVar3;
    puVar6 = *(undefined8 **)((long)pvVar3 + 8);
    plVar2[1] = (long)puVar6;
    *puVar6 = plVar2;
                    /* try { // try from 00fab540 to 010ab54b has its CatchHandler @ 00fab57c */
    *(long **)((long)pvVar3 + 8) = plVar2;
    *(long *)((long)pvVar3 + 0x10) = *(long *)((long)pvVar3 + 0x10) + 1;
  }
  return;
}

