
/* cocos2d::ScriptEngineManager::sendActionEventToJS(cocos2d::Action*, int, void*) */

void cocos2d::ScriptEngineManager::sendActionEventToJS(Action *param_1,int param_2,void *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 local_68 [2];
  Action **local_60;
  Action *local_58;
  int *piStack_50;
  void *local_48;
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
  piStack_50 = &local_3c;
  local_60 = &local_58;
  local_68[0] = 0xc;
  local_58 = param_1;
  local_48 = param_3;
  iVar2 = (**(code **)(*(long *)*DAT_0178fd20 + 0x78))((long *)*DAT_0178fd20,local_68);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2 != 0);
  }
  return;
}

