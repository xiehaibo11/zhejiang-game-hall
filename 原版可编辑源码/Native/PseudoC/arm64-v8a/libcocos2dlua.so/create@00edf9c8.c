
/* cocos2d::MoveTo::create(float, cocos2d::Vec2 const&) */

void cocos2d::MoveTo::create(float param_1,Vec2 *param_2)

{
  long lVar1;
  Vec3 aVStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00edf878 with catch @ 00edf9ec */
  Vec3::Vec3(aVStack_38,*(float *)param_2,*(float *)(param_2 + 4),0.0);
  create(param_1,aVStack_38);
                    /* catch() { ... } // from try @ 00edf848 with catch @ 00edfa0c */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00edf8fc with catch @ 00edfa20
                       catch() { ... } // from try @ 00edf988 with catch @ 00edfa20 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00edf920 with catch @ 00edfa30 */
  __stack_chk_fail();
}

