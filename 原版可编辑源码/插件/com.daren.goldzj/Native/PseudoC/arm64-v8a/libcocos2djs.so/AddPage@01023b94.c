
/* v8::internal::Sweeper::AddPage(v8::internal::AllocationSpace, v8::internal::Page*,
   v8::internal::Sweeper::AddPageMode) */

void __thiscall v8::internal::Sweeper::AddPage(Sweeper *this,int param_2,Page *param_3,int param_4)

{
  long lVar1;
  Sweeper *pSVar2;
  Page *local_28;
  
  local_28 = param_3;
  base::Mutex::Lock((Mutex *)(this + 0x40));
  if (param_4 == 0) {
    Page::MoveOldToNewRememberedSetForSweeping(param_3);
    *(undefined8 *)(param_3 + 0xa8) = 1;
    lVar1 = *(long *)(*(long *)this + (long)param_2 * 8 + 0x128);
    *(long *)(lVar1 + 0xb8) = *(long *)(lVar1 + 0xb8) + *(long *)(param_3 + 0x68);
  }
  lVar1 = (long)param_2 + -2;
  pSVar2 = this + lVar1 * 0x18 + 0xb8;
  if (*(undefined8 **)pSVar2 == *(undefined8 **)(this + lVar1 * 0x18 + 0xc0)) {
    std::__ndk1::vector<v8::internal::Page*,std::__ndk1::allocator<v8::internal::Page*>>::
    __push_back_slow_path<v8::internal::Page*const&>
              ((vector<v8::internal::Page*,std::__ndk1::allocator<v8::internal::Page*>> *)
               (this + lVar1 * 0x18 + 0xb0),&local_28);
  }
  else {
    **(undefined8 **)pSVar2 = local_28;
    *(long *)pSVar2 = *(long *)pSVar2 + 8;
  }
  base::Mutex::Unlock((Mutex *)(this + 0x40));
  return;
}

