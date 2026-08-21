
/* cocos2d::FontAtlasFrame::getTexture() */

void __thiscall cocos2d::FontAtlasFrame::getTexture(FontAtlasFrame *this)

{
  long lVar1;
  int iVar2;
  DeviceGraphics *pDVar3;
  Texture2D *this_00;
  long lVar4;
  float fVar5;
  float fVar6;
  long local_98;
  long lStack_90;
  long *local_88;
  undefined8 local_80;
  long *local_78;
  ulong local_70;
  undefined8 uStack_68;
  undefined2 local_60;
  undefined2 local_5e;
  char local_5c;
  undefined4 local_5a;
  undefined2 local_56;
  undefined1 local_54;
  undefined4 local_53;
  long local_48;
  
                    /* catch() { ... } // from try @ 009f1bd0 with catch @ 009f20f0 */
                    /* catch() { ... } // from try @ 009f1f44 with catch @ 009f2104
                       catch() { ... } // from try @ 009f1f84 with catch @ 009f2104
                       catch() { ... } // from try @ 009f1fd4 with catch @ 009f2104 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009f2118 to 00af216b has its CatchHandler @ 009f2118
                       catch() { ... } // from try @ 009f2118 with catch @ 009f2118
                       catch() { ... } // from try @ 009f2230 with catch @ 009f2118 */
  if (*(long *)(this + 0x50) == 0) {
    pDVar3 = (DeviceGraphics *)renderer::DeviceGraphics::getInstance();
    this_00 = operator_new(0x40);
    renderer::Texture2D::Texture2D(this_00);
    *(Texture2D **)(this + 0x50) = this_00;
    local_5a = 0x812f812f;
    local_88 = (long *)0x0;
    local_80 = (long *)0x0;
    local_78 = (long *)0x0;
    local_5c = 0;
    local_56 = 0x101;
    local_54 = 1;
    local_53 = 0;
                    /* try { // try from 009f216c to 00af2183 has its CatchHandler @ 009f22bc */
    local_60 = (undefined2)*(undefined4 *)(this + 0x34);
    uStack_68 = 0x140100001906;
    local_70 = 0x190600000001;
    local_5e = (undefined2)*(undefined4 *)(this + 0x38);
    local_5c = PixelModeSize(*(undefined4 *)(this + 0x48));
                    /* try { // try from 009f218c to 00af2197 has its CatchHandler @ 009f22a8 */
    local_5c = local_5c << 3;
    local_98 = *(long *)(this + 8);
                    /* try { // try from 009f2198 to 00af21a3 has its CatchHandler @ 009f22a4 */
    lStack_90 = *(long *)(this + 0x10) - local_98;
                    /* try { // try from 009f21a4 to 00af21d3 has its CatchHandler @ 009f22cc */
    if (local_80 == local_78) {
      std::__ndk1::
      vector<cocos2d::renderer::Texture::Image,std::__ndk1::allocator<cocos2d::renderer::Texture::Image>>
      ::__push_back_slow_path<cocos2d::renderer::Texture::Image_const&>
                ((vector<cocos2d::renderer::Texture::Image,std::__ndk1::allocator<cocos2d::renderer::Texture::Image>>
                  *)&local_88,(Image *)&local_98);
    }
    else {
      local_80[1] = lStack_90;
      *local_80 = local_98;
      local_80 = local_80 + 2;
    }
                    /* try { // try from 009f21d4 to 00af21e3 has its CatchHandler @ 009f22ac */
    renderer::Texture2D::init(*(Texture2D **)(this + 0x50),pDVar3,(Options *)&local_88);
    if (local_88 != (long *)0x0) {
      local_80 = local_88;
      operator_delete(local_88);
    }
  }
                    /* try { // try from 009f21f4 to 00af222f has its CatchHandler @ 009f22cc */
  if ((*(uint *)(this + 0x20) >> 1 & 1) == 0) {
    if ((*(uint *)(this + 0x20) & 1) == 0) goto LAB_009f22a0;
    fVar5 = (float)Rect::getMinY((Rect *)(this + 0x24));
    fVar6 = *(float *)(this + 0x30);
    local_70 = local_70 & 0xffffffffff000000;
    lVar4 = *(long *)(this + 8);
    iVar2 = PixelModeSize(*(undefined4 *)(this + 0x48));
                    /* try { // try from 009f2230 to 00af2323 has its CatchHandler @ 009f2118 */
    local_88 = (long *)(CONCAT26((short)(int)fVar5,(int6)local_88) & 0xffff0000ffffffff);
    local_78 = (long *)(lVar4 + iVar2 * (int)fVar5 * *(int *)(this + 0x34));
    local_80._0_4_ = CONCAT22((short)(int)fVar6,(short)*(int *)(this + 0x34));
    iVar2 = PixelModeSize(*(undefined4 *)(this + 0x48));
    local_88 = (long *)CONCAT44(local_88._4_4_,iVar2 * (int)fVar6 * *(int *)(this + 0x34));
  }
  else {
    local_70 = local_70 & 0xffffffffff000000;
    local_78 = *(long **)(this + 8);
    local_80._0_4_ =
         CONCAT22((short)*(undefined4 *)(this + 0x38),(short)*(undefined4 *)(this + 0x34));
    local_88 = (long *)(ulong)(uint)(*(int *)(this + 0x10) - (int)local_78);
  }
  renderer::Texture2D::updateSubImage(*(Texture2D **)(this + 0x50),(SubImageOption *)&local_88);
LAB_009f22a0:
  *(undefined4 *)(this + 0x20) = 0;
                    /* catch() { ... } // from try @ 009f2198 with catch @ 009f22a4 */
                    /* catch() { ... } // from try @ 009f218c with catch @ 009f22a8 */
                    /* catch() { ... } // from try @ 009f21d4 with catch @ 009f22ac */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 009f216c with catch @ 009f22bc */
                    /* catch() { ... } // from try @ 009f21a4 with catch @ 009f22cc
                       catch() { ... } // from try @ 009f21f4 with catch @ 009f22cc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(this + 0x50));
}

