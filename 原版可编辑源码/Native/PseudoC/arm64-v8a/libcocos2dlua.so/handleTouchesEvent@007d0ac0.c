
/* cocos2d::LuaEngine::handleTouchesEvent(void*) */

undefined4 cocos2d::LuaEngine::handleTouchesEvent(void *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  ScriptHandlerMgr *pSVar5;
  long *plVar6;
  Director *this;
  undefined4 *in_x1;
  char *pcVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  float fVar11;
  float in_s1;
  float fVar12;
  undefined4 local_70 [2];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (((in_x1 != (undefined4 *)0x0) && (*(long *)(in_x1 + 2) != 0)) &&
     ((*(long **)(in_x1 + 4))[1] != **(long **)(in_x1 + 4))) {
    pSVar5 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
    iVar3 = ScriptHandlerMgr::getObjectHandler(pSVar5,*(undefined8 *)(in_x1 + 2),4);
    if (iVar3 != 0) {
      switch(*in_x1) {
      case 0:
        plVar6 = *(long **)((long)param_1 + 8);
        pcVar7 = "began";
        break;
      case 1:
        plVar6 = *(long **)((long)param_1 + 8);
        pcVar7 = "moved";
        break;
      case 2:
        plVar6 = *(long **)((long)param_1 + 8);
        pcVar7 = "ended";
        break;
      case 3:
        plVar6 = *(long **)((long)param_1 + 8);
        pcVar7 = "cancelled";
        break;
      default:
        goto switchD_007d0b48_default;
      }
      (**(code **)(*plVar6 + 0x80))(plVar6,pcVar7);
      this = (Director *)Director::getInstance();
      uVar9 = *(undefined8 *)(*(long *)((long)param_1 + 8) + 0x28);
      lua_createtable(uVar9,0,0);
      plVar6 = (long *)**(long **)(in_x1 + 4);
      plVar1 = (long *)(*(long **)(in_x1 + 4))[1];
      if (plVar6 != plVar1) {
        iVar8 = 1;
        do {
          local_70[0] = Touch::getLocationInView((Touch *)*plVar6);
          fVar11 = (float)Director::convertToGL(this,(Vec2 *)local_70);
          fVar12 = in_s1;
          lua_pushnumber((double)fVar11,uVar9);
          lua_rawseti(uVar9,0xfffffffe,iVar8);
          lua_pushnumber((double)in_s1,uVar9);
          lua_rawseti(uVar9,0xfffffffe,iVar8 + 1);
          plVar10 = plVar6 + 1;
          lua_pushinteger(uVar9,(long)*(int *)(*plVar6 + 0x24));
          lua_rawseti(uVar9,0xfffffffe,iVar8 + 2);
          iVar8 = iVar8 + 3;
          plVar6 = plVar10;
          in_s1 = fVar12;
        } while (plVar1 != plVar10);
      }
      uVar4 = (**(code **)(**(long **)((long)param_1 + 8) + 200))
                        (*(long **)((long)param_1 + 8),iVar3,2);
      (**(code **)(**(long **)((long)param_1 + 8) + 0x58))(*(long **)((long)param_1 + 8));
      goto LAB_007d0b60;
    }
  }
switchD_007d0b48_default:
  uVar4 = 0;
LAB_007d0b60:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

