
/* cocos2d::LuaStack::init() */

undefined8 __thiscall cocos2d::LuaStack::init(LuaStack *this)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  char *local_80;
  code *pcStack_78;
  char *pcStack_70;
  code *pcStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = luaL_newstate();
  *(undefined8 *)(this + 0x28) = uVar4;
  luaL_openlibs();
  toluafix_open(*(lua_State **)(this + 0x28));
  pcStack_78 = FUN_007d2010;
  local_80 = "print";
  pcStack_68 = FUN_007d2090;
  pcStack_70 = "release_print";
  uStack_58 = 0;
  local_60 = 0;
  luaL_register(*(undefined8 *)(this + 0x28),&DAT_01276ae5,&local_80);
  lVar2 = DAT_01781dd0;
  puVar3 = DAT_01781dd8;
  if (DAT_01781de0 != 0) {
    while (DAT_01781dd0 = lVar2, puVar3 != (void *)0x0) {
      pvVar6 = (void *)*puVar3;
      if ((*(byte *)(puVar3 + 5) & 1) != 0) {
        operator_delete((void *)puVar3[7]);
      }
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      lVar2 = DAT_01781dd0;
      puVar3 = pvVar6;
    }
    DAT_01781dd8 = (undefined8 *)0x0;
    if (lVar2 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(g_luaType + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
    }
    DAT_01781de0 = 0;
  }
  register_all_cocos2dx(*(lua_State **)(this + 0x28));
  tolua_opengl_open(*(lua_State **)(this + 0x28));
  register_all_cocos2dx_manual(*(lua_State **)(this + 0x28));
  register_all_cocos2dx_module_manual(*(lua_State **)(this + 0x28));
  register_all_cocos2dx_math_manual(*(lua_State **)(this + 0x28));
  register_all_cocos2dx_experimental(*(lua_State **)(this + 0x28));
  register_all_cocos2dx_experimental_manual(*(lua_State **)(this + 0x28));
  register_glnode_manual(*(lua_State **)(this + 0x28));
  register_all_cocos2dx_physics(*(lua_State **)(this + 0x28));
  register_all_cocos2dx_physics_manual(*(lua_State **)(this + 0x28));
  LuaJavaBridge::luaopen_luaj(*(lua_State **)(this + 0x28));
  register_all_cocos2dx_deprecated(*(lua_State **)(this + 0x28));
  register_all_cocos2dx_manual_deprecated(*(lua_State **)(this + 0x28));
  tolua_script_handler_mgr_open(*(lua_State **)(this + 0x28));
  (**(code **)(*(long *)this + 0x18))(this,cocos2dx_lua_loader);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

