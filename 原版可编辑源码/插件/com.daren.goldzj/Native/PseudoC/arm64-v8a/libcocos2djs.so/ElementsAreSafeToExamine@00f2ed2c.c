
/* v8::internal::JSObject::ElementsAreSafeToExamine(v8::internal::Isolate const*) const */

bool __thiscall v8::internal::JSObject::ElementsAreSafeToExamine(JSObject *this,Isolate *param_1)

{
  return *(int *)(*(long *)this + 7) + (int)param_1 != *(int *)(param_1 + 0x88);
}

