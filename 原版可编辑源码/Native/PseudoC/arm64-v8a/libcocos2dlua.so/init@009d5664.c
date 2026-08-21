
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
    do {
      uStack_58 = 0;
      local_60 = worker;
      local_68 = this;
      FUN_009d5984(&local_48,&local_60,&local_68,&local_3c);
      puVar1 = *(undefined8 **)(this + 0xe8);
      if (puVar1 < *(undefined8 **)(this + 0xf0)) {
        *puVar1 = local_48;
        local_48 = 0;
        *(undefined8 **)(this + 0xe8) = puVar1 + 1;
      }
      else {
        std::__ndk1::vector<std::__ndk1::thread,std::__ndk1::allocator<std::__ndk1::thread>>::
        __push_back_slow_path<std::__ndk1::thread>(this_00,(thread *)&local_48);
      }
      std::__ndk1::thread::~thread((thread *)&local_48);
      local_3c = local_3c + 1;
    } while (local_3c < (int)uVar2);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

