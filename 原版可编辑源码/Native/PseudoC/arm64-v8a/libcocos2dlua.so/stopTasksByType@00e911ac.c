
/* cocos2d::experimental::ThreadPool::stopTasksByType(cocos2d::experimental::ThreadPool::TaskType)
    */

void __thiscall cocos2d::experimental::ThreadPool::stopTasksByType(ThreadPool *this,int param_2)

{
  int *piVar1;
  mutex *this_00;
  long *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  size_t __n;
  long *__src;
  long *plVar14;
  
  this_00 = (mutex *)(this + 0x90);
  std::__ndk1::mutex::lock(this_00);
  uVar12 = *(ulong *)(this + 0x88);
  std::__ndk1::mutex::unlock(this_00);
  if (uVar12 == 0) {
    plVar6 = (long *)0x0;
    plVar14 = (long *)0x0;
  }
  else {
    if (uVar12 >> 0x3c != 0) {
LAB_00e91484:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar6 = operator_new(uVar12 * 0x10);
    plVar14 = plVar6 + uVar12 * 2;
  }
  std::__ndk1::mutex::lock(this_00);
  lVar8 = *(long *)(this + 0x88);
  __src = plVar6;
  do {
    if (lVar8 == 0) {
      std::__ndk1::mutex::unlock(this_00);
      if (__src != plVar6) {
        plVar14 = __src;
        do {
          std::__ndk1::mutex::lock(this_00);
          lVar8 = *(long *)(this + 0x68);
          lVar11 = *(long *)(this + 0x70);
          uVar12 = 0;
          if (lVar11 - lVar8 != 0) {
            uVar12 = (lVar11 - lVar8) * 0x20 - 1;
          }
          uVar10 = *(long *)(this + 0x88) + *(long *)(this + 0x80);
          if (uVar12 == uVar10) {
            std::__ndk1::
            deque<cocos2d::experimental::ThreadPool::Task,std::__ndk1::allocator<cocos2d::experimental::ThreadPool::Task>>
            ::__add_back_capacity
                      ((deque<cocos2d::experimental::ThreadPool::Task,std::__ndk1::allocator<cocos2d::experimental::ThreadPool::Task>>
                        *)(this + 0x60));
            lVar8 = *(long *)(this + 0x68);
            lVar11 = *(long *)(this + 0x70);
            uVar10 = *(long *)(this + 0x80) + *(long *)(this + 0x88);
          }
          if (lVar11 == lVar8) {
            plVar13 = (long *)0x0;
          }
          else {
            plVar13 = (long *)(*(long *)(lVar8 + (uVar10 >> 5 & 0x7fffffffffffff8)) +
                              (uVar10 & 0xff) * 0x10);
          }
          plVar7 = plVar14 + 2;
          lVar8 = *plVar14;
          plVar13[1] = plVar14[1];
          *plVar13 = lVar8;
          *(long *)(this + 0x88) = *(long *)(this + 0x88) + 1;
          std::__ndk1::mutex::unlock(this_00);
          plVar14 = plVar7;
        } while (plVar6 != plVar7);
      }
      if (__src != (long *)0x0) {
        operator_delete(__src);
        return;
      }
      return;
    }
    uVar12 = *(ulong *)(this + 0x80);
    piVar1 = (int *)(*(long *)((long)*(undefined8 **)(this + 0x68) +
                              (uVar12 >> 5 & 0x7fffffffffffff8)) + (uVar12 & 0xff) * 0x10);
    iVar4 = *piVar1;
    iVar5 = piVar1[1];
    plVar13 = *(long **)(piVar1 + 2);
    *(ulong *)(this + 0x80) = uVar12 + 1;
    *(long *)(this + 0x88) = lVar8 + -1;
    if (0x1ff < uVar12 + 1) {
      operator_delete((void *)**(undefined8 **)(this + 0x68));
      *(long *)(this + 0x68) = *(long *)(this + 0x68) + 8;
      *(long *)(this + 0x80) = *(long *)(this + 0x80) + -0x100;
    }
    std::__ndk1::mutex::unlock(this_00);
    plVar7 = __src;
    if (iVar4 == param_2) {
      if (plVar13 != (long *)0x0) {
        plVar7 = (long *)plVar13[4];
        if (plVar13 == plVar7) {
          pcVar9 = *(code **)(*plVar7 + 0x20);
        }
        else {
          if (plVar7 == (long *)0x0) goto LAB_00e91384;
          pcVar9 = *(code **)(*plVar7 + 0x28);
        }
        (*pcVar9)();
LAB_00e91384:
        operator_delete(plVar13);
        plVar7 = __src;
      }
    }
    else {
      if (plVar6 != plVar14) {
        *(int *)plVar6 = iVar4;
        *(int *)((long)plVar6 + 4) = iVar5;
        plVar6[1] = (long)plVar13;
        plVar6 = plVar6 + 2;
        goto LAB_00e91248;
      }
      __n = (long)plVar6 - (long)__src;
      uVar12 = ((long)__n >> 4) + 1;
      if (uVar12 >> 0x3c != 0) goto LAB_00e91484;
      if ((ulong)((long)plVar14 - (long)__src >> 4) < 0x7ffffffffffffff) {
        uVar10 = (long)plVar14 - (long)__src >> 3;
        if (uVar12 <= uVar10) {
          uVar12 = uVar10;
        }
        if (uVar12 != 0) {
          if (uVar12 >> 0x3c == 0) goto LAB_00e9133c;
          goto LAB_00e91484;
        }
        plVar7 = (long *)0x0;
      }
      else {
        uVar12 = 0xfffffffffffffff;
LAB_00e9133c:
        plVar7 = operator_new(uVar12 << 4);
      }
      plVar2 = plVar7 + ((long)__n >> 4) * 2;
      plVar14 = plVar7 + uVar12 * 2;
      *(int *)plVar2 = iVar4;
      *(int *)((long)plVar2 + 4) = iVar5;
      plVar6 = plVar2 + 2;
      plVar2[1] = (long)plVar13;
      if (0 < (long)__n) {
        memcpy(plVar7,__src,__n);
      }
      bVar3 = __src != (long *)0x0;
      plVar13 = __src;
      __src = plVar7;
      if (bVar3) goto LAB_00e91384;
    }
LAB_00e91248:
    std::__ndk1::mutex::lock(this_00);
    lVar8 = *(long *)(this + 0x88);
    __src = plVar7;
  } while( true );
}

