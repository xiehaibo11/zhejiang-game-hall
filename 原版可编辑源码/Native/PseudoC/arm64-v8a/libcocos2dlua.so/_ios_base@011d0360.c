
/* std::__ndk1::ios_base::~ios_base() */

void __thiscall std::__ndk1::ios_base::~ios_base(ios_base *this)

{
  long lVar1;
  
  *(undefined ***)this = &PTR__ios_base_0172df40;
  if (*(long *)(this + 0x48) != 0) {
    lVar1 = *(long *)(this + 0x48) + -1;
    do {
      (**(code **)(*(long *)(this + 0x38) + lVar1 * 8))
                (0,this,*(undefined4 *)(*(long *)(this + 0x40) + lVar1 * 4));
      lVar1 = lVar1 + -1;
    } while (lVar1 != -1);
  }
  locale::~locale((locale *)(this + 0x30));
  free(*(void **)(this + 0x38));
  free(*(void **)(this + 0x40));
  free(*(void **)(this + 0x58));
  free(*(void **)(this + 0x70));
  return;
}

