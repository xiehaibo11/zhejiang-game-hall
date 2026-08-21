
/* cocos2d::LuaEngine::handleArmatureWrapper(cocos2d::ScriptHandlerMgr::HandlerType, void*) */

undefined8 __thiscall
cocos2d::LuaEngine::handleArmatureWrapper(LuaEngine *this,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  ScriptHandlerMgr *pSVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 *puVar8;
  
  if (param_3 == (long *)0x0) {
    return 0;
  }
  if (*param_3 == 0) {
    return 0;
  }
  piVar7 = (int *)param_3[1];
  if (piVar7 == (int *)0x0) {
    return 0;
  }
  pSVar3 = (ScriptHandlerMgr *)ScriptHandlerMgr::getInstance();
  iVar2 = ScriptHandlerMgr::getObjectHandler(pSVar3,*param_3,0x23);
  if (iVar2 == 0) {
    return 0;
  }
  iVar1 = *piVar7;
  if (iVar1 == 2) {
    (**(code **)(**(long **)(this + 8) + 0x68))(**(undefined4 **)(piVar7 + 2));
    plVar4 = *(long **)(this + 8);
    uVar6 = 1;
  }
  else if (iVar1 == 1) {
    puVar8 = *(undefined8 **)(piVar7 + 2);
    (**(code **)(**(long **)(this + 8) + 0x98))(*(long **)(this + 8),*puVar8,"ccs.Bone");
    if ((*(byte *)(puVar8 + 1) & 1) == 0) {
      lVar5 = (long)puVar8 + 9;
    }
    else {
      lVar5 = puVar8[3];
    }
    (**(code **)(**(long **)(this + 8) + 0x80))(*(long **)(this + 8),lVar5);
    (**(code **)(**(long **)(this + 8) + 0x60))(*(long **)(this + 8),*(undefined4 *)(puVar8 + 4));
    (**(code **)(**(long **)(this + 8) + 0x60))
              (*(long **)(this + 8),*(undefined4 *)((long)puVar8 + 0x24));
    plVar4 = *(long **)(this + 8);
    uVar6 = 4;
  }
  else {
    if (iVar1 != 0) goto LAB_007d1ab0;
    puVar8 = *(undefined8 **)(piVar7 + 2);
    (**(code **)(**(long **)(this + 8) + 0x98))(*(long **)(this + 8),*puVar8,"ccs.Armature");
    (**(code **)(**(long **)(this + 8) + 0x60))(*(long **)(this + 8),*(undefined4 *)(puVar8 + 1));
    if ((*(byte *)(puVar8 + 2) & 1) == 0) {
      lVar5 = (long)puVar8 + 0x11;
    }
    else {
      lVar5 = puVar8[4];
    }
    (**(code **)(**(long **)(this + 8) + 0x80))(*(long **)(this + 8),lVar5);
    plVar4 = *(long **)(this + 8);
    uVar6 = 3;
  }
  (**(code **)(*plVar4 + 200))(plVar4,iVar2,uVar6);
LAB_007d1ab0:
  (**(code **)(**(long **)(this + 8) + 0x58))();
  return 0;
}

