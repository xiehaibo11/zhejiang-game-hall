
/* cocos2d::middleware::MeshBuffer::next() */

void __thiscall cocos2d::middleware::MeshBuffer::next(MeshBuffer *this)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  IndexBuffer *this_00;
  undefined8 uVar4;
  VertexBuffer *this_01;
  ulong uVar5;
  long *plVar6;
  IndexBuffer *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar5 = *(long *)(this + 0x38) + 1;
  *(ulong *)(this + 0x38) = uVar5;
  if ((ulong)(*(long *)(this + 0x10) - *(long *)(this + 8) >> 3) <= uVar5) {
    this_00 = operator_new(0x60);
    renderer::IndexBuffer::IndexBuffer(this_00);
    local_40 = this_00;
    uVar4 = renderer::DeviceGraphics::getInstance();
    renderer::IndexBuffer::init(this_00,uVar4,0x1403,0x88e4,0,0,*(uint *)(this + 0xf0) >> 1);
    if (*(undefined8 **)(this + 0x10) == *(undefined8 **)(this + 0x18)) {
      std::__ndk1::
      vector<cocos2d::renderer::IndexBuffer*,std::__ndk1::allocator<cocos2d::renderer::IndexBuffer*>>
      ::__push_back_slow_path<cocos2d::renderer::IndexBuffer*const&>
                ((vector<cocos2d::renderer::IndexBuffer*,std::__ndk1::allocator<cocos2d::renderer::IndexBuffer*>>
                  *)(this + 8),&local_40);
    }
    else {
      **(undefined8 **)(this + 0x10) = this_00;
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
    }
    uVar5 = *(ulong *)(this + 0x38);
  }
  if (uVar5 < (ulong)(*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3)) goto LAB_00bfee74;
  this_01 = operator_new(0x60);
  renderer::VertexBuffer::VertexBuffer(this_01);
  local_40 = (IndexBuffer *)this_01;
  if (*(int *)(this + 0x180) == 6) {
    uVar4 = renderer::DeviceGraphics::getInstance();
    plVar6 = &renderer::VertexFormat::XY_UV_Two_Color;
LAB_00bfee1c:
    uVar1 = *(uint *)(*plVar6 + 0x50);
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = *(uint *)(this + 0x50) / uVar1;
    }
    renderer::VertexBuffer::init(this_01,uVar4,*plVar6,0x88e8,0,0,uVar2);
  }
  else if (*(int *)(this + 0x180) == 5) {
    uVar4 = renderer::DeviceGraphics::getInstance();
    plVar6 = &renderer::VertexFormat::XY_UV_Color;
    goto LAB_00bfee1c;
  }
  if (*(undefined8 **)(this + 0x28) == *(undefined8 **)(this + 0x30)) {
    std::__ndk1::
    vector<cocos2d::renderer::VertexBuffer*,std::__ndk1::allocator<cocos2d::renderer::VertexBuffer*>>
    ::__push_back_slow_path<cocos2d::renderer::VertexBuffer*const&>
              ((vector<cocos2d::renderer::VertexBuffer*,std::__ndk1::allocator<cocos2d::renderer::VertexBuffer*>>
                *)(this + 0x20),(VertexBuffer **)&local_40);
  }
  else {
    **(undefined8 **)(this + 0x28) = local_40;
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 8;
  }
LAB_00bfee74:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

