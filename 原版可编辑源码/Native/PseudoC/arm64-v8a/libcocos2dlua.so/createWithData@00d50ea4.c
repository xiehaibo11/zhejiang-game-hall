
/* spine::SkeletonRenderer::createWithData(spSkeletonData*, bool) */

SkeletonRenderer * spine::SkeletonRenderer::createWithData(spSkeletonData *param_1,bool param_2)

{
  SkeletonRenderer *this;
  
                    /* try { // try from 00d50eb8 to 00e50fc3 has its CatchHandler @ 00d510e4 */
  this = operator_new(0x3b0);
  SkeletonRenderer(this,param_1,param_2);
  cocos2d::Ref::autorelease((Ref *)this);
  return this;
}

