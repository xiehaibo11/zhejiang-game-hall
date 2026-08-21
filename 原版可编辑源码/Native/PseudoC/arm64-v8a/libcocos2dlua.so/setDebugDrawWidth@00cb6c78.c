
/* cocostudio::timeline::BoneNode::setDebugDrawWidth(float) */

void __thiscall cocostudio::timeline::BoneNode::setDebugDrawWidth(BoneNode *this,float param_1)

{
  *(int *)(this + 0x370) = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x00cb6c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x608))();
  return;
}

