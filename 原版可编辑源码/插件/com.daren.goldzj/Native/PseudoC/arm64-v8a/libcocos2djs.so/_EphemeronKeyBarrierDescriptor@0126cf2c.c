
/* v8::internal::EphemeronKeyBarrierDescriptor::~EphemeronKeyBarrierDescriptor() */

void __thiscall
v8::internal::EphemeronKeyBarrierDescriptor::~EphemeronKeyBarrierDescriptor
          (EphemeronKeyBarrierDescriptor *this)

{
  operator_delete(this);
  return;
}

