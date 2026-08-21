
/* WARNING: Type propagation algorithm not settling */
/* CCBProxy::setCallback(cocos2d::Node*, int, int) */

CCBProxy * __thiscall CCBProxy::setCallback(CCBProxy *this,Node *param_1,int param_2,int param_3)

{
  CCBProxy *pCVar1;
  ScriptHandlerMgr *pSVar2;
  undefined8 uVar3;
  
  if (param_1 != (Node *)0x0) {
    pCVar1 = (CCBProxy *)
             __dynamic_cast(param_1,&cocos2d::Node::typeinfo,&cocos2d::MenuItem::typeinfo,0);
    if (pCVar1 != (CCBProxy *)0x0) {
      pSVar2 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
      uVar3 = 1;
LAB_0091c388:
      pCVar1 = (CCBProxy *)cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar2,pCVar1,param_2,uVar3);
      return pCVar1;
    }
    pCVar1 = (CCBProxy *)
             __dynamic_cast(param_1,&cocos2d::Node::typeinfo,&cocos2d::extension::Control::typeinfo,
                            0);
    this = pCVar1;
    if (pCVar1 != (CCBProxy *)0x0) {
      if ((param_3 & 1U) != 0) {
        pSVar2 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
                    /* try { // try from 0091c3f8 to 00a1c40b has its CatchHandler @ 0091c490 */
        this = (CCBProxy *)cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar2,pCVar1,param_2,7);
      }
      if (((uint)param_3 >> 1 & 1) != 0) {
        pSVar2 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
                    /* try { // try from 0091c410 to 00a1c443 has its CatchHandler @ 0091c494 */
        this = (CCBProxy *)cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar2,pCVar1,param_2,8);
      }
      if (((uint)param_3 >> 2 & 1) != 0) {
        pSVar2 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        this = (CCBProxy *)cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar2,pCVar1,param_2,9);
      }
      if (((uint)param_3 >> 3 & 1) != 0) {
        pSVar2 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
                    /* try { // try from 0091c444 to 00a1c4df has its CatchHandler @ 0091c324 */
        this = (CCBProxy *)cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar2,pCVar1,param_2,10);
      }
      if (((uint)param_3 >> 4 & 1) != 0) {
        pSVar2 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        this = (CCBProxy *)cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar2,pCVar1,param_2,0xb);
      }
      if (((uint)param_3 >> 5 & 1) != 0) {
        pSVar2 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        this = (CCBProxy *)cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar2,pCVar1,param_2,0xc);
      }
      if (((uint)param_3 >> 6 & 1) != 0) {
        pSVar2 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
                    /* catch() { ... } // from try @ 0091c3f8 with catch @ 0091c490 */
                    /* catch() { ... } // from try @ 0091c410 with catch @ 0091c494 */
        this = (CCBProxy *)cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar2,pCVar1,param_2,0xd);
      }
      if (((uint)param_3 >> 7 & 1) != 0) {
        pSVar2 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        this = (CCBProxy *)cocos2d::ScriptHandlerMgr::addObjectHandler(pSVar2,pCVar1,param_2,0xe);
      }
      if (((uint)param_3 >> 8 & 1) != 0) {
        pSVar2 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
        uVar3 = 0xf;
        goto LAB_0091c388;
      }
    }
  }
  return this;
}

