
/* cocos2d::renderer::Light::generateShadowMap(cocos2d::renderer::DeviceGraphics*) */

void __thiscall cocos2d::renderer::Light::generateShadowMap(Light *this,DeviceGraphics *param_1)

{
  long lVar1;
  Texture2D *this_00;
  RenderBuffer *this_01;
  FrameBuffer *this_02;
  void *local_88;
  void *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined2 local_60;
  undefined2 local_5e;
  undefined1 local_5c;
  undefined4 local_5a;
  undefined2 local_56;
  undefined1 local_54;
  undefined4 local_53;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009c0b74 to 00ac0bcb has its CatchHandler @ 009c0b74
                       catch() { ... } // from try @ 009c0b74 with catch @ 009c0b74
                       catch() { ... } // from try @ 009c0d64 with catch @ 009c0b74 */
  this_00 = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this_00 == (Texture2D *)0x0) {
    *(undefined8 *)(this + 0x68) = 0;
  }
  else {
    Texture2D::Texture2D(this_00);
    *(Texture2D **)(this + 0x68) = this_00;
    this_01 = operator_new(0x20,(nothrow_t *)&std::nothrow);
    if (this_01 == (RenderBuffer *)0x0) {
      *(undefined8 *)(this + 0x78) = 0;
      Ref::release((Ref *)this_00);
      *(undefined8 *)(this + 0x68) = 0;
    }
    else {
      RenderBuffer::RenderBuffer(this_01);
      *(RenderBuffer **)(this + 0x78) = this_01;
      this_02 = operator_new(0x50,(nothrow_t *)&std::nothrow);
                    /* try { // try from 009c0bcc to 00ac0be3 has its CatchHandler @ 009c0de4 */
      if (this_02 == (FrameBuffer *)0x0) {
        *(undefined8 *)(this + 0x60) = 0;
        Ref::release(*(Ref **)(this + 0x68));
        Ref::release(*(Ref **)(this + 0x78));
        *(undefined8 *)(this + 0x68) = 0;
        *(undefined8 *)(this + 0x78) = 0;
      }
      else {
        FrameBuffer::FrameBuffer(this_02);
        *(FrameBuffer **)(this + 0x60) = this_02;
        local_80 = (void *)0x0;
        uStack_78 = 0;
        local_88 = (void *)0x0;
                    /* try { // try from 009c0bec to 00ac0bf7 has its CatchHandler @ 009c0de0 */
        local_5c = 0;
        local_56 = 0x101;
        local_54 = 1;
                    /* try { // try from 009c0bf8 to 00ac0c03 has its CatchHandler @ 009c0ddc */
        local_53 = 0;
        local_60 = *(undefined2 *)(this + 0x80);
                    /* try { // try from 009c0c04 to 00ac0d63 has its CatchHandler @ 009c0df4 */
        uStack_68 = 0x140100001908;
        local_70 = 0x190800000001;
        local_5a = 0x812f812f;
        local_5e = local_60;
        Texture2D::init(*(Texture2D **)(this + 0x68),param_1,(Options *)&local_88);
        RenderBuffer::init(*(RenderBuffer **)(this + 0x78),param_1,0x81a5,
                           *(undefined4 *)(this + 0x80),*(undefined4 *)(this + 0x80));
        FrameBuffer::init(*(FrameBuffer **)(this + 0x60),param_1,
                          (ushort)*(undefined4 *)(this + 0x80),(ushort)*(undefined4 *)(this + 0x80))
        ;
        FrameBuffer::setColorBuffer
                  (*(FrameBuffer **)(this + 0x60),*(RenderTarget **)(this + 0x68),0);
        FrameBuffer::setDepthBuffer(*(FrameBuffer **)(this + 0x60),*(RenderTarget **)(this + 0x78));
        if (local_88 != (void *)0x0) {
          local_80 = local_88;
          operator_delete(local_88);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

