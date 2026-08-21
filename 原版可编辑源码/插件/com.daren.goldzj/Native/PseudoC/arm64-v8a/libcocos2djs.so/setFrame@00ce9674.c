
/* spine::EventTimeline::setFrame(unsigned long, spine::Event*) */

void __thiscall spine::EventTimeline::setFrame(EventTimeline *this,ulong param_1,Event *param_2)

{
  undefined4 uVar1;
  
  uVar1 = Event::getTime(param_2);
  *(undefined4 *)(*(long *)(this + 0x20) + param_1 * 4) = uVar1;
  *(Event **)(*(long *)(this + 0x40) + param_1 * 8) = param_2;
  return;
}

