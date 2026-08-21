
/* dragonBones::UserData::addFloat(float) */

void __thiscall dragonBones::UserData::addFloat(UserData *this,float param_1)

{
  float *pfVar1;
  long lVar2;
  float local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pfVar1 = *(float **)(this + 0x30);
  local_2c = param_1;
  if (pfVar1 == *(float **)(this + 0x38)) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float_const&>
              ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x28),&local_2c);
  }
  else {
    *pfVar1 = param_1;
    *(float **)(this + 0x30) = pfVar1 + 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

