
/* cocostudio::timeline::BoneNode::setRootSkeleton(cocostudio::timeline::BoneNode*,
   cocostudio::timeline::SkeletonNode*) const */

void __thiscall
cocostudio::timeline::BoneNode::setRootSkeleton
          (BoneNode *this,BoneNode *param_1,SkeletonNode *param_2)

{
  *(SkeletonNode **)(param_1 + 0x3a8) = param_2;
  return;
}

