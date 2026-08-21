
/* cocos2d::renderer::RenderBuffer::init(cocos2d::renderer::DeviceGraphics*,
   cocos2d::renderer::RenderBuffer::Format, unsigned short, unsigned short) */

undefined8 __thiscall
cocos2d::renderer::RenderBuffer::init
          (RenderBuffer *this,undefined8 param_1,undefined4 param_3,undefined2 param_4,
          undefined2 param_5)

{
  long lVar1;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x10) = param_1;
  *(undefined4 *)(this + 0x18) = param_3;
  *(undefined2 *)(this + 0x1c) = param_4;
  *(undefined2 *)(this + 0x1e) = param_5;
  glGetIntegerv(0x8ca7,&local_4c);
  glGenRenderbuffers(1,this + 0xc);
  glBindRenderbuffer(0x8d41,*(undefined4 *)(this + 0xc));
                    /* try { // try from 009b7f40 to 00ab8027 has its CatchHandler @ 009b7d60 */
  glRenderbufferStorage(0x8d41,param_3,param_4,param_5);
  glBindRenderbuffer(0x8d41,local_4c);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

