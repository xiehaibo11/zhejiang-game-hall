
/* cocos2d::renderer::ParallelTask::init(int) */

void __thiscall cocos2d::renderer::ParallelTask::init(ParallelTask *this,int param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  void *__s;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  thread *this_00;
  size_t __n;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  
  lVar3 = *(long *)(this + 8);
  uVar5 = (ulong)param_1;
  this[0x40] = (ParallelTask)0x0;
  *(int *)(this + 0x44) = param_1;
  lVar6 = (long)*(undefined8 **)(this + 0x10) - lVar3 >> 3;
  uVar7 = lVar6 * -0x5555555555555555;
  if (uVar7 < uVar5) {
    std::__ndk1::
    vector<std::__ndk1::vector<std::__ndk1::function<void(int)>,std::__ndk1::allocator<std::__ndk1::function<void(int)>>>,std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::function<void(int)>,std::__ndk1::allocator<std::__ndk1::function<void(int)>>>>>
    ::__append((vector<std::__ndk1::vector<std::__ndk1::function<void(int)>,std::__ndk1::allocator<std::__ndk1::function<void(int)>>>,std::__ndk1::allocator<std::__ndk1::vector<std::__ndk1::function<void(int)>,std::__ndk1::allocator<std::__ndk1::function<void(int)>>>>>
                *)(this + 8),uVar5 + lVar6 * 0x5555555555555555);
  }
  else if (uVar7 - uVar5 != 0) {
    puVar9 = (undefined8 *)(lVar3 + uVar5 * 0x18);
    puVar10 = *(undefined8 **)(this + 0x10);
    while (puVar1 = puVar10, puVar9 != puVar1) {
      puVar10 = puVar1 + -3;
      plVar11 = (long *)*puVar10;
      if (plVar11 != (long *)0x0) {
        plVar12 = (long *)puVar1[-2];
        plVar2 = plVar11;
        if (plVar12 != plVar11) {
          do {
            plVar2 = (long *)plVar12[-2];
            plVar12 = plVar12 + -6;
            if (plVar12 == plVar2) {
              pcVar4 = *(code **)(*plVar2 + 0x20);
LAB_00927364:
              (*pcVar4)();
            }
            else if (plVar2 != (long *)0x0) {
              pcVar4 = *(code **)(*plVar2 + 0x28);
              goto LAB_00927364;
            }
          } while (plVar11 != plVar12);
          plVar2 = (long *)*puVar10;
        }
        puVar1[-2] = plVar11;
        operator_delete(plVar2);
      }
    }
    *(undefined8 **)(this + 0x10) = puVar9;
  }
  lVar3 = *(long *)(this + 0x20);
  puVar10 = *(undefined8 **)(this + 0x28);
  uVar5 = (ulong)*(int *)(this + 0x44);
  uVar7 = (long)puVar10 - lVar3 >> 3;
  if (uVar7 < uVar5) {
    std::__ndk1::
    vector<std::__ndk1::unique_ptr<std::__ndk1::thread,std::__ndk1::default_delete<std::__ndk1::thread>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<std::__ndk1::thread,std::__ndk1::default_delete<std::__ndk1::thread>>>>
    ::__append((vector<std::__ndk1::unique_ptr<std::__ndk1::thread,std::__ndk1::default_delete<std::__ndk1::thread>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<std::__ndk1::thread,std::__ndk1::default_delete<std::__ndk1::thread>>>>
                *)(this + 0x20),uVar5 - uVar7);
  }
  else if (uVar7 != uVar5) {
    puVar9 = (undefined8 *)(lVar3 + uVar5 * 8);
    while (puVar9 != puVar10) {
      puVar10 = puVar10 + -1;
      this_00 = (thread *)*puVar10;
      *puVar10 = 0;
      if (this_00 != (thread *)0x0) {
        std::__ndk1::thread::~thread(this_00);
        operator_delete(this_00);
      }
    }
    *(undefined8 **)(this + 0x28) = puVar9;
  }
  iVar8 = *(int *)(this + 0x44);
  __n = (size_t)iVar8;
  uVar5 = __n;
  if ((long)__n < 0) {
    uVar5 = 0xffffffffffffffff;
  }
  __s = operator_new__(uVar5);
  *(void **)(this + 0x38) = __s;
  memset(__s,1,__n);
  if (0 < iVar8) {
    iVar8 = 0;
    do {
      setThread(this,iVar8);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(this + 0x44));
  }
  return;
}

