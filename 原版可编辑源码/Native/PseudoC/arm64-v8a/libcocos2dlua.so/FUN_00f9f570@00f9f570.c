
void FUN_00f9f570(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  EventDispatcher *this;
  size_t __n;
  long lVar2;
  long *__dest;
  Ref *this_00;
  Ref *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_2 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00f9f14c with catch @ 00f9f598 */
    __dest = (long *)*param_2;
    if ((long *)param_2[1] != __dest) {
      this_00 = (Ref *)*__dest;
      this = (EventDispatcher *)param_1[1];
      if (this_00 != *(Ref **)*param_1) {
        local_50 = this_00;
        do {
          if ((long *)param_2[1] + -1 == __dest) goto LAB_00f9f680;
          this_00 = (Ref *)__dest[1];
          __dest = __dest + 1;
          local_50 = this_00;
        } while (this_00 != *(Ref **)*param_1);
      }
      local_50 = this_00;
      if (this_00 != (Ref *)0x0) {
        cocos2d::Ref::retain(this_00);
      }
      this_00[0x80] = (Ref)0x0;
      if (*(Node **)(this_00 + 0x88) != (Node *)0x0) {
        cocos2d::EventDispatcher::dissociateNodeAndEventListener
                  (this,*(Node **)(this_00 + 0x88),(EventListener *)this_00);
        *(undefined8 *)(this_00 + 0x88) = 0;
      }
      if (*(int *)(this + 0x138) == 0) {
        __n = param_2[1] - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        param_2[1] = (long)(__dest + ((long)__n >> 3));
        cocos2d::Ref::release(this_00);
      }
      else {
        puVar1 = *(undefined8 **)(this + 0x110);
        if (puVar1 == *(undefined8 **)(this + 0x118)) {
          std::__ndk1::
          vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>::
          __push_back_slow_path<cocos2d::EventListener*const&>
                    ((vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>
                      *)(this + 0x108),(EventListener **)&local_50);
        }
        else {
          *puVar1 = this_00;
          *(undefined8 **)(this + 0x110) = puVar1 + 1;
        }
      }
      *(undefined1 *)param_1[2] = 1;
    }
  }
LAB_00f9f680:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

