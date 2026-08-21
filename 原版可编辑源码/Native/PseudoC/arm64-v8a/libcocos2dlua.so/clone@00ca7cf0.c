
/* cocostudio::timeline::ColorFrame::clone() */

long * __thiscall cocostudio::timeline::ColorFrame::clone(ColorFrame *this)

{
  ColorFrame CVar1;
  long *plVar2;
  
  plVar2 = (long *)create();
  CVar1 = this[0x5b];
  *(undefined2 *)((long)plVar2 + 0x59) = *(undefined2 *)(this + 0x59);
  *(ColorFrame *)((long)plVar2 + 0x5b) = CVar1;
  (**(code **)(*plVar2 + 0xa8))(plVar2,this);
  return plVar2;
}

