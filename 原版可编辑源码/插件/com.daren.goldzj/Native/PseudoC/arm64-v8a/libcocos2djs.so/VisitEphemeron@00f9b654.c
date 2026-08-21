
/* v8::internal::ObjectVisitor::VisitEphemeron(v8::internal::HeapObject, int,
   v8::internal::CompressedObjectSlot, v8::internal::CompressedObjectSlot) */

void __thiscall
v8::internal::ObjectVisitor::VisitEphemeron
          (ObjectVisitor *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  (**(code **)(*(long *)this + 0x28))(this,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00f9b6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this,param_2,param_5);
  return;
}

