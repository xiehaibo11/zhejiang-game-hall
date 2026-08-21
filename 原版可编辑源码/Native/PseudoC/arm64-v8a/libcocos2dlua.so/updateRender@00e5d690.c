
/* cocos2d::PURibbonTrailRender::updateRender(cocos2d::PUParticle3D*, float, bool) */

void cocos2d::PURibbonTrailRender::updateRender(PUParticle3D *param_1,float param_2,bool param_3)

{
  if (*(PURibbonTrail **)(param_1 + 0xa8) != (PURibbonTrail *)0x0) {
    PURibbonTrail::update(*(PURibbonTrail **)(param_1 + 0xa8),param_2);
    return;
  }
  return;
}

