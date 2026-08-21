
/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::basic_filebuf() */

void __thiscall
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::basic_filebuf
          (basic_filebuf<char,std::__ndk1::char_traits<char>> *this)

{
  locale *this_00;
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  locale alStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (locale *)(this + 8);
  *(undefined ***)this = &PTR__basic_streambuf_01698a08;
  locale::locale(this_00);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined ***)this = &PTR__basic_filebuf_016cde80;
  *(undefined4 *)(this + 0x9f) = 0;
  locale::locale(alStack_50,this_00);
  uVar3 = locale::has_facet(alStack_50,(id *)&codecvt<char,char,mbstate_t>::id);
  locale::~locale(alStack_50);
  if ((uVar3 & 1) != 0) {
    locale::locale(alStack_50,this_00);
    uVar4 = locale::use_facet(alStack_50,(id *)&codecvt<char,char,mbstate_t>::id);
    *(undefined8 *)(this + 0x80) = uVar4;
    locale::~locale(alStack_50);
    bVar2 = (**(code **)(**(long **)(this + 0x80) + 0x38))();
    this[0xa2] = (basic_filebuf<char,std::__ndk1::char_traits<char>>)(bVar2 & 1);
  }
  (**(code **)(*(long *)this + 0x18))(this,0,0x1000);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

