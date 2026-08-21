
void FUN_00a02f00(long param_1,int *param_2,int *param_3,int *param_4,undefined8 *param_5,
                 uint *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  
  iVar2 = *param_3;
  iVar3 = *param_4;
  pvVar5 = (void *)*param_5;
  uVar1 = *param_6;
  lua_pushinteger(*(undefined8 *)(param_1 + 8),(long)*param_2);
  lua_pushinteger(*(undefined8 *)(param_1 + 8),(long)iVar2);
  lua_pushinteger(*(undefined8 *)(param_1 + 8),(long)iVar3);
  uVar4 = universe::GlobalObjectMap::get
                    ((GlobalObjectMap *)&DAT_01782330,*(lua_State **)(param_1 + 8),pvVar5);
  if ((uVar4 & 1) == 0) {
    universe::create_instance(*(lua_State **)(param_1 + 8),"un.network.OStream",pvVar5);
    universe::GlobalObjectMap::set
              ((GlobalObjectMap *)&DAT_01782330,*(lua_State **)(param_1 + 8),pvVar5);
  }
  lua_pushnumber((double)uVar1,*(undefined8 *)(param_1 + 8));
  universe::call_function(*(lua_State **)(param_1 + 8),*(int *)(param_1 + 0x10),5,0);
  return;
}

