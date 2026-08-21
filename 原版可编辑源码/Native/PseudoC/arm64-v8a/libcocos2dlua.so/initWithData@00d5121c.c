
/* spine::SkeletonRenderer::initWithData(spSkeletonData*, bool) */

void __thiscall
spine::SkeletonRenderer::initWithData(SkeletonRenderer *this,spSkeletonData *param_1,bool param_2)

{
  undefined8 uVar1;
  
  uVar1 = spSkeleton_create(param_1);
  *(undefined8 *)(this + 0x388) = uVar1;
  this[0x300] = (SkeletonRenderer)param_2;
                    /* WARNING: Could not recover jumptable at 0x00d51254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x548))(this);
  return;
}

