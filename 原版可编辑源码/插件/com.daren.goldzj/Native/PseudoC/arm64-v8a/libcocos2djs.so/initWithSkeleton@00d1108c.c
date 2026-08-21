
/* spine::SkeletonRenderer::initWithSkeleton(spine::Skeleton*, bool, bool, bool) */

void __thiscall
spine::SkeletonRenderer::initWithSkeleton
          (SkeletonRenderer *this,Skeleton *param_1,bool param_2,bool param_3,bool param_4)

{
  *(Skeleton **)(this + 0x30) = param_1;
  this[0x19] = (SkeletonRenderer)param_2;
  this[0x18] = (SkeletonRenderer)param_3;
  this[0x1a] = (SkeletonRenderer)param_4;
                    /* WARNING: Could not recover jumptable at 0x00d110b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x48))();
  return;
}

