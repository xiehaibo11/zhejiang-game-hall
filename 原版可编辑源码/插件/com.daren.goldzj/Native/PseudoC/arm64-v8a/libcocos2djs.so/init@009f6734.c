
/* universe::core::Service::init() */

void __thiscall universe::core::Service::init(Service *this)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  vector<std::__ndk1::thread,std::__ndk1::allocator<std::__ndk1::thread>> *this_00;
  Service *local_68;
  code *local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  int local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  this_00 = (vector<std::__ndk1::thread,std::__ndk1::allocator<std::__ndk1::thread>> *)(this + 0xe0)
  ;
  if (*(long *)this_00 == *(long *)(this + 0xe8)) {
    iVar4 = std::__ndk1::thread::hardware_concurrency();
    uVar2 = iVar4 - 1;
    if ((int)uVar2 < 4) {
      uVar2 = 3;
    }
    std::__ndk1::vector<std::__ndk1::thread,std::__ndk1::allocator<std::__ndk1::thread>>::reserve
              (this_00,(ulong)uVar2);
    local_3c = 0;
    if (0 < (int)uVar2) {
      do {
        uStack_58 = 0;
        local_60 = worker;
        local_68 = this;
        FUN_009f6a70(&local_48,&local_60,&local_68,&local_3c);
        puVar1 = *(undefined8 **)(this + 0xe8);
        if (puVar1 < *(undefined8 **)(this + 0xf0)) {
          *puVar1 = local_48;
          local_48 = 0;
          *(undefined8 **)(this + 0xe8) = puVar1 + 1;
                    /* catch() { ... } // from try @ 009f6424 with catch @ 009f67e8 */
        }
        else {
          std::__ndk1::vector<std::__ndk1::thread,std::__ndk1::allocator<std::__ndk1::thread>>::
          __push_back_slow_path<std::__ndk1::thread>(this_00,(thread *)&local_48);
        }
                    /* catch() { ... } // from try @ 009f6414 with catch @ 009f67f8 */
                    /* catch() { ... } // from try @ 009f65c8 with catch @ 009f67fc
                       catch() { ... } // from try @ 009f6610 with catch @ 009f67fc */
        std::__ndk1::thread::~thread((thread *)&local_48);
                    /* catch() { ... } // from try @ 009f65ac with catch @ 009f6800 */
        local_3c = local_3c + 1;
                    /* catch() { ... } // from try @ 009f6590 with catch @ 009f6808 */
                    /* catch() { ... } // from try @ 009f6588 with catch @ 009f680c */
      } while (local_3c < (int)uVar2);
    }
  }
                    /* catch() { ... } // from try @ 009f6560 with catch @ 009f6814 */
                    /* catch() { ... } // from try @ 009f6558 with catch @ 009f6818 */
                    /* catch() { ... } // from try @ 009f6530 with catch @ 009f6820 */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 009f6528 with catch @ 009f6824 */
                    /* catch() { ... } // from try @ 009f66e4 with catch @ 009f682c */
                    /* catch() { ... } // from try @ 009f66c8 with catch @ 009f6830 */
                    /* catch() { ... } // from try @ 009f66ac with catch @ 009f6834 */
  return;
}

