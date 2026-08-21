
/* toluafix_stack_dump(lua_State*, char const*) */

int toluafix_stack_dump(lua_State *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar1 = lua_gettop();
  pcVar3 = "";
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2;
  }
  printf("Total [%d] in lua stack: %s\n",(ulong)uVar1,pcVar3);
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      while( true ) {
        uVar5 = uVar5 - 1;
        iVar2 = lua_type(param_1,uVar5);
        if (iVar2 != 1) break;
        iVar2 = lua_toboolean(param_1,uVar5);
        pcVar3 = "  [%02d] boolean %s\n";
        pcVar4 = "false";
        if (iVar2 != 0) {
          pcVar4 = "true";
        }
LAB_008ca13c:
        printf(pcVar3,(ulong)uVar5,pcVar4);
        if ((int)uVar5 <= (int)-uVar1) goto LAB_008ca1d0;
      }
      if (iVar2 != 3) {
        if (iVar2 == 4) {
          pcVar4 = (char *)lua_tolstring(param_1,uVar5,0);
          pcVar3 = "  [%02d] string %s\n";
        }
        else {
          pcVar4 = (char *)lua_typename();
          pcVar3 = "  [%02d] %s\n";
        }
        goto LAB_008ca13c;
      }
      lua_tonumber(param_1,uVar5);
      printf("  [%02d] number %g\n",(ulong)uVar5);
    } while ((int)-uVar1 < (int)uVar5);
  }
LAB_008ca1d0:
  iVar2 = putchar(10);
  return iVar2;
}

