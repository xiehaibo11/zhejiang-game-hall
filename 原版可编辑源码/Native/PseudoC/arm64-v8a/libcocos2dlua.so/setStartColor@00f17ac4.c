
/* cocos2d::LayerRadialGradient::setStartColor(cocos2d::Color3B const&) */

void __thiscall
cocos2d::LayerRadialGradient::setStartColor(LayerRadialGradient *this,Color3B *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Color4B::Color4B((Color4B *)&local_2c,param_1,0xff);
  uVar3 = NEON_ushl(CONCAT44(local_2c,local_2c),0xfffffff0fffffff8,4);
  *(uint *)(this + 0x31d) = local_2c;
  *(float *)(this + 0x330) = (float)(local_2c >> 0x18) / 255.0;
  uVar2 = NEON_ucvtf(uVar3 & 0xff000000ff,4);
  *(float *)(this + 0x324) = (float)(local_2c & 0xff) / 255.0;
  *(ulong *)(this + 0x328) = CONCAT44((float)((ulong)uVar2 >> 0x20) / 255.0,(float)uVar2 / 255.0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00f17aac with catch @ 00f17b68 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

