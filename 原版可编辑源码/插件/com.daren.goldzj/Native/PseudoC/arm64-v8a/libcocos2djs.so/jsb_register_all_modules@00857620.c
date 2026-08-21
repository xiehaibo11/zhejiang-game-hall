
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* jsb_register_all_modules() */

undefined8 jsb_register_all_modules(void)

{
  long lVar1;
  ScriptEngine *this;
  code *pcVar2;
  undefined **local_70;
  ScriptEngine *pSStack_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ScriptEngine *)se::ScriptEngine::getInstance();
  local_70 = &PTR_FUN_01c65e88;
  local_50 = (long *)&local_70;
  se::ScriptEngine::addBeforeInitHook(this,(function *)&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
LAB_00857688:
    (*pcVar2)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar2 = *(code **)(*local_50 + 0x28);
    goto LAB_00857688;
  }
  local_70 = &PTR_FUN_01c65f08;
  pSStack_68 = this;
  local_50 = (long *)&local_70;
  se::ScriptEngine::addBeforeCleanupHook(this,(function *)&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
LAB_008576d0:
    (*pcVar2)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar2 = *(code **)(*local_50 + 0x28);
    goto LAB_008576d0;
  }
  se::ScriptEngine::addRegisterCallback(this,jsb_register_global_variables);
  se::ScriptEngine::addRegisterCallback(this,JSB_register_opengl);
  se::ScriptEngine::addRegisterCallback(this,register_all_engine);
  se::ScriptEngine::addRegisterCallback(this,register_all_cocos2dx_manual);
  se::ScriptEngine::addRegisterCallback(this,register_platform_bindings);
  se::ScriptEngine::addRegisterCallback(this,register_all_network);
  se::ScriptEngine::addRegisterCallback(this,register_all_cocos2dx_network_manual);
  se::ScriptEngine::addRegisterCallback(this,register_all_xmlhttprequest);
  se::ScriptEngine::addRegisterCallback(this,register_all_extension);
  se::ScriptEngine::addRegisterCallback(this,register_all_universe);
  se::ScriptEngine::addRegisterCallback(this,register_all_gfx);
  se::ScriptEngine::addRegisterCallback(this,jsb_register_gfx_manual);
  se::ScriptEngine::addRegisterCallback(this,register_all_renderer);
  se::ScriptEngine::addRegisterCallback(this,jsb_register_renderer_manual);
  se::ScriptEngine::addRegisterCallback(this,register_javascript_java_bridge);
  se::ScriptEngine::addRegisterCallback(this,register_all_audioengine);
  se::ScriptEngine::addRegisterCallback(this,register_all_websocket);
  se::ScriptEngine::addRegisterCallback(this,register_all_socketio);
  se::ScriptEngine::addRegisterCallback(this,register_all_cocos2dx_editor_support);
  se::ScriptEngine::addRegisterCallback(this,register_all_cocos2dx_spine);
  se::ScriptEngine::addRegisterCallback(this,register_all_spine_manual);
  se::ScriptEngine::addRegisterCallback(this,register_all_cocos2dx_dragonbones);
  se::ScriptEngine::addRegisterCallback(this,register_all_dragonbones_manual);
  se::ScriptEngine::addRegisterCallback(this,register_all_cocos2dx_particle);
  se::ScriptEngine::addRegisterCallback(this,register_all_video);
  se::ScriptEngine::addRegisterCallback(this,register_all_webview);
  local_70 = &PTR_FUN_01c65f88;
  local_50 = (long *)&local_70;
  se::ScriptEngine::addAfterCleanupHook(this,(function *)&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_008578bc;
    pcVar2 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar2)();
LAB_008578bc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

