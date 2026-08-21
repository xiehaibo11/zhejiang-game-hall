
/* fairygui::GComponent::moveChild(fairygui::GObject*, int, int) */

uint __thiscall
fairygui::GComponent::moveChild(GComponent *this,GObject *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>> *this_00;
  uint uVar3;
  uint uVar4;
  size_t __n;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  GObject *local_70;
  long local_68;
  
                    /* try { // try from 00a71200 to 00b71217 has its CatchHandler @ 00a71500 */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 00a7121c to 00b71233 has its CatchHandler @ 00a714f8 */
  uVar13 = (uint)((ulong)(*(long *)(this + 0x1e8) - *(long *)(this + 0x1e0)) >> 3);
  uVar3 = uVar13;
  if (param_3 <= (int)uVar13) {
    uVar3 = param_3;
  }
  uVar9 = param_2;
  if (uVar3 != param_2) {
                    /* try { // try from 00a7123c to 00b71273 has its CatchHandler @ 00a714f4 */
    cocos2d::Ref::retain((Ref *)param_1);
    puVar2 = (undefined8 *)(*(long *)(this + 0x1e0) + (long)param_2 * 8);
    cocos2d::Ref::release((Ref *)*puVar2);
    __n = *(long *)(this + 0x1e8) - (long)(puVar2 + 1);
    if (__n != 0) {
                    /* try { // try from 00a71274 to 00b713af has its CatchHandler @ 00a70ee8 */
      memmove(puVar2,puVar2 + 1,__n);
    }
    this_00 = (vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>> *)
              (this + 0x1e0);
    puVar2 = puVar2 + ((long)__n >> 3);
    *(undefined8 **)(this + 0x1e8) = puVar2;
    local_70 = param_1;
    if (param_3 < (int)uVar13) {
      std::__ndk1::vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>>::insert
                (this_00,*(long *)this_00 + (long)(int)uVar3 * 8,&local_70);
    }
    else if (puVar2 == *(undefined8 **)(this + 0x1f0)) {
      std::__ndk1::vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>>::
      __push_back_slow_path<fairygui::GObject*const&>(this_00,&local_70);
    }
    else {
      *puVar2 = param_1;
      *(undefined8 **)(this + 0x1e8) = puVar2 + 1;
    }
    cocos2d::Ref::retain((Ref *)local_70);
    cocos2d::Ref::release((Ref *)param_1);
    lVar6 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x260))();
    uVar9 = uVar3;
    if (lVar6 != 0) {
      if (*(int *)(this + 0x250) == 1) {
        uVar4 = uVar3;
        if (param_2 <= (int)uVar3) {
          uVar4 = param_2;
          param_2 = uVar3;
        }
        if ((int)(uVar13 - 1) <= param_2) {
          param_2 = uVar13 - 1;
        }
        if ((int)uVar4 <= param_2) {
          iVar10 = ~uVar4 + uVar13;
          lVar6 = (long)(int)uVar4;
          do {
            lVar12 = *(long *)(*(long *)this_00 + lVar6 * 8);
            lVar11 = (**(code **)(**(long **)(lVar12 + 0xa8) + 0x260))();
            if (lVar11 != 0) {
              plVar7 = *(long **)(lVar12 + 0xa8);
                    /* try { // try from 00a713e8 to 00b713ef has its CatchHandler @ 00a71570 */
              (**(code **)(*plVar7 + 0x18))(plVar7,iVar10);
            }
                    /* try { // try from 00a713b0 to 00b713b7 has its CatchHandler @ 00a7159c */
            iVar10 = iVar10 + -1;
            bVar1 = lVar6 < param_2;
            lVar6 = lVar6 + 1;
          } while (bVar1);
        }
      }
      else if (*(int *)(this + 0x250) == 0) {
        uVar4 = uVar3;
        if (param_2 <= (int)uVar3) {
          uVar4 = param_2;
          param_2 = uVar3;
        }
        if ((int)(uVar13 - 1) <= param_2) {
          param_2 = uVar13 - 1;
        }
        if ((int)uVar4 <= param_2) {
          uVar8 = (long)(int)uVar4;
          do {
            lVar11 = *(long *)(*(long *)this_00 + uVar8 * 8);
            lVar6 = (**(code **)(**(long **)(lVar11 + 0xa8) + 0x260))();
            if (lVar6 != 0) {
              plVar7 = *(long **)(lVar11 + 0xa8);
              (**(code **)(*plVar7 + 0x18))(plVar7,uVar8 & 0xffffffff);
            }
            bVar1 = (long)uVar8 < (long)param_2;
            uVar8 = uVar8 + 1;
          } while (bVar1);
        }
      }
      else {
        lVar6 = cocos2d::Director::getInstance();
        uVar8 = cocos2d::Scheduler::isScheduled
                          (*(_func_void_float **)(lVar6 + 0xa0),
                           (Ref *)__selector_buildNativeDisplayList);
        if ((uVar8 & 1) == 0) {
          lVar6 = cocos2d::Director::getInstance();
          cocos2d::Scheduler::schedule
                    (*(Scheduler **)(lVar6 + 0xa0),__selector_buildNativeDisplayList,(Ref *)0x0,0.0,
                     SUB81(this,0));
        }
      }
      if ((*(long *)(this + 0x230) != 0) || (this[0x259] != (GComponent)0x0)) {
        this[600] = (GComponent)0x1;
        lVar6 = cocos2d::Director::getInstance();
        uVar8 = cocos2d::Scheduler::isScheduled
                          (*(_func_void_float **)(lVar6 + 0xa0),(Ref *)__selector_doUpdateBounds);
        if ((uVar8 & 1) == 0) {
          lVar6 = cocos2d::Director::getInstance();
          cocos2d::Scheduler::schedule
                    (*(Scheduler **)(lVar6 + 0xa0),__selector_doUpdateBounds,(Ref *)0x0,0.0,
                     SUB81(this,0));
        }
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* try { // try from 00a714c0 to 00b714c7 has its CatchHandler @ 00a714fc */
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

