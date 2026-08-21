
/* cocostudio::timeline::Frame::emitEvent() */

void __thiscall cocostudio::timeline::Frame::emitEvent(Frame *this)

{
  long *plVar1;
  
  if (*(long **)(this + 0x48) != (long *)0x0) {
    plVar1 = (long *)(**(code **)(**(long **)(this + 0x48) + 0x68))();
                    /* WARNING: Could not recover jumptable at 0x00ca5e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x160))(plVar1,this);
    return;
  }
  return;
}

