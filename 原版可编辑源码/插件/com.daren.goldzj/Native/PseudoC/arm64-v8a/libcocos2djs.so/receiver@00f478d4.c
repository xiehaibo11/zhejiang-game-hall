
/* v8::internal::OptimizedFrame::receiver() const */

undefined8 __thiscall v8::internal::OptimizedFrame::receiver(OptimizedFrame *this)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = InnerPointerToCodeCache::GetCacheEntry
                    (*(InnerPointerToCodeCache **)(*(long *)(this + 0x10) + 0x95d8),
                     **(ulong **)(this + 0x28));
  if ((*(uint *)(*(long *)(lVar1 + 8) + 0x17) & 0x3e) == 6) {
    return *(undefined8 *)
            (*(long *)(this + 0x20) + ((*(long *)(*(long *)(this + 0x20) + -0x18) << 0x20) >> 0x1d)
            + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00f47948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)this + 0x70))(this,0xffffffff);
  return uVar2;
}

