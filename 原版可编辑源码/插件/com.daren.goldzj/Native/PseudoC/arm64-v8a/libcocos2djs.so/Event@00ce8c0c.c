
/* spine::Event::Event(float, spine::EventData const&) */

void __thiscall spine::Event::Event(Event *this,float param_1,EventData *param_2)

{
  *(float *)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR__Event_01c8ed38;
  *(EventData **)(this + 8) = param_2;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)(this + 0x20) = &PTR__String_01c67868;
  *(undefined8 *)(this + 0x38) = 0x3f800000;
  return;
}

