
ulong engine_load_dynamic_int(void)

{
  int iVar1;
  uint uVar2;
  ENGINE *e;
  ulong extraout_x0;
  
  e = ENGINE_new();
  if (e == (ENGINE *)0x0) {
    return 0;
  }
  iVar1 = ENGINE_set_id(e,"dynamic");
  if ((((iVar1 != 0) && (iVar1 = ENGINE_set_name(e,"Dynamic engine loading support"), iVar1 != 0))
      && (iVar1 = ENGINE_set_init_function(e,(ENGINE_GEN_INT_FUNC_PTR)&LAB_00bc7390), iVar1 != 0))
     && (((iVar1 = ENGINE_set_finish_function(e,(ENGINE_GEN_INT_FUNC_PTR)&LAB_00bc7398), iVar1 != 0
          && (iVar1 = ENGINE_set_ctrl_function(e,FUN_00bc73a0), iVar1 != 0)) &&
         ((iVar1 = ENGINE_set_flags(e,4), iVar1 != 0 &&
          (iVar1 = ENGINE_set_cmd_defns(e,(ENGINE_CMD_DEFN *)&DAT_01c8b300), iVar1 != 0)))))) {
    ENGINE_add(e);
    ENGINE_free(e);
    ERR_clear_error();
    return extraout_x0;
  }
  uVar2 = ENGINE_free(e);
  return (ulong)uVar2;
}

