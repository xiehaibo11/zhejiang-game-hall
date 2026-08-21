
/* spine::TrackEntry::reset() */

void __thiscall spine::TrackEntry::reset(TrackEntry *this)

{
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  if ((*(code **)(this + 0x18) != (code *)0x0) && (*(long *)(this + 0x10) != 0)) {
    (**(code **)(this + 0x18))();
  }
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(code **)(this + 0xf8) = dummyOnAnimationEventFunc;
  *(undefined8 *)(this + 0x100) = 0;
  return;
}

