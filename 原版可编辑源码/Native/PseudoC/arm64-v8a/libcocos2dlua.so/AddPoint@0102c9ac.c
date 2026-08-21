
/* p2t::SweepContext::AddPoint(p2t::Point*) */

void __thiscall p2t::SweepContext::AddPoint(SweepContext *this,Point *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  Point *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(this + 0x88);
  local_30 = param_1;
  if (puVar1 == *(undefined8 **)(this + 0x90)) {
    std::__ndk1::vector<p2t::Point*,std::__ndk1::allocator<p2t::Point*>>::
    __push_back_slow_path<p2t::Point*const&>
              ((vector<p2t::Point*,std::__ndk1::allocator<p2t::Point*>> *)(this + 0x80),&local_30);
  }
  else {
    *puVar1 = param_1;
    *(undefined8 **)(this + 0x88) = puVar1 + 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

