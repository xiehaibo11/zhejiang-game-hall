
/* fairygui::Transition::setTimeScale(float) */

void __thiscall fairygui::Transition::setTimeScale(Transition *this,float param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  Transition *this_00;
  long lVar4;
  long *plVar5;
  Value aVStack_58 [16];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(float *)(this + 200) != param_1) {
    plVar1 = *(long **)(this + 0x48);
    plVar2 = *(long **)(this + 0x50);
    *(float *)(this + 200) = param_1;
    for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
      lVar4 = *plVar1;
      if (*(GTweener **)(lVar4 + 0x80) == (GTweener *)0x0) {
        if (*(int *)(lVar4 + 0x20) == 7) {
          plVar5 = *(long **)(lVar4 + 0x88);
          if (plVar5 != (long *)0x0) {
            cocos2d::Value::Value(aVStack_58,param_1);
            (**(code **)(*plVar5 + 0x38))(plVar5,7,aVStack_58);
            cocos2d::Value::~Value(aVStack_58);
          }
        }
        else if ((*(int *)(lVar4 + 0x20) == 10) &&
                (this_00 = *(Transition **)(*(long *)(lVar4 + 0x48) + 0x20),
                this_00 != (Transition *)0x0)) {
          setTimeScale(this_00,param_1);
        }
      }
      else {
        GTweener::setTimeScale(*(GTweener **)(lVar4 + 0x80),param_1);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

