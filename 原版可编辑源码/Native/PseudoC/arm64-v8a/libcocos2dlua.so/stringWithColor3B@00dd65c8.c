
/* cocos2d::ui::RichText::stringWithColor3B(cocos2d::Color3B const&) */

void cocos2d::ui::RichText::stringWithColor3B(Color3B *param_1)

{
  long lVar1;
  undefined1 *in_x1;
  undefined8 *in_x8;
  undefined4 local_30;
  undefined3 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00dd6614 with catch @ 00dd65dc */
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00dd6be4(&local_30,8,8,"#%02x%02x%02x",*in_x1,in_x1[1],in_x1[2]);
                    /* try { // try from 00dd660c to 00ed6613 has its CatchHandler @ 00dd6640 */
                    /* try { // try from 00dd6614 to 00ed665b has its CatchHandler @ 00dd65dc */
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0xe;
  *(undefined1 *)(in_x8 + 1) = 0;
  *(uint *)((long)in_x8 + 4) = CONCAT31(uStack_2c,local_30._3_1_);
  *(undefined4 *)((long)in_x8 + 1) = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00dd660c with catch @ 00dd6640 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

