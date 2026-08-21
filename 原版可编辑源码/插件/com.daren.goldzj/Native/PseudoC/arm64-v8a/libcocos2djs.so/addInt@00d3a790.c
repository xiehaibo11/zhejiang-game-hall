
/* dragonBones::UserData::addInt(int) */

void __thiscall dragonBones::UserData::addInt(UserData *this,int param_1)

{
  int *piVar1;
  long lVar2;
  int local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  piVar1 = *(int **)(this + 0x18);
  local_2c = param_1;
  if (piVar1 == *(int **)(this + 0x20)) {
    std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
              ((vector<int,std::__ndk1::allocator<int>> *)(this + 0x10),&local_2c);
  }
  else {
    *piVar1 = param_1;
    *(int **)(this + 0x18) = piVar1 + 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

