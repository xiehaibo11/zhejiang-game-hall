
void FUN_009229c0(long param_1,undefined8 *param_2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  Frame *pFVar4;
  lua_State *plVar5;
  
  pFVar4 = (Frame *)*param_2;
  plVar5 = *(lua_State **)(param_1 + 8);
  iVar1 = *(int *)(pFVar4 + 0xc);
  pcVar2 = getLuaTypeName<cocostudio::timeline::Frame>(pFVar4,"ccs.Frame");
                    /* try { // try from 00922a0c to 00a22a3f has its CatchHandler @ 00922b0c */
  toluafix_pushusertype_ccobject(plVar5,iVar1,(int *)(pFVar4 + 0x10),pFVar4,pcVar2);
  lVar3 = cocos2d::LuaEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x00922a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar3 + 8) + 200))
            (*(long **)(lVar3 + 8),*(undefined4 *)(param_1 + 0x10),1);
  return;
}

