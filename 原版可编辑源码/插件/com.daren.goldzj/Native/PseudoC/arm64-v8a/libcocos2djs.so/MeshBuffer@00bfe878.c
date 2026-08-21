
/* cocos2d::middleware::MeshBuffer::MeshBuffer(int, unsigned long, unsigned long) */

void __thiscall
cocos2d::middleware::MeshBuffer::MeshBuffer
          (MeshBuffer *this,int param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  IndexBuffer *this_00;
  undefined8 uVar6;
  VertexBuffer *this_01;
  code *pcVar7;
  long *plVar8;
  VertexBuffer *local_c8;
  undefined **local_c0;
  MeshBuffer *pMStack_b8;
  undefined ***local_a0;
  IndexBuffer *local_90;
  MeshBuffer *pMStack_88;
  IndexBuffer **local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *(undefined ***)this = &PTR__MeshBuffer_01c8ca60;
  uVar4 = (long)param_1 * param_3 * 4;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)(this + 0x40) = &PTR__IOBuffer_01c8e178;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(ulong *)(this + 0x50) = uVar4;
  this[0x68] = (MeshBuffer)0x0;
  pvVar5 = operator_new__(uVar4);
  *(void **)(this + 0x48) = pvVar5;
  *(undefined ***)(this + 0xe0) = &PTR__IOBuffer_01c8e178;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(ulong *)(this + 0xf0) = param_2;
  this[0x108] = (MeshBuffer)0x0;
  pvVar5 = operator_new__(param_2);
  *(undefined8 *)(this + 0x110) = 0xfa000;
  *(void **)(this + 0xe8) = pvVar5;
  *(ulong *)(this + 0x70) =
       -(ulong)((uint)(param_1 * 0xffff) >> 0x1f) & 0xfffffffc00000000 |
       (ulong)(uint)(param_1 * 0xffff) << 2;
  local_a0 = &local_c0;
  *(int *)(this + 0x180) = param_1;
  local_c0 = &PTR_FUN_01c8ca90;
  local_90 = (IndexBuffer *)&PTR_FUN_01c8ca90;
  pMStack_b8 = this;
  pMStack_88 = this;
  local_70 = &local_90;
  FUN_008feca4(&local_90,this + 0x80);
  if (&local_90 == local_70) {
    pcVar7 = *(code **)(*local_70 + 0x20);
LAB_00bfe9a0:
    (*pcVar7)();
  }
  else if (local_70 != (IndexBuffer **)0x0) {
    pcVar7 = *(code **)(*local_70 + 0x28);
    goto LAB_00bfe9a0;
  }
  if (&local_c0 == local_a0) {
    pcVar7 = (code *)(*local_a0)[4];
LAB_00bfe9cc:
    (*pcVar7)();
  }
  else if (local_a0 != (undefined ***)0x0) {
    pcVar7 = (code *)(*local_a0)[5];
    goto LAB_00bfe9cc;
  }
  this_00 = operator_new(0x60);
  renderer::IndexBuffer::IndexBuffer(this_00);
  local_90 = this_00;
  uVar6 = renderer::DeviceGraphics::getInstance();
  renderer::IndexBuffer::init(this_00,uVar6,0x1403,0x88e4,0,0,*(uint *)(this + 0xf0) >> 1);
  if (*(undefined8 **)(this + 0x10) == *(undefined8 **)(this + 0x18)) {
    std::__ndk1::
    vector<cocos2d::renderer::IndexBuffer*,std::__ndk1::allocator<cocos2d::renderer::IndexBuffer*>>
    ::__push_back_slow_path<cocos2d::renderer::IndexBuffer*const&>
              ((vector<cocos2d::renderer::IndexBuffer*,std::__ndk1::allocator<cocos2d::renderer::IndexBuffer*>>
                *)(this + 8),&local_90);
  }
  else {
    **(undefined8 **)(this + 0x10) = this_00;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  }
  this_01 = operator_new(0x60);
  renderer::VertexBuffer::VertexBuffer(this_01);
  local_c8 = this_01;
  if (*(int *)(this + 0x180) == 6) {
    uVar6 = renderer::DeviceGraphics::getInstance();
    plVar8 = &renderer::VertexFormat::XY_UV_Two_Color;
  }
  else {
    if (*(int *)(this + 0x180) != 5) goto LAB_00bfeaa4;
    uVar6 = renderer::DeviceGraphics::getInstance();
    plVar8 = &renderer::VertexFormat::XY_UV_Color;
  }
  uVar1 = *(uint *)(*plVar8 + 0x50);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = *(uint *)(this + 0x50) / uVar1;
  }
  renderer::VertexBuffer::init(this_01,uVar6,*plVar8,0x88e8,0,0,uVar2);
LAB_00bfeaa4:
  if (*(undefined8 **)(this + 0x28) == *(undefined8 **)(this + 0x30)) {
    std::__ndk1::
    vector<cocos2d::renderer::VertexBuffer*,std::__ndk1::allocator<cocos2d::renderer::VertexBuffer*>>
    ::__push_back_slow_path<cocos2d::renderer::VertexBuffer*const&>
              ((vector<cocos2d::renderer::VertexBuffer*,std::__ndk1::allocator<cocos2d::renderer::VertexBuffer*>>
                *)(this + 0x20),&local_c8);
  }
  else {
    **(undefined8 **)(this + 0x28) = local_c8;
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 8;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

