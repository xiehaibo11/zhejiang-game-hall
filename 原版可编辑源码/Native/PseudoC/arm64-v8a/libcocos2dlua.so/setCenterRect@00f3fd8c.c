
/* cocos2d::Sprite::setCenterRect(cocos2d::Rect const&) */

void __thiscall cocos2d::Sprite::setCenterRect(Sprite *this,Rect *param_1)

{
  long lVar1;
  ulong uVar2;
  Rect aRStack_58 [16];
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*(uint *)(this + 0x42c) | 2) == 2) &&
     (uVar2 = Size::equals((Size *)(this + 0x438),(Size *)&Size::ZERO), (uVar2 & 1) == 0)) {
    Rect::Rect((Rect *)&local_48,(Rect *)param_1);
    Rect::Rect(aRStack_58,local_48 / *(float *)(this + 0x410),fStack_44 / *(float *)(this + 0x414),
               local_40 / *(float *)(this + 0x410),fStack_3c / *(float *)(this + 0x414));
    (**(code **)(*(long *)this + 0x570))(this,aRStack_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

