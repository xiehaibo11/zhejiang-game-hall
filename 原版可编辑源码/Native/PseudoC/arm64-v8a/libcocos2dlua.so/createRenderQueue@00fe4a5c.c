
/* cocos2d::Renderer::createRenderQueue() */

int __thiscall cocos2d::Renderer::createRenderQueue(Renderer *this)

{
  long lVar1;
  long lVar2;
  RenderQueue *pRVar3;
  void *local_c0;
  void *pvStack_b8;
  undefined8 local_b0;
  void *pvStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  void *local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  void *local_78;
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00fe4a80 to 010e4a8f has its CatchHandler @ 00fe4aa8 */
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  local_58 = (void *)0x0;
  local_60 = (void *)0x0;
  pvStack_88 = (void *)0x0;
  local_90 = (void *)0x0;
  local_78 = (void *)0x0;
  uStack_80 = 0;
  pvStack_a8 = (void *)0x0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = (void *)0x0;
  pvStack_b8 = (void *)0x0;
  local_c0 = (void *)0x0;
  pRVar3 = *(RenderQueue **)(this + 0x48);
  if (pRVar3 == *(RenderQueue **)(this + 0x50)) {
                    /* catch() { ... } // from try @ 00fe4afc with catch @ 00fe4ac4 */
    std::__ndk1::vector<cocos2d::RenderQueue,std::__ndk1::allocator<cocos2d::RenderQueue>>::
    __push_back_slow_path<cocos2d::RenderQueue_const&>
              ((vector<cocos2d::RenderQueue,std::__ndk1::allocator<cocos2d::RenderQueue>> *)
               (this + 0x40),(RenderQueue *)&local_c0);
    pRVar3 = *(RenderQueue **)(this + 0x48);
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fe4a80 with catch @ 00fe4aa8
                        */
    std::__ndk1::allocator<cocos2d::RenderQueue>::
    construct<cocos2d::RenderQueue,cocos2d::RenderQueue_const&>
              ((allocator<cocos2d::RenderQueue> *)(this + 0x50),pRVar3,(RenderQueue *)&local_c0);
    pRVar3 = pRVar3 + 0x80;
    *(RenderQueue **)(this + 0x48) = pRVar3;
  }
  lVar2 = *(long *)(this + 0x40);
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  if (local_78 != (void *)0x0) {
    local_70 = local_78;
                    /* try { // try from 00fe4af4 to 010e4afb has its CatchHandler @ 00fe4b7c */
    operator_delete(local_78);
  }
                    /* try { // try from 00fe4afc to 010e4b97 has its CatchHandler @ 00fe4ac4 */
  if (local_90 != (void *)0x0) {
    pvStack_88 = local_90;
    operator_delete(local_90);
  }
  if (pvStack_a8 != (void *)0x0) {
    local_a0 = pvStack_a8;
    operator_delete(pvStack_a8);
  }
  if (local_c0 != (void *)0x0) {
    pvStack_b8 = local_c0;
    operator_delete(local_c0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return (int)((ulong)((long)pRVar3 - lVar2) >> 7) + -1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

