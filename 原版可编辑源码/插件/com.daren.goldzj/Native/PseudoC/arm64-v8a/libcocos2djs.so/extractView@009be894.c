
/* cocos2d::renderer::Camera::extractView(cocos2d::renderer::View&, int, int) */

void __thiscall
cocos2d::renderer::Camera::extractView(Camera *this,View *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(this + 0x58);
  if (lVar2 != 0) {
    param_2 = (int)*(ushort *)(lVar2 + 0x48);
    param_3 = (int)*(ushort *)(lVar2 + 0x4a);
  }
  Rect::set((Rect *)(param_1 + 0x10),*(float *)(this + 0x6c) * (float)param_2,
            *(float *)(this + 0x70) * (float)param_3,*(float *)(this + 0x74) * (float)param_2,
            *(float *)(this + 0x78) * (float)param_3);
  uVar3 = *(undefined8 *)(this + 0x1c);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(this + 0x24);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(int *)(param_1 + 0x30) = (int)*(float *)(this + 0x2c);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(this + 0x30);
  *(Camera *)(param_1 + 0x3c) = this[0x38];
  calcMatrices(this,param_2,param_3);
  Mat4::set((Mat4 *)(param_1 + 0x40),(Mat4 *)(this + 0xcc));
  Mat4::set((Mat4 *)(param_1 + 0x80),(Mat4 *)(this + 0x80));
  Mat4::set((Mat4 *)(param_1 + 0xc0),(Mat4 *)(this + 0x10c));
  Mat4::set((Mat4 *)(param_1 + 0x100),(Mat4 *)(this + 0x14c));
  Mat4::set((Mat4 *)(param_1 + 0x140),(Mat4 *)(this + 0x18c));
  if ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
       *)(param_1 + 0x180) !=
      (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
       *)(this + 0x40)) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(param_1 + 0x180),*(basic_string **)(this + 0x40),*(basic_string **)(this + 0x48))
    ;
  }
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(this + 0x58);
  uVar1 = *(undefined4 *)(this + 0x34);
  param_1[0x198] = (View)0x1;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  return;
}

