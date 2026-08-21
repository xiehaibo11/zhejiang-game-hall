
/* std::__ndk1::ios_base::__call_callbacks(std::__ndk1::ios_base::event) */

void __thiscall std::__ndk1::ios_base::__call_callbacks(ios_base *this,undefined4 param_2)

{
  long lVar1;
  
  if (*(long *)(this + 0x48) != 0) {
    lVar1 = *(long *)(this + 0x48) + -1;
    do {
      (**(code **)(*(long *)(this + 0x38) + lVar1 * 8))
                (param_2,this,*(undefined4 *)(*(long *)(this + 0x40) + lVar1 * 4));
      lVar1 = lVar1 + -1;
    } while (lVar1 != -1);
  }
  return;
}

