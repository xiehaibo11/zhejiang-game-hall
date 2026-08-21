
/* universe::Downloader2::_initThreads() */

void __thiscall universe::Downloader2::_initThreads(Downloader2 *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  thread *ptVar6;
  thread *ptVar7;
  thread *this_00;
  Downloader2 *local_58;
  code *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  ptVar7 = *(thread **)this;
                    /* try { // try from 00a01eac to 00b01ec3 has its CatchHandler @ 00a027a4 */
  if ((ulong)(*(long *)(this + 0x10) - (long)ptVar7 >> 3) < 2) {
    this_00 = *(thread **)(this + 8);
    pvVar4 = operator_new(0x10);
    lVar2 = (long)this_00 - (long)ptVar7;
    lVar1 = (long)pvVar4 + lVar2;
    if (lVar2 == 0) {
      *(long *)this = lVar1;
      *(long *)(this + 8) = lVar1;
      *(long *)(this + 0x10) = (long)pvVar4 + 0x10;
    }
    else {
                    /* try { // try from 00a01ecc to 00b01ed7 has its CatchHandler @ 00a027a0 */
      puVar5 = (undefined8 *)((long)pvVar4 + (lVar2 >> 3) * 8);
      ptVar6 = this_00;
                    /* try { // try from 00a01ed8 to 00b01ee3 has its CatchHandler @ 00a0279c */
      do {
        puVar5 = puVar5 + -1;
        ptVar6 = ptVar6 + -8;
                    /* try { // try from 00a01ee4 to 00b01f2b has its CatchHandler @ 00a027b4 */
        *puVar5 = *(undefined8 *)ptVar6;
        *(undefined8 *)ptVar6 = 0;
      } while (ptVar7 != ptVar6);
      *(ulong *)this = lVar1 + (~(ulong)(this_00 + (-8 - (long)ptVar7)) & 0xfffffffffffffff8);
      *(long *)(this + 8) = lVar1;
      *(long *)(this + 0x10) = (long)pvVar4 + 0x10;
      do {
        this_00 = this_00 + -8;
        std::__ndk1::thread::~thread(this_00);
      } while (ptVar7 != this_00);
    }
    if (ptVar7 != (thread *)0x0) {
      operator_delete(ptVar7);
    }
  }
                    /* try { // try from 00a01f38 to 00b01f3f has its CatchHandler @ 00a02784 */
  uStack_48 = 0;
  local_50 = _downloadProc;
  local_58 = this;
  FUN_00a02a9c(&local_40,&local_50,&local_58);
                    /* try { // try from 00a01f54 to 00b01f5b has its CatchHandler @ 00a02758 */
  puVar5 = *(undefined8 **)(this + 8);
  if (puVar5 < *(undefined8 **)(this + 0x10)) {
    *puVar5 = local_40;
                    /* try { // try from 00a01f68 to 00b01f7b has its CatchHandler @ 00a026b0 */
    local_40 = 0;
    *(undefined8 **)(this + 8) = puVar5 + 1;
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
  FUN_00a02a9c(&local_40,&local_50,&local_58);
  puVar5 = *(undefined8 **)(this + 8);
  if (puVar5 < *(undefined8 **)(this + 0x10)) {
    *puVar5 = local_40;
    local_40 = 0;
    *(undefined8 **)(this + 8) = puVar5 + 1;
  }
  else {
    std::__ndk1::vector<std::__ndk1::thread,std::__ndk1::allocator<std::__ndk1::thread>>::
    __push_back_slow_path<std::__ndk1::thread>
              ((vector<std::__ndk1::thread,std::__ndk1::allocator<std::__ndk1::thread>> *)this,
               (thread *)&local_40);
  }
  std::__ndk1::thread::~thread((thread *)&local_40);
                    /* try { // try from 00a01fdc to 00b0200f has its CatchHandler @ 00a026d4 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

