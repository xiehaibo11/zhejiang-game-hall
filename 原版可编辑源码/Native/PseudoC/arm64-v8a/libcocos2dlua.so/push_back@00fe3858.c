
/* cocos2d::RenderQueue::push_back(cocos2d::RenderCommand*) */

void __thiscall cocos2d::RenderQueue::push_back(RenderQueue *this,RenderCommand *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  RenderCommand *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_30 = param_1;
  if (0.0 <= *(float *)(param_1 + 0xc)) {
    if (*(float *)(param_1 + 0xc) <= 0.0) {
      if (param_1[0x12] == (RenderCommand)0x0) {
                    /* try { // try from 00fe38e8 to 010e395f has its CatchHandler @ 00fe38b4 */
        puVar1 = *(undefined8 **)(this + 0x50);
        if (puVar1 != *(undefined8 **)(this + 0x58)) {
          *puVar1 = param_1;
          *(undefined8 **)(this + 0x50) = puVar1 + 1;
          goto LAB_00fe3934;
        }
        this = this + 0x48;
      }
      else if (param_1[0x10] == (RenderCommand)0x0) {
        puVar1 = *(undefined8 **)(this + 0x20);
        if (puVar1 != *(undefined8 **)(this + 0x28)) {
          *puVar1 = param_1;
          *(undefined8 **)(this + 0x20) = puVar1 + 1;
          goto LAB_00fe3934;
        }
        this = this + 0x18;
      }
      else {
        puVar1 = *(undefined8 **)(this + 0x38);
        if (puVar1 != *(undefined8 **)(this + 0x40)) {
          *puVar1 = param_1;
          *(undefined8 **)(this + 0x38) = puVar1 + 1;
          goto LAB_00fe3934;
        }
        this = this + 0x30;
      }
    }
    else {
      puVar1 = *(undefined8 **)(this + 0x68);
      if (puVar1 != *(undefined8 **)(this + 0x70)) {
        *puVar1 = param_1;
        *(undefined8 **)(this + 0x68) = puVar1 + 1;
                    /* catch() { ... } // from try @ 00fe38e8 with catch @ 00fe38b4 */
        goto LAB_00fe3934;
      }
                    /* try { // try from 00fe38e0 to 010e38e7 has its CatchHandler @ 00fe3944 */
      this = this + 0x60;
    }
  }
  else {
    puVar1 = *(undefined8 **)(this + 8);
    if (puVar1 != *(undefined8 **)(this + 0x10)) {
      *puVar1 = param_1;
      *(undefined8 **)(this + 8) = puVar1 + 1;
                    /* catch() { ... } // from try @ 00fe3818 with catch @ 00fe3898 */
      goto LAB_00fe3934;
    }
  }
  std::__ndk1::vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>>::
  __push_back_slow_path<cocos2d::RenderCommand*const&>
            ((vector<cocos2d::RenderCommand*,std::__ndk1::allocator<cocos2d::RenderCommand*>> *)this
             ,&local_30);
LAB_00fe3934:
  if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00fe38e0 with catch @ 00fe3944 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

