
/* v8::internal::interpreter::JumpTableTargetOffsets::iterator::iterator(int, int, int,
   v8::internal::interpreter::BytecodeArrayAccessor const*) */

void __thiscall
v8::internal::interpreter::JumpTableTargetOffsets::iterator::iterator
          (iterator *this,int param_1,int param_2,int param_3,BytecodeArrayAccessor *param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *(BytecodeArrayAccessor **)this = param_4;
  *(undefined8 *)(this + 8) = 0;
  *(int *)(this + 0x10) = param_1;
  *(int *)(this + 0x14) = param_2;
  *(int *)(this + 0x18) = param_3;
  if (param_2 < param_3) {
    plVar1 = *(long **)param_4;
    while( true ) {
      uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
      param_2 = *(int *)(this + 0x14);
      if ((uVar2 & 1) != 0) break;
      param_3 = *(int *)(this + 0x18);
      param_2 = param_2 + 1;
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
      *(int *)(this + 0x14) = param_2;
      if (param_3 <= param_2) goto LAB_0103f030;
      plVar1 = (long *)**(undefined8 **)this;
    }
    param_3 = *(int *)(this + 0x18);
  }
LAB_0103f030:
  if (param_2 < param_3) {
    uVar3 = (**(code **)(*(long *)**(undefined8 **)this + 0x38))
                      ((long *)**(undefined8 **)this,param_2);
    *(undefined8 *)(this + 8) = uVar3;
  }
  return;
}

