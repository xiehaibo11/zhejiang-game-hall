
/* cocos2d::GridBase::initWithSize(cocos2d::Size const&, cocos2d::Texture2D*, bool, cocos2d::Rect
   const&) */

bool __thiscall
cocos2d::GridBase::initWithSize
          (GridBase *this,Size *param_1,Texture2D *param_2,bool param_3,Rect *param_4)

{
  long lVar1;
  ulong uVar2;
  Grabber *this_00;
  GLProgramCache *this_01;
  undefined8 uVar3;
  float local_60;
  float fStack_5c;
  void *local_50;
  long local_48;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f073b0 with catch @ 00f0749c
                        */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f0739c with catch @ 00f074b4
                        */
  this[0x21] = (GridBase)0x0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f0751c with catch @ 00f074c8
                        */
  *(undefined4 *)(this + 0x24) = 0;
  Size::operator=((Size *)(this + 0x28),param_1);
  *(Texture2D **)(this + 0x30) = param_2;
  if (param_2 != (Texture2D *)0x0) {
    Ref::retain((Ref *)param_2);
  }
  this[0x48] = (GridBase)param_3;
  uVar2 = Rect::equals((Rect *)param_4,(Rect *)Rect::ZERO);
  if ((uVar2 & 1) == 0) {
    Rect::operator=((Rect *)(this + 0x5c),(Rect *)param_4);
  }
  else {
    Texture2D::getContentSize();
                    /* try { // try from 00f07514 to 0100751b has its CatchHandler @ 00f07690 */
                    /* try { // try from 00f0751c to 01007693 has its CatchHandler @ 00f074c8 */
    Rect::setRect((Rect *)(this + 0x5c),0.0,0.0,local_60,fStack_5c);
  }
  *(ulong *)(this + 0x38) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 100) >> 0x20) /
                (float)((ulong)*(undefined8 *)(this + 0x28) >> 0x20),
                (float)*(undefined8 *)(this + 100) / (float)*(undefined8 *)(this + 0x28));
  this_00 = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this_00 == (Grabber *)0x0) {
    *(undefined8 *)(this + 0x40) = 0;
  }
  else {
    Grabber::Grabber(this_00);
    *(Grabber **)(this + 0x40) = this_00;
    Grabber::grab(this_00,*(Texture2D **)(this + 0x30));
  }
  this_01 = (GLProgramCache *)GLProgramCache::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_60,GLProgram::SHADER_NAME_POSITION_TEXTURE);
  uVar3 = GLProgramCache::getGLProgram(this_01,(basic_string *)&local_60);
  *(undefined8 *)(this + 0x50) = uVar3;
  if (((byte)local_60._0_1_ & 1) != 0) {
    operator_delete(local_50);
  }
  (**(code **)(*(long *)this + 0x30))(this);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this_00 != (Grabber *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

