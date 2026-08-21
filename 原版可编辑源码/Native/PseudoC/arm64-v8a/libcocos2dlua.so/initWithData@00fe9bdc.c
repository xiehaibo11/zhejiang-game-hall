
/* cocos2d::Texture2D::initWithData(void const*, long, cocos2d::Texture2D::PixelFormat, int, int,
   cocos2d::Size const&) */

uint cocos2d::Texture2D::initWithData(Texture2D *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
                    /* catch() { ... } // from try @ 00fe9c38 with catch @ 00fe9bdc */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_2;
  local_30 = param_3;
  uVar2 = initWithMipmaps(param_1,&local_38,1);
                    /* try { // try from 00fe9c0c to 010e9c13 has its CatchHandler @ 00fe9ca8 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

