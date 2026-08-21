
/* cocos2d::renderer::MeshBuffer::switchBuffer(unsigned int) */

void cocos2d::renderer::MeshBuffer::switchBuffer(uint param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  IndexBuffer *this;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  VertexBuffer *local_50;
  long local_48;
  
  uVar2 = (ulong)param_1;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(uVar2 + 0x58);
  *(undefined4 *)(uVar2 + 0x2c) = 0;
  *(undefined8 *)(uVar2 + 0x20) = 0;
  uVar3 = *(long *)(uVar2 + 0x50) + 1;
  *(ulong *)(uVar2 + 0x50) = uVar3;
  *(undefined4 *)(uVar2 + 0x1c) = 0;
  if (uVar3 < (ulong)(*(long *)(uVar2 + 0x60) - lVar4 >> 3)) {
    *(undefined8 *)(uVar2 + 0x88) = *(undefined8 *)(lVar4 + uVar3 * 8);
    *(undefined8 *)(uVar2 + 0x90) = *(undefined8 *)(*(long *)(uVar2 + 0x70) + uVar3 * 8);
  }
  else {
    uVar6 = *(undefined8 *)(uVar2 + 0x10);
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(uVar2 + 0x48) + 0x68) + 0x10);
    local_50 = operator_new(0x60,(nothrow_t *)&std::nothrow);
    if (local_50 != (VertexBuffer *)0x0) {
      VertexBuffer::VertexBuffer(local_50);
      uVar3 = VertexBuffer::init(local_50,uVar5,uVar6,0x88e8,0,0,0);
      if ((uVar3 & 1) == 0) {
        (**(code **)(*(long *)local_50 + 8))(local_50);
        local_50 = (VertexBuffer *)0x0;
      }
      else {
        Ref::autorelease((Ref *)local_50);
      }
    }
    *(VertexBuffer **)(uVar2 + 0x88) = local_50;
    *(int *)(local_50 + 0x28) = *(int *)(uVar2 + 0x34) << 2;
    if (*(undefined8 **)(uVar2 + 0x60) == *(undefined8 **)(uVar2 + 0x68)) {
      std::__ndk1::
      vector<cocos2d::renderer::VertexBuffer*,std::__ndk1::allocator<cocos2d::renderer::VertexBuffer*>>
      ::__push_back_slow_path<cocos2d::renderer::VertexBuffer*const&>
                ((vector<cocos2d::renderer::VertexBuffer*,std::__ndk1::allocator<cocos2d::renderer::VertexBuffer*>>
                  *)(uVar2 + 0x58),&local_50);
    }
    else {
      **(undefined8 **)(uVar2 + 0x60) = local_50;
      *(long *)(uVar2 + 0x60) = *(long *)(uVar2 + 0x60) + 8;
    }
    Ref::retain((Ref *)local_50);
    this = operator_new(0x60,(nothrow_t *)&std::nothrow);
    if (this != (IndexBuffer *)0x0) {
      IndexBuffer::IndexBuffer(this);
      uVar3 = IndexBuffer::init(this,uVar5,0x1403,0x88e4,0,0,0);
      if ((uVar3 & 1) == 0) {
        (**(code **)(*(long *)this + 8))(this);
        this = (IndexBuffer *)0x0;
      }
      else {
        Ref::autorelease((Ref *)this);
      }
    }
    *(IndexBuffer **)(uVar2 + 0x90) = this;
    *(int *)(this + 0x24) = *(int *)(uVar2 + 0x38) << 1;
    local_50 = (VertexBuffer *)this;
    if (*(undefined8 **)(uVar2 + 0x78) == *(undefined8 **)(uVar2 + 0x80)) {
      std::__ndk1::
      vector<cocos2d::renderer::IndexBuffer*,std::__ndk1::allocator<cocos2d::renderer::IndexBuffer*>>
      ::__push_back_slow_path<cocos2d::renderer::IndexBuffer*const&>
                ((vector<cocos2d::renderer::IndexBuffer*,std::__ndk1::allocator<cocos2d::renderer::IndexBuffer*>>
                  *)(uVar2 + 0x70),(IndexBuffer **)&local_50);
    }
    else {
      **(undefined8 **)(uVar2 + 0x78) = this;
      *(long *)(uVar2 + 0x78) = *(long *)(uVar2 + 0x78) + 8;
    }
    Ref::retain((Ref *)local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

