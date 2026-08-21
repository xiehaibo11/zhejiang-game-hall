
/* p2t::SweepContext::RemoveFromMap(p2t::Triangle*) */

void __thiscall p2t::SweepContext::RemoveFromMap(SweepContext *this,Triangle *param_1)

{
  long lVar1;
  Triangle *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
                    /* catch() { ... } // from try @ 0102ce00 with catch @ 0102ce30 */
  std::__ndk1::list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>>::remove
            ((list<p2t::Triangle*,std::__ndk1::allocator<p2t::Triangle*>> *)(this + 0x68),&local_30)
  ;
                    /* catch() { ... } // from try @ 0102cdd8 with catch @ 0102ce40 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0102ceac with catch @ 0102ce5c
                       catch() { ... } // from try @ 0102cf14 with catch @ 0102ce5c */
  __stack_chk_fail();
}

