
/* cocostudio::timeline::BoneNode::setDebugDrawLength(float) */

void __thiscall cocostudio::timeline::BoneNode::setDebugDrawLength(BoneNode *this,float param_1)

{
  *(int *)(this + 0x36c) = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x00cb6c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x608))();
  return;
}

