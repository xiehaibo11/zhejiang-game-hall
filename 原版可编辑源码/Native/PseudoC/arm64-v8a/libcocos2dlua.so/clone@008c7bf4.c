
/* cocos2d::LuaCallFunc::clone() const */

Ref * __thiscall cocos2d::LuaCallFunc::clone(LuaCallFunc *this)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  Action *this_00;
  LuaCallFunc *pLVar4;
  undefined8 *puVar5;
  ScriptHandlerMgr *pSVar6;
  ScriptHandlerMgr *pSVar7;
  code *pcVar8;
  int *piVar9;
  ScriptHandlerMgr *pSVar11;
  Ref *this_01;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  int *piVar10;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (ScriptHandlerMgr::_scriptHandlerMgr == (ScriptHandlerMgr *)0x0) {
    pSVar6 = operator_new(0x20,(nothrow_t *)&std::nothrow);
    if (pSVar6 != (ScriptHandlerMgr *)0x0) {
      *(undefined8 *)(pSVar6 + 0x10) = 0;
      *(undefined8 *)(pSVar6 + 0x18) = 0;
      *(undefined ***)pSVar6 = &PTR__ScriptHandlerMgr_0169b300;
      *(ScriptHandlerMgr **)(pSVar6 + 8) = pSVar6 + 0x10;
    }
    ScriptHandlerMgr::_scriptHandlerMgr = pSVar6;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>,std::__ndk1::__map_value_compare<void*,std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>,std::__ndk1::less<void*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>>>
    ::destroy((__tree<std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>,std::__ndk1::__map_value_compare<void*,std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>,std::__ndk1::less<void*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>>>
               *)(pSVar6 + 8),*(__tree_node **)(pSVar6 + 0x10));
    *(ScriptHandlerMgr **)(pSVar6 + 8) = pSVar6 + 0x10;
    *(undefined8 *)(pSVar6 + 0x10) = 0;
    *(undefined8 *)(pSVar6 + 0x18) = 0;
  }
  if ((this != (LuaCallFunc *)0x0) && (*(long *)(ScriptHandlerMgr::_scriptHandlerMgr + 0x18) != 0))
  {
    pSVar7 = ScriptHandlerMgr::_scriptHandlerMgr + 0x10;
    pSVar11 = *(ScriptHandlerMgr **)pSVar7;
    pSVar6 = pSVar7;
    if (pSVar11 != (ScriptHandlerMgr *)0x0) {
      do {
        if (*(LuaCallFunc **)(pSVar11 + 0x20) >= this) {
          pSVar6 = pSVar11;
        }
        pSVar11 = *(ScriptHandlerMgr **)
                   (pSVar11 + (ulong)(*(LuaCallFunc **)(pSVar11 + 0x20) < this) * 8);
      } while (pSVar11 != (ScriptHandlerMgr *)0x0);
      if ((pSVar6 != pSVar7) && (*(LuaCallFunc **)(pSVar6 + 0x20) <= this)) {
        piVar9 = *(int **)(pSVar6 + 0x28);
        if (piVar9 != *(int **)(pSVar6 + 0x30)) {
          do {
            piVar10 = piVar9 + 2;
            if (*piVar9 == 2) {
              iVar1 = piVar9[1];
              if (iVar1 == 0) goto LAB_008c7cf8;
              this_00 = operator_new(0x100,(nothrow_t *)&std::nothrow);
              if (this_00 == (Action *)0x0) {
                pLVar4 = *(LuaCallFunc **)(this + 0xf0);
                this_01 = (Ref *)0x0;
              }
              else {
                Action::Action(this_00);
                *(undefined4 *)(this_00 + 0x4c) = 0;
                *(undefined8 *)(this_00 + 0x90) = 0;
                *(undefined8 *)(this_00 + 0x60) = 0;
                *(undefined8 *)(this_00 + 0x68) = 0;
                *(undefined8 *)(this_00 + 0x58) = 0;
                *(undefined8 *)(this_00 + 0xc0) = 0;
                *(undefined8 *)(this_00 + 0xf0) = 0;
                *(undefined ***)this_00 = &PTR__LuaCallFunc_0169b360;
                *(undefined ***)(this_00 + 0x28) = &PTR_clone_0169b3c8;
                pLVar4 = *(LuaCallFunc **)(this + 0xf0);
                this_01 = (Ref *)this_00;
              }
              if (pLVar4 != (LuaCallFunc *)0x0) {
                if (this + 0xd0 == pLVar4) {
                  local_70 = alStack_90;
                  (**(code **)(*(long *)pLVar4 + 0x18))(pLVar4,alStack_90);
                }
                else {
                  local_70 = (long *)(**(code **)(*(long *)pLVar4 + 0x10))();
                }
                FUN_008c912c(alStack_90,this_01 + 0xd0);
                if (alStack_90 == local_70) {
                  pcVar8 = *(code **)(*local_70 + 0x20);
                }
                else {
                  if (local_70 == (long *)0x0) goto LAB_008c7e10;
                  pcVar8 = *(code **)(*local_70 + 0x28);
                }
                (*pcVar8)();
              }
LAB_008c7e10:
              Ref::autorelease(this_01);
              puVar5 = (undefined8 *)ScriptEngineManager::getInstance();
              uVar3 = (**(code **)(*(long *)*puVar5 + 0x58))((long *)*puVar5,iVar1);
              if (ScriptHandlerMgr::_scriptHandlerMgr == (ScriptHandlerMgr *)0x0) {
                pSVar6 = operator_new(0x20,(nothrow_t *)&std::nothrow);
                if (pSVar6 != (ScriptHandlerMgr *)0x0) {
                  *(undefined8 *)(pSVar6 + 0x10) = 0;
                  *(undefined8 *)(pSVar6 + 0x18) = 0;
                  *(undefined ***)pSVar6 = &PTR__ScriptHandlerMgr_0169b300;
                  *(ScriptHandlerMgr **)(pSVar6 + 8) = pSVar6 + 0x10;
                }
                ScriptHandlerMgr::_scriptHandlerMgr = pSVar6;
                std::__ndk1::
                __tree<std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>,std::__ndk1::__map_value_compare<void*,std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>,std::__ndk1::less<void*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>>>
                ::destroy((__tree<std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>,std::__ndk1::__map_value_compare<void*,std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>,std::__ndk1::less<void*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<void*,std::__ndk1::vector<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::ScriptHandlerMgr::HandlerType,int>>>>>>
                           *)(pSVar6 + 8),*(__tree_node **)(pSVar6 + 0x10));
                *(ScriptHandlerMgr **)(pSVar6 + 8) = pSVar6 + 0x10;
                *(undefined8 *)(pSVar6 + 0x10) = 0;
                *(undefined8 *)(pSVar6 + 0x18) = 0;
              }
              ScriptHandlerMgr::addObjectHandler
                        (ScriptHandlerMgr::_scriptHandlerMgr,this_00,uVar3,2);
              break;
            }
            this_01 = (Ref *)0x0;
            piVar9 = piVar10;
          } while (*(int **)(pSVar6 + 0x30) != piVar10);
          goto LAB_008c7cfc;
        }
      }
    }
  }
LAB_008c7cf8:
  this_01 = (Ref *)0x0;
LAB_008c7cfc:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_01;
}

