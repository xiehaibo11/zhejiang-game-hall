
/* cocosbuilder::CCBReader::readNodeGraphFromData(std::__ndk1::shared_ptr<cocos2d::Data>,
   cocos2d::Ref*, cocos2d::Size const&) */

long __thiscall
cocosbuilder::CCBReader::readNodeGraphFromData
          (CCBReader *this,undefined8 *param_2,Ref *param_3,Size *param_4)

{
  Ref *pRVar1;
  undefined8 *puVar2;
  long *plVar3;
  Ref *pRVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  __shared_weak_count *p_Var10;
  long lVar11;
  long lVar12;
  CCBAnimationManager *this_00;
  __shared_weak_count *p_Var13;
  long *plVar14;
  __shared_weak_count *local_70;
  __shared_weak_count *p_Stack_68;
  Ref *local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  uVar9 = *param_2;
  lVar11 = param_2[1];
  if (lVar11 != 0) {
    plVar14 = (long *)(lVar11 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = *plVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  p_Var13 = *(__shared_weak_count **)(this + 0x30);
  *(undefined8 *)(this + 0x28) = uVar9;
  *(long *)(this + 0x30) = lVar11;
  if (p_Var13 != (__shared_weak_count *)0x0) {
    p_Var10 = p_Var13 + 8;
    do {
      lVar11 = *(long *)p_Var10;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var10,0x10);
      if (bVar6) {
        *(long *)p_Var10 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*(long *)p_Var13 + 0x10))(p_Var13);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var13);
    }
  }
  uVar9 = cocos2d::Data::getBytes(*(Data **)(this + 0x28));
  *(undefined8 *)(this + 0x38) = uVar9;
  *(undefined8 *)(this + 0x40) = 0;
  *(Ref **)(this + 0x78) = param_3;
  if (param_3 != (Ref *)0x0) {
    cocos2d::Ref::retain(param_3);
  }
  CCBAnimationManager::setRootContainerSize(*(CCBAnimationManager **)(this + 0x80),param_4);
  *(undefined8 *)(*(long *)(this + 0x80) + 0x28) = *(undefined8 *)(this + 0x78);
  p_Var10 = operator_new(0x40);
  *(undefined8 *)(p_Var10 + 0x10) = 0;
  *(undefined ***)p_Var10 = &PTR____shared_ptr_emplace_016cfcb0;
  *(undefined8 *)(p_Var10 + 8) = 0;
  local_70 = p_Var10 + 0x18;
  *(undefined8 *)(p_Var10 + 0x20) = 0;
  *(undefined8 *)local_70 = 0;
  *(undefined8 *)(p_Var10 + 0x30) = 0;
  *(undefined8 *)(p_Var10 + 0x28) = 0;
  *(undefined4 *)(p_Var10 + 0x38) = 0x3f800000;
  p_Stack_68 = p_Var10;
  lVar11 = readFileWithCleanUp(this,1,&local_70);
  p_Var13 = p_Var10 + 8;
  do {
    lVar12 = *(long *)p_Var13;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(p_Var13,0x10);
    if (bVar6) {
      *(long *)p_Var13 = lVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar12 == 0) {
    (**(code **)(*(long *)p_Var10 + 0x10))(p_Var10);
    std::__ndk1::__shared_weak_count::__release_weak(p_Var10);
  }
  if ((lVar11 != 0) &&
     (iVar8 = CCBAnimationManager::getAutoPlaySequenceId(*(CCBAnimationManager **)(this + 0x80)),
     iVar8 != -1)) {
    this_00 = *(CCBAnimationManager **)(this + 0x80);
    iVar8 = CCBAnimationManager::getAutoPlaySequenceId(this_00);
    CCBAnimationManager::runAnimationsForSequenceIdTweenDuration(this_00,iVar8,0.0);
  }
  plVar14 = *(long **)(*(long *)(this + 0x88) + 0x10);
  if (plVar14 != (long *)0x0) {
    do {
      pRVar1 = (Ref *)plVar14[2];
      pRVar4 = (Ref *)plVar14[3];
      (**(code **)(*(long *)pRVar1 + 0x300))(pRVar1,pRVar4);
      if (this[0x180] != (CCBReader)0x0) {
        puVar2 = *(undefined8 **)(this + 0xf8);
        local_60 = pRVar1;
        if (puVar2 == *(undefined8 **)(this + 0x100)) {
          std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
          __push_back_slow_path<cocos2d::Node*const&>
                    ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)(this + 0xf0),
                     (Node **)&local_60);
        }
        else {
          *puVar2 = pRVar1;
          *(undefined8 **)(this + 0xf8) = puVar2 + 1;
        }
        cocos2d::Ref::retain(local_60);
        plVar3 = *(long **)(this + 0x110);
        local_60 = pRVar4;
        if (plVar3 == *(long **)(this + 0x118)) {
          std::__ndk1::
          vector<cocosbuilder::CCBAnimationManager*,std::__ndk1::allocator<cocosbuilder::CCBAnimationManager*>>
          ::__push_back_slow_path<cocosbuilder::CCBAnimationManager*const&>
                    ((vector<cocosbuilder::CCBAnimationManager*,std::__ndk1::allocator<cocosbuilder::CCBAnimationManager*>>
                      *)(this + 0x108),(CCBAnimationManager **)&local_60);
        }
        else {
          *plVar3 = (long)pRVar4;
          *(long **)(this + 0x110) = plVar3 + 1;
        }
        cocos2d::Ref::retain(local_60);
      }
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
  }
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return lVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

