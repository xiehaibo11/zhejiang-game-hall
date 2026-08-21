
/* cocos2d::TMXLayer::atlasIndexForExistantZ(int) */

ulong __thiscall cocos2d::TMXLayer::atlasIndexForExistantZ(TMXLayer *this,int param_1)

{
  long lVar1;
  void *pvVar2;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00f4d6e4 to 0104d6eb has its CatchHandler @ 00f4d8b4 */
                    /* try { // try from 00f4d6ec to 0104d743 has its CatchHandler @ 00f4d8b8 */
  local_2c = param_1;
  pvVar2 = bsearch(&local_2c,(void *)(*(size_t **)(this + 0x3d0))[2],**(size_t **)(this + 0x3d0),8,
                   FUN_00f4db28);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return (ulong)((long)pvVar2 - *(long *)(*(long *)(this + 0x3d0) + 0x10)) >> 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

