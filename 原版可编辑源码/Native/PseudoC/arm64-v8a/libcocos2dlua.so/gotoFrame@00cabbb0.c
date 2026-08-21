
/* cocostudio::timeline::ActionTimeline::gotoFrame(int) */

void __thiscall cocostudio::timeline::ActionTimeline::gotoFrame(ActionTimeline *this,int param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 0x38) != 0) {
    lVar2 = *(long *)(this + 0x78) - (long)*(undefined8 **)(this + 0x70);
    if ((0 < lVar2) && ((**(code **)(*(long *)**(undefined8 **)(this + 0x70) + 0x10))(), 8 < lVar2))
    {
      lVar3 = 1;
      do {
        plVar1 = *(long **)(*(long *)(this + 0x70) + lVar3 * 8);
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        lVar3 = lVar3 + 1;
      } while (lVar3 < lVar2 >> 3);
    }
  }
  return;
}

