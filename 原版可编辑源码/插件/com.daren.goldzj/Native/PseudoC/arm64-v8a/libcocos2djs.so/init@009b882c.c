
/* cocos2d::renderer::Texture2D::init(cocos2d::renderer::DeviceGraphics*,
   cocos2d::renderer::Texture::Options&) */

uint __thiscall
cocos2d::renderer::Texture2D::init(Texture2D *this,DeviceGraphics *param_1,Options *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
                    /* try { // try from 009b8834 to 00ab884b has its CatchHandler @ 009b8a08 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009b8854 to 00ab885f has its CatchHandler @ 009b8a04 */
  uVar3 = Texture::init((Texture *)this,param_1);
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 009b8860 to 00ab886b has its CatchHandler @ 009b8a00 */
                    /* try { // try from 009b886c to 00ab898b has its CatchHandler @ 009b8a18 */
    *(undefined4 *)(this + 0x1c) = 0xde1;
    glGenTextures(1,this + 0xc);
    puVar1 = *(undefined8 **)param_2;
    if (puVar1 == *(undefined8 **)(param_2 + 8)) {
      local_48 = 0;
      uStack_40 = 0;
      if (puVar1 < *(undefined8 **)(param_2 + 0x10)) {
        puVar1[1] = 0;
        *puVar1 = 0;
        *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x10;
      }
      else {
        std::__ndk1::
        vector<cocos2d::renderer::Texture::Image,std::__ndk1::allocator<cocos2d::renderer::Texture::Image>>
        ::__push_back_slow_path<cocos2d::renderer::Texture::Image>
                  ((vector<cocos2d::renderer::Texture::Image,std::__ndk1::allocator<cocos2d::renderer::Texture::Image>>
                    *)param_2,(Image *)&local_48);
      }
    }
    update(this,param_2);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

