
/* cocostudio::ActionNode::easingToFrame(float, float, cocostudio::ActionFrame*,
   cocostudio::ActionFrame*) */

void __thiscall
cocostudio::ActionNode::easingToFrame
          (ActionNode *this,float param_1,float param_2,ActionFrame *param_3,ActionFrame *param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  
  plVar1 = (long *)(**(code **)(*(long *)param_4 + 0x18))
                             (CONCAT44(in_register_00005004,param_1),param_4);
  lVar2 = (**(code **)(*(long *)this + 0x40))(this);
  if ((plVar1 != (long *)0x0) && (lVar2 != 0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00cd1c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x48))(CONCAT44(in_register_00005024,param_2),plVar1);
    return;
  }
  return;
}

