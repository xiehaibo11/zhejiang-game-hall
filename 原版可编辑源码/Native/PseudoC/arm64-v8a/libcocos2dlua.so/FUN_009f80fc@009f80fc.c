
undefined8 FUN_009f80fc(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)luaL_checkudata(param_1,1,"pb.Slice");
  lVar2 = lua_objlen(param_1,1);
  FUN_009fa638(param_1,lVar2 == 0x60,1,&DAT_012f5b84);
  lVar3 = luaL_optinteger(param_1,2,1);
  uVar4 = puVar1[4];
  lVar2 = lVar3;
                    /* try { // try from 009f8170 to 00af81c7 has its CatchHandler @ 009f8170
                       catch() { ... } // from try @ 009f8170 with catch @ 009f8170
                       catch() { ... } // from try @ 009f81cc with catch @ 009f8170 */
  if ((lVar3 < 0) && (lVar2 = 0, (ulong)-lVar3 <= uVar4)) {
    lVar2 = lVar3 + uVar4 + 1;
  }
  lVar3 = uVar4 - lVar2;
  if ((long)uVar4 < lVar2) {
    FUN_009fa638(param_1,0,2,"level (%d) exceed max level %d");
  }
  else {
    if (lVar3 == 0) {
      puVar5 = (undefined8 *)puVar1[3];
      uVar8 = puVar5[1];
      uVar7 = *puVar5;
      uVar6 = puVar5[2];
      puVar1[4] = 1;
    }
    else {
      puVar1[4] = lVar3;
                    /* try { // try from 009f81c8 to 00af81cb has its CatchHandler @ 009f8228 */
                    /* try { // try from 009f81cc to 00af8243 has its CatchHandler @ 009f8170 */
      puVar5 = (undefined8 *)(puVar1[3] + lVar3 * 0x18);
      uVar8 = puVar5[1];
      uVar7 = *puVar5;
      uVar6 = puVar5[2];
    }
    puVar1[1] = uVar8;
    *puVar1 = uVar7;
    puVar1[2] = uVar6;
  }
  lua_settop(param_1,1);
  lua_pushinteger(param_1,puVar1[4]);
  return 2;
}

