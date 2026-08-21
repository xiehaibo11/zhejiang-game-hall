
/* v8::internal::ScopeInfo::ReceiverContextSlotIndex() const */

int __thiscall v8::internal::ScopeInfo::ReceiverContextSlotIndex(ScopeInfo *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if ((1 < *(int *)(lVar1 + 3)) && ((*(uint *)(lVar1 + 7) & 0x300) == 0x200)) {
    return *(int *)(lVar1 + 7 +
                   (long)(int)(((*(uint *)(lVar1 + 0xf) >> 1) + (*(uint *)(lVar1 + 0xf) >> 1) +
                               (*(uint *)(lVar1 + 7) >> 0xb & 1)) * 4 + 0xc)) >> 1;
  }
  return -1;
}

