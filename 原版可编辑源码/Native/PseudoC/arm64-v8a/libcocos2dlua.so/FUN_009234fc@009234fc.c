
void FUN_009234fc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
                    /* try { // try from 00923510 to 00a23543 has its CatchHandler @ 00923594 */
  uVar1 = tolua_tousertype(uVar2,0xffffffff,0);
  **(undefined8 **)(param_1 + 8) = uVar1;
  lua_settop(uVar2,0xfffffffe);
  return;
}

