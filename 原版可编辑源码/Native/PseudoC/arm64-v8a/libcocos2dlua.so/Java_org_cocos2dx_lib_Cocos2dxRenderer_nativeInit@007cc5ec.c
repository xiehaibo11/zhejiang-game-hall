
void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeInit
               (undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  long lVar1;
  __pid_t _Var2;
  Director *this;
  GLProgramCache *this_00;
  GLView *pGVar3;
  Application *this_01;
  ulong local_c0 [2];
  char *local_b0;
  EventCustom local_a0;
  undefined7 uStack_9f;
  undefined4 local_98;
  undefined4 local_94;
  void *local_90;
  byte local_60;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  _Var2 = getpid();
  cocos2d::DataManager::setProcessID(_Var2);
  cocos2d::DataManager::setFrameSize(param_3,param_4);
  this = (Director *)cocos2d::Director::getInstance();
  if (*(long *)(this + 0x108) == 0) {
    local_90 = (void *)0x0;
    local_a0 = (EventCustom)0x16;
    uStack_9f = 0x64696f72646e41;
    local_98 = 0x70706120;
    local_94 = 0;
    pGVar3 = (GLView *)cocos2d::GLViewImpl::create((basic_string *)&local_a0);
    if (((byte)local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    (**(code **)(*(long *)pGVar3 + 0x50))((float)param_3,(float)param_4,pGVar3);
    cocos2d::Director::setOpenGLView(this,pGVar3);
    this_01 = (Application *)cocos2d::Application::getInstance();
    cocos2d::Application::run(this_01);
  }
  else {
    cocos2d::GL::invalidateStateCache();
    this_00 = (GLProgramCache *)cocos2d::GLProgramCache::getInstance();
    cocos2d::GLProgramCache::reloadDefaultGLPrograms(this_00);
    cocos2d::DrawPrimitives::init();
    cocos2d::VolatileTextureMgr::reloadAllTextures();
    local_b0 = operator_new(0x20);
    builtin_strncpy(local_b0,"event_renderer_recreated",0x19);
    local_c0[1] = 0x18;
    local_c0[0] = 0x21;
    cocos2d::EventCustom::EventCustom(&local_a0,(basic_string *)local_c0);
    if ((local_c0[0] & 1) != 0) {
      operator_delete(local_b0);
    }
    cocos2d::EventDispatcher::dispatchEvent(*(EventDispatcher **)(this + 0xb0),(Event *)&local_a0);
    cocos2d::Director::setGLDefaultValues(this);
    local_a0 = (EventCustom)0x50;
    uStack_9f = 0x16982;
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    cocos2d::Event::~Event((Event *)&local_a0);
  }
  cocos2d::network::_preloadJavaDownloaderClass();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

