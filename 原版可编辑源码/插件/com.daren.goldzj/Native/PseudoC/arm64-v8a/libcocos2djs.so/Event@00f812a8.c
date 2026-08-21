
/* v8::internal::GCTracer::Event::Event(v8::internal::GCTracer::Event::Type,
   v8::internal::GarbageCollectionReason, char const*) */

void __thiscall
v8::internal::GCTracer::Event::Event
          (Event *this,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  *(undefined4 *)this = param_2;
  *(undefined4 *)(this + 4) = param_3;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 8) = param_4;
  this[0x20] = (Event)0x0;
  *(undefined8 *)(this + 0x408) = 0;
  *(undefined8 *)(this + 0x400) = 0;
  *(undefined4 *)(this + 0x410) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined4 *)(this + 0x428) = 0;
  *(undefined8 *)(this + 0x438) = 0;
  *(undefined8 *)(this + 0x430) = 0;
  *(undefined4 *)(this + 0x440) = 0;
  *(undefined4 *)(this + 0x458) = 0;
  *(undefined8 *)(this + 0x448) = 0;
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined8 *)(this + 0x468) = 0;
  *(undefined8 *)(this + 0x460) = 0;
  *(undefined4 *)(this + 0x470) = 0;
  *(undefined4 *)(this + 0x488) = 0;
  *(undefined8 *)(this + 0x478) = 0;
  *(undefined8 *)(this + 0x480) = 0;
  *(undefined4 *)(this + 0x4a0) = 0;
  *(undefined8 *)(this + 0x490) = 0;
  *(undefined8 *)(this + 0x498) = 0;
  *(undefined4 *)(this + 0x4b8) = 0;
  *(undefined8 *)(this + 0x4a8) = 0;
  *(undefined8 *)(this + 0x4b0) = 0;
  *(undefined4 *)(this + 0x4d0) = 0;
  *(undefined8 *)(this + 0x4c0) = 0;
  *(undefined8 *)(this + 0x4c8) = 0;
  memset(this + 0x28,0,0x3d4);
  return;
}

