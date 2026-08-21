
/* cocos2d::Renderer::Renderer() */

void __thiscall cocos2d::Renderer::Renderer(Renderer *this)

{
  Renderer *pRVar1;
  ulong uVar2;
  RenderQueue *pRVar3;
  long lVar4;
  undefined8 uVar5;
  GroupCommandManager *this_00;
  void *pvVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  Renderer *this_01;
  void *pvVar10;
  void *local_e0;
  void *pvStack_d8;
  undefined8 local_d0;
  void *pvStack_c8;
  void *local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  void *pvStack_a8;
  undefined8 uStack_a0;
  void *local_98;
  void *local_90;
  undefined8 uStack_88;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  long local_58;
  
                    /* catch() { ... } // from try @ 00fe3fc4 with catch @ 00fe3f70 */
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  Color4F::Color4F((Color4F *)this);
                    /* try { // try from 00fe3f98 to 010e3f9f has its CatchHandler @ 00fe4030 */
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 00fe3fbc to 010e3fc3 has its CatchHandler @ 00fe4020 */
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
                    /* try { // try from 00fe3fc4 to 010e404b has its CatchHandler @ 00fe3f70 */
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  this_01 = this + 0x78;
  do {
    Vec3::Vec3((Vec3 *)this_01);
    Color4B::Color4B((Color4B *)(this_01 + 0xc));
    pRVar1 = this_01 + 0x18;
    *(undefined4 *)(this_01 + 0x10) = 0;
    *(undefined4 *)(this_01 + 0x14) = 0;
    this_01 = pRVar1;
  } while (pRVar1 != this + 0x180078);
  *(undefined2 *)(this + 0x1b00b0) = 0;
  *(undefined8 *)(this + 0x1b00c0) = 0;
  *(undefined8 *)(this + 0x1b0090) = 0;
  *(undefined8 *)(this + 0x1b0088) = 0;
  *(undefined4 *)(this + 0x1b0084) = 0xffffffff;
  this[0x1b0098] = (Renderer)0x0;
  this_00 = operator_new(0x68,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00fe3fbc with catch @ 00fe4020 */
  if (this_00 != (GroupCommandManager *)0x0) {
    GroupCommandManager::GroupCommandManager(this_00);
  }
  *(GroupCommandManager **)(this + 0x1b00b8) = this_00;
                    /* catch() { ... } // from try @ 00fe3f98 with catch @ 00fe4030 */
  lVar7 = *(long *)(this + 0x18);
  lVar8 = *(long *)(this + 0x38);
  uVar2 = 0;
  if (*(long *)(this + 0x20) - lVar7 != 0) {
    uVar2 = (*(long *)(this + 0x20) - lVar7) * 0x80 - 1;
  }
  uVar9 = lVar8 + *(long *)(this + 0x30);
  if (uVar2 == uVar9) {
    std::__ndk1::deque<int,std::__ndk1::allocator<int>>::__add_back_capacity
              ((deque<int,std::__ndk1::allocator<int>> *)(this + 0x10));
    lVar8 = *(long *)(this + 0x38);
    lVar7 = *(long *)(this + 0x18);
    uVar9 = *(long *)(this + 0x30) + lVar8;
  }
  *(undefined4 *)(*(long *)(lVar7 + (uVar9 >> 7 & 0x1fffffffffffff8)) + (uVar9 & 0x3ff) * 4) = 0;
  *(long *)(this + 0x38) = lVar8 + 1;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (void *)0x0;
  local_78 = (void *)0x0;
  local_80 = (void *)0x0;
  pvStack_a8 = (void *)0x0;
  local_b0 = (void *)0x0;
  local_98 = (void *)0x0;
  uStack_a0 = 0;
  pvStack_c8 = (void *)0x0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = (void *)0x0;
  pvStack_d8 = (void *)0x0;
  local_e0 = (void *)0x0;
  pRVar3 = *(RenderQueue **)(this + 0x48);
  if (pRVar3 == *(RenderQueue **)(this + 0x50)) {
    std::__ndk1::vector<cocos2d::RenderQueue,std::__ndk1::allocator<cocos2d::RenderQueue>>::
    __push_back_slow_path<cocos2d::RenderQueue_const&>
              ((vector<cocos2d::RenderQueue,std::__ndk1::allocator<cocos2d::RenderQueue>> *)
               (this + 0x40),(RenderQueue *)&local_e0);
  }
  else {
    std::__ndk1::allocator<cocos2d::RenderQueue>::
    construct<cocos2d::RenderQueue,cocos2d::RenderQueue_const&>
              ((allocator<cocos2d::RenderQueue> *)(this + 0x50),pRVar3,(RenderQueue *)&local_e0);
    *(RenderQueue **)(this + 0x48) = pRVar3 + 0x80;
  }
  pvVar10 = *(void **)(this + 0x60);
  if ((ulong)(*(long *)(this + 0x70) - (long)pvVar10 >> 3) < 0x40) {
    lVar7 = *(long *)(this + 0x68);
    pvVar6 = operator_new(0x200);
    lVar7 = lVar7 - (long)pvVar10;
    if (0 < lVar7) {
      __memcpy_chk(pvVar6,pvVar10,lVar7,0x200);
      pvVar10 = *(void **)(this + 0x60);
    }
    *(void **)(this + 0x60) = pvVar6;
    *(long *)(this + 0x68) = (long)pvVar6 + lVar7;
    *(long *)(this + 0x70) = (long)pvVar6 + 0x200;
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
  }
  uVar5 = Color4F::BLACK._0_8_;
  *(undefined8 *)(this + 8) = Color4F::BLACK._8_8_;
  *(undefined8 *)this = uVar5;
  *(undefined4 *)(this + 0x1b0084) = 500;
  pvVar10 = malloc(8000);
  *(void **)(this + 0x1b0088) = pvVar10;
  if (local_80 != (void *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
  if (local_b0 != (void *)0x0) {
    pvStack_a8 = local_b0;
    operator_delete(local_b0);
  }
  if (pvStack_c8 != (void *)0x0) {
    local_c0 = pvStack_c8;
    operator_delete(pvStack_c8);
  }
  if (local_e0 != (void *)0x0) {
    pvStack_d8 = local_e0;
    operator_delete(local_e0);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 00fe41b8 to 010e41e7 has its CatchHandler @ 00fe41b8
                       catch() { ... } // from try @ 00fe41b8 with catch @ 00fe41b8
                       catch() { ... } // from try @ 00fe41f0 with catch @ 00fe41b8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

