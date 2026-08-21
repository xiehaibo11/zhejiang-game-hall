
/* v8::internal::Serializer::VisitRootPointers(v8::internal::Root, char const*,
   v8::internal::FullObjectSlot, v8::internal::FullObjectSlot) */

void __thiscall
v8::internal::Serializer::VisitRootPointers
          (Serializer *this,undefined8 param_2,undefined8 param_3,ulong *param_4,ulong *param_5)

{
  if (param_5 <= param_4) {
    return;
  }
  if ((*param_4 & 1) == 0) goto LAB_011ec220;
  do {
    (**(code **)(*(long *)this + 0x28))(this);
    while( true ) {
      param_4 = param_4 + 1;
      if (param_5 <= param_4) {
        return;
      }
      if ((*param_4 & 1) != 0) break;
LAB_011ec220:
      PutSmi(this);
    }
  } while( true );
}

