
/* WARNING: Removing unreachable block (ram,0x009f94cc) */
/* WARNING: Removing unreachable block (ram,0x009f94d8) */
/* WARNING: Removing unreachable block (ram,0x009f94dc) */
/* WARNING: Removing unreachable block (ram,0x009f9584) */
/* WARNING: Removing unreachable block (ram,0x009f9594) */
/* WARNING: Removing unreachable block (ram,0x009f95ac) */
/* WARNING: Removing unreachable block (ram,0x009f95b8) */
/* WARNING: Removing unreachable block (ram,0x009f94ec) */
/* WARNING: Removing unreachable block (ram,0x009f94f8) */
/* WARNING: Removing unreachable block (ram,0x009f9510) */
/* WARNING: Removing unreachable block (ram,0x009f9530) */
/* WARNING: Removing unreachable block (ram,0x009f9534) */
/* WARNING: Removing unreachable block (ram,0x009f953c) */

void FUN_009f9448(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_009f9a54();
  uVar4 = luaL_checklstring(param_1,1,0);
  uVar3 = FUN_009fc1e8(uVar3,uVar4);
  puVar5 = (undefined8 *)FUN_009fc884(param_1,uVar3);
  uVar3 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    iVar2 = lua_type(param_1,2);
    if (iVar2 == 3) {
      lua_pushstring(param_1,*puVar5);
    }
    else {
      lua_pushnumber((double)*(int *)(puVar5 + 3),param_1);
    }
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

