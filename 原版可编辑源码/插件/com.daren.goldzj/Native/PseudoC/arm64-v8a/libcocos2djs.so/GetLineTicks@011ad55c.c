
/* v8::internal::ProfileNode::GetLineTicks(v8::CpuProfileNode::LineTick*, unsigned int) const */

undefined8 __thiscall
v8::internal::ProfileNode::GetLineTicks(ProfileNode *this,LineTick *param_1,uint param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = 0;
  if ((param_1 != (LineTick *)0x0) && (param_2 != 0)) {
    if (*(uint *)(this + 0x88) != 0) {
      if (param_2 < *(uint *)(this + 0x88)) {
        return 0;
      }
      for (plVar2 = *(long **)(this + 0x80); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        *(undefined4 *)param_1 = *(undefined4 *)(plVar2 + 2);
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)((long)plVar2 + 0x14);
        param_1 = param_1 + 8;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

