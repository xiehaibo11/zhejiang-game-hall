
/* spine::SkeletonRenderer::SkeletonRenderer(spSkeletonData*, bool) */

void __thiscall
spine::SkeletonRenderer::SkeletonRenderer
          (SkeletonRenderer *this,spSkeletonData *param_1,bool param_2)

{
  undefined8 uVar1;
  
  cocos2d::Node::Node((Node *)this);
  *(undefined ***)this = &PTR__SkeletonRenderer_016d5758;
  *(undefined ***)(this + 0x2f8) = &PTR__SkeletonRenderer_016d5cc8;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
                    /* try { // try from 00d511ac to 00e51513 has its CatchHandler @ 00d51684 */
  cocos2d::CustomCommand::CustomCommand((CustomCommand *)(this + 800));
  *(undefined2 *)(this + 0x394) = 0;
  this[0x396] = (SkeletonRenderer)0x0;
  *(undefined4 *)(this + 0x390) = 0x3f800000;
  *(undefined8 *)(this + 0x3a0) = 0;
  uVar1 = spSkeleton_create(param_1);
  *(undefined8 *)(this + 0x388) = uVar1;
  this[0x300] = (SkeletonRenderer)param_2;
  (**(code **)(*(long *)this + 0x548))(this);
  return;
}

