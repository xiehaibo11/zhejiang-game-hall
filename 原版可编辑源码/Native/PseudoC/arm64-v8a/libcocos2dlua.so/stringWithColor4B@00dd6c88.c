
/* cocos2d::ui::RichText::stringWithColor4B(cocos2d::Color4B const&) */

void cocos2d::ui::RichText::stringWithColor4B(Color4B *param_1)

{
  long lVar1;
  undefined1 *in_x1;
  undefined8 *in_x8;
  undefined8 local_34;
  undefined1 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dd6cb0 to 00ed6cbb has its CatchHandler @ 00dd7234 */
                    /* try { // try from 00dd6cc8 to 00ed6cd3 has its CatchHandler @ 00dd7230 */
  FUN_00dd6be4(&local_34,10,10,"#%02x%02x%02x%02x",*in_x1,in_x1[1],in_x1[2],in_x1[3]);
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0x12;
  *(undefined1 *)((long)in_x8 + 10) = 0;
  *(undefined1 *)((long)in_x8 + 9) = local_2c;
  *(undefined8 *)((long)in_x8 + 1) = local_34;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

