
/* cocos2d::Terrain::setLightMap(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Terrain::setLightMap(Terrain *this,basic_string *param_1)

{
  long lVar1;
  Image *this_00;
  Texture2D *this_01;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(Ref **)(this + 0x480) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x480));
  }
  this_00 = operator_new(0x170,(nothrow_t *)&std::nothrow);
  if (this_00 == (Image *)0x0) {
    this_00 = (Image *)0x0;
  }
  else {
    Image::Image(this_00);
  }
                    /* try { // try from 00d439dc to 00e43abf has its CatchHandler @ 00d439dc
                       catch() { ... } // from try @ 00d439dc with catch @ 00d439dc
                       catch() { ... } // from try @ 00d43ac8 with catch @ 00d439dc
                       catch() { ... } // from try @ 00d43ba4 with catch @ 00d439dc
                       catch() { ... } // from try @ 00d43c98 with catch @ 00d439dc
                       catch() { ... } // from try @ 00d43d14 with catch @ 00d439dc
                       catch() { ... } // from try @ 00d43d3c with catch @ 00d439dc */
  Image::initWithImageFile(this_00,param_1);
  this_01 = operator_new(0x88,(nothrow_t *)&std::nothrow);
  if (this_01 != (Texture2D *)0x0) {
    Texture2D::Texture2D(this_01);
  }
  *(Texture2D **)(this + 0x480) = this_01;
  Texture2D::initWithImage(this_01,this_00);
  uStack_58 = 0x290100002901;
  local_60 = 0x260100002601;
  Texture2D::setTexParameters(*(Texture2D **)(this + 0x480),(_TexParams *)&local_60);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

