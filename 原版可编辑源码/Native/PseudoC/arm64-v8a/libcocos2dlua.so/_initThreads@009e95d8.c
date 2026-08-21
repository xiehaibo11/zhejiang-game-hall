
/* universe::Downloader2::_initThreads() */

void __thiscall universe::Downloader2::_initThreads(Downloader2 *this)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  thread *ptVar5;
  thread *ptVar6;
  thread *this_00;
  Downloader2 *local_58;
  code *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  ptVar6 = *(thread **)this;
  if ((ulong)(*(long *)(this + 0x10) - (long)ptVar6 >> 3) < 2) {
    this_00 = *(thread **)(this + 8);
    pvVar3 = operator_new(0x10);
    puVar1 = (undefined8 *)((long)pvVar3 + ((long)this_00 - (long)ptVar6));
    puVar4 = puVar1;
    ptVar5 = this_00;
    if ((long)this_00 - (long)ptVar6 == 0) {
      *(undefined8 **)this = puVar1;
      *(undefined8 **)(this + 8) = puVar1;
      *(long *)(this + 0x10) = (long)pvVar3 + 0x10;
    }
    else {
      do {
        ptVar5 = ptVar5 + -8;
        puVar4 = puVar4 + -1;
        *puVar4 = *(undefined8 *)ptVar5;
        *(undefined8 *)ptVar5 = 0;
      } while (ptVar6 != ptVar5);
      *(undefined8 **)this = puVar4;
      *(undefined8 **)(this + 8) = puVar1;
      *(long *)(this + 0x10) = (long)pvVar3 + 0x10;
      do {
        this_00 = this_00 + -8;
        std::__ndk1::thread::~thread(this_00);
      } while (ptVar6 != this_00);
    }
    if (ptVar6 != (thread *)0x0) {
      operator_delete(ptVar6);
    }
  }
  uStack_48 = 0;
  local_50 = _downloadProc;
  local_58 = this;
  FUN_009ea1ec(&local_40,&local_50,&local_58);
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 < *(undefined8 **)(this + 0x10)) {
    *puVar1 = local_40;
    local_40 = 0;
    *(undefined8 **)(this + 8) = puVar1 + 1;
  }
  else {
    std::__ndk1::vector<std::__ndk1::thread,std::__ndk1::allocator<std::__ndk1::thread>>::
    __push_back_slow_path<std::__ndk1::thread>
              ((vector<std::__ndk1::thread,std::__ndk1::allocator<std::__ndk1::thread>> *)this,
               (thread *)&local_40);
  }
  std::__ndk1::thread::~thread((thread *)&local_40);
  uStack_48 = 0;
  local_50 = _downloadProc;
  local_58 = this;
  FUN_009ea1ec(&local_40,&local_50,&local_58);
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 < *(undefined8 **)(this + 0x10)) {
    *puVar1 = local_40;
    local_40 = 0;
    *(undefined8 **)(this + 8) = puVar1 + 1;
  }
  else {
    std::__ndk1::vector<std::__ndk1::thread,std::__ndk1::allocator<std::__ndk1::thread>>::
    __push_back_slow_path<std::__ndk1::thread>
              ((vector<std::__ndk1::thread,std::__ndk1::allocator<std::__ndk1::thread>> *)this,
               (thread *)&local_40);
  }
  std::__ndk1::thread::~thread((thread *)&local_40);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

