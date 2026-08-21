
/* v8::internal::compiler::JSObjectData::GetInobjectField(int) const */

long __thiscall
v8::internal::compiler::JSObjectData::GetInobjectField(JSObjectData *this,int param_1)

{
  if ((ulong)(long)param_1 < (ulong)(*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 4)) {
    return *(long *)(this + 0x28) + (long)param_1 * 0x10;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","static_cast<size_t>(property_index) < inobject_fields_.size()");
}

