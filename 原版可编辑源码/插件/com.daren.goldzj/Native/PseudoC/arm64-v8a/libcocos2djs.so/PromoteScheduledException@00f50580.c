
/* v8::internal::Isolate::PromoteScheduledException() */

undefined8 __thiscall v8::internal::Isolate::PromoteScheduledException(Isolate *this)

{
  *(undefined8 *)(this + 0x2bd8) = *(undefined8 *)(this + 0x2c20);
  *(undefined8 *)(this + 0x2c20) = *(undefined8 *)(this + 0xa8);
  return *(undefined8 *)(this + 0x180);
}

