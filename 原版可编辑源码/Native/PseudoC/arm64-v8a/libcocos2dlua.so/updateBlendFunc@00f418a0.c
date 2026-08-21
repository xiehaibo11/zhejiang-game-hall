
/* cocos2d::Sprite::updateBlendFunc() */

void __thiscall cocos2d::Sprite::updateBlendFunc(Sprite *this)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((*(Texture2D **)(this + 0x368) == (Texture2D *)0x0) ||
     (uVar1 = Texture2D::hasPremultipliedAlpha(*(Texture2D **)(this + 0x368)), (uVar1 & 1) == 0)) {
    puVar3 = &BlendFunc::ALPHA_NON_PREMULTIPLIED;
    uVar2 = 0;
  }
  else {
    puVar3 = (undefined8 *)&BlendFunc::ALPHA_PREMULTIPLIED;
    uVar2 = 1;
  }
  *(undefined8 *)(this + 0x35c) = *puVar3;
                    /* WARNING: Could not recover jumptable at 0x00f41904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x4e0))(this,uVar2);
  return;
}

