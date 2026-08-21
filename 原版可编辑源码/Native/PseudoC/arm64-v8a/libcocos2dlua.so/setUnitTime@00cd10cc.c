
/* cocostudio::ActionNode::setUnitTime(float) */

void __thiscall cocostudio::ActionNode::setUnitTime(ActionNode *this,float param_1)

{
  *(float *)(this + 0x2c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00cd10d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x48))();
  return;
}

