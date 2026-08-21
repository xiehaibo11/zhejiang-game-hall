
/* cocos2d::IMEDelegate::detachWithIME() */

undefined8 __thiscall cocos2d::IMEDelegate::detachWithIME(IMEDelegate *this)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* try { // try from 00faba58 to 010abaff has its CatchHandler @ 00fab9b8 */
  if (((DAT_0178fd10 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0178fd10), iVar1 != 0)) {
    pvVar4 = operator_new(0x20);
    *(void **)pvVar4 = pvVar4;
    *(void **)((long)pvVar4 + 8) = pvVar4;
                    /* try { // try from 00fabb00 to 010abb17 has its CatchHandler @ 00fabb00
                       catch() { ... } // from try @ 00fabb00 with catch @ 00fabb00
                       catch() { ... } // from try @ 00fabb20 with catch @ 00fabb00 */
    DAT_0178fd08 = pvVar4;
    *(undefined8 *)((long)pvVar4 + 0x10) = 0;
    *(undefined8 *)((long)pvVar4 + 0x18) = 0;
    __cxa_atexit(IMEDispatcher::~IMEDispatcher,&DAT_0178fd08,&PTR_LOOP_016979c0);
                    /* try { // try from 00fabb18 to 010abb1f has its CatchHandler @ 00fabb38 */
                    /* try { // try from 00fabb20 to 010abb4b has its CatchHandler @ 00fabb00 */
    __cxa_guard_release(&DAT_0178fd10);
  }
  uVar3 = 0;
  if ((this != (IMEDelegate *)0x0) && (uVar3 = 0, DAT_0178fd08 != (void *)0x0)) {
    if ((*(IMEDelegate **)((long)DAT_0178fd08 + 0x18) == this) &&
       (uVar2 = (**(code **)(*(long *)this + 0x30))(this), (uVar2 & 1) != 0)) {
      *(undefined8 *)((long)DAT_0178fd08 + 0x18) = 0;
      (**(code **)(*(long *)this + 0x38))(this);
                    /* catch() { ... } // from try @ 00faba50 with catch @ 00fabac0 */
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

