
/* cocos2d::RenderQueue::realloc(unsigned long) */

void __thiscall cocos2d::RenderQueue::realloc(RenderQueue *this,ulong param_1)

{
  void *pvVar1;
  vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>> *pvVar2;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  std::__ndk1::vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>>::
  reserve((vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>> *)this,
          param_1);
  pvVar2 = (vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>> *)
           (this + 0x18);
  pvVar1 = *(void **)pvVar2;
  if (pvVar1 != (void *)0x0) {
                    /* try { // try from 00fe3d18 to 010e3d1b has its CatchHandler @ 00fe3d2c */
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
    *(undefined8 *)pvVar2 = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fe3d18 with catch @ 00fe3d2c
                        */
  *(undefined8 *)pvVar2 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  std::__ndk1::vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>>::
  reserve(pvVar2,param_1);
  pvVar2 = (vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>> *)
           (this + 0x30);
  pvVar1 = *(void **)pvVar2;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar1;
    operator_delete(pvVar1);
    *(undefined8 *)pvVar2 = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
  }
  *(undefined8 *)pvVar2 = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  std::__ndk1::vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>>::
  reserve(pvVar2,param_1);
  pvVar2 = (vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>> *)
           (this + 0x48);
  pvVar1 = *(void **)pvVar2;
                    /* try { // try from 00fe3d74 to 010e3d77 has its CatchHandler @ 00fe3d88 */
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar1;
    operator_delete(pvVar1);
    *(undefined8 *)pvVar2 = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fe3d74 with catch @ 00fe3d88
                        */
  *(undefined8 *)pvVar2 = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  std::__ndk1::vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>>::
  reserve(pvVar2,param_1);
  pvVar2 = (vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>> *)
           (this + 0x60);
  pvVar1 = *(void **)pvVar2;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x68) = pvVar1;
    operator_delete(pvVar1);
    *(undefined8 *)pvVar2 = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x70) = 0;
  }
  *(undefined8 *)pvVar2 = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
                    /* try { // try from 00fe3dcc to 010e3dcf has its CatchHandler @ 00fe3de8 */
  std::__ndk1::vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>>::
  reserve(pvVar2,param_1);
  return;
}

