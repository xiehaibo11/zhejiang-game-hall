
undefined8 FUN_0099d5ec(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ScriptHandlerMgr *pSVar3;
  uint uVar4;
  undefined8 uVar5;
  double dVar6;
  
  if (param_1 != 0) {
    uVar2 = tolua_tousertype(param_1,1,0);
    iVar1 = lua_gettop(param_1);
    if (iVar1 + -1 == 1) {
      dVar6 = (double)tolua_tonumber(0,param_1,2);
      uVar4 = (uint)dVar6;
      if ((uVar4 & 1) == 0) {
        if ((uVar4 >> 1 & 1) == 0) {
          if ((uVar4 >> 2 & 1) == 0) {
            if ((uVar4 >> 3 & 1) == 0) {
              if ((uVar4 >> 4 & 1) == 0) {
                if ((uVar4 >> 5 & 1) == 0) {
                  if ((uVar4 >> 6 & 1) == 0) {
                    if ((uVar4 >> 7 & 1) == 0) {
                      if ((uVar4 >> 8 & 1) == 0) {
                        return 0;
                      }
                      uVar5 = 0xf;
                    }
                    else {
                      uVar5 = 0xe;
                    }
                  }
                  else {
                    uVar5 = 0xd;
                  }
                }
                else {
                  uVar5 = 0xc;
                }
              }
              else {
                uVar5 = 0xb;
              }
            }
            else {
              uVar5 = 10;
            }
          }
          else {
            uVar5 = 9;
          }
        }
        else {
          uVar5 = 8;
        }
      }
      else {
        uVar5 = 7;
      }
      pSVar3 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
      cocos2d::ScriptHandlerMgr::removeObjectHandler(pSVar3,uVar2,uVar5);
    }
    else {
      luaL_error(param_1,
                 "%s function of Control  has wrong number of arguments: %d, was expecting %d\n",
                 "cc.Control:unregisterControlEventHandler",iVar1 + -1,1);
    }
  }
  return 0;
}

