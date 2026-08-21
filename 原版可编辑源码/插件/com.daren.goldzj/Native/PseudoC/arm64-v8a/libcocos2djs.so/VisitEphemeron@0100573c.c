
/* v8::internal::IterateAndScavengePromotedObjectsVisitor::VisitEphemeron(v8::internal::HeapObject,
   int, v8::internal::CompressedObjectSlot, v8::internal::CompressedObjectSlot) */

void __thiscall
v8::internal::IterateAndScavengePromotedObjectsVisitor::VisitEphemeron
          (IterateAndScavengePromotedObjectsVisitor *this,undefined8 param_2,undefined4 param_3,
          uint *param_4,long param_5)

{
  (**(code **)(*(long *)this + 0x10))(this,param_2,param_5,param_5 + 4);
  if (((*param_4 & 1) != 0) &&
     ((*(byte *)(((ulong)param_4 & 0xffffffff00000000 | (ulong)*param_4 & 0xfffc0000) + 8) & 0x18)
      != 0)) {
    Scavenger::RememberPromotedEphemeron(*(Scavenger **)(this + 8),param_2,param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x010057d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x10))(this,param_2,param_4,param_4 + 1);
  return;
}

