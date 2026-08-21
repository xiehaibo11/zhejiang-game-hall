
/* v8::internal::FrameInspector::javascript_frame() */

undefined8 __thiscall v8::internal::FrameInspector::javascript_frame(FrameInspector *this)

{
  (**(code **)(**(long **)this + 8))();
  return *(undefined8 *)this;
}

