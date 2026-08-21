
/* cocos2d::LayerRadialGradient::setEndColor(cocos2d::Color3B const&) */

void __thiscall
cocos2d::LayerRadialGradient::setEndColor(LayerRadialGradient *this,Color3B *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Color4B::Color4B((Color4B *)&local_2c,param_1,0xff);
  uVar2 = NEON_ushl(CONCAT44(local_2c,local_2c),0xfffffff0fffffff8,4);
  uVar3 = NEON_ucvtf(uVar2 & 0xff000000ff,4);
  *(float *)(this + 0x338) = (float)(local_2c & 0xff) / 255.0;
  *(uint *)(this + 0x334) = local_2c;
  *(ulong *)(this + 0x33c) = CONCAT44((float)((ulong)uVar3 >> 0x20) / 255.0,(float)uVar3 / 255.0);
  *(float *)(this + 0x344) = (float)(local_2c >> 0x18) / 255.0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

