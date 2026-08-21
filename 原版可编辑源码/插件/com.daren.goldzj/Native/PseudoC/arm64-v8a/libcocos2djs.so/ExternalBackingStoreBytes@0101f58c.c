
/* v8::internal::NewSpace::ExternalBackingStoreBytes(v8::internal::ExternalBackingStoreType) const
    */

undefined8 __thiscall v8::internal::NewSpace::ExternalBackingStoreBytes(NewSpace *this,uint param_2)

{
  return *(undefined8 *)(*(long *)(this + 0x100) + (ulong)param_2 * 8);
}

