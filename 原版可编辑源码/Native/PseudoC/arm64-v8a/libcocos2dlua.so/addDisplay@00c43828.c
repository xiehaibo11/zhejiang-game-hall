
/* cocostudio::DisplayManager::addDisplay(cocostudio::DisplayData*, int) */

void __thiscall
cocostudio::DisplayManager::addDisplay(DisplayManager *this,DisplayData *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  DecorativeDisplay *pDVar6;
  DecorativeDisplay *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_2 < 0) {
LAB_00c43878:
    pDVar6 = (DecorativeDisplay *)DecorativeDisplay::create();
    puVar1 = *(undefined8 **)(this + 0x30);
    local_50 = pDVar6;
    if (puVar1 == *(undefined8 **)(this + 0x38)) {
      std::__ndk1::
      vector<cocostudio::DecorativeDisplay*,std::__ndk1::allocator<cocostudio::DecorativeDisplay*>>
      ::__push_back_slow_path<cocostudio::DecorativeDisplay*const&>
                ((vector<cocostudio::DecorativeDisplay*,std::__ndk1::allocator<cocostudio::DecorativeDisplay*>>
                  *)(this + 0x28),&local_50);
    }
    else {
      *puVar1 = pDVar6;
      *(undefined8 **)(this + 0x30) = puVar1 + 1;
    }
    cocos2d::Ref::retain((Ref *)local_50);
  }
  else {
    if (*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3 <= (long)param_2) goto LAB_00c43878;
    pDVar6 = *(DecorativeDisplay **)(*(long *)(this + 0x28) + (long)param_2 * 8);
  }
  DisplayFactory::addDisplay(*(Bone **)(this + 0x60),pDVar6,param_1);
  if (*(int *)(this + 0x58) == param_2) {
    *(undefined4 *)(this + 0x58) = 0xffffffff;
    this[0x5c] = (DisplayManager)0x0;
    if (param_2 != -1) {
      *(int *)(this + 0x58) = param_2;
      if (param_2 < 0) {
        plVar3 = *(long **)(this + 0x40);
        if (plVar3 == (long *)0x0) goto LAB_00c4392c;
        (**(code **)(*plVar3 + 0x278))(plVar3,1);
        uVar4 = 0;
        pcVar5 = *(code **)(*(long *)this + 0x18);
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(this + 0x28) + (long)param_2 * 8);
        pcVar5 = *(code **)(*(long *)this + 0x18);
      }
      (*pcVar5)(this,uVar4);
    }
  }
LAB_00c4392c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

