
/* cocos2d::ActionInstant::step(float) */

void cocos2d::ActionInstant::step(float param_1)

{
  long lVar1;
  Action *in_x0;
  ulong uVar2;
  undefined4 local_2c;
  long local_28;
  
                    /* catch() { ... } // from try @ 00ed7a64 with catch @ 00ed85e4
                       catch() { ... } // from try @ 00ed84e8 with catch @ 00ed85e4 */
                    /* catch() { ... } // from try @ 00ed7ab8 with catch @ 00ed85e8 */
                    /* catch() { ... } // from try @ 00ed7a78 with catch @ 00ed85ec */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00ed80b4 with catch @ 00ed85fc */
                    /* catch() { ... } // from try @ 00ed80c8 with catch @ 00ed8600 */
                    /* catch() { ... } // from try @ 00ed7d00 with catch @ 00ed8604 */
                    /* catch() { ... } // from try @ 00ed8018 with catch @ 00ed8608 */
  local_2c = 0x3f800000;
                    /* catch() { ... } // from try @ 00ed8000 with catch @ 00ed8618 */
                    /* catch() { ... } // from try @ 00ed8200 with catch @ 00ed861c */
                    /* catch() { ... } // from try @ 00ed7d5c with catch @ 00ed8620 */
                    /* catch() { ... } // from try @ 00ed7d70 with catch @ 00ed8624 */
                    /* catch() { ... } // from try @ 00ed7b24 with catch @ 00ed8628 */
  if ((*(int *)(in_x0 + 0x48) != 2) ||
     (uVar2 = ScriptEngineManager::sendActionEventToJS(in_x0,0,&local_2c), (uVar2 & 1) == 0)) {
                    /* catch() { ... } // from try @ 00ed7bac with catch @ 00ed8638 */
    (**(code **)(*(long *)in_x0 + 0x48))(local_2c);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

