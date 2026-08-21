
/* v8::internal::compiler::PropertyAccessInfo::GetConstFieldInfo() const */

long __thiscall
v8::internal::compiler::PropertyAccessInfo::GetConstFieldInfo(PropertyAccessInfo *this)

{
  if (*(int *)this != 3) {
    return 0;
  }
  if (*(long *)(this + 0x78) != 0) {
    return *(long *)(this + 0x78);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

