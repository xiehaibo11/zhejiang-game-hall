
void FUN_009ae068(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
                    /* try { // try from 009ae068 to 00aae06f has its CatchHandler @ 009ae5ec */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009ae084 to 00aae08b has its CatchHandler @ 009ae5b4 */
  plVar2 = *(long **)(*(long *)(param_1 + 0x18) + 0x80);
  if (plVar2 != (long *)0x0) {
    local_48 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 009ae0a8 to 00aae0af has its CatchHandler @ 009ae550 */
    uStack_40 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 009ae0b4 to 00aae0cb has its CatchHandler @ 009ae4fc */
    (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_40,&local_48);
  }
  cocos2d::Ref::release(*(Ref **)(param_1 + 0x10));
  cocos2d::Ref::release(*(Ref **)(param_1 + 0x18));
                    /* try { // try from 009ae0d4 to 00aae0db has its CatchHandler @ 009ae4f4 */
                    /* try { // try from 009ae0dc to 00aae0fb has its CatchHandler @ 009ae538 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

