
/* spine::PointAttachment::computeWorldPosition(spine::Bone&, float&, float&) */

void __thiscall
spine::PointAttachment::computeWorldPosition
          (PointAttachment *this,Bone *param_1,float *param_2,float *param_3)

{
  Bone::localToWorld(param_1,*(float *)(this + 0x24),*(float *)(this + 0x28),param_2,param_3);
  return;
}

