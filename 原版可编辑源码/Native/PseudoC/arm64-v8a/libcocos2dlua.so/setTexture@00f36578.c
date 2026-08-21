
/* cocos2d::ParticleSystemQuad::setTexture(cocos2d::Texture2D*) */

void __thiscall cocos2d::ParticleSystemQuad::setTexture(ParticleSystemQuad *this,Texture2D *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Rect aRStack_50 [16];
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Texture2D::getContentSize();
  Rect::Rect(aRStack_50,0.0,0.0,local_40,fStack_3c);
  if (*(long *)(this + 0x510) != 0) {
    iVar2 = Texture2D::getName(param_1);
    iVar3 = Texture2D::getName(*(Texture2D **)(this + 0x510));
    if (iVar2 == iVar3) goto LAB_00f365f4;
  }
  ParticleSystem::setTexture((ParticleSystem *)this,param_1);
LAB_00f365f4:
  initTexCoordsWithRect(this,aRStack_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

