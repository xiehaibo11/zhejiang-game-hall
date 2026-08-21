
/* cocos2d::Camera::setScene(cocos2d::Scene*) */

void __thiscall cocos2d::Camera::setScene(Camera *this,Scene *param_1)

{
  undefined8 *puVar1;
  size_t __n;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  Scene *pSVar5;
  Camera *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pSVar5 = *(Scene **)(this + 0x2f8);
  if (pSVar5 != param_1) {
    if (pSVar5 != (Scene *)0x0) {
      puVar4 = *(undefined8 **)(pSVar5 + 0x2f8);
      puVar3 = *(undefined8 **)(pSVar5 + 0x300);
      if ((puVar4 != puVar3) && ((Camera *)*puVar4 != this)) {
        do {
          if (puVar3 + -1 == puVar4) goto LAB_00ef00f8;
          puVar1 = puVar4 + 1;
          puVar4 = puVar4 + 1;
        } while ((Camera *)*puVar1 != this);
      }
      if (puVar4 != puVar3) {
        __n = (long)puVar3 - (long)(puVar4 + 1);
        if (__n != 0) {
          memmove(puVar4,puVar4 + 1,__n);
        }
        *(undefined8 **)(pSVar5 + 0x300) = puVar4 + ((long)__n >> 3);
      }
LAB_00ef00f8:
      *(undefined8 *)(this + 0x2f8) = 0;
    }
    if (param_1 != (Scene *)0x0) {
      *(Scene **)(this + 0x2f8) = param_1;
      puVar4 = *(undefined8 **)(param_1 + 0x2f8);
      puVar3 = *(undefined8 **)(param_1 + 0x300);
      if ((puVar4 != puVar3) && ((Camera *)*puVar4 != this)) {
        do {
          if (puVar3 + -1 == puVar4) goto LAB_00ef0150;
          puVar1 = puVar4 + 1;
          puVar4 = puVar4 + 1;
        } while ((Camera *)*puVar1 != this);
      }
      if (puVar4 == puVar3) {
LAB_00ef0150:
        local_50 = this;
        if (puVar3 < *(undefined8 **)(param_1 + 0x308)) {
          *puVar3 = this;
          *(undefined8 **)(param_1 + 0x300) = puVar3 + 1;
        }
        else {
          std::__ndk1::vector<cocos2d::Camera*,std::__ndk1::allocator<cocos2d::Camera*>>::
          __push_back_slow_path<cocos2d::Camera*>
                    ((vector<cocos2d::Camera*,std::__ndk1::allocator<cocos2d::Camera*>> *)
                     (param_1 + 0x2f8),&local_50);
        }
        *(undefined1 *)(*(long *)(this + 0x2f8) + 0x318) = 1;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

