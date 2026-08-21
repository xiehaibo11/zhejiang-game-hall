
undefined8 FUN_009e72ac(lua_State *param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  ulong uVar8;
  MergeFile *this;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  byte *local_50;
  byte *local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar7 = lua_gettop();
  if (iVar7 != 3) {
    luaL_argerror(param_1,3,"lua_universe_MergeFile_add: expected 3 argument");
  }
  uVar8 = universe::is_class(param_1,1,"un.MergeFile");
  if ((uVar8 & 1) == 0) {
    luaL_error(param_1,"lua_universe_MergeFile_add: invalid \'cobj\'");
  }
  else {
    this = (MergeFile *)universe::get_instance(param_1,1);
    local_48 = (byte *)0x0;
    uStack_40 = 0;
    local_58 = (void *)0x0;
    local_50 = (byte *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    uVar8 = universe::get_std_vector_string
                      (param_1,2,(vector *)&local_50,"lua_universe_MergeFile_add");
    if (((uVar8 & 1) != 0) &&
       (uVar8 = universe::get_string
                          (param_1,3,(basic_string *)&local_68,"lua_universe_MergeFile_add"),
       (uVar8 & 1) != 0)) {
      universe::MergeFile::add(this,(vector *)&local_50,(basic_string *)&local_68);
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    pbVar5 = local_50;
    if (local_50 != (byte *)0x0) {
      if (local_48 != local_50) {
        bVar1 = local_48[-0x18];
        pbVar6 = local_48 + -0x18;
        pbVar4 = local_48;
        while( true ) {
          pbVar3 = pbVar6;
          if ((bVar1 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
          if (pbVar5 == pbVar3) break;
          bVar1 = pbVar3[-0x18];
          pbVar6 = pbVar3 + -0x18;
          pbVar4 = pbVar3;
        }
      }
      local_48 = pbVar5;
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

