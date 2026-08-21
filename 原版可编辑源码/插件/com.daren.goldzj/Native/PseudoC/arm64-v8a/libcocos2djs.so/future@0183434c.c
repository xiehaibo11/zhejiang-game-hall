
/* std::__ndk1::future<void>::future(std::__ndk1::__assoc_sub_state*) */

void __thiscall std::__ndk1::future<void>::future(future<void> *this,__assoc_sub_state *param_1)

{
  *(__assoc_sub_state **)this = param_1;
  mutex::lock((mutex *)(param_1 + 0x18));
  if (((byte)param_1[0x70] >> 1 & 1) == 0) {
    __shared_count::__add_shared((__shared_count *)param_1);
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 2;
    mutex::unlock((mutex *)(param_1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01833d70(1);
}

