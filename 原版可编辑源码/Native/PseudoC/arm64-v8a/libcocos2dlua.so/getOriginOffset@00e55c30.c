
/* cocos2d::PUParticle3DQuadRender::getOriginOffset(int&, int&) */

void __thiscall
cocos2d::PUParticle3DQuadRender::getOriginOffset
          (PUParticle3DQuadRender *this,int *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(uint *)(this + 0xe4) < 9) {
    lVar2 = (long)(int)*(uint *)(this + 0xe4) * 4;
    iVar1 = *(int *)(&DAT_01425f74 + lVar2);
    *param_1 = *(int *)(&DAT_01425f50 + lVar2);
    *param_2 = iVar1;
  }
  return;
}

