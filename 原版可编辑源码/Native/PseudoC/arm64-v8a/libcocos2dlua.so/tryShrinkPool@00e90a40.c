
/* cocos2d::experimental::ThreadPool::tryShrinkPool() */

bool __thiscall cocos2d::experimental::ThreadPool::tryShrinkPool(ThreadPool *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *__dest;
  ulong uVar4;
  int *__src;
  size_t __n;
  thread *this_00;
  int *piVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  timeval local_80;
  timeval local_70;
  
  std::__ndk1::mutex::lock((mutex *)(this + 0xc0));
  uVar1 = *(undefined4 *)(this + 0xbc);
  std::__ndk1::mutex::unlock((mutex *)(this + 0xc0));
  __android_log_print(3,"ThreadPool","shrink pool, _idleThreadNum = %d \n",uVar1);
  gettimeofday(&local_70,(__timezone_ptr_t)0x0);
  if (*(int *)(this + 0x144) < 1) {
    piVar6 = (int *)0x0;
    __dest = (int *)0x0;
  }
  else {
    lVar7 = 0;
    lVar8 = 0;
    iVar2 = *(int *)(this + 0x164);
    if (*(int *)(this + 0x148) - *(int *)(this + 0x140) <= *(int *)(this + 0x164)) {
      iVar2 = *(int *)(this + 0x148) - *(int *)(this + 0x140);
    }
    piVar10 = (int *)0x0;
    __src = (int *)0x0;
    piVar5 = (int *)0x0;
    do {
      __n = (long)piVar5 - (long)__src;
      uVar9 = (long)__n >> 2;
      __dest = __src;
      piVar6 = piVar5;
      if ((ulong)(long)iVar2 <= uVar9) break;
      if ((**(byte **)(*(long *)(this + 0x30) + lVar7) & 1) != 0) {
        **(undefined4 **)(*(long *)(this + 0x18) + lVar7) = 1;
        if (piVar5 == piVar10) {
          uVar11 = uVar9 + 1;
          if (uVar11 >> 0x3e != 0) {
LAB_00e90cfc:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if ((ulong)((long)piVar10 - (long)__src >> 2) < 0x1fffffffffffffff) {
            uVar4 = (long)piVar10 - (long)__src >> 1;
            if (uVar11 <= uVar4) {
              uVar11 = uVar4;
            }
            if (uVar11 != 0) {
              if (uVar11 >> 0x3e != 0) goto LAB_00e90cfc;
              goto LAB_00e90b70;
            }
            __dest = (int *)0x0;
          }
          else {
            uVar11 = 0x3fffffffffffffff;
LAB_00e90b70:
            __dest = operator_new(uVar11 << 2);
          }
          piVar10 = __dest + uVar11;
          piVar6 = __dest + uVar9 + 1;
          __dest[uVar9] = (int)lVar8;
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          if (__src != (int *)0x0) {
            operator_delete(__src);
          }
        }
        else {
          piVar6 = piVar5 + 1;
          *piVar5 = (int)lVar8;
        }
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x10;
      __src = __dest;
      piVar5 = piVar6;
    } while (lVar8 < *(int *)(this + 0x144));
  }
  std::__ndk1::mutex::lock((mutex *)(this + 0xe8));
  std::__ndk1::condition_variable::notify_all((condition_variable *)(this + 0x110));
  std::__ndk1::mutex::unlock((mutex *)(this + 0xe8));
  for (piVar10 = __dest; piVar10 != piVar6; piVar10 = piVar10 + 1) {
    lVar8 = (long)*piVar10;
    lVar7 = *(long *)this;
    this_00 = *(thread **)(lVar7 + lVar8 * 8);
    if (*(long *)this_00 != 0) {
      std::__ndk1::thread::join(this_00);
      lVar8 = (long)*piVar10;
      lVar7 = *(long *)this;
      this_00 = *(thread **)(lVar7 + lVar8 * 8);
    }
    *(undefined8 *)(lVar7 + lVar8 * 8) = 0;
    if (this_00 != (thread *)0x0) {
      std::__ndk1::thread::~thread(this_00);
      operator_delete(this_00);
      lVar8 = (long)*piVar10;
    }
    **(undefined4 **)(*(long *)(this + 0x48) + lVar8 * 0x10) = 0;
    *(int *)(this + 0x148) = *(int *)(this + 0x148) + -1;
  }
  gettimeofday(&local_80,(__timezone_ptr_t)0x0);
  __android_log_print((double)((float)(local_80.tv_usec - local_70.tv_usec) / 1e+06 +
                              (float)(local_80.tv_sec - local_70.tv_sec)),3,"ThreadPool",
                      "shrink %d threads, waste: %f seconds\n",
                      (ulong)((long)piVar6 - (long)__dest) >> 2);
  iVar2 = *(int *)(this + 0x148);
  iVar3 = *(int *)(this + 0x140);
  if (__dest != (int *)0x0) {
    operator_delete(__dest);
  }
  return iVar2 <= iVar3;
}

