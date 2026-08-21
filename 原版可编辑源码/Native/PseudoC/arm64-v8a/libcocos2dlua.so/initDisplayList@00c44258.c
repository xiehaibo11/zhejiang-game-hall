
/* cocostudio::DisplayManager::initDisplayList(cocostudio::BoneData*) */

void __thiscall cocostudio::DisplayManager::initDisplayList(DisplayManager *this,BoneData *param_1)

{
  long lVar1;
  DecorativeDisplay *pDVar2;
  vector<cocostudio::DecorativeDisplay*,std::__ndk1::allocator<cocostudio::DecorativeDisplay*>>
  *this_00;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Ref *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this_00 = (vector<cocostudio::DecorativeDisplay*,std::__ndk1::allocator<cocostudio::DecorativeDisplay*>>
             *)(this + 0x28);
  puVar3 = *(undefined8 **)this_00;
  puVar6 = *(undefined8 **)(this + 0x30);
  if (puVar3 != puVar6) {
    do {
      puVar4 = puVar3 + 1;
      cocos2d::Ref::release((Ref *)*puVar3);
      puVar3 = puVar4;
    } while (puVar6 != puVar4);
    puVar3 = *(undefined8 **)this_00;
  }
  *(undefined8 **)(this + 0x30) = puVar3;
  if (param_1 != (BoneData *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 0x90);
    for (puVar3 = *(undefined8 **)(param_1 + 0x88); puVar3 != puVar6; puVar3 = puVar3 + 1) {
      uVar5 = *puVar3;
      pDVar2 = (DecorativeDisplay *)DecorativeDisplay::create();
      (**(code **)(*(long *)pDVar2 + 0x28))(pDVar2,uVar5);
      DisplayFactory::createDisplay(*(Bone **)(this + 0x60),pDVar2);
      puVar4 = *(undefined8 **)(this + 0x30);
      local_60 = (Ref *)pDVar2;
      if (puVar4 == *(undefined8 **)(this + 0x38)) {
        std::__ndk1::
        vector<cocostudio::DecorativeDisplay*,std::__ndk1::allocator<cocostudio::DecorativeDisplay*>>
        ::__push_back_slow_path<cocostudio::DecorativeDisplay*const&>
                  (this_00,(DecorativeDisplay **)&local_60);
      }
      else {
        *puVar4 = pDVar2;
        *(undefined8 **)(this + 0x30) = puVar4 + 1;
      }
      cocos2d::Ref::retain(local_60);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

