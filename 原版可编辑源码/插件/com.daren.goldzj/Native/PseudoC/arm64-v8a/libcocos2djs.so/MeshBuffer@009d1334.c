
/* cocos2d::renderer::MeshBuffer::MeshBuffer(cocos2d::renderer::ModelBatcher*,
   cocos2d::renderer::VertexFormat*) */

void __thiscall
cocos2d::renderer::MeshBuffer::MeshBuffer
          (MeshBuffer *this,ModelBatcher *param_1,VertexFormat *param_2)

{
  long lVar1;
  ulong uVar2;
  IndexBuffer *this_00;
  void *pvVar3;
  undefined8 uVar4;
  void *pvVar5;
  VertexBuffer *local_60;
  long local_58;
  
                    /* try { // try from 009d1338 to 00ad1517 has its CatchHandler @ 009d2218 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(VertexFormat **)(this + 0x10) = param_2;
  *(undefined8 *)(this + 0x3d) = 0;
  *(undefined8 *)(this + 0x35) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(ModelBatcher **)(this + 0x48) = param_1;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_2 + 0x50);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x10);
  local_60 = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (local_60 != (VertexBuffer *)0x0) {
    VertexBuffer::VertexBuffer(local_60);
    uVar2 = VertexBuffer::init(local_60,uVar4,param_2,0x88e8,0,0,0);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)local_60 + 8))(local_60);
      local_60 = (VertexBuffer *)0x0;
    }
    else {
      Ref::autorelease((Ref *)local_60);
    }
  }
  *(VertexBuffer **)(this + 0x88) = local_60;
  if (*(undefined8 **)(this + 0x60) == *(undefined8 **)(this + 0x68)) {
    std::__ndk1::
    vector<cocos2d::renderer::VertexBuffer*,std::__ndk1::allocator<cocos2d::renderer::VertexBuffer*>>
    ::__push_back_slow_path<cocos2d::renderer::VertexBuffer*const&>
              ((vector<cocos2d::renderer::VertexBuffer*,std::__ndk1::allocator<cocos2d::renderer::VertexBuffer*>>
                *)(this + 0x58),&local_60);
  }
  else {
    **(undefined8 **)(this + 0x60) = local_60;
    *(long *)(this + 0x60) = *(long *)(this + 0x60) + 8;
  }
  Ref::retain((Ref *)local_60);
  this_00 = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this_00 != (IndexBuffer *)0x0) {
    IndexBuffer::IndexBuffer(this_00);
    uVar2 = IndexBuffer::init(this_00,uVar4,0x1403,0x88e4,0,0,0);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this_00 + 8))(this_00);
      this_00 = (IndexBuffer *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this_00);
    }
  }
  *(IndexBuffer **)(this + 0x90) = this_00;
  local_60 = (VertexBuffer *)this_00;
  if (*(undefined8 **)(this + 0x78) == *(undefined8 **)(this + 0x80)) {
    std::__ndk1::
    vector<cocos2d::renderer::IndexBuffer*,std::__ndk1::allocator<cocos2d::renderer::IndexBuffer*>>
    ::__push_back_slow_path<cocos2d::renderer::IndexBuffer*const&>
              ((vector<cocos2d::renderer::IndexBuffer*,std::__ndk1::allocator<cocos2d::renderer::IndexBuffer*>>
                *)(this + 0x70),(IndexBuffer **)&local_60);
  }
  else {
    **(undefined8 **)(this + 0x78) = this_00;
    *(long *)(this + 0x78) = *(long *)(this + 0x78) + 8;
  }
  Ref::retain((Ref *)local_60);
  pvVar5 = *(void **)this;
  *(uint *)(this + 0x34) = (*(uint *)(this + 0x30) & 0x3ffff) << 0xc;
  *(undefined4 *)(this + 0x38) = 0x6000;
  pvVar3 = operator_new__((ulong)(*(uint *)(this + 0x30) << 0xe));
  *(void **)this = pvVar3;
  if (pvVar5 == (void *)0x0) {
    uVar2 = 0xc000;
  }
  else {
    memcpy(pvVar3,pvVar5,(ulong)*(uint *)(this + 0x3c) << 2);
    operator_delete__(pvVar5);
    uVar2 = (ulong)*(uint *)(this + 0x38) << 1;
  }
  pvVar5 = *(void **)(this + 8);
  pvVar3 = operator_new__(uVar2);
  *(void **)(this + 8) = pvVar3;
  if (pvVar5 != (void *)0x0) {
    memcpy(pvVar3,pvVar5,(ulong)*(uint *)(this + 0x40) << 1);
    operator_delete__(pvVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

