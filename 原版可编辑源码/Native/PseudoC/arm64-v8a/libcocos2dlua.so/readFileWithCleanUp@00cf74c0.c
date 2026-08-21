
/* cocosbuilder::CCBReader::readFileWithCleanUp(bool,
   std::__ndk1::shared_ptr<cocos2d::Map<cocos2d::Node*, cocosbuilder::CCBAnimationManager*> >) */

void __thiscall
cocosbuilder::CCBReader::readFileWithCleanUp(CCBReader *this,ulong param_2,undefined8 *param_3)

{
  __shared_weak_count *p_Var1;
  undefined8 uVar2;
  __shared_weak_count *this_00;
  Map<cocos2d::Node*,cocosbuilder::CCBAnimationManager*> *this_01;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  Node *pNVar7;
  long lVar8;
  __shared_weak_count *p_Var9;
  Node *local_58;
  Ref *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = readHeader(this);
  if ((uVar6 & 1) == 0) {
    pNVar7 = (Node *)0x0;
  }
  else {
    readStringCache(this);
    readSequences(this);
    uVar2 = *param_3;
    this_00 = (__shared_weak_count *)param_3[1];
    if (this_00 != (__shared_weak_count *)0x0) {
      p_Var9 = this_00 + 8;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var9,0x10);
        if (bVar4) {
          *(long *)p_Var9 = *(long *)p_Var9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var9,0x10);
        if (bVar4) {
          *(long *)p_Var9 = *(long *)p_Var9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    p_Var9 = *(__shared_weak_count **)(this + 0x90);
    *(undefined8 *)(this + 0x88) = uVar2;
    *(__shared_weak_count **)(this + 0x90) = this_00;
    if (p_Var9 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Var9 + 8;
      do {
        lVar8 = *(long *)p_Var1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var9);
      }
    }
    if (this_00 != (__shared_weak_count *)0x0) {
      p_Var9 = this_00 + 8;
      do {
        lVar8 = *(long *)p_Var9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var9,0x10);
        if (bVar4) {
          *(long *)p_Var9 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        std::__ndk1::__shared_weak_count::__release_weak(this_00);
      }
    }
    local_58 = (Node *)readNodeGraph(this,(Node *)0x0);
    local_50 = *(Ref **)(this + 0x80);
    this_01 = *(Map<cocos2d::Node*,cocosbuilder::CCBAnimationManager*> **)(this + 0x88);
    cocos2d::Ref::retain(local_50);
    cocos2d::Map<cocos2d::Node*,cocosbuilder::CCBAnimationManager*>::erase(this_01,&local_58);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,cocosbuilder::CCBAnimationManager*>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocosbuilder::CCBAnimationManager*>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocosbuilder::CCBAnimationManager*>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,cocosbuilder::CCBAnimationManager*>>>
    ::
    __emplace_unique_key_args<cocos2d::Node*,cocos2d::Node*const&,cocosbuilder::CCBAnimationManager*&>
              ((__hash_table<std::__ndk1::__hash_value_type<cocos2d::Node*,cocosbuilder::CCBAnimationManager*>,std::__ndk1::__unordered_map_hasher<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocosbuilder::CCBAnimationManager*>,std::__ndk1::hash<cocos2d::Node*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::Node*,std::__ndk1::__hash_value_type<cocos2d::Node*,cocosbuilder::CCBAnimationManager*>,std::__ndk1::equal_to<cocos2d::Node*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::Node*,cocosbuilder::CCBAnimationManager*>>>
                *)this_01,&local_58,&local_58,(CCBAnimationManager **)&local_50);
    pNVar7 = local_58;
    if ((param_2 & 1) != 0) {
      cleanUpNodeGraph(this,local_58);
      pNVar7 = local_58;
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pNVar7);
  }
  return;
}

