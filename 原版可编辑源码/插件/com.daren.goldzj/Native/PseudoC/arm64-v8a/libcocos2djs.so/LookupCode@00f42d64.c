
/* v8::internal::StackFrame::LookupCode() const */

undefined8 __thiscall v8::internal::StackFrame::LookupCode(StackFrame *this)

{
  long lVar1;
  
  lVar1 = InnerPointerToCodeCache::GetCacheEntry
                    (*(InnerPointerToCodeCache **)(*(long *)(this + 0x10) + 0x95d8),
                     **(ulong **)(this + 0x28));
  return *(undefined8 *)(lVar1 + 8);
}

