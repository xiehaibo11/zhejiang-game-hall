
/* v8::internal::Space::ExternalBackingStoreBytes(v8::internal::ExternalBackingStoreType) const */

undefined8 __thiscall v8::internal::Space::ExternalBackingStoreBytes(Space *this,uint param_2)

{
  return *(undefined8 *)(*(long *)(this + 0x30) + (ulong)param_2 * 8);
}

