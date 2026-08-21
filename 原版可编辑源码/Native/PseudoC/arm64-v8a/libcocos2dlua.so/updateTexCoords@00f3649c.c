
/* cocos2d::ParticleSystemQuad::updateTexCoords() */

void __thiscall cocos2d::ParticleSystemQuad::updateTexCoords(ParticleSystemQuad *this)

{
  long lVar1;
  Rect aRStack_40 [16];
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x510) != 0) {
    Texture2D::getContentSize();
    Rect::Rect(aRStack_40,0.0,0.0,local_30,fStack_2c);
    initTexCoordsWithRect(this,aRStack_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

