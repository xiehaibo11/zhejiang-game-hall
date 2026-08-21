
/* cocos2d::ScriptEngineManager::sendNodeEventToJS(cocos2d::Node*, int) */

void cocos2d::ScriptEngineManager::sendNodeEventToJS(Node *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 local_60 [2];
  Node **local_58;
  Node *local_50;
  int *piStack_48;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = param_2;
  if ((DAT_0178fd20 == (undefined8 *)0x0) &&
     (DAT_0178fd20 = operator_new(8,(nothrow_t *)&std::nothrow), DAT_0178fd20 != (undefined8 *)0x0))
  {
    *DAT_0178fd20 = 0;
  }
  plVar5 = (long *)*DAT_0178fd20;
  uVar3 = (**(code **)(*plVar5 + 0x90))(plVar5);
  if ((uVar3 & 1) == 0) {
    piStack_48 = &local_3c;
    local_58 = &local_50;
    local_60[0] = 0;
    local_50 = param_1;
    iVar2 = (**(code **)(*plVar5 + 0x78))(plVar5,local_60);
    if (iVar2 != 0) {
      uVar4 = 1;
      goto LAB_00fb784c;
    }
  }
  else {
    (**(code **)(*plVar5 + 0x88))(plVar5,0);
  }
  uVar4 = 0;
LAB_00fb784c:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

