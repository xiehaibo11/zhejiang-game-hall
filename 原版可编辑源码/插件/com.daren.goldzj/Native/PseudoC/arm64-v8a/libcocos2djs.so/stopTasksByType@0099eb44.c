
/* cocos2d::ThreadPool::stopTasksByType(cocos2d::ThreadPool::TaskType) */

void __thiscall cocos2d::ThreadPool::stopTasksByType(ThreadPool *this,int param_2)

{
  mutex *this_00;
  Task *pTVar1;
  undefined8 *puVar2;
  long lVar3;
  Task *pTVar4;
  long *plVar5;
  long *plVar6;
  code *pcVar7;
  ulong uVar8;
  Task *local_80;
  Task *pTStack_78;
  Task *local_70;
  undefined8 local_60;
  long *plStack_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this_00 = (mutex *)(this + 0x90);
  local_80 = (Task *)0x0;
  pTStack_78 = (Task *)0x0;
  local_70 = (Task *)0x0;
  std::__ndk1::mutex::lock(this_00);
  uVar8 = *(ulong *)(this + 0x88);
  std::__ndk1::mutex::unlock(this_00);
  if (uVar8 != 0) {
    if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    local_80 = operator_new(uVar8 << 4);
    local_70 = local_80 + uVar8 * 0x10;
    pTStack_78 = local_80;
  }
  do {
    do {
      while( true ) {
        std::__ndk1::mutex::lock(this_00);
        if (*(long *)(this + 0x88) == 0) {
                    /* catch() { ... } // from try @ 0099eabc with catch @ 0099eca0 */
          std::__ndk1::mutex::unlock(this_00);
          pTVar4 = pTStack_78;
          for (pTVar1 = local_80; pTVar1 != pTVar4; pTVar1 = pTVar1 + 0x10) {
            ThreadSafeQueue<cocos2d::ThreadPool::Task>::push
                      ((ThreadSafeQueue<cocos2d::ThreadPool::Task> *)(this + 0x60),pTVar1);
          }
          if (local_80 != (Task *)0x0) {
            pTStack_78 = local_80;
            operator_delete(local_80);
          }
          if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 0099ecf8 to 00a9ed4f has its CatchHandler @ 0099ecf8
                       catch() { ... } // from try @ 0099ecf8 with catch @ 0099ecf8
                       catch() { ... } // from try @ 0099eedc with catch @ 0099ecf8 */
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar8 = *(ulong *)(this + 0x80);
        puVar2 = (undefined8 *)
                 (*(long *)((long)*(undefined8 **)(this + 0x68) + (uVar8 >> 5 & 0x7fffffffffffff8))
                 + (uVar8 & 0xff) * 0x10);
        plStack_58 = (long *)puVar2[1];
        local_60 = *puVar2;
        *(ulong *)(this + 0x80) = uVar8 + 1;
        *(long *)(this + 0x88) = *(long *)(this + 0x88) + -1;
                    /* try { // try from 0099ec10 to 00a9ecf7 has its CatchHandler @ 0099ea2c */
        if (0x1ff < uVar8 + 1) {
          operator_delete((void *)**(undefined8 **)(this + 0x68));
          *(long *)(this + 0x68) = *(long *)(this + 0x68) + 8;
          *(long *)(this + 0x80) = *(long *)(this + 0x80) + -0x100;
        }
        std::__ndk1::mutex::unlock(this_00);
        plVar5 = plStack_58;
        if ((int)local_60 == param_2) break;
        if (pTStack_78 == local_70) {
          std::__ndk1::
          vector<cocos2d::ThreadPool::Task,std::__ndk1::allocator<cocos2d::ThreadPool::Task>>::
          __push_back_slow_path<cocos2d::ThreadPool::Task_const&>
                    ((vector<cocos2d::ThreadPool::Task,std::__ndk1::allocator<cocos2d::ThreadPool::Task>>
                      *)&local_80,(Task *)&local_60);
        }
        else {
          *(long **)(pTStack_78 + 8) = plStack_58;
          *(undefined8 *)pTStack_78 = local_60;
          pTStack_78 = pTStack_78 + 0x10;
        }
      }
    } while (plStack_58 == (long *)0x0);
    plVar6 = (long *)plStack_58[4];
    if (plStack_58 == plVar6) {
                    /* catch() { ... } // from try @ 0099eab0 with catch @ 0099ec88 */
                    /* catch() { ... } // from try @ 0099eaa4 with catch @ 0099ec8c */
      pcVar7 = *(code **)(*plVar6 + 0x20);
LAB_0099ec90:
                    /* catch() { ... } // from try @ 0099ea84 with catch @ 0099ec90 */
      (*pcVar7)();
    }
    else if (plVar6 != (long *)0x0) {
      pcVar7 = *(code **)(*plVar6 + 0x28);
      goto LAB_0099ec90;
    }
    operator_delete(plVar5);
  } while( true );
}

