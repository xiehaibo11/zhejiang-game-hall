
/* cocos2d::cc_utf16_vec_from_utf16_str(unsigned short const*) */

void __thiscall cocos2d::cc_utf16_vec_from_utf16_str(cocos2d *this,ushort *param_1)

{
  undefined2 *puVar1;
  long lVar2;
  vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *in_x8;
  long lVar3;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  if ((this != (cocos2d *)0x0) && (*(short *)this != 0)) {
    lVar2 = 1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (*(short *)(this + lVar3 * 2) != 0);
    lVar3 = lVar3 + -1;
    while (std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
           __push_back_slow_path<unsigned_short_const&>(in_x8,(ushort *)this), lVar3 != 0) {
      while( true ) {
        puVar1 = *(undefined2 **)(in_x8 + 8);
        this = this + 2;
        lVar3 = lVar3 + -1;
        if (puVar1 == *(undefined2 **)(in_x8 + 0x10)) break;
        *puVar1 = *(undefined2 *)this;
        *(undefined2 **)(in_x8 + 8) = puVar1 + 1;
        if (lVar3 == 0) {
          return;
        }
      }
    }
  }
  return;
}

