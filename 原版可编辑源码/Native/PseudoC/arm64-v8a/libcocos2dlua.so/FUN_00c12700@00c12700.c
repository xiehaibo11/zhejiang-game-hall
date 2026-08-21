
void FUN_00c12700(int *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar3 = 1;
  uVar4 = *param_2;
  uVar1 = lua_objlen(uVar4,0xffffffff);
  do {
    uVar2 = lua_objlen(uVar4,~uVar3);
    if (((int)(*param_1 - uVar3) < 9) && (uVar1 <= uVar2)) break;
    uVar3 = uVar3 + 1;
    uVar1 = uVar1 + uVar2;
  } while ((int)uVar3 < *param_1);
  lua_concat(uVar4,uVar3);
  *param_1 = (*param_1 - uVar3) + 1;
  return;
}

