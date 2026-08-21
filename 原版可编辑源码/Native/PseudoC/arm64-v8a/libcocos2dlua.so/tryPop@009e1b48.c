
/* universe::core::Computational::tryPop() */

void universe::core::Computational::tryPop(void)

{
  mutex *this;
  long lVar1;
  long in_x0;
  ulong uVar2;
  long *plVar3;
  undefined8 *in_x8;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  this = (mutex *)(in_x0 + 0x18);
  uVar2 = std::__ndk1::mutex::try_lock(this);
  if ((uVar2 & 1) != 0) {
    lVar4 = *(long *)(in_x0 + 0x10);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(*(long *)(in_x0 + 8) + 0x10);
      *(undefined8 *)(*(long *)(in_x0 + 8) + 0x10) = 0;
      *in_x8 = uVar5;
      plVar6 = *(long **)(in_x0 + 8);
      lVar1 = *plVar6;
      *(long *)(lVar1 + 8) = plVar6[1];
      *(long *)plVar6[1] = lVar1;
      *(long *)(in_x0 + 0x10) = lVar4 + -1;
      plVar3 = (long *)plVar6[2];
      plVar6[2] = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      operator_delete(plVar6);
      std::__ndk1::mutex::unlock(this);
      return;
    }
    std::__ndk1::mutex::unlock(this);
  }
  *in_x8 = 0;
  return;
}

