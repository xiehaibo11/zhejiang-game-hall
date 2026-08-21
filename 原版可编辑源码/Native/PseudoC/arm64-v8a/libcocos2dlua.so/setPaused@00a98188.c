
/* fairygui::Transition::setPaused(bool) */

void __thiscall fairygui::Transition::setPaused(Transition *this,bool param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  byte bVar4;
  GTweener *this_00;
  Transition *this_01;
  long lVar5;
  long *plVar6;
  Value aVStack_58 [16];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((this[0x68] != (Transition)0x0) && (this[0x69] != (Transition)param_1)) {
    this[0x69] = (Transition)param_1;
    this_00 = (GTweener *)GTween::getTween((Ref *)this);
    if (this_00 != (GTweener *)0x0) {
      GTweener::setPaused(this_00,param_1);
    }
    plVar2 = *(long **)(this + 0x50);
    for (plVar1 = *(long **)(this + 0x48); plVar1 != plVar2; plVar1 = plVar1 + 1) {
      lVar5 = *plVar1;
      plVar6 = *(long **)(lVar5 + 0x88);
      if (plVar6 != (long *)0x0) {
        if (*(int *)(lVar5 + 0x20) == 7) {
          if (param_1) {
            (**(code **)(*plVar6 + 0x30))(aVStack_58,plVar6,4);
            bVar4 = cocos2d::Value::asBool(aVStack_58);
            *(byte *)(*(long *)(*plVar1 + 0x48) + 5) = bVar4 & 1;
            cocos2d::Value::~Value(aVStack_58);
            plVar6 = *(long **)(*plVar1 + 0x88);
            cocos2d::Value::Value(aVStack_58,false);
            (**(code **)(*plVar6 + 0x38))(plVar6,4,aVStack_58);
          }
          else {
            cocos2d::Value::Value(aVStack_58,*(bool *)(*(long *)(lVar5 + 0x48) + 5));
            (**(code **)(*plVar6 + 0x38))(plVar6,4,aVStack_58);
          }
          cocos2d::Value::~Value(aVStack_58);
        }
        else if ((*(int *)(lVar5 + 0x20) == 10) &&
                (this_01 = *(Transition **)(*(long *)(lVar5 + 0x48) + 0x20),
                this_01 != (Transition *)0x0)) {
          setPaused(this_01,param_1);
        }
        if (*(GTweener **)(*plVar1 + 0x80) != (GTweener *)0x0) {
          GTweener::setPaused(*(GTweener **)(*plVar1 + 0x80),param_1);
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

